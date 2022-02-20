#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box
{
  int Heigth ;
  int Width ;
  int Length ;
};

int main() {

   Box box1 , box2 ;
    
    int totalVolume;

    cout << "Enter Box 1 Height : ";
    cin >> box1.Heigth;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.Heigth;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Length;
    
    totalVolume = volume(box1.Heigth , box1.Width , box1.Width )
             + volume( box2.Heigth , box2.Width , box2.Width );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int heigth, int width, int length)
{
  return length * width * heigth ;
}

