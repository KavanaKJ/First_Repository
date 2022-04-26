import QtQuick 2.13
import QtQuick.Window 2.13
import QtQuick.Layouts 1.0
Window {
    id:w1
    width: 640
    height: 500
    visible: true
    title: qsTr("Hello World")
    Image{
        id:img
        width: w1.width
        height: w1.height
        source: "Weather.jpg"
        ListView{
            id:lv
            spacing: 2
            width: parent.width
            height: parent.height/6
            model:Citymodel
            delegate:MyCityDelegate{
            onSendCity: {
               lv1.wmod=Citymodel.getWeather(index)
                r2.visible=true
                r2.curr=lv1.model.getW(new Date().getHours()).temp
                console.log("____________"+r2.curr)
               }
            }
            orientation: Qt.Horizontal
        }
        Rectangle{
            id:r2
            anchors.centerIn: parent
            property var curr
            height: w1.height/4
            width: w1.width
            visible: false
            color: "transparent"
            Column{
                spacing: 5
        Text{
           id:t1
           text: "                                                                    "+r2.curr+"°C"


        }
        Text{
            id:t2
            text: "--------------------------24Hours-------------------------------"
            font.pixelSize: w1.width/25
        }
        }
        }

     ListView{
        id:lv1
        property var wmod
        spacing: 2
        anchors.bottom: img.bottom
        anchors.bottomMargin: 15
        width: parent.width
        height: parent.height/6
        model: wmod
        delegate:MyWeatherDelegate{}
        orientation: Qt.Horizontal
    }

    }
}
