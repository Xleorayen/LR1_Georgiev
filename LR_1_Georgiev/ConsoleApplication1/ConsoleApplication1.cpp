#include "pch.h"
#include <Windows.h>


using namespace System;
using namespace System::Text;

int main(array<System::String ^> ^args){
    // ��� ����������� ���. ������� � ������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Console::WriteLine(L"�������� 1");
    // ��������� ���������� ���� ��� ������ � �������
    StringBuilder^ str1 = gcnew StringBuilder("Some text");
    str1->Insert(0, "begin");
    str1->Insert(str1->Length, "end");
    Console::WriteLine(str1);
    Console::WriteLine(L"������� ����� - {0}", str1->Length);

    Console::WriteLine(L"�������� 2");
    String^ str2(L"������ ���� - ����� �����");
    Console::Write(L"������ ������: ");
    String^ symbol = Console::ReadLine();
    if (symbol->Length == 1)
    {
        int index_str(0);
        int count(0);
        while ((index_str = str2->ToLower()->IndexOf(symbol->ToLower(), index_str)) >= 0) {
            index_str++;
            count++;
        }
        Console::WriteLine(L"������ '{0}' ���� �������� {1} ����", symbol, count);
    }
    else
    {
        Console::WriteLine(L"�������\n������� ����������� ��������. �������� ���� �������");
        exit;
    }
    return 0;
}
