#include<vector>
#include<cstdlib>
#include<iostream>
#include<ctime>
#include "Map.h"

using namespace std;

double Rand_Double_Square (double Limit)
{
    double d = static_cast<double>(rand()) / RAND_MAX;
    double ans=d*Limit;
    return ans;
    }

 bool Is_Point_Already_In_Vector(Point point,vector<Point> vec)
 {
     for(int i=0;i<vec.size();i++)
     {
         if(vec[i].x == point.x && vec[i].y==point.y)
             return true;
     }
     return false;
 }




vector<Point> generate_points_in_square(int n , double a)
{
    vector<Point> vec;
    while(vec.size()<n)
    {
        Point p(Rand_Double_Square(a),Rand_Double_Square(a));
        if(!Is_Point_Already_In_Vector(p,vec))
        vec.push_back(p);
    }

    return vec;
}
