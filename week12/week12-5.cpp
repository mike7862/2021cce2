///week12-5.cpp step02-3
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i=0;i<3;i++){
        cout << v[i];
        cout << endl;
    }
}
