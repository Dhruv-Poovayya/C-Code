#include<stdio.h>
#define MAX 100

struct machine_state
{
    float input_vlt;
    float device_current;

    int  voltage_over:4;
    int  voltage_under:4;
    int  current_over:4;
    int  current_under:4;

} mac[MAX];

int main()
{
    int m;

    printf("Enter the number of machine whose details to be stored:");
    scanf("%d",&m);

    for(int i=1; i<=m; i++)
    {
        printf("\nEnter the detail-%d Machine:",i);

        printf("\n\nEnter the i/p voltage:");
        scanf("%f",&mac[i].input_vlt);

        printf("\n\nEnter the i/p current:");
        scanf("%f",&mac[i].device_current);
    }
for(int i=1;i<=m;i++)

{
    printf("\n\nThe details of machine running with status is:");

    printf("\n\nI/p Voltage:%.2fv",mac[i].input_vlt);
    printf("\n\nDevice Current:%.2fA",mac[i].device_current);

    if(mac[i].device_current>5)
    {
        mac[i].current_over=1;
        printf("\n\nCurrent Over Warning=%d",mac[i].current_over);
    }

    if(mac[i].device_current<1)
    {
        mac[i].current_under=1;
        printf("\n\nCurrent Under Warning=%d",mac[i].current_under);
    }

    if(mac[i].input_vlt>5)
    {
        mac[i].voltage_over=1;
        printf("\n\nVoltage Over Warning=%d",mac[i].voltage_over);
    }


    if(mac[i].input_vlt<1)
    {
        mac[i].voltage_under=1;
        printf("\n\nVoltage Under Warning=%d",mac[i].voltage_under);
    }


    if(mac[i].voltage_under)
    {
        printf("\n\nIncrement input voltage by %.2fv",(5-mac[i].input_vlt));
    }


    if(mac[i].voltage_over)
    {
        printf("\n\nDecrement input voltage by %.2fv",mac[i].input_vlt-5);
    }

    if(mac[i].current_under)
    {
        printf("\n\nIncrement input current by %.2fA",5-mac[i].device_current);
    }

    if(mac[i].current_over)
    {
        printf("\n\nDecrement input current by %.2fA",mac[i].device_current-5);
    }
}

printf("\n\n");
return 0;
}
