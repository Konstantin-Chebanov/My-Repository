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
	BOOST_TEST(stringfromint(0)==string("нуль"));
	BOOST_TEST(stringfromint(1)==string("один"));
	BOOST_TEST(stringfromint(2)==string("два"));
	BOOST_TEST(stringfromint(3)==string("три"));
	BOOST_TEST(stringfromint(4)==string("четыре"));
	BOOST_TEST(stringfromint(5)==string("пять"));
	BOOST_TEST(stringfromint(6)==string("шесть"));
	BOOST_TEST(stringfromint(7)==string("семь"));
	BOOST_TEST(stringfromint(8)==string("восемь"));
	BOOST_TEST(stringfromint(9)==string("девять"));
	BOOST_TEST(stringfromint(10)==string("десять"));
	BOOST_TEST(stringfromint(11)==string("одиннадцать"));
	BOOST_TEST(stringfromint(12)==string("двенадцать"));
	BOOST_TEST(stringfromint(13)==string("тринадцать"));
	BOOST_TEST(stringfromint(14)==string("четырнадцать"));
	BOOST_TEST(stringfromint(15)==string("пятнадцать"));
	BOOST_TEST(stringfromint(16)==string("шестнадцать"));
	BOOST_TEST(stringfromint(17)==string("семнадцать"));
	BOOST_TEST(stringfromint(18)==string("восемнадцать"));
	BOOST_TEST(stringfromint(19)==string("девятнадцать"));
}


BOOST_AUTO_TEST_CASE(less100){
	
	
	BOOST_TEST(number_less_100_to_string(20)==string("двадцать"));
	BOOST_TEST(number_less_100_to_string(31)==string("тридцать один"));
	BOOST_TEST(number_less_100_to_string(45)==string("сорок пять"));
	BOOST_TEST(number_less_100_to_string(53)==string("пятьдесят три"));
	BOOST_TEST(number_less_100_to_string(60)==string("шестьдесят"));
	BOOST_TEST(number_less_100_to_string(76)==string("семьдесят шесть"));
	BOOST_TEST(number_less_100_to_string(88)==string("восемьдесят восемь"));
	BOOST_TEST(number_less_100_to_string(92)==string("девяносто два"));
}
BOOST_AUTO_TEST_CASE(less1000){
	
	
	BOOST_TEST(number_less_1000_to_string(203)==string("двести три"));
	BOOST_TEST(number_less_1000_to_string(651)==string("шестьсот пятьдесят один"));
	BOOST_TEST(number_less_1000_to_string(450)==string("четыреста пятьдесят"));
	BOOST_TEST(number_less_1000_to_string(400)==string("четыреста"));
	BOOST_TEST(number_less_1000_to_string(100)==string("сто"));
}

BOOST_AUTO_TEST_SUITE_END()
#endif