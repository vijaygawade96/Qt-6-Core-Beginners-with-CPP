#include <QCoreApplication>
#include <string>

#include <array>
using namespace std;

enum Colors { Red, Blue, Green, Black, White };

struct Product
{
    int noOfCores;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /// Variables
    bool isDoorOpen;
    qDebug() << "Default value of isDoorOpen=" << isDoorOpen;
    isDoorOpen = true;
    qDebug() << "Value after change of isDoorOpen=" << isDoorOpen;

    /// Basic Data Types
    int var1 = 3596;
    float var2 = 3.4;
    double var3 = 9.489;
    bool var4 = true;
    char var5 = 'V';
    qInfo()
        << "\n\n ****************************   Basic Data Types    ****************************";
    qInfo() << "Size of int is " << sizeof(var1) << "bytes and value of var1 =" << var1;
    qInfo() << "Size of float is " << sizeof(var2) << "bytes and value of var2 =" << var2;
    qInfo() << "Size of double is " << sizeof(var3) << "bytes and value of var3 =" << var3;
    qInfo() << "Size of bool is " << sizeof(var4) << "bytes and value of var4 =" << var4;
    qInfo() << "Size of char is " << sizeof(var5) << "bytes and value of var5 =" << var5;

    var1 = var3;
    qInfo() << "Double to int converison" << var3 << " to int " << var1;
    var1 = 3.35;
    qInfo() << "Assign 3.35 float number to int variable:" << var1;

    unsigned int age = 500;
    qInfo() << "Size of unsigned int is " << sizeof(age) << "age=" << age;

    qInfo() << "\n\n ****************************   Constant Data Types    "
               "****************************";
    const int birthYear = 1996;
    const float PI = 3.14;
    qInfo() << "birthYear=" << birthYear << "\t PI=" << PI;

    qInfo() << "\n\n ****************************   Enum Data Types    "
               "****************************";
    enum Days { SUN = 100, MON, TUE, WED, THUR, FRI, SAT };
    Days today = Days::TUE;
    qInfo() << "today=" << today;

    qInfo() << "\n\n ****************************   Struct Data Types    "
               "****************************";
    Product laptop;
    qInfo() << "Size of Product is " << sizeof(laptop);

    laptop.noOfCores = 16;
    laptop.color = Colors::Red;
    laptop.value = 89788.98;


    qInfo()
        << "\n\n ****************************   Array Data Types    ****************************";
    int ages[5] = {34, 42, 76, 12, 45};
    for (int i = 0; i < 5; i++)
        qInfo() << "age[" << i << "] = " << ages[i];

    array<float, 3> height = {134.22, 156.32, 190.23};
    qInfo() << "Size of array<float,3> is " << sizeof(height) << " and size of height array is "
            << height.size();
    for (int i = 0; i < 3; i++)
        qInfo() << "height["<< i <<"] = " << height[i];

    return a.exec();
}
