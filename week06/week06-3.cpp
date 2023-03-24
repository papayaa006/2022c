#include <stdio.h>
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0; i<9; i++){
        for(int k=0; k<9; k++){
            if(a[k]>a[k+1]){
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}
