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



#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{

    setlocale(LC_ALL, "RUS");

    int row;
    cout << "Введите SIZE: "; cin >> row;

    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
    }

    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 100; 
        }
    }

    cout << "Оригинальный массив";
    cout << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }


    cout << "Измененный массив" << endl;
    int c = 0;
    for (int i = 0; i < row; i++)
    {
        bool hasZero = false; 
        for (int j = 0; j < row; j++) 
        {
            cout << arr[j][i] << "\t";
            if (arr[j][i] == 0)
            {
                hasZero = true;
                break; 
            }
        }
        if (!hasZero)
        {
            c += 1; 
        }
        cout << endl;
    }

    cout << "Количество столбцов без нулей: " << c << endl;

    return 0;
    delete[] arr;
}





#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUS");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Массив: ";
    int c = arr[0];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > c)
        {
            c = arr[i];
        }
    }
    cout << "Максимальный элемент массива: " << c << "\n";
    int lol = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < lol)
        {
            lol = arr[i];
        }
    }
    cout << "Минимальный элемент массива: " << lol << "\n";
    delete[] arr;
    return 0;
}



/*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    const int rows = 3; 
    const int cols = 3;
    int arr[rows][cols];
    cout << "Оригинальный массив" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    cout << "Изменный массив" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((i == rows - 2 && j == cols - 2) || (i == rows - 1 && j == cols - 2) || (i == rows - 1 && j == cols - 3))
            {
                arr[i][j] = 1;
            }
            else 
            {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}/*/

/*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int j = 0;
    int arr[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        j += sizeof(arr[i]);
    }
    cout << "\n";
    cout << "Размер массива " << j / sizeof(int);
}/*/




/*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int row, col, nac, kon;
    cout << "Введите количество строк: ";
    cin >> row;
    cout << "Введите количество столбцов: ";
    cin >> col;
    cout << "Введите начало диапазона: ";
    cin >> nac;
    cout << "Введите конец диапазона: ";
    cin >> kon;

    srand(time(0));
    int** arr = new int* [row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Оригинальный массив" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = nac + rand() % (kon - nac + 1);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int c = 0;
    for (int i = 0; i < col; i++)
    {
        bool zero = false;
        for (int j = 0; j < row; j++)
        {
            if (arr[j][i] == 0)
            {
                zero = true;
                break;
            }
        }
        if (!zero)
        {
            c += 1;
        }
    }

    cout << "Количество столбцов без нулей: " << c << endl;

    int* sums = new int[col];

    for (int i = 0; i < row; i++)
    {
        int v = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > 0 && arr[i][j] % 2 == 0)
            {
                v += arr[i][j];
            }
        }
        sums[i] = v;
        cout <<  "Сумма элементов в " << i+1 << " строке равна: " << sums[i] << " " << endl;
    }

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col - i - 1; j++)
        {
            if (sums[j] > sums[j + 1])
            {
                swap(sums[j], sums[j + 1]);
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Отсортированный массив по сумме строк:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "Сумма: " << sums[i] << endl;
    }

    delete[] arr;
    delete[] sums;
    return 100;
}/*/


/*/
#include <iostream>
#include <cmath>

using namespace std;

double F(double x, double a, double b, double c) {
    if (x + 5 < 0 && x < 0) {
        return 1 / (a * x) - b;
    }
    else if (x + 5 > 0 && x < c && c < 0) {
        return (1 / x - a) / x;
    }
    else {
        return 10 * x / (c - 4);
    }
}

int main() {
    double a, b, c, x_start, x_end, dx;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значения a, b, c: ";
    cin >> a >> b >> c;

    cout << "Введите интервал [x_start, x_end] и шаг dx: ";
    cin >> x_start >> x_end >> dx;

    cout << "Значения функции F(x) на интервале [" << x_start << ", " << x_end << "] с шагом " << dx << ":\n";

    for (double x = x_start; x <= x_end; x += dx) {
        double result = F(x, a, b, c);
        cout << "F(" << x << ") = " << result << endl;
    }

    return 0;
}
/*/

/*/
#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
T F(T x, T a, T b, T c) {
    if (x + 5 < 0 && x < 0) {
        return 1 / (a * x) - b;
    }
    else if (x + 5 > 0 && x < c && c < 0) {
        return (1 / x - a) / x;
    }
    else {
        return 10 * x / (c - 4);
    }
}

int main() {
    double a, b, c, x_start, x_end, dx;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значения a, b, c: ";
    cin >> a >> b >> c;

    cout << "Введите интервал [x_start, x_end] и шаг dx: ";
    cin >> x_start >> x_end >> dx;

    cout << "Значения функции F(x) на интервале [" << x_start << ", " << x_end << "] с шагом " << dx << ":\n";

    for (double x = x_start; x <= x_end; x += dx) {
        double result = F(x, a, b, c);
        cout << "F(" << x << ") = " << result << endl;
    }

    return 0;
}
/*/





#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
void F(T& a, T& b) // & указатель на адрес памяти свайпаем не значения, а адреса
{
    swap(a, b);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    cout << "Введите значения a, b: ";
    cin >> a >> b;

    F(a, b);

    cout << a << " " << b << " ";

    return 0;
}




