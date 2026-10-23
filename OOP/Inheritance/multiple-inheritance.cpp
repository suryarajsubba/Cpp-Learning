#include <iostream>
#include <string>
using namespace std;

class Camera
{
    public:
        void takePhoto()
        {
            cout << "Taking a photo" << endl;
        }
};

class Phone
{
    public:
        void makeCall()
        {
            cout << "Making a call" << endl;
        }
};

class Smartphone : public Camera, public Phone
{

};

int main()
{
    Smartphone s1;
    s1.takePhoto();
    s1.makeCall();

    return 0;
}