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

//    int *ptr = NULL;
//    printf("The value of ptr is:%x\n",ptr);
//    return 0;

//    int var = 20;
//    int *ip =&var;
//    printf("Adress of var variable:%x\n",&var);
//    printf("Adress stored in ip variable:%x\n",ip);
//    printf("Value of *ip variable:%d\n",*ip);

//    int sample =17;
//    int *p = &sample;
//    printf("The value is:%d and the address is :%d",sample,p);

//    char data[20];
//    char key;
//    int i=0;
//    int count=0;
//    printf("Enter a string:");
//    gets(data);
//    printf("\n Enter the character to be searched:");
//    scanf("%c",&key);
//    for (i=0; data[i]!='\0'; i++)
//    {
//        if(key==data[i])
//            count++;
//    }
//    printf("\n The frequency of %c in the string %s is %d",key,data,count);


//    char greetings[6]={'H','E','L','L','O','\0'};
//    printf("Greeting message:%s\n",greetings);


//int LCM(int, int);

 // int x,y,answer;
//    printf("Enter two possitive numbers:");
//    scanf("%d%d",&x,&y);
//    printf("The LCM of %d and %d is %d.\n",x,y,LCM(x,y));
//    answer = LCM(x,y);
//}
//int LCM(int x,int y)
//{
//    static int common =1;
//    if (common % x== 0 && common % y== 0)
//    {
//        return common;
//   }
//    else
//        common++;
//    return LCM(x,y);



//int primenumber(int,int);
//    int number;
//    printf("Enter any possitive number:\n");
//    scanf("%d",&number);
//    printf("The number you have entered is %d.\n",number);
//    int isAPrimeno = primenumber(number,2);
//    if (isAPrimeno ==1) {
//        printf("It is a prime number.\n");
//    }
//    else if (isAPrimeno ==0)
//    {
//        printf("It is not a prime number.\n");
//    }
//}
//int primenumber(int n,int i)
//{
//    if(i == n)
//        return 1;
//    else if(n%i==0)
//        return 0;
//    else
//        return primenumber(n,i+1);


//    int marks[5] = {89,90,92,87,76};
//    int i=0;
//    for (i = 0; i<5; i++) {
//        printf("%d\n",marks[i]);
//    }

//    int astonaut_age[10];
//    int i = 0;
//    for (i =0; i<10; i++) {
//        printf("Enter the age of the astonaut:");
//        scanf("%d",&astonaut_age);
//    }


//    int marks[5];
//    int i;
//    float avg = 0.0;
//    int sum = 0;
//    char grade;
//    printf("Enter the marks in 5 subjects:");
//    for (i =0; i<5; i++) {
//        scanf("%d",&marks[i]);
//    }
//    for (i =0; i<5; i++) {
//        sum = sum+marks[i];
//    }
//    avg = sum/5;
//    printf("\nThe avg is :%f\n",avg);
//    if(avg>=91){
//        grade ='A';
//    }
//    else if(avg>=81){
//        grade = 'B';
//    }
//    else if(avg>=61){
//        grade ='C';
//    }
//    else
//        grade ='F';
//    printf("\nThe grade alloted is :%c\n",grade);
