#include <iostream>

using namespace std;
// 定义结构,一般单独写入.h文件,不暴露内部实现
class Box
{
    public:
        double length;
        double width;
        double height;
        // 定义方法
        double getSize(void);
        void set(double length,double width,double height);
};  // 类定义结束是有分号的

// 实现定义,注意格式中的::(双冒号)
double Box::getSize(void){
    return length*width*height; 
}

// 实现的时候,参数类型只要一致,数量一致.
void Box::set(double len,double width,double height){
    this->length = len;
    this->width = width;
    this->height = height;
}

// Demo2-继承
// 注意这里是单个冒号
class ColorBox:public Box{
    public:
     int color;
     void draw(void);
};

void ColorBox::draw(void){
    //do something
    cout<<"draw point" << endl;
}

int main(){
    Box firstBox;
    firstBox.set(1.0,2.0,3.0);
    cout<<"out: "<<firstBox.getSize() <<endl;
    return 0;
}