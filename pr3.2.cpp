#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= 0)
        y = -x + 6;
    else
        if (x > 0 && x <= R)
            y = -sqrt(pow(R,2) - pow(x,2));
    if (x > R && x < (2 * R))
            y = sqrt(pow(R,2) - pow((x - 2 * R),2));
        else
               if(x > 2 * R)
               y = R;

        cout << endl;
        cout << "y = " << y << endl;

        cin.get();
        return 0;
}
