#include<iostream>
using namesspace std;

double calculatearea(double length, double width){
return length * width;
}
int main(){
double length, width;

// Input length and width of the rectangle

cout<< "Enter the length of thr rectangle:";
cin >> length;
cout << "Enter the width of thr rectangle:";
cin >> width;
// calculate the area
double area = calculateArea(length, width);
//print the result
cout<< "Area of the rectangle:" <<area << endl;
return 0;
}
