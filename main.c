#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i;
   struct birthDate
   {
       int day;
       int month;
       int year;
   };

   struct person_data
   {
       char name[40];
       int lenght;
       struct birthDate date; // struct birthDate tipinde yeni bir degisken yaptým. Adi Date.
                            // person_data nin içinde tanimladi.
   };

   struct person_data *ptr; // person_data tipinde bir pointer yaptim

   struct person_data person[3] = {"Christopher", 172, {17, 5, 1997},
                                   "Felix", 170, {15,9,2001},
                                   "Hyunjin", 179,{20,3,2001}
                                   };
   // struct person_data tipinde person adinda bir dizi tanimladim ve icine 3 eleman koydum.


   for(i=0, ptr= &person[0] ; ptr<= &person[2] ; ptr++, i++)
    //i=0 ve ptr pointer'ina person dizisinin ilk elemaninin adresini atadim. Yani ptr su an person'in ilk karakterini gosteriyor.
    //ptr person'in 2. indeksine esit ya da kucuk oldugu durumlarda islemlere devam etmesi gerekir.
    //yapacagi islemler ptr'yi 1 artirmak ve i'yi 1 artirmak.
   {
       printf("record No: %d\n", (i+1));

       printf("Name: %s\n", ptr->name); //ptr'nin isaret ettigi dizinin name bilgisi
       printf("Lenght: %d\n", ptr->lenght);//ptr'nin isaret ettigi dizinin  lenght bilgisi
       printf("Birth Date: %d/%d/%d\n\n", ptr->date.day, //ptr'nin isaret ettigi dizideki date'in icindeki day bilgisi
                                          ptr->date.month,//ptr'nin isaret ettigi dizideki date'in icindeki month bilgisi
                                          ptr->date.year); //ptr'nin isaret ettigi dizideki date'in icindeki year bilgisi

    }
   return 0;
}











