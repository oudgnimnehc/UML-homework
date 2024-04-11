#include <iostream>
using namespace std;

// �����ࣨ�ӿڣ�
class Shape {
public:
    // ���麯����ʹ�� Shape ��Ϊ������
    virtual void draw() const = 0;
};

// �����ࣺԲ��
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle" << endl;
    }
};

// �����ࣺ����
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Rectangle" << endl;
    }
};

// ���������� Shape ���͵����ã��������� draw ����
void drawShape(const Shape& shape) {
    shape.draw();
}

int main() {
    Circle circle;
    Rectangle rectangle;

    // ʹ�ö�̬
    drawShape(circle);
    drawShape(rectangle);

    return 0;
}
