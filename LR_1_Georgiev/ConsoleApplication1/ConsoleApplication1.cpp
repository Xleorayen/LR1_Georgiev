#include "pch.h"
#include <Windows.h>


using namespace System;
using namespace System::Text;

int main(array<System::String ^> ^args){
    // Для відображення укр. символів у консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Console::WriteLine(L"Завдання 1");
    // Створюємо додатковий клас для роботи с рядками
    StringBuilder^ str1 = gcnew StringBuilder("Some text");
    str1->Insert(0, "begin");
    str1->Insert(str1->Length, "end");
    Console::WriteLine(str1);
    Console::WriteLine(L"Довжина рядка - {0}", str1->Length);

    Console::WriteLine(L"Завдання 2");
    String^ str2(L"Сделал дело - гуляй смело");
    Console::Write(L"Вкажіть символ: ");
    String^ symbol = Console::ReadLine();
    if (symbol->Length == 1)
    {
        int index_str(0);
        int count(0);
        while ((index_str = str2->ToLower()->IndexOf(symbol->ToLower(), index_str)) >= 0) {
            index_str++;
            count++;
        }
        Console::WriteLine(L"Символ '{0}' було знайдено {1} разів", symbol, count);
    }
    else
    {
        Console::WriteLine(L"Помилка\nВведено неправильне значення. Програма буде закрита");
        exit;
    }
    return 0;
}
