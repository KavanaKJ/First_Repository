import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    function showpage1(){
        console.log("show page 1")
        myLoad.source="Page_1.qml"
    }
    function showpage2(){
        console.log("show page 2")
         myLoad.source="Page_2.qml"
    }
    function showpage3(){
        console.log("show page 3")
         myLoad.source="Page_3.qml"
    }
    function showpage4(){
        console.log("show page 4")
         myLoad.sourceComponent=c1
    }
    Loader{
        id:myLoad
        anchors.bottom: r1.top
    }
    Connections{
        target: myLoad.item
        onMyclick:{
            console.log("Load next item")
        }
    }

    Component{
        id:c1
        Rectangle{
            width: 400
            height: 400
            color: "pink"
            signal myclick();
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("sending the signal myclick")
                    myclick()
                }
            }
            Component.onCompleted: {
                console.log("object created +4")
            }
            Component.onDestruction: {
                console.log("object destroyed -4")
            }

        }
    }

    RowLayout{
        id:r1
        anchors.bottom: parent.bottom
        width:parent.width
        spacing: 5
    Button{
            text: "page1"
            onClicked:showpage1();
            Layout.fillWidth: true
        }
    Button{
            text: "page2"
            onClicked:showpage2();
            Layout.fillWidth: true
        }
    Button{
            text: "page3"
            onClicked:showpage3();
            Layout.fillWidth: true
        }
    Button{
            text: "page4"
            onClicked:showpage4();
            Layout.fillWidth: true
        }
    }
}
