Hello world people
// ���������� ����������� ���������� ����� ����� ������������ ������� ������
#include "Input.h"

int CheckFlt(double t)// �������� ��������� ��� ������������ ������
{
 if (fabs(t)>FLT_MAX)
  {
   cout << "!!!!!!!! �������� ���������� �������� !!!!!!!!\n";
   cout << "�������� ������ ���� �� "
        << -FLT_MIN << " �� "<< FLT_MAX << endl;
   return 1;
   }
 return 0;
}

