//Read the month number. Display the number of days.

 #include<iostream>
  using namespace std;
  int main()
  {

      int month;
      cout<<"Enter a number of month: ";
      cin>>month;
        switch (month)
    {

      case 1:
      cout<<"\nThere are 31 days in this month.";break;
      case 2:
      cout<<"\nThere are 28/29 days in this month";break;
      case 3:
      cout<<"\nThere are 31 days in this month";break;
      case 4:
      cout<<"\nThere are 30 days in this month";break;
      case 5:
      cout<<"\nThere are 31 days in this month";break;
      case 6:
      cout<<"\nThere are 30 days in this month";break;
      case 7:
      cout<<"\nThere are 31 days in this month";break;
      case 8:
      cout<<"\nThere are 31 days in this month";break;
      case 9:
      cout<<"\nThere are 30 days in this month";break;
      case 10:
      cout<<"\nThere are 31 days in this month";break;
      case 11:
      cout<<"\nThere are 30 days in this month";break;
      case 12:
      cout<<"\nThere are 31 days in this month";break;
      default:
      cout<<"\nWrong input."<<"Try to input month number between 1-12";
      }




       return 0;
  }

