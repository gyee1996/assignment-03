#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int triangle(int n, int startingPoint)
{
if (n == startingPoint)
return 0;
else
return (n+startingPoint)+triangle(n-1, startingPoint+1);
}

int main()
{
int a,b=1;
cout << "Preferred Triangle size?";
cin >> a;
cout << triangle(a, b) << endl;
system ("pause");
return 0;
}
