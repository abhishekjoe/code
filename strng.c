#include<stdio.h>

#include <ctype.h>

#include <string.h>

int  main()

{

int i,j,g,k,b,c,q;

char a[25],ch;


printf("Enter a string to perform string manipulation :" );

scanf("%s %c",&a,&ch);

//scanf("%c",ch);

k=strlen(a);

do
                                                               1,1           Top
{

 printf("\nChoose an operation : \n\n1.Prefix Operation\n2.Suffix Operation\n3.Substring Operation\n4.Proper Prefix\n5.Proper Suffix\n6.Proper Substring\n7.Subsequence\n");

 scanf("%d",&g);

 switch(g)

 {

  case 1:

       printf("\nPREFIX OPERATION\n");

       printf("0\n");

       for(i=0;i<k;i++)

       {

       for(j=0;j<(i+1);j++)
{

       printf("%c",a[j]);

       }

       printf("\n");

       }

       break;

  case 2:

      printf("\nSUFFIX OPERATION\n");

      printf("0");

      for(i=k;i>0;i--)

      {

      printf("\n");
                                                               49,0-1        27%
      for(j=i-1;j<=k;j++)

      {

      printf("\n");

      for(j=i-1;j<=k;j++)

      {

      printf("%c",a[j]);

      }

      }

      }

      break;
case 3:

       printf("\n enter the starting & ending position of the substring");

       scanf("%d %d",&b,&c);

       for(i=b-1;i<c;i++)

       printf("%c",str1[i]);

       break;


 case 4:

       printf("\n PROPER PREFIX OPERATION\n");

       for(i=0;i<k;i++)

       {

       for(j=0;j<(i+1);j++)

       {

       printf("%c",a[j]);

       }

       printf("\n");

       }

       break;
case 5:

      printf("\nPROPER SUFFIX OPERATION\n");

      for(i=k;i>0;i--)

      {

      printf("\n");

      for(j=i-1;j<=k;j++)

      {

      printf("%c",a[j]);

      }

      }

      break;
 case 7:

      printf("\nSUBSEQUENCE OPERATION\n");

      //printf("Enter the character to be deleted : ");

      //scanf("%c",ch);

      for(i=0;i<k;i++)

      {

      if(a[i]==ch)

      {

      for(j=i;j<k;j++)

      {

      a[j]=a[j+1];

      }
      }

      }

      }

      printf("\n%s",a);

      break;

 }

printf("\n\nCONTINUE ..1");

scanf("%d",q);

}while(q==1);

getch();

}


                                                               173,0-1       88%


                                                               46,1          14

