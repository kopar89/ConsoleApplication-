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

#include <iostream>
using namespace std;

int global = 100;
int myFunc() {
    return global - 2;
}

int main() {
    cout << myFunc();
    return 0;
}/*/

/*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int data[] = { 2020, 2021, 2022, 2023, 2024 };
    for (int i = 0; i < sizeof(data) / sizeof(int); i++)
        cout << data[i] << endl;
}/*/
/*/
#include <iostream>
using namespace std;
int main() {
    int y, x;
    cin >> x >> y;
    while (x != y) 
    {
        if (x > y) 
        {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    cout << x;
}/*/

/*/
#include <iostream>
#include <cmath>

using namespace std;

int a, b, c;
bool intinput = true;

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

double F(int x, int a, int b, int c) {
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

    if (a != int(a) || b != int(b) || c != int(c)) {
        intinput = false;
    }

    cout << "Введите интервал [x_start, x_end] и шаг dx: ";
    cin >> x_start >> x_end >> dx;

    cout << "Значения функции F(x) на интервале [" << x_start << ", " << x_end << "] с шагом " << dx << ":\n";
    if (intinput) {
        for (double x = x_start; x <= x_end; x += dx) {
            double result = F(x, a, b, c);
            cout << "F(" << x << ") = " << result << endl;
        }
    }
    else {
        for (int x = x_start; x <= x_end; x += dx) {
            int result = F(x, int(a), int(b), int(c));
            cout << "F(" << x << ") = " << result << endl;
        }
    }

    return 0;
}/*/

/*/
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    for (int i = 1; i < 14; ++i)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;;
            cout << "Бип!!" << endl;
 
        }
        cout << i;
        cout << endl;
    }
    return 0;
}
/*/



/*/

#include <iostream>
using namespace std;

class Human {
public:
    int age;
    int staj;
    string name;

    Human() {
        age = 0;
        name = "";
    }

    Human(int a, int b, string n) {
        age = a;
        staj = b;
        name = n;
    }

    ~Human()
    {
        cout << "Human " << name << " удалён" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    Human first;
    first.age = 25;
    first.staj = 2;
    first.name = "Алексей";
    cout << "Имя: " << first.name << endl;
    cout << "Возраст: " << first.age << " лет" << endl;
    cout << "Стаж: " << first.staj << " года" << endl;

    Human second(30, 7, "Михаил");
    cout << "\nИмя: " << second.name << endl;
    cout << "Возраст: " << second.age << " лет" << endl;
    cout << "Стаж: " << second.staj << " лет" << endl;
    cout << endl;
    return 0;
}
/*/



/*/
#include <iostream>
using namespace std;

class Rectangle {
public:
    double a, b;
    double area()
    {
        double c = a * b;
        return c;
    };
};

int main() {
    Rectangle r1;
    r1.a = 5;
    r1.b = 0.5;
    cout << r1.area() << endl;
    return 0;
}/*/




/*/

#include <iostream>
#include <string>
using namespace std;
class Human {


public:

    int age;

    int staj;

    string name;
    Human() {
        age = 0;
        name = "";
        cout << "Конструктор по умолчанию вызван для объекта " << endl;
        cout << endl;
    }

    Human(int a, int b, string n) {
        cout << "Конструктор с аргументами вызван для объекта" << endl;
        age = a;
        staj = b;
        name = n;
        cout << endl;
    }

    ~Human()
    {
        cout << "Деструктор вызван для объектов " << endl;
        cout << "Human " << name << " удалён" << endl;
        cout << endl;
    }

    void setcord(int a, int b, string n)
    {
        age = a;
        staj = b;
        name = n;
    }

    int getA() { return age; }
    int getB() { return staj; }
    string getN() { return name; }

    void setAge(int a) { age = a; }
    void setStaj(int b) { staj = b; }
    void setName(string n) { name = n; }

};


int main() {

    setlocale(LC_ALL, "RUS");


    Human first;
    first.age = 25;
    first.staj = 2;
    first.name = "Алексей";
    cout << "Имя: " << first.name << endl;
    cout << "Возраст: " << first.age << " лет" << endl;
    cout << "Стаж: " << first.staj << " года" << endl;
    cout << endl;

 
    Human second(30, 7, "Михаил");
    cout << "\nИмя: " << second.name << endl;
    cout << "Возраст: " << second.age << " лет" << endl;
    cout << "Стаж: " << second.staj << " лет" << endl;
    cout << endl;


    Human last(27, 4, "Артём");
    cout << "\nИмя: " << last.getN() << endl;
    cout << "Возраст: " << last.getA() << " лет" << endl;
    cout << "Стаж: " << last.getB() << " лет" << endl;
    cout << endl;


    Human plo;
    plo.setAge(44);
    plo.setStaj(2);
    plo.setName("Борис");




    cout << endl;
    cout << "Динамическое выделение памяти ";
    cout << endl;
    int size;
    cout << "Введите количество служащих: ";
    cin >> size;
    int agee;
    int staje;
    string namee;
    int a;
    int b;
    string c;
    cout << "Введите возраст служащего: ";
    cin >> agee;
    cout << "Введите стаж служащего: ";
    cin >> staje;
    cout << "Введите имя служащего: ";
    cin >> namee;
    a = agee;
    b = staje;
    c = namee;

    Human* five = new Human[size];
    for (int i = 0; i < size; ++i)
    {
        five[i].age = a;
        five[i].staj = b;
        five[i].name = c;
        cout << "\nВозраст: " << five->getA() << endl;
        cout << "Стаж: " << five->getB() << " лет" << endl;
        cout << "Имя: " << five->getN() << endl;
        cout << "\n";
   
    }
    cout << "\n";





cout << endl;
return 0;
delete[] five;

}
/*/



/*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1 = 5;
    int* a = &a1;
    cout << a;
}/*/


/*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c;
    string text;
    cin >>  text;
    c = text.length();
    for (int i = c; i > -1; i--)
    {
        cout << text[i];
    }
}
/*/
/*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string love;
    cin >> love;
    love.insert(0, "I love you, ");
    love.append("!");
    cout << love;
}/*/


/*/
#include <iostream>
using namespace std;
int fuck(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int main()
{
    cout << fuck(1, 3);
}/*/

/*/
#include <iostream>
using namespace std;
int area(int a = 2, int b = 5)
{
    return a * b;
}
int main()
{
    cout << area();
}/*/

/*/
#include <iostream>
using namespace std;

void stars()
{
    for (int i = 0; i < 7; i++)
    {
        cout << "*";
    }
    cout << endl;
}

void body()
{
    cout << "*     *" << endl;
}

int main()
{
    stars();
    for (int i = 0; i < 3; i++)
    {
        body();
    }
    stars();
    return 0;
}/*/

/*/
#include <iostream>
using namespace std;
float to_cls(float a, float b = 5.0 / 9.0)
{
    return (a - 32) * b;
}

int main()
{
    float a;
    cin >> a;
    cout << to_cls(a);
}/*/

/*/
#include <iostream>
using namespace std;
void day()
{
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int num;
    cin >> num;
    for (int i = 0; i < 12; i++)
    {
    }
    cout << days[num - 1] << " ";
    cout << endl;
}
int main()
{
    day();
}/*/


/*/
#include <iostream>

void draw_rect(int width, int height) {
    // Print the top border
    for (int i = 0; i < width; i++) {
        std::cout << "#";
    }
    std::cout << std::endl;

    // Print the sides
    for (int i = 0; i < height - 2; i++) {
        std::cout << "#";
        for (int j = 0; j < width - 2; j++) {
            std::cout << " ";
        }
        std::cout << "#" << std::endl;
    }

    // Print the bottom border
    for (int i = 0; i < width; i++) {
        std::cout << "#";
    }
    std::cout << std::endl;
}

int main() {
    int width, height;
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> width >> height;
    draw_rect(width, height);
    return 0;
}/*/



/*/
#include <iostream>
using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int num;
    cin >> num;

    if (is_prime(num))
    {
        cout << "ДА";
    }
    else
    {
        cout << "НЕТ";
    }
}/*/


/*/
#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count += arr[i];
    }
    return count;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    cout << "Сколько элементов хочешь добавить в массив ? ";
    cin >> a;
    int* arr = new int[a];;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
       
    }
    int size = a;
    cout << "Массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Сумма элементов в массиве равна: " << sum(arr, size);
}/*/



/*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int sum(int a, int b)
{
    cout << "___Function activated!___" << endl;
    return a + b;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int num;
    cout << "Введите количество элементов в списке ";
    cin >> num;
    srand(time(0));
    int* arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() % 100;
        cout << "|" << arr[i] << "|" << " ";
    }
    cout << endl;
    cout << "Список хранится в этой ячейке памяти -> " <<"|" << arr << "|" << "\n";
    cout << "Output function -> " << sum(2, 2) << "\n";
    delete[] arr;
}
/*/

/*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int age;
    int cash;
    cin >> age >> cash;
    if (age <= 6 || cash >= 300)
    {
        cout << "ДА";
    }
    else
        cout << "НЕТ";
}/*/


/*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int number;
    cin >> number;
    if(number >= 100 && number < 1000)
    {
        cout << "ДА";
    }
    else
        cout << "НЕТ";

}/*/

/*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "ДА";
}
    else
        cout << "НЕТ";
}/*/

/*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int win1, win2;
    cin >> win1 >> win2;
    if(win1 > win2)
    {
        cout << "Победит Деннис";
    }
    else if (win1 < win2) {
        cout << "Победит Бьёрн";
    }
    else if (win1 = win2) {
        cout << "Победит дружба";
    }
}/*/


/*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int win1, win2;
    cin >> win1 >> win2;
    if (win1 > win2)
    {
        cout << "Скорость быстрейшего бегуна: " << win1;
    }
    else if (win1 < win2) {
        cout << "Скорость быстрейшего бегуна: " << win2;
    }
    else if (win1 = win2) {
        cout << "Скорость быстрейшего бегуна: " << win1;
    }
}/*/


/*/
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, next;
    cout << a << " " << b << " ";
    for (int i = 2; i < 30; i++)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}/*/

/*/
#include <iostream>
using namespace std;

int power(float a, int n)
{
    return pow(a, n);
}

int main()
{
    float a;
    int n;
    cin >> a >> n;
    float result = power(a, n);
    cout << result << endl;
    return 0;
}/*/

/*/

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
#define N 10
struct Student
{
    string last_name_andio;
    string group_number;
    float ball[5];
};

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student students[N];
    cout << "Введите фамилии и инициалы студентов: " << "\n";
    for (int i = 0; i < N; i++) {
        getline(cin, students[i].last_name_andio);
    }
    cout << "Введите группы студентов: " << "\n";

    for (int i = 0; i < N; i++) {
        getline(cin, students[i].group_number);
    }

    for (int i = 0; i < N; i++) {
        cout << "Введите баллы для студента " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].ball[j];
        if (students[i].ball[j] == 2) {
                cout << "Студент с фамилией и инициалами " << students[i].last_name_andio << " имеет оценку 2.\n";
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << "Фамилия и инициалы: " << students[i].last_name_andio << "\n";
        cout << "Группа: " << students[i].group_number << "\n";
        cout << "Баллы: ";
        for (int j = 0; j < 5; j++) {
            cout << students[i].ball[j] << " ";
        }
        cout << "\n\n";
    }

    return 0;
}/*/



/*/
#include <iostream>
using namespace std;

struct Student
{
    int id;
    float mark;
};

int main()
{
    Student s1 = {1214, 3.5};
    cout << "id = " << s1.id << "\n";
    cout << "mark = " << s1.mark;

    return 0;
}/*/


/*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
#define N 10
struct Student
{
    string last_name_andio;
    string group_number;
    float ball[5];
};

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student students[N];
    cout << "Введите фамилии и инициалы студентов: " << "\n";
    for (int i = 0; i < N; i++) {
        getline(cin, students[i].last_name_andio);
    }

    cout << "Введите группы студентов: " << "\n";

    for (int i = 0; i < N; i++) {
        getline(cin, students[i].group_number);
    }

    cout << "Отсортированная таблица со списком студентов" << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (students[j].last_name_andio[0] > students[j + 1].last_name_andio[0])
            {
                swap(students[j].last_name_andio, students[j + 1].last_name_andio);
            }
        }
    }


    for (int i = 0; i < N; i++)
    {
        cout << students[i].last_name_andio << " группа:" << students[i].group_number << "\n" << "\n";
    }


    for (int i = 0; i < N; i++) {
        cout << "Введите баллы для студента " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].ball[j];
        }
    }


    for (int i = 0; i < N; i++) {
        cout << "Фамилия и инициалы: " << students[i].last_name_andio << "\n";
        cout << "Группа: " << students[i].group_number << "\n";
        cout << "Оценки: ";
        bool grade = false;
        for (int j = 0; j < 5; j++) {
            cout << students[i].ball[j] << " ";
            if (students[i].ball[j] == 2)
            {
                grade = true;
            }
        }
        cout << "\n";
        if (grade)
        {
            cout << "Студент с фамилией и инициалами " << students[i].last_name_andio << " имеет оценку 2.\n";
        }
        else {
            cout << "У студента " << students[i].last_name_andio << " отсутствуют неудовлетворительные оценки.\n";
        }
        cout << "\n\n";
    }
    return 777;
}/*/


#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

#define N 10
struct Student
{
    string last_name_andio;
    string group_number;
    float ball[5];
};


int main()
{
    setlocale(LC_ALL, "RUS");
    ofstream f("ff.txt"); // Open the file directly in the constructor
    if (!f.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student students[N];
    cout << "Введите фамилии и инициалы студентов: " << "\n";
    for (int i = 0; i < N; i++) {
        getline(cin, students[i].last_name_andio);
    }

    cout << "Введите группы студентов: " << "\n";

    for (int i = 0; i < N; i++) {
        getline(cin, students[i].group_number);
    }

    cout << "Отсортированная таблица со списком студентов" << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (students[j].last_name_andio[0] > students[j + 1].last_name_andio[0])
            {
                swap(students[j].last_name_andio, students[j + 1].last_name_andio);
            }
        }
    }





    for (int i = 0; i < N; i++) {
        cout << "Введите баллы для студента " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].ball[j];
        }
    }


    for (int i = 0; i < N; i++) {
        cout << "Фамилия и инициалы: " << students[i].last_name_andio << "\n";

        cout << "Группа: " << students[i].group_number << "\n";

        cout << "Оценки: ";
        bool grade = false;
        for (int j = 0; j < 5; j++) {
            cout << students[i].ball[j] << " ";
            if (students[i].ball[j] == 2)
            {
                grade = true;
            }
        }
        cout << "\n";
        if (grade)
        {
            cout << "Студент с фамилией и инициалами " << students[i].last_name_andio << " имеет оценку 2.\n";
            cout << students[i].last_name_andio << endl;
        }
        else {
            cout << "У студента " << students[i].last_name_andio << " отсутствуют неудовлетворительные оценки.\n";
            cout << students[i].last_name_andio << endl;
        }
        cout << "\n\n";
    }



    string word;
    int count;
    cout << "Хотите ли вы осуществить ввод с клавиатуры? " << "Свой ответ записать как Yes or No" << endl;
    cin >> word;
    if (word == "yes" || word == "Yes" || word == "YES")
    {
        cout << "Сколько данных вы хотите ввести с клавиатуры?" << endl;
        cin >> count;
        cout << "Вводите данные" << endl;
        for (int i = 0; i < count; i++)
        {
            string alf;
            cin >> alf;
            f << alf << endl; 
            f << "Отсортированная таблица со списком студентов" << "\n";
            for (int i = 0; i < N; i++) {
                f << "Фамилия и инициалы: " << students[i].last_name_andio << "\n";

                f << "Группа: " << students[i].group_number << "\n";

                f << "Оценки: ";
                bool grade = false;
                for (int j = 0; j < 5; j++) {
                    cout << students[i].ball[j] << " ";
                    if (students[i].ball[j] == 2)
                    {
                        grade = true;
                    }
                }
                cout << "\n";
                if (grade)
                {
                    f << "Студент с фамилией и инициалами " << students[i].last_name_andio << " имеет оценку 2.\n";
                    f << students[i].last_name_andio << endl;
                }
                else {
                    f << "У студента " << students[i].last_name_andio << " отсутствуют неудовлетворительные оценки.\n";
                    f << students[i].last_name_andio << endl;
                }
                cout << "\n\n";
            }
        }

    }
    else {

        cout << "Файл не будет обнавлен данными" << endl;
    }
    ifstream in("ff.txt");
    if (!in.is_open()) {
        cout << "Failed to open the file for reading." << endl;
        return 1;
    }


    cout << "Содержимое файла:" << endl;
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();

    f.close();
    return 0;
}



