#include <iostream>
using namespace std;
int i=3;

namespace my_namepace
{
    int i=9;
}

int main()
{
    cout<<i<<endl;
    cout<<my_namepace::i<<endl;
}