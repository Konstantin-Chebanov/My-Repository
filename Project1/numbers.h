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

string number_less_100_to_string(int number)
{
    string answer = "";
	int remain = number%10;
	int tens =number-remain;
	switch(tens)
	{
	case 20:
		answer+="двадцать";
		break;
	case 30:
		answer+="тридцать";
		break;
	case 40:
		answer+="сорок";
		break;
	case 50:
		answer+="пятьдесят";
		break;
	case 60:
		answer+="шестьдесят";
		break;
	case 70:
		answer+="семьдесят";
		break;
	case 80:
		answer+="восемьдесят";
		break;
	case 90:
		answer+="девяносто";
		break;
	default:
		break;
	}
	if(remain!=0)
		answer+=" "+stringfromint(remain);
	return answer;
}


string number_less_1000_to_string(int number)
{
    string answer = "";
	int remain = number%100;
	int hundreds =number-remain;
	switch(hundreds)
	{
	case 100:
		answer+="сто";
		break;
	case 200:
		answer+="двести";
		break;
	case 300:
		answer+="тристо";
		break;
	case 400:
		answer+="четыреста";
		break;
	case 500:
		answer+="пятьсот";
		break;
	case 600:
		answer+="шестьсот";
		break;
	case 700:
		answer+="семьсот";
		break;
	case 800:
		answer+="восемьсот";
		break;
	case 900:
		answer+="девятьсот";
		break;
	default:
		
		break;
	}
	if(remain!=0)
		answer+=" "+number_less_100_to_string(remain);
	return answer;
}
