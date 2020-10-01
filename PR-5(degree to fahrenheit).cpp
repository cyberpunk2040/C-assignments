// Read Temperature in degree.change into fahrenheit.


  #include<iostream>
  using namespace std;
  int main()
  {

       float temp;

      cout<<"Enter the Temperature in Degree Celcius : ";
      cin>>temp;

      cout<<"The Temperature in Degree fahrenheit is :"<<(float)9/5*temp+32;
      // formula celius= (fahrenheit-32)*5/9
      //         fahrenheit= (celcius+32)*9/5

        return 0;
  }





