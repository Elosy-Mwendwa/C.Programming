/*
Name:Elosy Mwendwa 
Registration number:CT101/G/26560/25
 # include<stdio.h>
*/
int main () {
    float height;//this is the height
    double account;//this is the bank account
    int number;//this is the phone number
    
    printf("enter your height\n");
    scanf("%f", &height);
    printf("enter your bank account\n");
    scanf("%lf", &account);
    printf("enter your phone number\n");
    scanf("%d", &number);
    
    printf("your height is %f\n",height);
    printf("your bank account is %lf\n",account);
    printf("your phone number is %d\n",number);
    
    return 0;
}