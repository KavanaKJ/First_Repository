#include "WeatherModel.h"

WeatherModel::WeatherModel(QObject *parent)
    : QAbstractListModel{parent}
{
qDebug()<<Q_FUNC_INFO<<endl;
init();
}

int WeatherModel::rowCount(const QModelIndex &index) const
{
  qDebug()<<Q_FUNC_INFO<<endl;
 return m_weatherlist.size();
}

QVariant WeatherModel::data(const QModelIndex &index, int role) const
{
 qDebug()<<Q_FUNC_INFO<<endl;
 int row=index.row();
 Weather *w=m_weatherlist.at(row);
 qDebug()<<Q_FUNC_INFO<<"Row--"<<row<<"Role--"<<role<<endl;
 switch (role)
 {
 case 1:return w->time();
 case 2:return w->temperature();
 case 3:return w->weather();
 case 4:return w->img();
 }
 return "str";

}

QHash<int, QByteArray> WeatherModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles[1]="time";
    roles[2]="temperature";
    roles[3]="weather";
    roles[4]="image1";
    return roles;
}

void WeatherModel::init()
{
 for(int i=1;i<=24;i++)
 {
  m_weather=new Weather;
  QString ti=i<12?"am":"pm";
  m_weather->setTime(QString::number(i)+ti);
  int temp=i<7?10:(i>7&&i<10?20:(i>10&&i<20?30:40));
  m_weather->setTemperature(temp);
  QString weather=i<10?"cloudy":(i<20?"windy":(i<30?"rainy":(i<40?"sunny":"humidity")));
  m_weather->setWeather(weather);
  QString img=i<10?"/cloudy.png":(i<20?"/wind.png":(i<30?"/rain.png":(i<40?"/sunny.png":"/humidity.png")));
  m_weather->setImg(img);
  m_weatherlist.push_back(m_weather);
 }
}

Weather *WeatherModel::getW(int index)
{
    Weather *w=m_weatherlist.at(index);
    return w;
}

const QString &WeatherModel::getcity() const
{
    return m_city;
}

void WeatherModel::setCity(const QString &newCity)
{
    m_city = newCity;
}
