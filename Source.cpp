#include "Source.h"


using namespace std;

// ������� ������� �������� ��������� � ����� ������������ �� ������� �������.



int main() {

    setlocale(LC_ALL, "ru");

    int x, y;
    int x1, y1, b1, x2, y2, b2;
    float detA, detX, detY;

    //���� ������   
    inputData(x1,"x1" ,y1,"y1" ,b1,"b1");//���������� ��� �����, �� �������� ��� ������ �� �������
    inputData(x2, "x2", y2, "y2", b2, "b2");
  //computeDet();
   
   

//������ ������������

    detA = getDet(x1,x2,y1,y2);//�������� ������������ � ��������� �������
    if (detA == 0) 
    {
        cout << "������� �� ����� �������." << endl;
    }
    else
    {
        detX = getDet(b1, b2, y1, y2);
        detY = getDet(x1, x2, b1, b2);


        x = detX / detA;
        y = detY / detA;


        cout << "detA = " << detA << " ";//�������� �������� ������, ����� 1 ����������� ����� ��������� ��������� - ���������
        cout << "detX = " << detX << " ";//
        cout << "detY = " << detY << endl;//
        cout << "x = " << x << endl;
        cout << "y = " << y;
        cout << endl;

        outputData(detA, "detA", detX, "detX", detY, "detY");
    }// computeDet �����======
        return 0;
}

//������������� ������� (������� ��� �������)

void inputData(int& var_x1,const char* str_x1, int& var_y1, const char* str_y1, int& var_b1,
    const char* str_b1)
{
    cout << "������� " << str_x1 << ": ";
    cin >> var_x1;
    cout << "������� " << str_y1 << ": ";
    cin >> var_y1;
    cout << "������� " << str_b1 << ": ";
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
1. ��������� � �������
2. ������������ �����������(��������) ��������� (������������ ���������� �������)
�.��������� ���������:
���� ������ 4
����� ������ �� �������
� ������

�. ����������� � ������� ��� ��������
���� �������������
����� �� �������
������ ������������
������ ����������
�������� �������

������� � ���:
������ - ��� ���������� ������� ��������
����������:
    ���� ��� �������� ������ members
 � ����������
    ������ ������
������� ����������
23+32
2x^2+2x+2

*/
//������ ����������� ����� ���������� � ������

//���������� ������� (����������)