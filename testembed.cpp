#include "testembed.h"
#include <iostream>
using namespace std;
TestEmbed::TestEmbed(QObject *parent) : QObject(parent), cppInt(0), msd(20)
{
    connect(this,&TestEmbed::testsignal,this,&TestEmbed::testslot);  //connect signal and slot fn

}

void TestEmbed::testslot()
{
    clog << "cppInt : " << cppInt << endl ;   // print the last cppInt
    clog << "msd : " << msd << endl ;   // print the last cppInt
}

void TestEmbed::setQmlInt(int value)
{
    cppInt = value;        // Replace the value from qml with previous cppInt
    emit qmlIntChanged();  //Inform qml that cppInt has changed  --- apparently useless
}

int TestEmbed::qmlInt()
{
    return cppInt;          // Return the last cppInt
}
void TestEmbed::setQmlInt2(int value)
{
    msd = value;        // Replace the value from qml with previous cppInt
    emit qmlIntChanged2();  //Inform qml that cppInt has changed  --- apparently useless
}

int TestEmbed::qmlInt2()
{
    return msd;          // Return the last cppInt
}
