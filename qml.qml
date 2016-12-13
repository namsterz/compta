import QtQuick 2.3

Rectangle {
    id: main
    width: 300
    height: 200

    color: "black"

    property string text: ""

    MouseArea {
        anchors.fill: parent
    }

    Text {
        id: main_text
        text: parent.text
        color: "white"
        anchors.fill: parent
        font.pointSize: 18
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
