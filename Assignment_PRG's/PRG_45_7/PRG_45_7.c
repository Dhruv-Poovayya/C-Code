///* TO calculate Electricity Bill *///
#include<stdio.h>
#include<math.h>
float Electricity_Bill_Calculator(float units);
int main()
{
    float units=0;
    printf("Enter the Units consumed:");
    scanf("%f",&units);
    printf("The Total bill of %.3f-units consumed is Rs %.3f/- only",units,Electricity_Bill_Calculator(units));
    return 0;
}

float Electricity_Bill_Calculator(float units)
{
    int slab1_maxlimit=199;
    int slab2_maxlimit=399;
    int slab3_maxlimit=599;

    float amt=0;
    float surcharge=1.15;

    float slab1_cost=1.2;
    float slab2_cost=1.5;
    float slab3_cost=1.8;
    float slab4_cost=2.0;

    if(units<=199)
    {
        amt=units*slab1_cost;
    }

    else if (units>=200&&units<=399)
    {
        amt+=units*slab1_cost;
        amt+=(units-slab1_maxlimit)*slab2_cost;
    }

    else if(units>=400&&units<=599)
    {
        amt+=units*slab1_cost;
        amt+= (slab2_maxlimit-slab1_maxlimit)*slab2_cost;
        amt+= (units-slab2_maxlimit)*slab3_cost;

    }
    else
    {
        amt+=units*slab1_cost;
        amt+= (slab2_maxlimit-slab1_maxlimit)*slab2_cost;
        amt+= (slab3_maxlimit-slab2_maxlimit)*slab3_cost;
        amt+= (units-slab3_maxlimit)*slab4_cost;
    }

    amt=fmax(amt,100);
    if(amt>=400)
    {
        amt*=surcharge;
    }
    return amt;
}




//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//
//float getElectricityBill(int units_consumed);
//
//int main(void)
//{
//
//    int consumed_units;
//
//    while (1)
//    {
//        printf("Enter consumed units\n");
//        scanf("%d", &consumed_units);
//
//        printf("bill in %.2f\n\n\n", getElectricityBill(consumed_units));
//    }
//}
//
//float getElectricityBill(int units_consumed)
//{
//    int slab1_UpperLimit = 199;
//    int slab2_UpperLimit = 399;
//    int slab3_UpperLimit = 599;
//
//    float slab1_charges = 1.2;
//    float slab2_charges = 1.5;
//    float slab3_charges = 1.8;
//    float slab4_charges = 2;
//
//    float surcharge_multiplier = 1.15;
//    int minimum_bill = 100;
//
//    float bill_total = 0;
//
//// calculate slab1 charges
//    if (units_consumed <= slab1_UpperLimit)
//    {
//        bill_total += units_consumed * slab1_charges;
//    }
//
//    else if (units_consumed <= slab2_UpperLimit)
//    {
//        bill_total += slab1_UpperLimit * slab1_charges;
//        bill_total += (units_consumed - slab1_UpperLimit) * slab2_charges;
//    }
//
//    else if (units_consumed <= slab3_UpperLimit)
//    {
//        bill_total += slab1_UpperLimit * slab1_charges;
//        bill_total += (slab2_UpperLimit - slab1_UpperLimit) * slab2_charges;
//        bill_total += (units_consumed - slab2_UpperLimit) * slab3_charges;
//    }
//    else
//    {
//        bill_total += slab1_UpperLimit * slab1_charges;
//        bill_total += (slab2_UpperLimit - slab1_UpperLimit) * slab2_charges;
//        bill_total += (slab3_UpperLimit - slab2_UpperLimit) * slab3_charges;
//        bill_total += (units_consumed - slab3_UpperLimit) * slab4_charges;
//    }
//
//    bill_total = fmax(bill_total, 100);
//
//    if (bill_total > 400)
//    {
//        bill_total *= surcharge_multiplier;
//    }
//
//    return bill_total;
//}
