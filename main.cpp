#include <iostream>
using namespace std;

class Color 
{
private: 
    int red;
    int green;
    int blue;

    // setter functions
    public:
    Color()
    {
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int r, int g, int b)
    {
        red = r;
        green = g;
        blue = b;
    }

    Color(int r, int g)
    {
        red = r;
        green = g;
        blue = 0;
    }
    // setter functions
    void setRed(int r)
    {
        red = r;
    }
    void setGreen(int g)
    {
        green = g;
    }
    void setBlue(int b)
    {
        blue = b;
    }
    // getter functions
    int getRed()
    {
        return red;
    }
    int getGreen()
    {
        return green;
    }
    int getBlue()
    {
        return blue;
    }
    // print function
    void print()
    
        {
       cout << "Red: " << red
       << " Green: " << green
       << " Blue: " << blue << endl;
        }

};

    int main()
    {
        Color color1;
        Color color2(255, 0, 0);
        Color color3(0, 255, 0);
        Color color4(0, 0, 255);
     
        cout << "Color Values:" << endl;
        cout << "-------------" << endl;
        color1.print();
        color2.print();
        color3.print();
        color4.print();

        return 0;
    }

