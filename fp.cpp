#include<iostrem>
using namespace std;
int main()
{
  int n;
  cout<<"enter n : ";
  cin>>n;
  int r;
  cout<<"enter r : ";
  cin>>r;
  int a = 1 ;
  for(int i=1;i<=n;i++){
    a *= i;
  }
  int b = 1;
  for(int i=1;i<=r;i++){
    b *= i;
  }
}
