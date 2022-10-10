#include <stdio.h>
#include<string.h>
#include<conio.h>


int rooms(void);

void restaurent(void);

void bill(float,int);

void games(void);

void hospital(void);

void add_fun(void);

void main_menu(void);

void list_fun(void);

void search_fun(void);

struct info{
    char name_of_canditate[20];
    int mobile_number[20];
    char adress[50];
    char gender[10];
    int age[10];
    char email[100];
    char problem[100];
};
struct info inf;


struct item{
    char item[20];
    int price;
    int qty;
};


struct order{
    struct item itm[20];
};
struct order ord;

void add_fun()
{
    FILE *jp;
    jp=fopen("jagan.txt","a");
     printf("please enter ur name=");
    scanf("%s",&inf.name_of_canditate);
    printf("\n");
     
    printf("please enter ur number=");
    scanf("%s",&inf.mobile_number);
    printf("\n");
    
    printf("please enter ur adress=");
    scanf("%s",&inf.adress);
    printf("\n");
    
     printf("please enter ur gender=");
    scanf("%s",&inf.gender);
    printf("\n");
   
    printf("please enter ur age=");
    scanf("%s",&inf.age);
    printf("\n");
   
    printf("please enter ur email=");
    scanf("%s",&inf.email);
    printf("\n");
   
    printf("please enter ur problem=");
    scanf("%s",&inf.problem);
    printf("\n");
   
    
    fprintf(jp,"\n%s %s %s %s %s %s %s",inf.name_of_canditate,inf.mobile_number,inf.adress,inf.gender,inf.age,inf.email,inf.problem);
   
    fclose(jp);
      char p[10];
    
     printf(" if do u want to go to other place please enter yes or no\n");
     scanf("%s",&p);
    if(p[0]=='y')
    {
    main();
    }
}

void list_fun()
{
    FILE *jp;
    
    jp=fopen("jagan.txt","r");
    printf("\t\t*******list of patients******\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("Name:\tCell no:\tAdress:\tGender:\tAge:\tEmail:\t\t\tproblem:\t\n");
    printf("----------------------------------------------------------------------------------\n");
   
    while(fscanf(jp,"%s %s %s %s %s %s %s",inf.name_of_canditate,inf.mobile_number,inf.adress,inf.gender,inf.age,inf.email,inf.problem)!=EOF)
    {
    printf("\n%s\t %s\t %s\t %s\t %s %s\t %s\t",inf.name_of_canditate,inf.mobile_number,inf.adress,inf.gender,inf.age,inf.email,inf.problem);
    }
    //printf("\nlisted");
    printf("\n\n\n");
      char p[10];
    
     printf(" if do u want to go to other place please enter yes or no\n");
     scanf("%s",&p);
    if(p[0]=='y')
    {
    main();
    }
}


void search_fun()
{
    
    char n[100];
    FILE *jp;
    jp=fopen("jagan.txt","r");
    printf("enter the name to be searched=");
    scanf("%s",&n);
    while(fscanf(jp,"%s %s %s %s %s %s %s",inf.name_of_canditate,inf.mobile_number,inf.adress,inf.gender,inf.age,inf.email,inf.problem)!=EOF)
    {
        if(strcmp(inf.name_of_canditate,n)==0)
        {
             printf("\n%s\t %s\t %s\t %s\t %s %s\t %s\t",inf.name_of_canditate,inf.mobile_number,inf.adress,inf.gender,inf.age,inf.email,inf.problem);
             break;
        }
        else
        {
            printf("\nrecord not found");
            break;
        }
    }
    printf("\n\n\n");
    
     printf("\n****searched*****");
      char p[10];
    
     printf(" \nif do u want to go to other place please enter yes or no\n");
     scanf("%s",&p);
    if(p[0]=='y')
    {
    main();
    }
}


void main_menu()
{
    int n;
    printf("1.add patients list\n");
    printf("2.list pateints record\n");
    printf("3.search patients record\n");
    printf("please enter what u choose=");
    scanf("%d",&n);
    printf("\n");
     switch(n)
    {
        case 1:add_fun();
        break;
        case 2:list_fun();
        break;
        case 3:search_fun();
        break;
        
    }
}

void main()
{
    int m;
    printf("****************************************************************************\n");
    printf("* * *            JAGAN DATTU Star Star Star Star Star HOTEL            * * *\n");
    printf("****************************************************************************");
    printf("\n\n\n\n\n");
    printf("Welcome to our hotel\n\n\n");
    printf("In Our Hotel u will get many facilities like:\n\n\n1.Rooms.\n2.restaurent.\n3.hospital.\n4.party pubs,clubs.\n5.swimming pools\n6.games.\nAnd Many More..................");
    printf("In detailed.............\n\n\n");
    printf("1.In rooms\t\ti.delux/non delux\n\t\t\tii.ac/non ac\n");
    printf("2.restaurent\t\ti.u can order ur known order of any type like INDIAN,CHINESE,FRENCH\n\t\t\tii.and special discounts and offers\n");
    printf("3.hospital\t\ti.free full medical checkup\n\t\t\tii.if any problem u can do treatement with discount\n");
    printf("4.party pubs,clubs\ti.u can play ur known song in speakers and chill\n\t\t\tii.free alcohol,sidedishes\n");
    printf("5.swimming pools\ti.unlimited acces to stay in it\n\t\t\tii.and swimming competitionsand prizes also given\n");
    printf("6.games\t\t\ti.unlimited acces to all games on big screens\n\t\t\tii.competitionsand prizes also given\n\n\n");
    printf("please enter 1 to fill your details and about rooms\n");
    printf("please enter 2 to go to restaurent\n");
    printf("please enter 3 to play tic tac toe\n");
    printf("please enter 4 to go to hospital\n");
    printf("choose any number from 1 to 4=");
    scanf("%d",&m);
    switch(m)
    {
        case 1:rooms();
        break;
        case 2:restaurent();
        break;
        case 3:games();
        break;
        case 4:hospital();
        break;
    }
}



int rooms()
{
   
    FILE *fp;
    fp=fopen("room.txt","a");
    printf("please enter ur name=");
    scanf("%s",&inf.name_of_canditate);
    printf("\n");
     
    printf("please enter ur number=");
    scanf("%s",&inf.mobile_number);
    printf("\n");
    
    printf("please enter ur adress=");
    scanf("%s",&inf.adress);
    printf("\n");
    fprintf(fp,"%s %s %s",inf.name_of_canditate,inf.mobile_number,inf.adress);
    fclose(fp);
    
    
    int n;
    char p[100];
     printf("\n\n\n");
     printf("price for delux is 1lakh per month and non delux is 50000 per month\n\n\n");
    printf("select either delux or non delux;\n");
     printf("enter 1 for delux and ac\n");
     printf("enter 2 for non delux and ac\n");
     scanf("%d",&n);
     
     
     if(n==1)
     {
         printf("thanks for choosing delux\n\n\n");
     }
     
     
     printf("would u like to pay cash or card sir?\n");
     scanf("%s",&p);
     printf("\n\n");
    printf("ok sir pay and enjoy ur days\n\n\n");
    
      char t[10];
    
     printf(" if do u want to go to other place please enter yes or no\n");
     scanf("%s",&t);
    if(t[0]=='y')
    {
    main();
    }
}



void restaurent()
{
    int n;
    float total=0;
 printf("savikaaaa..... welcome to 'JAGAN bangkok restaurent'\n");
 printf("     menu of the restaurent     \n");
 printf("1.pizza\t\t\t250/-\n2.burger\t\t250/-\n3.chicken biryanii\t210/-\n4.mutton birynai\t250/-\n");
 printf("please enter the number of items u are willing=");
 scanf("%d",&n);
 printf("\n");
 printf("\n");
    
 for(int i=0;i<n;i++)
 {
     printf("Enter the item name=");
     scanf("%s",&ord.itm[i].item);
    
      printf("enter the quantity of item=");
     scanf("%d",&ord.itm[i].qty);
     printf("\n");
     
     if(ord.itm[i].item[i]=='p')
     {
         ord.itm[i].price=250;
     }
      if(ord.itm[i].item[0]=='b')
     {
         ord.itm[i].price=250;
     }
      if(ord.itm[i].item[0]=='c')
     {
         ord.itm[i].price=210;
     }
      if(ord.itm[i].item[0]=='m')
     {
         ord.itm[i].price=250;
     }
     total=total+ord.itm[i].price*ord.itm[i].qty;
 }
 printf("\n\n\n\n");
  bill(total,n);
}



void bill(float total,int n)
{
    float discount;
    char p[3];
    
    printf("**********JAGAN restaurent*********\n");
    printf("          bangkok,thailand          \n");
    printf("------------------------------------ \n");
    printf("------------------------------------\n");
    
    for(int i=0;i<n;i++)
    {
    printf("item:%d=%s\tprices=%d\tquantity=%d\n",(i+1),ord.itm[i].item,ord.itm[i].price,ord.itm[i].qty);
    }
    

    printf("\n\ntotal =%f",total);
    printf("\ndisocunt=%f",(0.2*total));
    printf("\n\nnew total=%f",(total-(0.2*total)));
    printf("\nIn our hotel no taxes ,taxes will be paid by our self.");
    printf("\n\n\n****   please pay and please visit again    ****");
    printf("\n\n\n");
    printf(" if do u want to go to other place please enter yes or no\n");
    scanf("%s",&p);
    if(p[0]=='y')
    {
      main();
    }
    
}


void games()
{
    printf("player1:'x'     player2:'o'\n");
    char a[3][3];
    char ch[10];
     printf("---------");
        printf("\n");
        
    
    for(int rows=0;rows<3;rows++)
    {
        for(int coloums=0;coloums<3;coloums++)
        {
            a[rows][coloums]=' ';
             if(coloums==0)
            printf("|");
            printf("%c |",a[rows][coloums]);
        }
        printf("\n");
        printf("---------");
        printf("\n");
    }
   for(int p=0,k=0;p<9;p++,k++)
    {
    
        int rows,coloums;
        if(k%2==0)
        {
          printf("player 1 enter\n");
        }
        else
        {
              printf("player 2 enter\n");
            
        }
     
        
        printf("enter rows and coloums indicates boxes of 2d array=");
        scanf("%d%d",&rows,&coloums);
        
        
        if(k%2==0)
        {
         a[rows][coloums]='x';
        }
        else
        {
           a[rows][coloums]='o';
        }
     
      
        if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o')
        {
            printf("player2 won");
            break;
        }
        if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o')
        {
            printf("player2 won");
            break;
        }
        if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o')
        {
            printf("player2 won");
            break;
        }
        if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o')
        {
            printf("player2 won");
            break;
        }if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o')
        {
            printf("player2 won");
            break;
        }if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o')
        {
            printf("player2 won");
            break;
        }
        if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o')
        {
            printf("player2 won");
            break;
        }
        if(a[2][0]=='o' && a[1][1]=='o' && a[0][2]=='o')
        {
            printf("player2 won");
                 break;
        }
         for(int rows=0;rows<3;rows++)
        {
            for(int coloums=0;coloums<3;coloums++)
            {
                 if(coloums==0)
            printf("|");
                printf("%c |",a[rows][coloums]);
            }
            printf("\n");
            printf("---------");
            printf("\n");
        }
        if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x')
        {
            printf("player1 won");
            break;
        }
        if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x')
        {
            printf("player1 won");
            break;
        }
        if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x')
        {
            printf("player1 won");
            break;
        }
        if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x')
        {
            printf("player1 won");
            break;
        }if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x')
        {
            printf("player1 won");
            break;
        }if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x')
        {
            printf("player1 won");
            break;
        }
        if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x')
        {
            printf("player1 won");
            break;
        }
        
        if(a[2][0]=='x' && a[1][1]=='x' && a[0][2]=='x')
        {
            printf("player1 won");
                 break;
        }
    
    }
    char p[10];
    
     printf(" if do u want to go to other place please enter yes or no\n");
     scanf("%s",&p);
    if(p[0]=='y')
    {
    main();
    }
}


void hospital()
{
    int n;
    printf("\n\n\n\n*********welcome to JAGAN hospital********\n\n\n\n");
    main_menu();
}

