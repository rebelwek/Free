Hello MY WORLD
=======
Hello CR7
olololololol
>>>>>>> fd1a963001cd03d4d2293cc482227f69308da390
// Реализация корректного потокового ввода любых вещественных базовых данных
#include "Input.h"

int CheckFlt(double t)// Проверка диапазона для вещественных данных
{
 if (fabs(t)>FLT_MAX)
  {
   cout << "!!!!!!!! ПРЕВЫШЕН допустимый диапазон !!!!!!!!\n";
   cout << "Значение должно быть от "
        << -FLT_MIN << " до "<< FLT_MAX << endl;
   return 1;
   }
 return 0;
}

