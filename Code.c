/*
Task 3: Prime Numbers in a Range
Write a program that finds and displays all prime numbers between two integers using a neif()sted for loop.
•	Input: Start and end of range.
•	Output: List of prime numbers in the range.
Example:
Input: 10, 20
Output: 11, 13, 17, 19

*/
#include <stdio.h>
int main(){
    
    int start,end;
    
    printf("Input the start number of the range : ");
    scanf("%d",&start);
    
    printf("Input the end number of the range : ");
    scanf("%d",&end);
    
    if(end > 0 && start > 0){
        if(start <= end){
            printf("Prime numbers in %d-%d  this range are : ",start,end);
            for(int i = start; i <= end; i++)
            {
                int isprime=1;
                for(int num=2; num <=i/2; num++){
                    if(i%num==0){
                        isprime=0;
                        break;
                    }
                }
                if(isprime && i > 1){
                    printf(" %d",i);
                }
                
            }
        
        }
        else{
            printf("Invalid range. Start should be less than or equal to end.");
        }
    }
    else {
        printf("Invalid number. Both start and end should be positive integers.");
    }
    
    
    
    
    return 0;
}
