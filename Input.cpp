Hello MY WORLD
=======
Hello CR7
olololololol
>>>>>>> fd1a963001cd03d4d2293cc482227f69308da390
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

