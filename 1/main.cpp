#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

class ConsoleMenu {
public:
    void ShowMenu() {
        cout << string(80, '-') << endl;
        cout << "Выберите пункт меню:" << endl;
        cout << "1. Что такое квадратные уравнения?" << endl;
        cout << "2. Какие бывают квадратные уравнения?" << endl;
        cout << "3. Решение квадратных уравнений" << endl;
        cout << "4. Выход" << endl;
        cout << string(80, '-') << endl;
    }

    int getUserChoice() {
        int n;
        cout << "Введите номер пункта меню: ";
        cin >> n;
        while (n < 1 || n > 4) {
            cout << "Ошибка: неверный выбор. Попробуйте еще раз." << endl;
            cout << "Введите номер пункта меню: ";
            cin >> n;
        }
        return n;
    }

    void Select1() {
        cout << string(80, '-') << '\n';
        cout << "Квадратное уравнение - это уравнение вида ax^2 + bx + c = 0, \n где a, b и c - коэффициенты, которые могут быть любыми числами (включая\n отрицательные, дробные или равные нулю),\n x - переменная, которая может принимать любые значения, удовлетворяющие уравнению." << std::endl << std::endl;
        cout << "Квадратные уравнения называются так из-за того, что переменная x\n в этом уравнении имеет степень 2 (квадрат), то есть уравнение содержит\n только один такой член с переменной во второй степени.\n\n";
        cout << "Решение квадратного уравнения позволяет найти значения переменной x, \n которые удовлетворяют уравнению. Обычно квадратные уравнения решают\n с помощью формулы Квадратного корня,\n которая позволяет выразить значение x через коэффициенты a, b и c.\n\n";
        cout << string(80, '-') << '\n';
    }
    void Select2() {
        cout << string(80, '-') << '\n';
        cout << "1. A = 0, B = 0, C = 0\n";
        cout << "Если коэффициенты квадратного уравнения a, b и c равны нулю, то соответствующее \n уравнение будет иметь вид 0x^2 + 0x + 0 = 0, что эквивалентно уравнению 0 = 0.\n";
        cout << "Такое уравнение называется тождественным или тривиальным и имеет бесконечное множество решений, \n то есть любое число является его решением.\n";
        cout << string(80, '-') << '\n';
        cout << "2. A != 0, B = 0, C = 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a != 0, b = 0 и c = 0,\n то соответствующее уравнение будет иметь вид ax^2 = 0.";
        cout << "Его решением будет только число 0\n";
        cout << string(80, '-') << '\n';
        cout << "3. A = 0, B = 0, C != 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a = 0, b = 0 и c != 0, \n то такое уравнение не имеет корней, и является не верным\n";
        cout << string(80, '-') << '\n';
        cout << "4. A != 0, B = 0, C != 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a != 0, b = 0 и c != 0, \n то такое уравнение имеет вид aх^2 + c = 0, корни данного уравнения: \n sqrt(-C/A) и -sqrt(-C/A), если -C/A > 0\n";
        cout << string(80, '-') << '\n';
        cout << "5. A = 0, B != 0, C != 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a = 0, b != 0 и c != 0, \n то такое уравнение имеет вид bx + c = 0, уравнение с единственным корнем -C/B \n";
        cout << string(80, '-') << '\n';
        cout << "6. A != 0, B != 0, C != 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a != 0, b != 0 и c != 0,'\n' то такое уравнение имеет вид ax^2 + bx + c = 0, классическое квадратное уравнение\n";
        cout << string(80, '-') << '\n';
        cout << "7. A = 0, B != 0, C = 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a = 0, b != 0 и c = 0,'\n' то такое уравнение имеет вид bx = 0, такое уравнение имеет единственный корень x = 0\n";
        cout << string(80, '-') << '\n';
        cout << "8. A != 0, B != 0, C = 0\n";
        cout << "Если коэффициенты квадратного уравнения имеют вид a != 0, b != 0 и c = 0,'\n' то такое уравнение имеет вид ax^2 + bx = 0, уравнение у которого левая часть расскладывается в вид x(ax + b) = 0,\n";
        cout << "Такое уравнение имеет два корня: x = 0 и x = -B/A\n";
    }
    void Select3(double& a, double& b, double& c) {
        cout << string(80, '-') << '\n';
        cout << "Укажите коэффиценты квадратного уравнения: \n";
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
    }

    int close() {
        int n;
        cout << "Введите любое число, чтобы вернуться назад: ";
        cin >> n;
        return n;
    }
};
class Equation {
private:
    double a, b, c;
public:
    Equation(double _a, double _b, double _c) {
        this->a = _a;
        this->b = _b;
        this->c = _c;
    }
    double getA() {
        return a;
    }

    double getB() {
        return b;
    }

    double getC() {
        return c;
    }
    double getDiscriminant() {
        return b * b - 4 * a * c;
    }
    vector<double> getRandomSolution() {

        vector<double> solutions; // объявление вектора

        double epsilon = 0.0001;

        for (double x = -1000; x <= 1000; x += epsilon) {

            double f = getA() * x * x + getB() * x + getC();

            if (abs(f) <= epsilon * 2) {
                solutions.push_back(x);
            }
        }

        return solutions;
    }
};
class Type1 : public Equation {
public:
    Type1() : Equation(0, 0, 0) {}

    void PrintSolution() {
        cout << "x - любое число\n";
    }
};

class Type2 : public Equation {
public:
    Type2(double _a) : Equation(_a, 0, 0) {}
    void PrintSolution() {
        cout << "x = 0\n";
    }
};

class Type3 : public Equation {
public:
    Type3(double _c) : Equation(0, 0, _c) {}
    void PrintSolution() {
        cout << "Уравнение не имеет действительные корней\n";
    }
};

class Type4 : public Equation {
public:
    Type4(double _a, double _c) : Equation(_a, 0, _c) {}
    void PrintSolution() {
        if (-getC() / getA() >= 0) {
            cout << "x1 = " << sqrt(-getC() / getA()) << '\n';
            cout << "x2 = " << -sqrt(-getC() / getA()) << '\n';
        }
        else {
            cout << "Уравнение не имеет действительные корней\n";
        }
    }
};


class Type5 : public Equation {
public:
    Type5(double _b, double _c) : Equation(0, _b, _c) {}
    void PrintSolution() {
        cout << "x = " << -getC() / getB() << '\n';
    }
};

class Type6 : public Equation {
public:
    Type6(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
    void PrintSolution() {
        if (getDiscriminant() > 0) {
            cout << "x1 = " << (-getB() + sqrt(getDiscriminant())) / (2 * getA()) << '\n';
            cout << "x2 = " << (-getB() - sqrt(getDiscriminant())) / (2 * getA()) << '\n';
        }
        else if (getDiscriminant() == 0) {
            cout << "x = " << (-getB()) / (2 * getA()) << '\n';
        }
        else {
            cout << "Уравнение не имеет действительные корней\n";
        }
    }
};

class Type7 : public Equation {
public:
    Type7(double _b) : Equation(0, _b, 0) {}
    void PrintSolution() {
        cout << "x = 0\n";
    }
};

class Type8 : public Equation {
public:
    Type8(double _a, double _b) : Equation(_a, _b, 0) {}
    void PrintSolution() {
        cout << "x1 = 0\n";
        cout << "x2 = " << -getB() / getA() << '\n';
    }
};

int main() {
    ConsoleMenu menu;
    setlocale(LC_ALL, "RU");
    int userChoice = 0;
    while (true) {
        menu.ShowMenu();
        userChoice = menu.getUserChoice();
        if (userChoice == 1) {
            system("cls");
            menu.Select1();
            menu.close();
        }
        else if (userChoice == 2) {
            system("cls");
            menu.Select2();
            menu.close();
        }
        else if (userChoice == 3) {
            system("cls");
            double a, b, c;
            menu.Select3(a, b, c);
            if (a == 0 && b == 0 && c == 0) {
                Type1 eq;
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
            }
            else if (a != 0 && b == 0 && c == 0) {
                Type2 eq(a);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
            }
            else if (a == 0 && b == 0 && c != 0) {
                Type3 eq(c);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            else if (a != 0 && b == 0 && c != 0) {
                Type4 eq(a, c);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            else if (a == 0 && b != 0 && c != 0) {
                Type5 eq(b, c);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            else if (a != 0 && b != 0 && c != 0) {
                Type6 eq(a, b, c);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            else if (a == 0 && b != 0 && c == 0) {
                Type7 eq(b);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            else {
                Type8 eq(a, b);
                eq.PrintSolution();
                vector<double> rs = eq.getRandomSolution();
                cout << "r" << '\n';
                if (rs.size() > 0)cout << "x1 = " << rs[0] << '\n';
                if (rs.size() > 1)cout << "x2 = " << rs[1] << '\n';
                cout << rs.size();
            }
            menu.close();
        }
        else {
            cout << "До свидания!" << endl;
            break;
        }
        system("cls");
    }
    return 0;
}
