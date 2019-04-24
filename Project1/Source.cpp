#ifndef TEST
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include "numbers.h";
#include "Map.h";
using namespace	std;
int main(){
//cout<<"HELLO WORLD";
    srand(time(0));
    vector<Point> vec=generate_points_in_square(13,14.522);
    for(int i=0;i<vec.size();i++)
        cout<<vec[i].x<<" "<<vec[i].y<<endl;
    
    
  
_getch();
}

#endif