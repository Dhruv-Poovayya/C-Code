/*USE OF SSCANF() AND SPRINTF */
//#include<stdio.h>
//int main()
//{
//    char input[]="1234.65";
//
//    int num;
//    float fnum;
//
//    sscanf(input,"%d %f",&num,&fnum); // Scanf's input from string not from console
//    printf("Intger:%d,Float:%f",num,fnum);
//
//    return 0;
//}


#include<stdio.h>
int main()
{
    char store[50];
    int number=100;
    float score=99.5;
    char letter='a';

    sprintf(store,"Number:%d , score:%.2f,letter:%c",number,score,letter); // WRITES IT TO STRING RATHER CAN CONSOLE.
    printf("store:%s",store);
}
