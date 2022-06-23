import QtQuick 2.0

Rectangle{
    width:400
    height:400
    color: "black"
    signal myclick();
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("sending the signal myclick")
            myclick();
        }
    }
    Component.onCompleted: {
        console.log("object created +1")
    }
    Component.onDestruction: {
        console.log("object destroyed -1")
    }
}
