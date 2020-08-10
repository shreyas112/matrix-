#include <stdio.h>
int main()
{
    int element[3][3]={1,2,3,4,5,6,7,8,9};
    int i=0;
    int j=0;
    int sum=0;
    for (i =0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d\t",element[i][j]);
        }
        printf("\n");
    }
   
    for (i =0; i<3; i++) {
        for (j=0; j<3; j++) {
            if(i==j)
                sum = sum+element[i][j];
            else if (i+j==2)
                sum = sum+element[i][j];
}
}
    printf("The sum is %d\n",sum);
}

