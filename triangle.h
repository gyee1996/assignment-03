#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//triangle size function//
int triangle(int n)
{
if (n == 1)
return 1;
else
return (n)+triangle(n-1);
}
//triangle display// 
void display(int x)
{
if (x<=1)
cout<< "*" << endl;
else
{
  display(x-2);
  while(x>=1)
{
  cout<< "*";
  x--;
}
cout << endl;
}
}
//main// 
int main()
{
int a;
cout << "Preferred Triangle size?";
cin >> a;
display (triangle(a));
system ("pause");
return 0;
}
