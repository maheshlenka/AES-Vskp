#include <stdio.h>
int main(){
    int n=5;
   //printf("Enter the size of the pyramid(number of rows):");
   // scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){                                              
            for(int j=1;j<=i;++j){   //1st instance-1 loop,2nd-2 loops,3rd-3 loops
                printf("*");
            }
            printf("\n");
            
    }
     for(int i=n;i>=1;i--){             //reverse of the former pattern
            for(int j=i;j>=1;--j){
                printf("*");
            }
            printf("\n");
     }
   getch();
   
}