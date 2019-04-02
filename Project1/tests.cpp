#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include "numbers.h";
using namespace	std;
#ifdef TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_suite1)


BOOST_AUTO_TEST_CASE(test_case1){
	string s= "Hi!!!";
	BOOST_TEST(stringfromint(0)==string("����"));
	BOOST_TEST(stringfromint(1)==string("����"));
	BOOST_TEST(stringfromint(2)==string("���"));
	BOOST_TEST(stringfromint(3)==string("���"));
	BOOST_TEST(stringfromint(4)==string("������"));
	BOOST_TEST(stringfromint(5)==string("����"));
	BOOST_TEST(stringfromint(6)==string("�����"));
	BOOST_TEST(stringfromint(7)==string("����"));
	BOOST_TEST(stringfromint(8)==string("������"));
	BOOST_TEST(stringfromint(9)==string("������"));
	BOOST_TEST(stringfromint(10)==string("������"));
	BOOST_TEST(stringfromint(11)==string("�����������"));
	BOOST_TEST(stringfromint(12)==string("����������"));
	BOOST_TEST(stringfromint(13)==string("����������"));
	BOOST_TEST(stringfromint(14)==string("������������"));
	BOOST_TEST(stringfromint(15)==string("����������"));
	BOOST_TEST(stringfromint(16)==string("�����������"));
	BOOST_TEST(stringfromint(17)==string("����������"));
	BOOST_TEST(stringfromint(18)==string("������������"));
	BOOST_TEST(stringfromint(19)==string("������������"));
}


BOOST_AUTO_TEST_CASE(less100){
	
	BOOST_TEST(number_less_100_to_string(15) == string("����������"));
	BOOST_TEST(number_less_100_to_string(20)==string("��������"));
	BOOST_TEST(number_less_100_to_string(31)==string("�������� ����"));
	BOOST_TEST(number_less_100_to_string(45)==string("����� ����"));
	BOOST_TEST(number_less_100_to_string(53)==string("��������� ���"));
	BOOST_TEST(number_less_100_to_string(60)==string("����������"));
	BOOST_TEST(number_less_100_to_string(76)==string("��������� �����"));
	BOOST_TEST(number_less_100_to_string(88)==string("����������� ������"));
	BOOST_TEST(number_less_100_to_string(92)==string("��������� ���"));
}
BOOST_AUTO_TEST_CASE(less1000){
	
	BOOST_TEST(number_less_1000_to_string(3) == string("���"));
	BOOST_TEST(number_less_1000_to_string(25) == string("�������� ����"));
	BOOST_TEST(number_less_1000_to_string(105) == string("��� ����"));
	BOOST_TEST(number_less_1000_to_string(236) == string("������ �������� �����"));
	BOOST_TEST(number_less_1000_to_string(347) == string("������ ����� ����"));
	BOOST_TEST(number_less_1000_to_string(491)==string("��������� ��������� ����"));
	BOOST_TEST(number_less_1000_to_string(551)==string("������� ��������� ����"));
	BOOST_TEST(number_less_1000_to_string(650)==string("�������� ���������"));
	BOOST_TEST(number_less_1000_to_string(703)==string("������� ���"));
	BOOST_TEST(number_less_1000_to_string(800)==string("���������"));
    BOOST_TEST(number_less_1000_to_string(919)==string("��������� ������������"));
}

BOOST_AUTO_TEST_CASE(objects_to_string){
	
	BOOST_TEST(object_to_string(19, "�����", "�����", "������")=="������������ ������");
	BOOST_TEST(object_to_string(25, "�����", "�����", "�����")=="�������� ���� �����");
    BOOST_TEST(object_to_string(1, "�����", "�������", "�������")=="���� �����");
    BOOST_TEST(object_to_string(3, "����", "�����", "������")=="��� �����");
	BOOST_TEST(object_to_string(7, "����", "����", "�����") == "���� �����");
	BOOST_TEST(object_to_string(11, "�������", "��������", "���������") == "����������� ���������");
	BOOST_TEST(object_to_string(12, "�����", "�����", "������") == "���������� ������");
	BOOST_TEST(object_to_string(16, "�������", "��������", "���������") == "����������� ���������");
	BOOST_TEST(object_to_string(43, "����", "�����", "����") == "����� ��� �����");
	BOOST_TEST(object_to_string(50, "�����", "������", "�������") == "��������� �������");
	BOOST_TEST(object_to_string(58, "�����", "������", "�������") == "��������� ������ �������");


	
}

BOOST_AUTO_TEST_CASE(currencys_to_string){
	
	BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 73, "�������", "�������", "������")=="�������� ���� ������, ��������� ��� �������");
    BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 0, "�������", "�������", "������")=="�������� ���� ������, ���� ������");
	 BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 2, "�������", "�������", "������")=="�������� ���� ������, ��� �������");
	 BOOST_TEST(currency_to_string(47, "������", "�������", "��������", 6, "����", "�����", "������") == "����� ���� ��������, ����� ������");
}






BOOST_AUTO_TEST_SUITE_END()
#endif