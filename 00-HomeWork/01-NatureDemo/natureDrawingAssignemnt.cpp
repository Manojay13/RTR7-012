#include <GL/freeglut.h>
#include<math.h>
bool bIsFullScreen = false;

int main(int argc, char* argv[])
{
	//function declarations
	void initialize(void);
	void uninitialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);

	//code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Nature Demo ");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	//flow should not come here
	return(0);

}

void initialize(void)
{
	//code
	//glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClearColor(0.53f, 0.81f, 0.92f, 1.0f);
    glEnable(GL_BLEND); 
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  

}

void resize(int width, int height)
{
	//code
	if (height <= 0)
		height = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

}

// Catmull-Rom: given 4 control points, interpolate a smooth point at t (0 to 1)
void catmullRom(float p0x, float p0y,
                float p1x, float p1y,
                float p2x, float p2y,
                float p3x, float p3y,
                float t, float* outX, float* outY)
{
    float t2 = t * t;
    float t3 = t2 * t;

    *outX = 0.5f * ((2*p1x) +
                    (-p0x + p2x) * t +
                    (2*p0x - 5*p1x + 4*p2x - p3x) * t2 +
                    (-p0x + 3*p1x - 3*p2x + p3x) * t3);

    *outY = 0.5f * ((2*p1y) +
                    (-p0y + p2y) * t +
                    (2*p0y - 5*p1y + 4*p2y - p3y) * t2 +
                    (-p0y + 3*p1y - 3*p2y + p3y) * t3);
}
void drawBird(float x, float y, float size)
{
    glColor3f(0.10f, 0.10f, 0.10f);
    glLineWidth(1.5f);

    // left wing — sharp upward curve
    glBegin(GL_LINE_STRIP);
    for (int i = 0; i <= 12; i++)
    {
        float t = (float)i / 12.0f;          
        float wx = x - size * 0.06f * (1.0f - t);  
        float wy = y + size * 0.03f * (4.0f * t * (1.0f - t));  
        glVertex2f(wx, wy);
    }
    glEnd();

    // right wing — mirror
    glBegin(GL_LINE_STRIP);
    for (int i = 0; i <= 12; i++)
    {
        float t = (float)i / 12.0f;
        float wx = x + size * 0.06f * t;
        float wy = y + size * 0.03f * (4.0f * t * (1.0f - t));
        glVertex2f(wx, wy);
    }
    glEnd();
}
void drawGround(void)
{
    glBegin(GL_QUADS);
        // top of ground 
        glColor3f(0.25f, 0.65f, 0.10f);
        glVertex2f(-1.0f,  0.30f);
        glVertex2f( 1.0f,  0.30f);

        // bottom 
        glColor3f(0.10f, 0.45f, 0.05f);
        glVertex2f( 1.0f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();
}
void drawSky(void)
{
    glBegin(GL_QUADS);
        // top — deep blue
        glColor3f(0.25f, 0.55f, 0.85f);
        glVertex2f(-1.0f,  1.0f);
        glVertex2f( 1.0f,  1.0f);

        // middle — light blue
        glColor3f(0.55f, 0.78f, 0.95f);
        glVertex2f( 1.0f,  0.50f);
        glVertex2f(-1.0f,  0.50f);
    glEnd();

    glBegin(GL_QUADS);
        // middle — light blue
        glColor3f(0.55f, 0.78f, 0.95f);
        glVertex2f(-1.0f,  0.50f);
        glVertex2f( 1.0f,  0.50f);

        // horizon — warm golden yellow
        glColor3f(0.98f, 0.85f, 0.40f);
        glVertex2f( 1.0f,  0.30f);
        glVertex2f(-1.0f,  0.30f);
    glEnd();
}
void drawHouse(void)
{
    // === WALLS ===
    glColor3f(0.91f, 0.76f, 0.60f);
    glBegin(GL_QUADS);
        glVertex2f(0.20f, -0.15f);   
        glVertex2f(0.55f, -0.15f);   
        glVertex2f(0.55f,  0.10f);   
        glVertex2f(0.20f,  0.10f);  
    glEnd();

    // === ROOF ===
    glColor3f(0.65f, 0.16f, 0.16f);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.15f,  0.10f);  
        glVertex2f(0.60f,  0.10f);   
        glVertex2f(0.375f, 0.30f);   
    glEnd();

    // === DOOR ===
    glColor3f(0.40f, 0.22f, 0.08f);
    glBegin(GL_QUADS);
        glVertex2f(0.33f, -0.15f);   
        glVertex2f(0.42f, -0.15f);   
        glVertex2f(0.42f, -0.02f);   
        glVertex2f(0.33f, -0.02f);   
    glEnd();

    // === WINDOW LEFT ===
    glColor3f(0.68f, 0.88f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(0.23f, -0.05f);   
        glVertex2f(0.30f, -0.05f);   
        glVertex2f(0.30f,  0.05f);   
        glVertex2f(0.23f,  0.05f);   
    glEnd();

    glColor3f(0.55f, 0.35f, 0.15f);
    glLineWidth(1.5f);
    glBegin(GL_LINES);
        glVertex2f(0.23f,  0.00f);   // horizontal bar
        glVertex2f(0.30f,  0.00f);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(0.265f, -0.05f);  // vertical bar
        glVertex2f(0.265f,  0.05f);
    glEnd();

    // === WINDOW RIGHT ===
    glColor3f(0.68f, 0.88f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(0.45f, -0.05f);
        glVertex2f(0.52f, -0.05f);
        glVertex2f(0.52f,  0.05f);
        glVertex2f(0.45f,  0.05f);
    glEnd();

    glColor3f(0.55f, 0.35f, 0.15f);
    glBegin(GL_LINES);
        glVertex2f(0.45f,  0.00f);
        glVertex2f(0.52f,  0.00f);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(0.485f, -0.05f);
        glVertex2f(0.485f,  0.05f);
    glEnd();

    // === CHIMNEY ===
    glColor3f(0.60f, 0.30f, 0.10f);
    glBegin(GL_QUADS);
        glVertex2f(0.46f,  0.20f);   
        glVertex2f(0.52f,  0.20f);   
        glVertex2f(0.52f,  0.35f);   
        glVertex2f(0.46f,  0.35f); 
    glEnd();
}
void drawWindingRiver(void)
{
   float ctrl[][2] = {
    { -0.30f,  0.50f },   
    { -0.30f,  0.30f },   
    { -0.25f,  0.10f },   
    { -0.15f, -0.10f },   
    { -0.20f, -0.35f },   
    { -0.30f, -0.60f },   
    { -0.35f, -1.20f },  
    { -0.35f, -1.60f },   
};

int nCtrl = 8;
    int steps = 40;

    // LEFT HALF
    glBegin(GL_TRIANGLE_STRIP);
    for (int i = 1; i < nCtrl - 2; i++)
    {
        for (int s = 0; s <= steps; s++)
        {
            float t = (float)s / steps;
            float cx, cy, cx2, cy2;
            catmullRom(ctrl[i-1][0],ctrl[i-1][1],ctrl[i][0],ctrl[i][1],
                       ctrl[i+1][0],ctrl[i+1][1],ctrl[i+2][0],ctrl[i+2][1],
                       t, &cx, &cy);
            catmullRom(ctrl[i-1][0],ctrl[i-1][1],ctrl[i][0],ctrl[i][1],
                       ctrl[i+1][0],ctrl[i+1][1],ctrl[i+2][0],ctrl[i+2][1],
                       t+0.01f, &cx2, &cy2);

            float dx = cx2-cx, dy = cy2-cy;
            float len = sqrt(dx*dx+dy*dy);
            dx/=len; dy/=len;

            float globalT = ((i-1)*steps+s)/(float)((nCtrl-3)*steps);
            float fullWidth = 0.06f + globalT * 0.13f;
            float px = -dy * fullWidth;
            float py =  dx * fullWidth;

            glColor3f(0.08f, 0.28f, 0.72f);   // dark left bank
            glVertex2f(cx + px, cy + py);
            glColor3f(0.45f, 0.72f, 0.98f);   // bright center
            glVertex2f(cx, cy);
        }
    }
    glEnd();

    // RIGHT HALF
    glBegin(GL_TRIANGLE_STRIP);
    for (int i = 1; i < nCtrl - 2; i++)
    {
        for (int s = 0; s <= steps; s++)
        {
            float t = (float)s / steps;
            float cx, cy, cx2, cy2;
            catmullRom(ctrl[i-1][0],ctrl[i-1][1],ctrl[i][0],ctrl[i][1],
                       ctrl[i+1][0],ctrl[i+1][1],ctrl[i+2][0],ctrl[i+2][1],
                       t, &cx, &cy);
            catmullRom(ctrl[i-1][0],ctrl[i-1][1],ctrl[i][0],ctrl[i][1],
                       ctrl[i+1][0],ctrl[i+1][1],ctrl[i+2][0],ctrl[i+2][1],
                       t+0.01f, &cx2, &cy2);

            float dx = cx2-cx, dy = cy2-cy;
            float len = sqrt(dx*dx+dy*dy);
            dx/=len; dy/=len;

            float globalT = ((i-1)*steps+s)/(float)((nCtrl-3)*steps);
            float fullWidth = 0.06f + globalT * 0.13f;
            float px = -dy * fullWidth;
            float py =  dx * fullWidth;

            glColor3f(0.45f, 0.72f, 0.98f);   
            glVertex2f(cx, cy);
            glColor3f(0.08f, 0.28f, 0.72f);   
            glVertex2f(cx - px, cy - py);
        }
    }
    glEnd();
}
void drawEllipseShadow(float cx, float cy, float rx, float ry)
{
    glColor4f(0.0f, 0.15f, 0.0f, 0.4f);  
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(cx, cy);
        for (int i = 0; i <= 360; i += 10)
        {
            float angle = i * 3.14159f / 180.0f;
            glVertex2f(cx + cos(angle) * rx,
                       cy + sin(angle) * ry);
        }
    glEnd();
}
void drawTree(float x, float y, float size)
{
    // === TRUNK ===
    glColor3f(0.45f, 0.25f, 0.05f);
    glBegin(GL_QUADS);
        glVertex2f(x - 0.03f * size, y);
        glVertex2f(x + 0.03f * size, y);
        glVertex2f(x + 0.02f * size, y + 0.10f * size);
        glVertex2f(x - 0.02f * size, y + 0.10f * size);
    glEnd();

    //  bumps 
    float bumps[] = {
        1.0f, 1.05f, 0.95f, 1.08f, 0.97f, 1.03f,
        0.94f, 1.06f, 0.96f, 1.04f, 0.93f, 1.07f,
        0.97f, 1.02f, 0.95f, 1.05f, 0.98f, 1.03f,
        0.96f, 1.06f, 0.94f, 1.04f, 0.97f, 1.01f
    };
    int nBumps = 24;

    // === LAYER 1 — outermost dark green ===
    glColor3f(0.08f, 0.40f, 0.08f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y + 0.24f * size);
        for (int i = 0; i <= nBumps; i++)
        {
            float angle = (float)i / nBumps * 2.0f * 3.14159f;
            float r = bumps[i % nBumps] * 0.17f * size;
            glVertex2f(x + cos(angle) * r,
                       y + 0.24f * size + sin(angle) * r * 0.80f);
        }
    glEnd();

    // === LAYER 2 — mid green ===
    glColor3f(0.15f, 0.58f, 0.10f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y + 0.26f * size);
        for (int i = 0; i <= nBumps; i++)
        {
            float angle = (float)i / nBumps * 2.0f * 3.14159f;
            float r = bumps[i % nBumps] * 0.13f * size;
            glVertex2f(x + cos(angle) * r,
                       y + 0.26f * size + sin(angle) * r * 0.80f);
        }
    glEnd();

    // === LAYER 3  ===
    glColor3f(0.28f, 0.80f, 0.12f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y + 0.30f * size);
        for (int i = 0; i <= nBumps; i++)
        {
            float angle = (float)i / nBumps * 2.0f * 3.14159f;
            float r = bumps[i % nBumps] * 0.08f * size;
            glVertex2f(x + cos(angle) * r,
                       y + 0.30f * size + sin(angle) * r * 0.80f);
        }
    glEnd();
}


void display(void)
{
	//code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	drawSky();
	drawBird(-0.50f,  0.75f, 1.0f);   
drawBird(-0.35f,  0.80f, 0.7f);   
drawBird(-0.20f,  0.72f, 0.8f);   
drawBird( 0.60f,  0.85f, 0.6f);  
drawBird( 0.72f,  0.78f, 0.5f);   
drawBird(-0.60f,  0.68f, 0.6f);   
// ================= REALISTIC SUN RAYS =================
drawGround();
drawWindingRiver();
//glColor3f(1.0f, 0.82f, 0.0f);
glColor3f(1.0f, 0.60f, 0.0f);

glLineWidth(2.0f);

glBegin(GL_LINES);

// FAR LEFT
glVertex2f(0.30f,0.34f);
glVertex2f(0.12f,0.60f);

// LEFT
glVertex2f(0.30f,0.34f);
glVertex2f(0.20f,0.56f);

// LEFT INNER
glVertex2f(0.30f,0.34f);
glVertex2f(0.25f,0.52f);

// CENTER
glVertex2f(0.30f,0.34f);
glVertex2f(0.30f,0.70f);

// RIGHT INNER
glVertex2f(0.30f,0.34f);
glVertex2f(0.35f,0.52f);

// RIGHT
glVertex2f(0.30f,0.34f);
glVertex2f(0.40f,0.56f);

// FAR RIGHT
glVertex2f(0.30f,0.34f);
glVertex2f(0.48f,0.60f);

glEnd();	
	// ================= SUN =================

// SUN — large warm sunset circle
glColor3f(1.0f, 0.65f, 0.0f);   
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.30f, 0.30f);   
    for (int i = 0; i <= 180; i++)  
    {
        float angle = i * 3.14159f / 180.0f;
        glVertex2f(0.30f + cos(angle) * 0.10f,
                   0.30f + sin(angle) * 0.10f);
    }
glEnd();

// inner bright yellow core
glColor3f(1.0f, 0.65f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.30f, 0.30f);
    for (int i = 0; i <= 180; i++)
    {
        float angle = i * 3.14159f / 180.0f;
        glVertex2f(0.30f + cos(angle) * 0.06f,
                   0.30f + sin(angle) * 0.06f);
    }
glEnd();




    glBegin(GL_TRIANGLES);
   // glColor3f(0.1333f, 0.5451f, 0.1333f);
   glColor3f(0.10f, 0.40f, 0.10f);  
    glVertex2f(-0.9f,0.3f);//left bottom
    glVertex2f(-0.75f,0.3f);//right bottom
    glVertex2f(-0.75f,0.5f);//left top
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f,0.5f);
    glVertex2f(-0.45f,0.5f);
    glVertex2f(-0.45f,0.3f);
    glVertex2f(-0.75f,0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.45f,0.3f);
    glVertex2f(-0.3f,0.3f);
    glVertex2f(-0.45f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);

	glVertex2f(-0.75f,0.50f);

	glVertex2f(-0.73f,0.52f);
	glVertex2f(-0.71f,0.54f);
	glVertex2f(-0.69f,0.555f);
	glVertex2f(-0.67f,0.57f);
	glVertex2f(-0.65f,0.582f);
	glVertex2f(-0.63f,0.592f);
	glVertex2f(-0.60f,0.60f);

	glVertex2f(-0.57f,0.592f);
	glVertex2f(-0.55f,0.582f);
	glVertex2f(-0.53f,0.57f);
	glVertex2f(-0.51f,0.555f);
	glVertex2f(-0.49f,0.54f);
	glVertex2f(-0.47f,0.52f);

	glVertex2f(-0.45f,0.50f);

	glEnd();

    
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.33f,0.3f);
    glVertex2f(-0.15f,0.3f);
    glVertex2f(-0.15f,0.5f);
    glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-0.15f,0.5f);
	glVertex2f(0.15f,0.5f);
	glVertex2f(0.15f,0.3f);
	glVertex2f(-0.15f,0.3f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glVertex2f(0.15f,0.3f);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.15f,0.5f);
    glEnd();

	glBegin(GL_POLYGON);

	glVertex2f(-0.15f,0.5f);

	glVertex2f(-0.13f,0.52f);
	glVertex2f(-0.11f,0.54f);
	glVertex2f(-0.09f,0.555f);
	glVertex2f(-0.07f,0.57f);
	glVertex2f(-0.05f,0.582f);
	glVertex2f(-0.03f,0.592f);
	glVertex2f( 0.0f,0.60f);

	glVertex2f( 0.03f,0.592f);
	glVertex2f( 0.05f,0.582f);
	glVertex2f( 0.07f,0.57f);
	glVertex2f( 0.09f,0.555f);
	glVertex2f( 0.11f,0.54f);
	glVertex2f( 0.13f,0.52f);

	glVertex2f(0.15f,0.5f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glVertex2f(0.27f,0.3f);
	glVertex2f(0.45f,0.3f);
	glVertex2f(0.45f,0.5f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(0.45f,0.5f);
	glVertex2f(0.75f,0.5f);
	glVertex2f(0.75f,0.3f);
	glVertex2f(0.45f,0.3f);
	glEnd(); 

	glBegin(GL_TRIANGLES);
	glVertex2f(0.75f,0.3f);
	glVertex2f(0.9f,0.3f);
	glVertex2f(0.75f,0.5f);
	glEnd();

	glBegin(GL_POLYGON);

	glVertex2f(0.45f,0.5f);

	glVertex2f(0.47f,0.52f);
	glVertex2f(0.49f,0.54f);
	glVertex2f(0.51f,0.555f);
	glVertex2f(0.53f,0.57f);
	glVertex2f(0.55f,0.582f);
	glVertex2f(0.57f,0.592f);
	glVertex2f(0.60f,0.60f);

	glVertex2f(0.63f,0.592f);
	glVertex2f(0.65f,0.582f);
	glVertex2f(0.67f,0.57f);
	glVertex2f(0.69f,0.555f);
	glVertex2f(0.71f,0.54f);
	glVertex2f(0.73f,0.52f);

	glVertex2f(0.75f,0.5f);

	glEnd();

	
	//drawPath(); 
	drawEllipseShadow(0.50f, -0.14f, 0.22f, 0.03f);
	drawHouse();
	
	drawEllipseShadow(-0.78f, 0.04f, 0.12f, 0.02f);
drawEllipseShadow(-0.90f, 0.04f, 0.10f, 0.02f);
drawEllipseShadow(-0.68f, 0.04f, 0.09f, 0.02f);
drawTree(-0.78f, 0.05f, 0.75f);
drawTree(-0.90f, 0.05f, 0.65f);
drawTree(-0.68f, 0.05f, 0.60f);

	


	

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	//sky color-glClearColor(0.53f,0.81f,0.92f,1.0f);
	//code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':

		if (bIsFullScreen == false)
		{
			glutFullScreen();
			bIsFullScreen = true;

		}
		else
		{
			glutLeaveFullScreen();
			bIsFullScreen = false;

		}
		break;
	default:
		break;

	}

}

void mouse(int button, int state, int x, int y)
{
	//code
	switch (button)
	{
	case GLUT_RIGHT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;

	}
}

void uninitialize(void)
{
	//code

}

// cl.exe /c /EHsc /I C:\freeglut\include OGL_SIR_NAME.cpp
// link.exe OGL_SIR_NAME.obj /LIBPATH:C:\freeglut\lib\x64 freeglut.lib /SUBSYSTEM:CONSOLE