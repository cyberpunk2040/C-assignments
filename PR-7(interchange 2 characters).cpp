// Read two characters. Interchange it.


  #include<iostream>
  using namespace std;
  int main()
  {

      char n1, n2, t;
      cout<<"Enter 1st character: ";
      cin>>n1;
      cout<<"Enter 2nd character: ";
      cin>>n2;

      cout<<"\nBefore swapping:\n"<<"1st character:"<<n1<<"\n"<<"2nd character:"<<n2<<endl;


       //swapping
       t=n1;
       n1=n2;
       n2=t;
       cout<<"\nAfter swapping:\n"<<"1st character:"<<n1<<"\n"<<"2nd character:"<<n2<<endl;
       return 0;
  }






