//Read an arithmetic character. Display the operator's name.

 #include<iostream>
  using namespace std;
  int main()
  {

      char ch;
      cout<<"Enter an aritmetic character: ";
      cin>>ch;
         if(ch == '=')
        cout<<"Assignment operator";
         else if(ch == '-' || ch =='+' || ch =='/' || ch =='%' || ch =='*')
        cout<<"Arithmetic operator";
         else if(ch == '&')
        cout<<"Address operator";
        else if(ch == '.')
        cout<<"Dot operator";
        else
        cout<<"wrong input";



       return 0;
  }

