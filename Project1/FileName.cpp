#include <iostream>
using namespace std;

// 抽象类（接口）
class Shape {
public:
    // 纯虚函数，使得 Shape 成为抽象类
    virtual void draw() const = 0;
};

// 派生类：圆形
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle" << endl;
    }
};

// 派生类：矩形
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Rectangle" << endl;
    }
};

// 函数，接受 Shape 类型的引用，并调用其 draw 方法
void drawShape(const Shape& shape) {
    shape.draw();
}

int main() {
    Circle circle;
    Rectangle rectangle;

    // 使用多态
    drawShape(circle);
    drawShape(rectangle);

    return 0;
}
