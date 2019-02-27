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
	
	
	BOOST_TEST(number_less_1000_to_string(203)==string("������ ���"));
	BOOST_TEST(number_less_1000_to_string(651)==string("�������� ��������� ����"));
	BOOST_TEST(number_less_1000_to_string(450)==string("��������� ���������"));
	BOOST_TEST(number_less_1000_to_string(400)==string("���������"));
	BOOST_TEST(number_less_1000_to_string(100)==string("���"));
}

BOOST_AUTO_TEST_SUITE_END()
#endif