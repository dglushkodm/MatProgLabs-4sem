#pragma once
#include "Combi2.h"
#include "Combi3.h"
namespace combi4
{
    struct  accomodation  // ��������� ���������� 
    {
        short  n,      // ���������� ��������� ��������� ���������  
            m,      // ���������� ��������� � ���������� 
            * sset;      // ������ ������� �������� ����������  
        combi2::xcombination* cgen;   // ��������� �� ��������� ���������
        combi3::permutation* pgen;   // ��������� �� ��������� ������������
        accomodation(short n = 1, short m = 1);  // �����������  
        void reset();     // �������� ���������, ������ ������� 
        short getfirst();     // ������������ ������ ������ ��������   
        short getnext();      // ������������ ��������� ������ ��������  
        short ntx(short i);   // �������� i-� ������� ������� ��������  
        unsigned __int64 na;  // ����� ���������� 0, ..., count()-1 
        unsigned __int64 count() const;  // ����� ���������� ���������� 
    };
}
