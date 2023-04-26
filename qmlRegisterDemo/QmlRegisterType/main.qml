import QtQuick 2.15
import QtQuick.Window 2.15
import myClass.Library 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    MyClass{
        id: classId
        nameClass: "12A2"
        teacher: "Nguyen Ngoc Hung"
        numberStudent: 33
    }
}
