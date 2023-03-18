#include <stdio.h>
#include <conio.h>
#include <stdio.h>

void input();
void writefile();
void search();
void output();

struct date{
    int month;
    int day;
    int year;
};
struct account{
    int number
    char name[100];
    int acct_no;
    float mobile_no
    char street[100];
    char city[100];
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    strut data lastpayment;
    }customer;
    int t1,s1,ts;
    void main()
    {
        int 1, n;
        char ch;
        clrscr();
        
        +setcursortype(+NOCURSOR);
        printf("     CUSTOMER BILLING STSYEM:\n\n\");
        printf("===========================\n");
        printf("\n1: to add account on list\n");
        printf("2:    to search customer account\n");
        printf(3:   exit\n");
        printf("\n==============\n");
        do{
            printf("\nselect what you want do do!");
            ch=getche();
        }while(ch<= "0" | | ch> '3');
        switch(ch){
            case '1':
                clrscr();
                printf("\nhow many customer accounts?");
                scaf("%i=0;i<n;++"){
                    input();
                    if(customer.payment>0)
                    customer.acct_type=(customer.payment<0.1*customer.oldbalanace)? 'O': 'D';
                    else
                    customer-acct_type=(customer.oldbalance>0)? 'D' : 'C';
                    customer.newbalance=customer.oldbalance - customer.payment;
                    writefile();
                    }

                    main();
                case '1' :
                clrscr();
                delay(700);
                textcolor(BLUE);
                gotoxy(25,25);
                cprintf("\nA PROJECT BY YASSIN KAZIBWE");
                delay(1500);
                exit(1);
        }

    }

