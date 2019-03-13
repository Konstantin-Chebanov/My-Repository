#include<vector>
using namespace std;

struct Point
{
    int x;
    int y;
    Point(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
};


class Map
{
public:
    vector<Point> points;
    Map();
    Map(int seed);
    void generate(int x, int dx, int y, int dy);
    void gen(int x0, int y0, int dx, int dy );
    ~Map();
};