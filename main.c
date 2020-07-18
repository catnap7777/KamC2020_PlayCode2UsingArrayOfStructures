#include <stdio.h>

int count=0;
//declare and define structure
struct data {
    float amount;
    char fname[20];
    char lname[30];

} rec[5];


int main(void)
{
    //input data from keyboard
    for (count=0; count<5; count++)
    {
    printf("Enter the donor's first and last names,\n");
    printf("separated by a space: \n");
    scanf("%s %s", rec[count].fname, rec[count].lname);

    printf("Enter the donation amount: \n");
    scanf("%f", &rec[count].amount);
    };
    //call display function
    //print_rec(rec);
    for (count=0; count<5; count++)
    {
    printf("\nDonor %s %s gave $%.2f.\n", rec[count].fname,rec[count].lname,rec[count].amount);
    };

    printf("\n");
    return 0;
}
