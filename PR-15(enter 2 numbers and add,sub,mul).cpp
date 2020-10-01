/* Read two numbers.If both are same then display its sum. If the 1st number is
   more than 2nd number then display the remainder. Otherwise, display their product.*/

  #include<iostream>
  using namespace std;
  int main()
  {

      int n1, n2;
      cout<<"Enter 1st number: ";
      cin>>n1;
      cout<<"Enter 2nd number: ";
      cin>>n2;

      if(n1==n2)
        cout<<"Sum of entered numbers is : "<<n1+n2<<endl;
      else if(n1>n2)
        cout<<"Remainder of the 2 numbers is : "<<n1%n2<<endl;
      else
        cout<<"Product of the two numbers is : "<<n1*n2<<endl;

      return 0;
  }






