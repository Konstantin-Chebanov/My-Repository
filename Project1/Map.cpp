#include<vector>
#include<cstdlib>
#include<ctime>
#include "Map.h"

using namespace std;

Map::Map(int seed)
{
    srand(seed);
}
Map::Map()
{
    srand(time(NULL));
}
void Map::generate(int x, int dx, int y, int dy)
{

    dx=rand()%(dx/2) + dx/2;
    dy=rand()%dy/2+dy/2;
    points.push_back(Point(x,y));
    points.push_back(Point(x,y+dy));
    points.push_back(Point(x+dx,y));
    points.push_back(Point(x+dx,y+dy));
    int size = points.size();
    for(int i=0;i<size;i++)
    {       gen(points[i].x,points[i].y,dx/2,dy/2);
    }

}

void Map::gen(int x0, int y0, int dx, int dy)
{
    int decision=rand()%2;
    
    

}