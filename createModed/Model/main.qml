import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    /*Item {
        width: 400
        height: 400

        ListModel {
            id: myModel
            ListElement { name: "Product A"; value: 10 }
            ListElement { name: "Product B"; value: 20 }
            ListElement { name: "Product C"; value: 30 }
        }

        ListView {
            anchors.fill: parent
            model: myModel
            delegate: Text {
                text: name + ": " + value
            }
        }
    }*/
    Item {
        width: 400
        height: 400


        ListView {
            anchors.fill: parent
            model: myListStudent
            delegate: Text {
                text: modelData
            }
        }
    }
}
