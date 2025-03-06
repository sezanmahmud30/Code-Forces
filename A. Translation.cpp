#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string x,y,l;
    cin >> x >> y;

    reverse(y.begin(),y.begin() + y.size());

    if(x==y){
        cout<<"YES";
    }else
    cout<<"NO";

    return 0;
}
