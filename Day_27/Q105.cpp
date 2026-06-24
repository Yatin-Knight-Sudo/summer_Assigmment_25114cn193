
#include <iostream>
using namespace std;
struct quiz
{
    string name;
      string admno;
    int age;
    string sex;
    int year;
     string contactno;
};
int main()
{
    cout << "there is a record of 3 students studying in GL BAJAJ\n";
    cout << "enter 1 to find record of Satish\n";
        cout << "enter 2 to find record of Jacob\n";
            cout << "enter 3 to find record of Ashwin\n";
            int n;
            cin >> n;
quiz q[3];
    q[0]=
    {
       "Satish Kumar",
       "204cn203",
        19,
       "Male",
        1,
       "9140356732"
    };
    q[1]=
    {
       "Jacob williams",
       "205cn203",
       19,
       "Male",
       1,
       "7383941748"
    };
    q[2]=
    {
       "Ashwin Raj",
       "206cn203",
       20,
       "Male",
        1,
       "6593783257"
    };

if(n>=1 && n<=3)
{
       cout << "Name.  " << q[n-1].name<< endl;
       cout << "ADMISSION NUMBER. "<< q[n-1].admno<< endl;
       cout << "AGE. "<< q[n-1].age<< endl;
           cout << "GENDER. "<< q[n-1].sex<< endl;
       cout << "year. "<< q[n-1].year<< endl;
       cout << "CONTACT NUMBER. "<< q[n-1].contactno<< endl;
}
else 
{
    cout<<"wrong input";
}
    
    return 0;
}















