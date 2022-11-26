import QtQuick 2.13
import QtQuick.Controls 2.5
import test 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")
    Rectangle{
        id:myRect
        color: "green"
        anchors.fill: parent
        Test{
            id: myTest
            onTestsignal: {
                console.log("cppInt in qml is : ",qmlInt)
                console.log("msd in qml is : ",qmlInt2)
            }
        }
        Button{
            id: myButton
            text: "Click"
            anchors.centerIn: myRect
            onClicked: {
                //myTest.testslot()
                //myTest.setQmlInt(6)
                myTest.qmlInt += 5
                myTest.qmlInt2 -= 1
                myTest.testsignal()

            }
        }
    }

}
