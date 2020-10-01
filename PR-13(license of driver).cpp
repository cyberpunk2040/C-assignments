/* Read the age of driver. Display the license fees accordingly.
   Age     Fees
   50-60   Rs. 1000/-
   40-49   Rs. 1500/-
   30-39   Rs. 2000/-
   18-29   Rs. 3000/-
*/


  #include<iostream>
  using namespace std;
  int main()
  {

      int age;
      cout<<"Enter the age of driver : ";
      cin>>age;

       if(age>=50 && age<=60)
        cout<<"The License fees for the driver is Rs. 1000/- ";
       else if(age>=40 && age<=49)
        cout<<"The License fees for the driver is Rs. 1500/- ";
       else if(age>=30 && age<=39)
        cout<<"The License fees for the driver is Rs. 2000/- ";
       else if(age>=18 && age<=29)
        cout<<"The License fees for the driver is Rs. 3000/- ";
       else
        cout<<"Wrong input";
      return 0;
  }






