//C program of simple trasaction
/*
 Name:Amani Munga Tunje
 Reg:CT100/G/26225/25
 Discription: c program to run access to loan
*/
#include <stdio.h>

//main function
int main(){
    
    //varibles diclaration
    int age;
    int income;
    
    //prompt user for age
    printf("Enter your age:");
    scanf("%d",&age);
    
    //prompt user for annual income
    printf("Enter your annual income:");
    scanf("%d",&income);
    
    //loan eligibility
    if(age>=21 && income>=21000)
    {
        printf("Congratulation you qualify for the loan.\n");
    }else{
        printf("Unfortunately we are unable to offer u a loan at this time.\n");
    }
    return 0;
    
}