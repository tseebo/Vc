// W32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D.h"


// ���ǵ���������һ��ʾ��
W32D_API int nW32D=0;

// ���ǵ���������һ��ʾ����
W32D_API int fnW32D(void)
{
    return 42;
}
W32D_API int factorial(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s = s*i;
	}
	return s;
}

float FAC::convert(float deg) {

	float a;
	a = deg*3.14 / 180;
	return a;

}
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D.h
CW32D::CW32D()
{
    return;
}
