#include<string>

using namespace std;

string stringfromint(int num){
	string s;
	switch(num)
	{
	case 0:
			 s="нуль";
		 break;
	case 1:
			 s="один";
		 break;
	case 2:
			 s="два";
		 break;
	case 3:
			 s="три";
		 break;
	case 4:
			 s="четыре";
		 break;
	case 5:
			 s="пять";
		 break;
	case 6:
			 s="шесть";
		 break;
	case 7:
			 s="семь";
		 break;
	case 8:
			 s="восемь";
		 break;
	case 9:
			s="девять"; 
		 break;
	case 10:
			 s="десять";
		 break;
	case 11:
			 s="одиннадцать";
		 break;
	case 12:
			 s="двенадцать";
		 break;
	case 13:
			 s="тринадцать";
		 break;
	case 14:
			 s="четырнадцать";
		 break;
	case 15:
			 s="пятнадцать";
		 break;
	case 16:
			 s="шестнадцать";
		 break;
	case 17:
		s="семнадцать";	 
		 break;
	case 18:
		s="восемнадцать";	 
		 break;
	case 19:
		s="девятнадцать";
		 break;

	default:
		s="Wrong num";
		break;

	}	
	return s;
}	