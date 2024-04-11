#include<iostream>
class rectangle{
    private:
    int length;
    int breath;

    public:
    rectangle(int a,int b)
    {
        length = a;
        breath = b;
    }
    int area()
{
    return length*breath;
}
int perimeter(){
    return 2*(length+breath);
}
};
int main(){
     int a;
    int b;
    std::cout<<"Enter the value of Length = ";
    std::cin>>a;
    std::cout<<"Enter the value of Breath = ";
    std::cin>>b;
    rectangle rect(a,b);
    std::cout<<"The area of the rectangle = "<<rect.area()<<std::endl;
    std::cout<<"The perimeter of the rectangle = "<<rect.perimeter()<<std::endl;
    return 0;
    
}
