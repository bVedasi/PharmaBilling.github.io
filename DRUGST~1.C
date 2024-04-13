#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int total_stock=10,bill_num=0;
typedef struct medicines{
    float id;
    char name[40];
    char company[40];
    struct date{
               int exp_month,exp_year;}d;
    int count;
    float price,total_price;
}stock;

stock s[100],b[20];
  void billing(void);
  void main_menu(void);
  void add(void);
  void del(void); 
  void modify(void);
  void show(void);

// adding stock
void sto()
{
    s[0].id=12320;
    strcpy(s[0].name,"LUPISIT-50");
    strcpy(s[0].company,"LUPIN");
    s[0].d.exp_month=10;
    s[0].d.exp_year=2032;
    s[0].count=240;
    s[0].price=9.38;
    s[0].total_price=s[1].price*s[0].count;
    
    s[1].id=12321;
    strcpy(s[1].name,"CAL-Md-3");
    strcpy(s[1].company,"Overseas");
    s[1].d.exp_month=12;
    s[1].d.exp_year=2028;
    s[1].count=300;
    s[1].price=22.6;
    s[1].total_price=s[1].price*s[1].count;
    
    s[2].id=12322;
    strcpy(s[2].name,"DOLO-650");
    strcpy(s[2].company,"Micro-Labs");
    s[2].d.exp_month=10;
    s[2].d.exp_year=2024;
    s[2].count=1750;
    s[2].price=2.85;
    s[2].total_price=s[2].price*s[2].count;

    s[3].id=12323;
    strcpy(s[3].name,"Glimy-1");
    strcpy(s[3].company,"DRL");
    s[3].d.exp_month=8;
    s[3].d.exp_year=2026;
    s[3].count=280;
    s[3].price=54/14;
    s[3].total_price=s[3].price*s[3].count;

    s[4].id=12324;
    strcpy(s[4].name,"Lenangio-25");
    strcpy(s[4].company,"DRL");
    s[4].d.exp_month=12;
    s[4].d.exp_year=2028;
    s[4].count=100;
    s[4].price=253.8;
    s[4].total_price=s[4].price*s[4].count;

    s[5].id=12325;
    strcpy(s[5].name,"CONJOINT");
    strcpy(s[5].company,"Medley");
    s[5].d.exp_month=04;
    s[5].d.exp_year=2025;
    s[5].count=160;
    s[5].price=70.9;
    s[5].total_price=s[5].price*s[5].count;

    s[6].id=12326;
    strcpy(s[6].name,"Citraine");
    strcpy(s[6].company,"Knoil");
    s[6].d.exp_month=02;
    s[6].d.exp_year=2023;
    s[6].count=1800;
    s[6].price=1.32;
    s[6].total_price=s[6].price*s[6].count;

    s[7].id=12327;
    strcpy(s[7].name,"Utamide");
    strcpy(s[7].company,"Intas");
    s[7].d.exp_month=06;
    s[7].d.exp_year=2024;
    s[7].count=270;
    s[7].price=41.4;
    s[7].total_price=s[7].price*s[7].count;

    s[8].id=12328;
    strcpy(s[8].name,"Lyocarb-450(inj)");
    strcpy(s[8].company,"USV.ltd");
    s[8].d.exp_month=6;
    s[8].d.exp_year=2027;
    s[8].count=28;
    s[8].price=1972;
    s[8].total_price=s[8].price*s[8].count;
    
    s[9].id=12329;
    strcpy(s[9].name,"Limcee");
    strcpy(s[9].company,"Abortt");
    s[9].d.exp_month=7;
    s[9].d.exp_year=2029;
    s[9].count=15000;
    s[9].price=1.4;
    s[9].total_price=s[9].price*s[9].count;

}


void main_menu()
{
    int main_num,mod_num;
    xyz:
    printf("MAIN MENU\nEnter:\n1. Display Stock\n2. Modify Stock\n3. Billing\n0. Exit\n");
    scanf("%d",&main_num);
    switch(main_num)
    {
        case 0:
        printf("\nThank You!!\n");
        exit(1);
        break;
        case 1:
        show();
        break;
        case 2:
        abc:
        printf("Enter:\n1. ADD\n2. REMOVE\n3. MODIFY\n0. MAIN MENU\n");
        scanf("%d",&mod_num);
        switch(mod_num)
        {
            case 0:
		goto xyz;
		break;
	    case 1:
		add();
		break;
	    case 2:
		del();
		break;
	    case 3:
		modify();
		break;
	    default:
		printf("Enter a Valid Number\n");
		goto abc;
		break;
	}
	case 3:
		billing();
		break;
	default:
		printf("Enter a Valid Number\n");
		goto xyz;
		break;
    }
}

void show()
{
    int i;
    printf("Total Stock Details:\n");
    for (i=0;i<total_stock;i++)
    {
        printf("Medicine id:%.0f\nMedicine name:%s\nManufacturer:%s\nExpiry Date:%d-%d\nNumber of Tablets:%d\nPrice Per Tablet:%.2f\n\n",s[i].id,s[i].name,s[i].company,s[i].d.exp_month,s[i].d.exp_year,s[i].count,s[i].price);
    }
    printf("Total Stock:%d\n",total_stock);
    main_menu();
}

void add()
{
    total_stock++;
    printf("Enter Medicine ID:  ");
    scanf("%f",&s[total_stock-1].id);
    printf("Enter Medicine NAME:  ");
    scanf("%s",s[total_stock-1].name);
    printf("Enter Manufacurer Name:  ");
    scanf("%s",s[total_stock-1].company);
    printf("Enter Expiry Month and Year:  ");
    scanf("%d%d",&s[total_stock-1].d.exp_month,&s[total_stock-1].d.exp_year);
    printf("Enter Number of Tablets: ");
    scanf("%d",&s[total_stock-1].count);
    printf("Enter Price per Tablet: ");
    scanf("%f",&s[total_stock-1].price);
    s[total_stock-1].total_price=s[total_stock-1].price*s[total_stock-1].count;
    printf("\n\n");
    main_menu();
}

void del()
{
    float remove_id;
    int check,i;
    pqr:
    printf("Enter Medicine ID to remove:  ");
    scanf("%f",&remove_id);
    for(i=0;i<total_stock;i++)
    {
        if(remove_id==s[i].id)
        break;
    }    
    printf("Do You Want To Remove %s\n",s[i].name);
    printf("Enter 1 to continue\nEnter 5 to re-enter ID \nEnter 9 to cancel\n");
    scanf("%d",&check);
    if(check==1)
    {
        for(;i<total_stock-1;i++)
        {
            s[i].id=s[i+1].id;
            strcpy(s[i].name,s[i+1].name);
            strcpy(s[i].company,s[i+1].company);
            s[i].d.exp_month=s[i+1].d.exp_month;
            s[i].d.exp_year=s[i+1].d.exp_year;
            s[i].count=s[i+1].count;
            s[i].price=s[i+1].price;
            s[i].total_price=s[i+1].total_price;
        }
        total_stock--;
        main_menu();
    }
    else if(check==5)
    goto pqr;
    else if(check==9)
    main_menu();
}

void modify()
{
    int i;
    char new_name[40],new_manu[40];
    int new_month,new_year,new_count;
    float new_id,modify_id,new_price;
    int choice;
    printf("Enter Medicine ID to modify:  ");
    scanf("%f",&modify_id);
    for(i=0;i<total_stock;i++)
    {
        if(modify_id==s[i].id)
        break;
    }
    def:
    printf("Enter:\n1. To change ID \n2. To change Name \n3. To change Manufacturer Name \n4. To change Expiry Month and Year\n5. To change Number Of Tablets\n6. To Change Price per Tablet\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter new ID:  ");
        scanf("%f",&new_id);
        s[i].id=new_id;
        break;
        case 2:
        printf("Enter new Medicine Name:  ");
        scanf("%s",new_name);
        strcpy(s[i].name,new_name);
        break;
        case 3:
        printf("Enter new Manufacturer Name:  ");
        scanf("%s",new_manu);
        strcpy(s[i].company,new_manu);
        break;
        case 4:
        printf("Enter new Expiry Month and Year:  ");
        scanf("%d%d",&new_month,&new_year);
        s[i].d.exp_month=new_month;
        s[i].d.exp_year=new_year;
        break;
        case 5:
        printf("Enter new Number Of Tablets:  ");
        scanf("%d",&new_count);
        s[i].count=new_count;
        break;
        case 6:
        printf("Enter new Price per Tablet:  ");
        scanf("%f",&new_price);
        s[i].price=new_price;
        s[i].total_price=s[i].count*s[i].price;
        break;
        default:
        printf("Enter a Valid Number:  ");
        goto def;
        break;
    }

    main_menu();
}
void billing()
{
    int choice,i=bill_num,j=0,count,deleted[20],temp,temp2,k=0,m=0,*ptr;
    float mID,total_bill=0;
    printf("--OPTIONS--\n");
    bill:
    printf("1. ADD to BILL\n2. REMOVE from BILL\n3. DISPLAY the BILL\n4. CLEAR the BILL\n5. EXIT\n");
    printf("Enter choice from Menu: ");
    scanf("%d",&choice);
    ptr=deleted[0];
    switch(choice)
    {
        case 1:
            printf("Enter the Medicine ID: ");
            scanf("%f",&mID);
            for(j=0;j<total_stock;j++){
                if(s[j].id==mID){
                    b[i].id=s[j].id;
                    b[i].price= s[j].price;
                    b[i].d.exp_month=s[j].d.exp_month;
                    b[i].d.exp_year = s[j].d.exp_year;
                    strcpy(b[i].name,s[j].name);
                    strcpy(b[i].company,s[j].company);
                    break;
                }
            }
            if(j>=total_stock){
                printf("Medicine not found\n");
                goto bill;
            }
            printf("Enter the quantity: ");
            scanf("%d",&b[i].count);
            if(b[i].count<=s[j].count){
                b[i].total_price= (b[i].count)*(b[i].price);
                s[j].count= (s[j].count)-(b[i].count);
                bill_num++;
                i++;
            }
            else{
                printf("Available stock is %d\n",s[j].count);
            }
            for(i=0;i<bill_num;i++){
                for(k=i+1;k<bill_num;k++){
                    if(b[i].id==b[k].id){
                        b[i].count = b[i].count+b[k].count;
                        b[i].total_price = b[i].total_price + b[k].total_price;
                        memset(&b[k], 0, sizeof(b[k]));
                    }
                }
            }
            goto bill;
        case 2:
            j=0;
            printf("Enter Medicine ID to remove: ");
            scanf("%f",&mID);
            printf("Enter the quantity to remove: ");
            scanf("%d",&count);
            for(i=0;i<bill_num;i++){
            if(mID==b[i].id){
            temp=i;
            b[i].count= b[i].count - count;
            b[i].total_price=(b[i].count)*b[i].price;
            if(b[i].count<=0){
                    temp2=b[i].count+count;
                    b[i].total_price =0;
                    b[i].count=0;
                    ptr=i;
                    ptr++;
                    j++;
                    }
                }
            }
            for(k=0;k<total_stock;k++){
                for(m=0;m<bill_num;m++){
                    if(b[m].id==mID){
                        if(s[k].id==mID){
                            if(count<=b[temp].count)
                                s[k].count = s[k].count+count;
                            else
                                s[k].count = s[k].count + temp2;
                        }
                    }
                }
            }
            goto bill;
        case 3:
            ptr=0;
            total_bill=0;
            printf("BILL: \n");
            printf("| S.NO | ID | PARTICULARS | MFRS | EXP DATE | QTY | PRICE | AMOUNT |\n");
            for(i=0;i<bill_num;i++){
                for(j=0;j<bill_num;j++){
                    if(deleted[j]==i)
                        break;
                    else{
                        if(b[i].total_price>0){
                        printf("| %d | %.0f | %s | %s | %d-%d | %d | %.2f | %.2f |\n",i+1,b[i].id,b[i].name,b[i].company,b[i].d.exp_month,b[i].d.exp_year,b[i].count,b[i].price,b[i].total_price);
                        total_bill = total_bill + b[i].total_price;
                        break;
                        }
                    }
                }
            }
            printf("\nAmount payable: %.2f\n",total_bill);
            goto bill;
        case 4:
            memset(b, 0, sizeof(b));
            goto bill;
        case 5:
            main_menu();
        default:
            printf("Enter valid choice from Menu\n");
            goto bill;
    }
}

int main()
{
    sto();
    printf("WELCOME TO MEDICORE PHARMACY !!\n\n");
    main_menu();
    return 0;
}