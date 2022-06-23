import QtQuick 2.0

Rectangle{
    width: 400
    height: 400
    color: "red"
    signal myclick();
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("sending the signal myclick")
            myclick()
        }
    }
    Component.onCompleted: {
        console.log("object created +2")
    }
    Component.onDestruction: {
        console.log("object destroyed -2")
    }
}
