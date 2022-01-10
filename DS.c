#include <stdio.h>
#include <stdlib.h>
struct record
{
    int sn;
    char name[20];
    long signed int prn;
    char branch[20];
    char phone[11];
};
int main()
{
   int a,w,roll,id,i;
   FILE*fp;
   FILE*ptr;
   char ch,array[255];
   struct record r;
   do
   {
       printf("Press 1 for Add Payment Details\n");
       printf("Press 2 for Search By Roll No.\n");
       printf("Press 3 for See Student Details\n");
       scanf("%d",&a);

     switch(a)
     {

        case 1:   fp=fopen("record.txt","a");
                  printf("Enter Roll No.\n");
                  scanf("%d",&r.sn);
                    fflush(stdin);
                  printf("Enter Your Name\n");
                  gets(r.name);
                  printf("Enter Your P.R.N.\n");
                  scanf("%ld",&r.prn);
                    fflush(stdin);
                  printf("Enter Fee Name\n");
                  gets(r.branch);
                  printf("Enter Amount\n");
                  gets(r.phone);
                  fprintf(fp,"Roll No. %d  \nName: %s  \nP.R.N : %ld  \nFee Name: %s  \nAmount: %s \n",r.sn,r.name,r.prn,r.branch,r.phone);
                  fclose(fp);
                  break;


        case 2:    printf("Search by Roll Number\n");

                   scanf("%d",&roll);
                   ptr=fopen("record.txt","r");

                   for(i=0;i<=100;i++)
                   {
                       fscanf(ptr, "%s",array);


                   id=atoi(array);

                   if(id==roll)
                   {
                       fgets(array,255,(FILE*)ptr);
                       printf("Roll no: %d %s",id,array);
                   }
                   }

                   fclose(fp);
                    break;



        case 3:   fp=fopen("record.txt","r");
                     if(fp==NULL)
                        {
                           printf("File not found\n");
                           exit(1);
                        }
                         ch=fgetc(fp);
                          while(!feof(fp))
                              {
                                 printf("%c",ch);
                                 ch=fgetc(fp);
                               }

                        fclose(fp);
                        break;

        default: printf("Invalid Input!!\n");
     }
      printf("More! Press 7\n");
      scanf("%d",&w);
   }while(w==7);
    return 0;
}
