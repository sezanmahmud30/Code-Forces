#include <iostream>
using namespace std;

int main()
{
    int num;
    long double a = 0;
    cin >> num ;

    for(int i = 0;i < num;i++){
        long double x;
        cin >> x;
        a += x/100;
    }
    cout << a*100/num;

    return 0;
}
