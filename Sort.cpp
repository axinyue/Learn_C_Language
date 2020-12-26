#include <iostream>

using namespace std;

// 基本形式的排序
void bubbleSort(int numbers[],int len){
    int temp;
    for(int i=0;i<len-1;i++){
        // 内层循环找到最大值,然后放入最右端,不再参与排序.
        // 通过j和j+1比较找到最值,这里number[j] 如果是最大值将会一直跟后续值交换.这里最糟糕的情况就是完全逆序.
        for(int j=0;j<len-1-i;j++){
            
            if(numbers[j+1]< numbers[j]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }

        }
    }
}

// 比较对象
template<typename T> void bubbleSort(T objs[],int length){
    T temp;

    for(int i=0;i<length-1;i++){
       
        for(int j=0;j<length-1-i;j++){
            
            if(objs[j+1] < objs[j]){
                temp = objs[j];
                objs[j] = objs[j+1];
                objs[j+1] = temp;
            }

        }
    }

}

// 一个测试的对象示例,重写了比较运算符用于比较
class Number
{
    public:
     int value;
     bool operator>(Number n){
        return value>n.value;
     }
     bool operator<(Number n){
        return value<n.value;
     }
    bool operator<=(Number n){
        return value<n.value;
     }
      bool operator>=(Number n){
        return value<n.value;
     }

     Number(){
     }
     Number(int i){
         this->value = i;
     }
};


int main(){
    const int ARRAY_SIZE=7;
    int numbers[ARRAY_SIZE] = {1,5,7,3,6,9,1};

    // 测试对象示例
    Number arrs[ARRAY_SIZE];
    // 初始化对象值
    for(int i =0;i<ARRAY_SIZE;i++){
        arrs[i].value = numbers[i];
    }
    // 测试
    bubbleSort(arrs,ARRAY_SIZE);
    
    for(int i=0;i<ARRAY_SIZE;i++){
        cout<< arrs[i].value<< endl;
    }
    return 0;
}