#include <iostream>
using namespace std;

int main() {

int n;
long long f = 1;

cout << "number: ";
cin >> n;

if( n < 0 )
cout <<"factorial can not define negative number.";
else {

    for( int i = 1; i <= n; i++ )

    f *=1;

    cout << "factorial: " << f;
}
return 0;

}



