#include <iostream>
#include <iomanip>
using namespace std;

    // Named constants 
    const int MIN_RGB = 0;
    const int MAX_RGB = 255;

    //Class defination along with private data and prototypes
    class Color
    {
    private:
        int red;
        int green;
        int blue;
    //constructors
        public:
        Color();
        Color(int r, int g, int b);
        Color(int gray);                //partial constructor grayscale
        Color(int r, int g);            //partial constructor r and g

        //setters
        void setRed(int r);
        void setGreen(int g);
        void setBlue(int b);

        //getters
        int getRed() const;
        int getGreen() const;
        int getBlue() const;

        //Utility func
        void print() const;
    
    };
//main() gTest the class
int main()
{
    cout << "===== Color Objects =====\n\n";

    //Color objects
    Color color1;
    Color color2(255, 0, 0);
    Color color3(128);
    Color color4(100, 200);

    //Populating first color using setters
    color1.setRed(128);
    color1.setGreen(64);
    color1.setBlue(192);

    //printing table header
    cout << left << setw(10) << "Color" << setw(10) << "Red" << setw(10) << "Green" << setw(10) << "Blue" << endl;
    
    cout << "----------------------------------\n";

    cout << setw(10) << "Color1";
    color1.print();

    cout << setw(10) << "Color2";
    color2.print();

    cout << setw(10) << "Color3";
    color3.print();

    cout << setw(10) << "Color4";
    color4.print();

    return 0;
} 
//Default constructor
Color::Color()
{
    red = 0;
    green = 0;
    blue = 0;
} 

//Overloaded constructor 
Color::Color(int r, int g, int b)
{
    setRed(r);
    setGreen(g);
    setBlue(b);
}
//partial constructor grayscale
Color::Color(int gray)
{
    setRed(gray);
    setGreen(gray);
    setBlue(gray);
}
//partial constructor (R and G, while blue is going to default to 0)
Color::Color(int r, int g)
{
    setRed(r);
    setGreen(g);
    setBlue(0);   //explicit default blue
}
//setter func
void Color::setRed(int r)
{
    if (r >= MIN_RGB && r <= MAX_RGB)
        red = r;
    else
    {
        cout << "Error Red value is out of range. Setting to 0. \n";
        red = 0;
    }
} 

void Color::setGreen(int g)
{
    if (g >= MIN_RGB && g <= MAX_RGB)
    green = g;
    else 
    {
        cout << "Error: Green value is out of range. Setting to 0.\n";
        green = 0;
    }
}

void Color::setBlue(int b)
{
    if (b >= MIN_RGB && b <= MAX_RGB)
    blue = b;
    else 
    {
        cout << "Error: Blue value is out of range. Setting to 0.\n";
        blue = 0;
    }
} 
// Getter Functions
int Color::getRed() const
{
    return red;
} 
int Color::getGreen() const
{
    return green;
} 
int Color::getBlue() const
{
    return blue;
}
//Outputs formatted RGB values
void Color::print() const
{
    cout << left << setw(10) << red << setw(10) << green << setw(10) << blue << endl;

}