#include <iostream>
#include <conio.h>

using namespace std;
int bulbs(int lamp);
int main()
{

    int number;
    int binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    cin >> number;
    for (int i = 0; number != 0; i++)
    {
        binary[7 - i] = number % 2;
        number = number / 2;
    }

    for (int i = 0; i < 8; i++)
    {
        // bulbs(binary[i]);
        cout << binary[i] << " ";
    }
    getch();
}
// int bulbs(int lamp)
// {
//     if (lamp == 0)
//     {
//         cout << "🌑";
//     }
//     else if (lamp == 1)
//     {
//         cout << "🌕";
//     }
//     return lamp;
// }