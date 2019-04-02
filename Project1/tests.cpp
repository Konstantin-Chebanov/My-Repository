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
	
	BOOST_TEST(number_less_100_to_string(15) == string("пятнадцать"));
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
	
	BOOST_TEST(number_less_1000_to_string(3) == string("три"));
	BOOST_TEST(number_less_1000_to_string(25) == string("двадцать пять"));
	BOOST_TEST(number_less_1000_to_string(105) == string("сто пять"));
	BOOST_TEST(number_less_1000_to_string(236) == string("двести тридцать шесть"));
	BOOST_TEST(number_less_1000_to_string(347) == string("триста сорок семь"));
	BOOST_TEST(number_less_1000_to_string(491)==string("четыреста девяносто один"));
	BOOST_TEST(number_less_1000_to_string(551)==string("пятьсот пятьдесят один"));
	BOOST_TEST(number_less_1000_to_string(650)==string("шестьсот пятьдесят"));
	BOOST_TEST(number_less_1000_to_string(703)==string("семьсот три"));
	BOOST_TEST(number_less_1000_to_string(800)==string("восемьсот"));
    BOOST_TEST(number_less_1000_to_string(919)==string("девятьсот девятнадцать"));
}

BOOST_AUTO_TEST_CASE(objects_to_string){
	
	BOOST_TEST(object_to_string(19, "рубль", "рубля", "рублей")=="девятнадцать рублей");
	BOOST_TEST(object_to_string(25, "ручка", "ручки", "ручек")=="двадцать пять ручек");
    BOOST_TEST(object_to_string(1, "набор", "наобора", "наборов")=="один набор");
    BOOST_TEST(object_to_string(3, "стол", "стола", "столов")=="три стола");
	BOOST_TEST(object_to_string(7, "руль", "руля", "рулей") == "семь рулей");
	BOOST_TEST(object_to_string(11, "монитор", "монитора", "мониторов") == "одиннадцать мониторов");
	BOOST_TEST(object_to_string(12, "ковер", "ковра", "ковров") == "двенадцать ковров");
	BOOST_TEST(object_to_string(16, "телефон", "телефона", "телефонов") == "шестнадцать телефонов");
	BOOST_TEST(object_to_string(43, "глаз", "глаза", "глаз") == "сорок три глаза");
	BOOST_TEST(object_to_string(50, "вагон", "вагона", "вагонов") == "пятьдесят вагонов");
	BOOST_TEST(object_to_string(58, "вагон", "вагона", "вагонов") == "пятьдесят восемь вагонов");


	
}

BOOST_AUTO_TEST_CASE(currencys_to_string){
	
	BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек")=="двадцать пять рублей, семьдесят три копейки");
    BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 0, "копейка", "копейки", "копеек")=="двадцать пять рублей, нуль копеек");
	 BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 2, "копейка", "копейки", "копеек")=="двадцать пять рублей, два копейки");
	 BOOST_TEST(currency_to_string(47, "доллар", "доллара", "долларов", 6, "цент", "цента", "центов") == "сорок семь долларов, шесть центов");
}






BOOST_AUTO_TEST_SUITE_END()
#endif