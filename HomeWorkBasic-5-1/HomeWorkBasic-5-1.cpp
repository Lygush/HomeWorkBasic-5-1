#include <iostream>

class Figure {
private:
    int sidesCount{};
    std::string figureName{};

public:
    Figure() {
        this->sidesCount = 0;
        this->figureName = "Фигура";
    }

    Figure(int sidesCount, std::string figureName) {
        this->sidesCount = sidesCount;
        this->figureName = figureName;
    }

    int getSidesCount() {
        return sidesCount;
    }

    std::string getFigureName() {
        return figureName;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3, "Треугольник") {}

};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4, "Четырёхугольник") {}

};

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure f;
    Triangle t;
    Quadrangle q;

    std::cout << "Количество сторон:\n";
    std::cout << f.getFigureName() << ": " << f.getSidesCount() << "\n";
    std::cout << t.getFigureName() << ": " << t.getSidesCount() << "\n";
    std::cout << q.getFigureName() << ": " << q.getSidesCount() << "\n";
}
