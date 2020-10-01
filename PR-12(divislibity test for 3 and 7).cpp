// Read a number.Check the number is divisible by either 3 or 7.

  #include<iostream>
  using namespace std;
  int main()
  {

      int n;
      cout<<"Enter a number: ";
      cin>>n;

       if(n%3 == 0 && n%7 == 0)
        cout<<"Entered number is divisible by both 3 and 7.";
       else if(n%3 == 0)
        cout<<"Entered number is divisible by 3.";
       else if(n%7 == 0)
        cout<<"Entered number is divisible by 7.";
       else
        cout<<"Entered number is neither divible by 3 nor 7.";
      return 0;
  }





