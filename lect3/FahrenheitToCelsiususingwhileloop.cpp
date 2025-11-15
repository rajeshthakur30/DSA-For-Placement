#include <iostream>

using namespace std;

int main()
{
    double F=100, C;
    while (F--<101)
    {
       C = (F - 32) * 5 / 9;
        if (C==F)
            break;

    }
cout<<"The same temperature is "<<C;
    return 0;
}