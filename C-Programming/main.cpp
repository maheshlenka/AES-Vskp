#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword=sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }
    void getSecretPassword()
    {
        cout<<"The Secret password of employee is "<<this->secretPassword;
    }
    private:
    int secretPassword;
};

class Programmer:public Employee
{
    public:
    int errors;
};


int main()
{
    // camelcase notation
    // int marksInMaths=83;
    // cout<<"Marks Of Student IN Maths:"<<marksInMaths;
    /*int a,b;
  cout<<"Enter a nos"<<endl;
  cin>>a;
  cout<<"Enter a nos"<<endl;
  cin>>b;
  cout<<"The Sum Is :"<<a+b;
    int age;
    cout << "Enter your age" << endl;
    /*cin>>age;
    if(age>=150){
        cout<<"invalid";
    }
    else if(age>=18){
        cout<<"ican vote";
    }
    int index=0;
    do{
        cout<<"We are at index number"<<index<<endl;
        index=index+1;
    }
    while (index<33);
    for(int i = 0; i < 34; i++){
        cout<<"The value of i is="<<i<<endl;
    }
   int a,b;
   cout<<"Enter a no:"<<endl;
   cin>>a;
    cout<<"Enter another no:"<<endl;
   cin>>b;
   cout<<add(a,b);
   int arr[]={0,1,2};

cout<<arr[1];
int marks[6];
for (int i=0;i<6;i++){
    cout<<"Enter the marks of "<<i<<"th student"<<endl;
    cin>>marks[i];
}
for (int i=0;i<6;i++){
    cout<<"Marks of "<<i<<"th student is"<<marks[i]<<endl;
}
int arr2d[2][3]={
    {1,2,3},
    {4,5,6}
};
for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cout<<"the value at"<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;
    }
}
string name="arpan";
cout<<"The name is "<<name<<endl;
cout<<"The lenghth of name is "<<name.substr(0,3)<<endl;
cout<<"The lenghth of name is "<<name.substr(0,1)<<endl;

int a=34;
int *ptra;
ptra=&a;
cout<<"the value of a is"<<a<<endl;
cout<<"the value of a is"<<*ptra<<endl;
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<ptra<<endl;
*/

    Employee arp("Arpan Constructor", 344,655);
    // arp.name="Arpan";
    // arp.salary=100;
    arp.printDetails();
   //cout<<arp.secretPassword;
   arp.getSecretPassword();
}