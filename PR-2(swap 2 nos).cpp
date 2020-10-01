// Read two numbers ans swap it.

  #include<iostream>
  using namespace std;
  int main()
  {

      int n1, n2, t;
      cout<<"Enter 1st number: ";
      cin>>n1;
      cout<<"Enter 2nd number: ";
      cin>>n2;

      cout<<"\nBefore swapping:\n"<<"1st number:"<<n1<<"\n"<<"2nd number:"<<n2<<endl;


       //swapping
       t=n1;
       n1=n2;
       n2=t;
       cout<<"\nAfter swapping:\n"<<"1st number:"<<n1<<"\n"<<"2nd number:"<<n2<<endl;
      return 0;
  }




