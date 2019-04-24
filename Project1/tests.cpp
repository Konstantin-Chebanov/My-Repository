#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include "numbers.h";
#include "Map.h";
using namespace	std;
#ifdef TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>

bool Is_Point_In_Square(Point point,double a)
{
    if(point.x>=0.0 && point.x<=a && point.y>=0.0 && point.y<=a)
        return true;
    return false;
}

BOOST_AUTO_TEST_SUITE(test_suite1)

BOOST_AUTO_TEST_CASE(Points_In_Square)
{
    unsigned int seed=rand();
    srand(seed);
    double a=15.123;
    int n=123;
    vector<Point> vec=generate_points_in_square(n,a);
    for(int i=0;i<vec.size();i++)
    {
        BOOST_TEST(Is_Point_In_Square(vec[i],a));
    }

}

 

BOOST_AUTO_TEST_SUITE_END()
#endif