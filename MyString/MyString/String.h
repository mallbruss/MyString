#pragma once
class String
{
private:
	char* str;
	int n;
public:
	String();
	String(const String& s);
	String(char* s);
	String(const char* s);
};

//��������� ������ ������ � cpp �����, ������� �� ����� ������ � �������
//� ��� � �������� ������ ������ 