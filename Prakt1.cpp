

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter: ";
    int numb, sum = 0;
    cin >> numb;
    for (int i = 1; i < numb; i++)
    {
        if ((i % 2) != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
