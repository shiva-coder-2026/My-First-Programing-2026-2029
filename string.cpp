#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s =" Shiva Swain" ;
  cout<<s<<endl;
  int n =s.length();
  reverse(s.begin() ,s.begin()+n/2);
}
