#include<stdio.h>//'stdio.h' contains declaration of 'printf()'
#include<stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void) { 
    // variable declarations 
    int a_mk; 
    int b_mk; 
    int c_mk; 
    int result_mk; 

    // code 
    printf("\n\n"); 
    printf("Enter First Integer : "); 
    scanf("%d", &a_mk); 
    
    printf("\n\n"); 
    printf("Enter Second Integer : "); 
    scanf("%d", &b_mk); 
    
    printf("\n\n"); 
    printf("Enter Third Integer : "); 
    scanf("%d", &c_mk); 
    
    printf("\n\n"); 
    printf("If Answer_mk = 0, It Is 'FALSE'.\n"); 
    printf("If Answer_mk = 1, It Is 'TRUE'.\n\n"); 
    
    result_mk = (a_mk <= b_mk) && (b_mk != c_mk); 
    printf("LOGICAL AND (&&) : Answer is TRUE (1) If And Only If BOTH Conditions Are True. The Answer is FALSE (0), If Any One Or Both Conditions Are False. \n\n"); 
    printf("A_mk = %d Is Less Than Or Equal To B_mk = %d AND B_mk = %d Is NOT Equal To C_mk = %d \t Answer_mk = %d\n\n", a_mk, b_mk, b_mk, c_mk, result_mk); 
    
    result_mk = (b_mk >= a_mk) || (a_mk == c_mk); 
    printf("LOGICAL OR (||) : Answer is FALSE (0) If And Only If BOTH Conditions Are False. The Answer is TRUE (1), If Any One Or Both Conditions Are True.\n\n"); 
    printf("Either B_mk = %d Is Greater Than Or Equal To A_mk = %d OR A_mk = %d Is Equal To C_mk = %d \t Answer_mk = %d\n\n", b_mk, a_mk, a_mk, c_mk, result_mk); 
    
    result_mk = !a_mk; 
    printf("A_mk = %d And Using Logical NOT (!) Operator on A_mk Gives Result_mk = %d\n\n", a_mk, result_mk); 
    
    result_mk = !b_mk; 
    printf("B_mk = %d And Using Logical NOT (!) Operator on B_mk Gives Result_mk = %d\n\n", b_mk, result_mk); 
    
    result_mk = !c_mk; 
    printf("C_mk = %d And Using Logical NOT (!) Operator on C_mk Gives Result_mk = %d\n\n", c_mk, result_mk); 
    
    result_mk = (!(a_mk <= b_mk) && !(b_mk != c_mk)); 
    printf("Using Logical NOT (!) On (a_mk <= b_mk) And Also On (b_mk != c_mk) And then AND-ing Them Afterwards Gives Result_mk = %d\n", result_mk); 
    printf("\n\n"); 
    
    result_mk = !((b_mk >= a_mk) || (a_mk == c_mk)); 
    printf("Using Logical NOT (!) On Entire Logical Expression (b_mk >= a_mk) || (a_mk == c_mk) Gives Result_mk = %d\n", result_mk); 
    printf("\n\n"); 
    
    exit(EXIT_SUCCESS);

}
