#include<string>

using namespace std;

string stringfromint(int num){
	string s;
	switch(num)
	{
	case 0:
			 s="����";
		 break;
	case 1:
			 s="����";
		 break;
	case 2:
			 s="���";
		 break;
	case 3:
			 s="���";
		 break;
	case 4:
			 s="������";
		 break;
	case 5:
			 s="����";
		 break;
	case 6:
			 s="�����";
		 break;
	case 7:
			 s="����";
		 break;
	case 8:
			 s="������";
		 break;
	case 9:
			s="������"; 
		 break;
	case 10:
			 s="������";
		 break;
	case 11:
			 s="�����������";
		 break;
	case 12:
			 s="����������";
		 break;
	case 13:
			 s="����������";
		 break;
	case 14:
			 s="������������";
		 break;
	case 15:
			 s="����������";
		 break;
	case 16:
			 s="�����������";
		 break;
	case 17:
		s="����������";	 
		 break;
	case 18:
		s="������������";	 
		 break;
	case 19:
		s="������������";
		 break;

	default:
		s="Wrong num";
		break;

	}	
	return s;
}	