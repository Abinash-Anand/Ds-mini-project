#include <stdio.h>
#include <stdlib.h>
struct record
{
    int sn;
    char name[20];
    long signed int prn;
    char fname[20];
    char amount[11];
    char mode[20];
    char date[27];
};
int main()
{
   int a,w,roll,id,i;
   FILE*fp;
   FILE*ptr;
   char ch,array[2556];
   struct record r;
   do
   {
       printf("Press 1 for Add Payment Details\n");
       printf("Press 2 for Search By Roll No.\n");
       printf("Press 3 for See Student Details\n");
       scanf("%d",&a);

     switch(a)
     {

        case 1:   fp=fopen("final.txt","a");
                  printf("Enter Roll No.\n");
                  scanf("%d",&r.sn);
                    fflush(stdin);
                  printf("Enter Your Name\n");
                  gets(r.name);
                  printf("Enter Your P.R.N.\n");
                  scanf("%ld",&r.prn);
                    fflush(stdin);
                  printf("Enter Fee Name\n");
                  gets(r.fname);
                  printf("Enter Amount\n");
                  gets(r.amount);
                  fflush(stdin);
                  printf("Enter Payment Mode\n");
                  gets(r.mode);
                  printf("Enter Date\n");
                  gets(r.date);
                  fprintf(fp,"%d      %ld     %s    %s   %s     %s      %s \n",r.sn,r.prn,r.name,r.fname,r.mode,r.amount,r.date);
                  fclose(fp);
                  break;


        case 2:    printf("Search by Roll Number\n");

                   scanf("%d",&roll);
                   ptr=fopen("final.txt","r");

                   for(i=0;i<=2000;i++)
                   {
                       fscanf(ptr, "%s",array);


                   id=atoi(array);

                   if(id==roll)
                    {
                       fgets(array,255,(FILE*)ptr);
                       printf("%d %s",id,array);
                    }
                   }

                   fclose(ptr);
                    break;



        case 3:   fp=fopen("final.txt","r");
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
