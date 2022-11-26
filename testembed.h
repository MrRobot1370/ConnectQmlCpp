#ifndef TESTEMBED_H
#define TESTEMBED_H

#include <QObject>

class TestEmbed : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int qmlInt READ qmlInt WRITE setQmlInt NOTIFY qmlIntChanged)
    Q_PROPERTY(int qmlInt2 READ qmlInt2 WRITE setQmlInt2 NOTIFY qmlIntChanged2)
public:
    explicit TestEmbed(QObject *parent = nullptr);

signals:
    void testsignal();
    void qmlIntChanged();
    void qmlIntChanged2();

public slots:
    void testslot();
    void setQmlInt(int value);
    void setQmlInt2(int value);
    int qmlInt();
    int qmlInt2();

private:
    int cppInt;
    int msd;
};

#endif // TESTEMBED_H
