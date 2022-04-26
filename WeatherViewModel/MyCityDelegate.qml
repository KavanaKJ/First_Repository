import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle{
   height: w1.height/6
   width: w1.width/6
   color: "transparent"
   signal sendCity();
   Text{
       anchors.centerIn: parent
   text: cityname
   font.bold: true
   }
   MouseArea{
       anchors.fill: parent
       onClicked: {
           console.log("city--"+cityname);
        sendCity();
       }
   }
}
