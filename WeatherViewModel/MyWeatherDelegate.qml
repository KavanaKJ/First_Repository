import QtQuick 2.0
import QtQuick.Controls 2.0
Rectangle{
    id:r1
   height: w1.height/6
   width: w1.width/6
   color: "transparent"
   Column{
       spacing: 2
   Text{text:time}
   Text{text:temperature+"°C"}
   Text{text:weather}
   Image{source:image1
   height:r1.height/2
   width: r1.width/2
   }
   }
}
