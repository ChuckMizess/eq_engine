#include "Source.h"


using namespace std;

// Решение системы линейных уравнений с двумя неизвестными по теореме Крамера.



int main() {

    setlocale(LC_ALL, "ru");

    int x, y;
    int x1, y1, b1, x2, y2, b2;
    float detA, detX, detY;

    //ввод данных   
    inputData(x1,"x1" ,y1,"y1" ,b1,"b1");//переменная для ввода, ее название для вывода на консоль
    inputData(x2, "x2", y2, "y2", b2, "b2");
  //computeDet();
   
   

//расчет детерминанта

    detA = getDet(x1,x2,y1,y2);//завернем абстрагируем в отдельную функцию
    if (detA == 0) 
    {
        cout << "Система не имеет решений." << endl;
    }
    else
    {
        detX = getDet(b1, b2, y1, y2);
        detY = getDet(x1, x2, b1, b2);


        x = detX / detA;
        y = detY / detA;


        cout << "detA = " << detA << " ";//обернуть функцией вывода, будет 1 переменнаяс одним строковым литералом - названием
        cout << "detX = " << detX << " ";//
        cout << "detY = " << detY << endl;//
        cout << "x = " << x << endl;
        cout << "y = " << y;
        cout << endl;

        outputData(detA, "detA", detX, "detX", detY, "detY");
    }// computeDet конец======
        return 0;
}

//имплементация методов (задание тел методов)

void inputData(int& var_x1,const char* str_x1, int& var_y1, const char* str_y1, int& var_b1,
    const char* str_b1)
{
    cout << "Введите " << str_x1 << ": ";
    cin >> var_x1;
    cout << "Введите " << str_y1 << ": ";
    cin >> var_y1;
    cout << "Введите " << str_b1 << ": ";
    cin >> var_b1;
}


double getDet(int& x1, int& x2, int& y1, int& y2)
{
    return (x1 * y2) - (x2 * y1);
}

void outputData(float& detA, const char* str_detA, float& detX, const char* str_detX, float& detY, const char* str_detY)
{
    cout << "detA = " << detA << " " << endl;
    cout << "detX = " << detX << " " << endl;
    cout << "detY = " << detY << " " << endl;
}


/* DOC
1. программа с логикой
2. декомпозиция функционала(действий) программы (декомпозиция предметной области)
а.разделяем поведение:
ввод данных 4
вывод данных на консоль
и расчет

б. оборачиваем в функции три действия
ввод коэффициентов
вывод на консоль
расчет детерминанта
вводим абстракции
пергузка функций

обернем в ооп:
объект - это обстракция которая обладает
состоянием:
    поля для хранения данных members
 и поведением
    методы класса
парсинг опреаторов
23+32
2x^2+2x+2

*/
//макрос конвертации имени переменной в строку

//декларация методов (объявление)