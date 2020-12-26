#include <iostream>

using namespace std;


class Person
{
    public:
        char name[1];
        int getAge();
        void setAge(int age);
    private:
        int age;
    
};

// 这里实现方法,不使用的方法可以不用实现? 应该是编译符号查找,未引用的不抛异常.
void Person::setAge(int age)
{
    this->age = age;
}

class SomePerson:public Person
{
    public:
        char worker[];
        char * getWorkder();

        // 重载
        void setWorker(char *name);
        void setWorker(int name[]);
};

char * SomePerson::getWorkder(){
    // 私有成员不能直接访问
    //this.age = 123;
    return worker;
}
;
void SomePerson::setWorker(char *name){

};
void SomePerson::setWorker(int name[]){

};

//重载运算符号, 通过 operator关键字实现
class Number
{
    public:
        int value;
        Number operator+(Number& n);
};
//重载运算符, 若同类型的实例需要运算符计算,就可以通过重载运算符实现运算效果.
Number Number::operator+ (Number& n){
    Number count;
    count.value = n.value+value;
    return count;
}


int main(){
    SomePerson somePerson;

    // 名字这里可以使用指针或者引用其它对象(String等)
    // 数组赋值 除了使用索引还有其它的什么形式?
    somePerson.name[0] = 'a';
    somePerson.setAge(1);
    cout<< somePerson.name[0] <<endl;
    return 0;
}