#include <stdio.h>
#include <stdlib.h>

int main()
{
    float service_charge,consultant_fee,repair_charge,equipment_charge,t_payment,national_building_tax=0.02,f_payment;
    printf("enter service charge     :");
    scanf("%f",&service_charge);
    printf("enter consultant fee     :");
    scanf("%f",&consultant_fee);
    printf("enter repair charge      :");
    scanf("%f",&repair_charge);
    printf("equipment charge         :");
    scanf("%f",&equipment_charge);

   t_payment= service_charge+consultant_fee+repair_charge+equipment_charge;
   printf("Total payment             :%f\n",t_payment);

   f_payment=t_payment+t_payment*national_building_tax;

   printf("final payment             :%f",f_payment);




    return 0;
}
