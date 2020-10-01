// Read principal, rate and time. calculate simple interest and amount.


  #include<iostream>
  using namespace std;
  int main()
  {

       int time;
       float pa, rate, si;

      cout<<"Enter the principal amount: ";
      cin>>pa;
      cout<<"Enter rate of interest: ";
      cin>>rate;
      cout<<"Enter time per annum: ";
      cin>>time;

      // calculation of the interest.
      si=(pa*rate*time)/100;
      cout<<"\nThe simmple interest in rupees is :"<<si<<endl;
      cout<<"The Amount in rupees is :"<<si+pa;

        return 0;
  }





