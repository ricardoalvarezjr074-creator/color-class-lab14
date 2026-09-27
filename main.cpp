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
        Color color2;
        Color color3;
        //populate color values
        color1.setRed(255);
        color1.setGreen(0);
        color1.setBlue(0);

        color2.setRed(0);
        color2.setGreen(255);
        color2.setBlue(0);

        color3.setRed(0);
        color3.setGreen(0);
        color3.setBlue(255);

        cout << "Color Values:" << endl;
        cout << "-------------" << endl;
        color1.print();
        color2.print();
        color3.print();

        return 0;
    }

