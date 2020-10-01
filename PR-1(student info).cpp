/* Read the name of student, roll, and marks in four subjects , display name,roll, total and
   average marks in the given format:
   Name:
   Roll:
   Total marks:
   Average marks:
*/

  #include<iostream>
  using namespace std;
  int main()
  {
      char name[30];
      int roll, m1, m2, m3, m4;
      cout<<"Enter name of the student: ";
      cin.getline(name,30);
      cout<<"Enter the roll no: ";
      cin>>roll;
      cout<<"Enter the Marks in 4 subjects: ";
      cin>>m1>>m2>>m3>>m4;

      cout<<"\n\nName:"<<name<<endl;
      cout<<"Roll:"<<roll<<endl;
      cout<<"Total Marks:"<<(m1+m2+m3+m4)<<endl;
      cout<<"Average:"<<(m1+m2+m3+m4)/4<<endl;

      return 0;
  }




