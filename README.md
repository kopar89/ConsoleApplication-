summator!!!!
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    int b;
    int sum = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        sum += b;
    }
    cout << "Сумма этих чисел равна " << sum;
}


factorial!!!!!!!!!!!!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    long long int fac = 1;
    cin >> a;
    for (int i = 1; i < a+1; i++)
        fac *= i;
        cout << "Факториал от " << a << " равен " << fac;
}







#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    cin >> a >> b;
    if (a > b) 
        cout << "1";
    if (a > b)
        cout << "2";
    if (a == b)
        cout << "0";
    return 0;
}


treygilnik
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c || ((a + c) > b) || ((b + c) > a))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}

sravnenie
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= a && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}



#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c && b == c)
    {
        cout << 3;
    }
    else if (a != b && a != c && b == c)
    {
        cout << 2;
    }
    else if (a != b && a == c && b != c)
    {
        cout << 2;
    }
    else if (a == b && a != c && b != c)
    {
        cout << 2;
    }
    else {
        cout << 0;
    }
}




#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int array[12] = { 43, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
}




#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int array[15];

    for (int i = 0; i < 15; i++)
    {
        array[i] = 68;
        cout << array[i] << " ";
    }
}



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int array[10], a;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        array[i] = a;
    }
    for (int i = 0; i < 10; i++) {
        if (array[0] < array[i])
            array[0] = array[i];
    }
    cout << array[0] << " ";
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    float array[18], a;

    for (int i = 0; i < 18; i++)
    {
        cin >> a;
        array[i] = a;
    }
    for (int i = 17; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
}


#include <iostream>
using namespace std;

int main()
{
    int n,a;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
{
    cin >> a;
    array[i] = a;
}

    for (int i = n-1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
}


