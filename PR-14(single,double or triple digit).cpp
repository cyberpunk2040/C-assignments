// Read a number.Check single digit or double digit or triple digit or more than 3 digit.

  #include<iostream>
  using namespace std;
  int main()
  {

      int n, c=0;
      cout<<"Enter a number: ";
      cin>>n;

      while(n!=0)
      {
          n=n/10;
          c++;
      }

      if(c==1)
        cout<<"Entered number is a single digit number.";
      else if(c==2)
        cout<<"Entered number is a double digit number.";
      else if(c==3)
        cout<<"Entered number is a triple digit number.";
      else
        cout<<"Entered number is a more than 3 digit number.";

      return 0;
  }






