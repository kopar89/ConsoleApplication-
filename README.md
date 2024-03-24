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

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int a, s = 0;
    cin >> a;
    while (a != 0)
    {
        if (s < a)
        {
            s = a;
        }
        cin >> a;
    }
   
    cout << s << endl;
}






#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int a, s = 0;
    cin >> a;
    while (a != 0)
    {
        if (s < a)
        {
            s = a;
        }
        cin >> a;
    }
   
    cout << s << endl;
}









matrix
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    const int a = 3;
    const int s = 3;
    int arr[a][s];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            arr[i][j] = rand() % 1000;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == j)
            {
                arr[i][j] = 5;
              
            }
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}


#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    const int a = 4;
    const int s = 4;
    int arr[a][s];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == j)
            {
                arr[i][j] = 2;
              
            }
            if (i + 1 == j)
            {
                arr[i][j] = 1;
            }
            if (i - 1 == j)
            {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}


#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int a,s,c = 0;
    cin >> a;
    while (a != 0)
    {
        s = a % 10;
        c += s;
        a = a / 10;
    }
    cout << c;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a;
	double c = 0, c1 = 0;
	cin >> a;
	while (a != 0)
	{
		c += a;
		c1 += 1;
		cin >> a;
	}
	cout << setprecision(11) << fixed;
	cout << c / c1;
}


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n, c = 0;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            c += 1;   
        }
    }
    cout << c;
}

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a;
	cin >> a;
	cout << (int)trunc(a*10)%10;
}



#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    int a, b;
    cout << "Введите размер массива: ";
    cin >> a;
    int* nums = new int[a];

    for (int i = 0; i < a; i++)
    {
        nums[i] = rand() % 100;
        cout << nums[i] << " ";
    }
    cout << "\n";
    cout << "Введите количество элементов, которое хотите добавить ";
    cin >> b;
    int* numss = new int[a+b];
    for (int i = 0; i < a; i++)
    {
        numss[i] = nums[i];
    }
    cout << "Введите элементы, которые хотите добавить: ";
    for (int i = a; i < a+b; i++)
    {
        cin >> numss[i];
        
    }
    for (int i = 0; i < a + b; i++)
    {
        cout << numss[i] << " ";
    }

    
}





// /*/ комментарий на весь код
/*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int a, k=0;
    cout << "Введите размер массива: ";
    cin >> a;
    int* arr = new int[5];
    cout << "Ваш массив: ";
    for (int i = 0; i < a; ++i)
    {
        arr[i] = rand() % 10;
        cout <<arr[i] << " ";
        k += sizeof(arr[i]);
       
    }
    cout << "\n";
    cout << "Размер массива: " << k / sizeof(int);
    cout << endl;
    cout << "Введите элемент, который хотите удалить: ";
    cin >> k;
    a--;
    for (int i = k - 1; i < a; i++) {
        arr[i] = arr[i + 1];
        
    }
    
    int c = 0;
    cout << "Измененный массив: ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
        c += sizeof(arr[i]);
    }

    cout << endl;
    cout << "Измененный массив имеет размер: " << c / sizeof(int);
    cout << endl;
    int dob;
    cout << "Введите количество элементов, которые хотите добавить в массив: ";
    cin >> dob;

    if (dob < 1)
    {
        cout << "ERROR" << endl;
        return 0;
    }

    int* arr2 = new int[a + dob];
    for (int i = 0; i < a; ++i)
    {
        arr2[i+dob] = arr[i];
    }

    cout << "Введите элементы, которые хотите добавить: ";
    for (int i = 0; i < dob; ++i)
    {
        cin >> arr2[i];
    }


    int j = 0;
    cout << "Список с добавленными элементами: ";

    for (int i = 0; i < a + dob; i++)
    {
        cout << arr2[i] << " ";
        j += sizeof(arr2[i]);
    }
    cout << endl;
    cout << "Измененный массив с добавленными значениями имеет размер: " << j / sizeof(int);
    delete[] arr;
    delete[] arr2;

    return 0;
}
/*/
// /*/ коментарии


/*/
#include <iostream>

using namespace std;
int main()
{
    int i = 2;
    for (i; i < 11; i+=2)
    {
        cout << i << endl;
    }


}
/*/

/*/
#include <iostream>
using namespace std;

void myFunction(int x = 5)
{
    int a;
    cin >> a;
    cout << x + a;
}

int main() {
    myFunction();
    return 0;
}
/*/




#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
    const int row = 3;
    const int col = 4;
    int arr[row][col];

    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10; 
        }
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                arr[i][j] += 1;
            }
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}














