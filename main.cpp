/*Bu program basamak çözümlemesi için hazırlanmıştır.*/
#include<stdio.h>
#include <iostream>
#include <string>


void basamaklar()
{
	int sayi,birler,onlar,yuzler,binler;
	char a;//Değişkenleri tanımlamak için kullanılmıştır,
	 
      
      printf("4 basamakli bir sayi giriniz\n    : ");
      scanf("%d", &sayi);

	if(sayi>=1000 && sayi<=9999)  
          {                  binler=sayi/1000;          
                             yuzler=(sayi%1000)/100;   
                             onlar=(sayi%100)/10;  
                             birler=sayi%10; 
							 printf("\n binler basamagi\t%d\n ", binler);
                             printf("\n yuzler basamagi \t%d \n", yuzler);
                             printf("\n onlar basamagi \t%d\n", onlar);
                             printf("\n birler basamagi \t%d\n", birler);
          }             
          else     
          {          
               printf("\n\tYanlis giris yaptiniz\n");    
          }   

	  printf("\n\t\tprogram sonlanmistir ");
	  printf("devam etmek ister misiniz? e/h")   ;
      scanf("%s", &a);
	  if( a == 'e')
	  {
		  basamaklar();
		 
	  }
}


void main()
{
   basamaklar();
}//Bu işlem fonksiyonu kullanıcının çıkış yapana kadar programın devam etmesini sağlamaktadır.Bu işlemi istediği kadar yapabilmeyi sağlamıştır.
