#include "MyCityModel.h"

MyCityModel::MyCityModel(QObject *parent)
    :  QAbstractListModel{parent}
{
qDebug()<<Q_FUNC_INFO<<endl;
init();
}

int MyCityModel::rowCount(const QModelIndex &index) const
{
return m_weathermodelList.size();
}

QVariant MyCityModel::data(const QModelIndex &index, int role) const
{
int row=index.row();
WeatherModel *wm=m_weathermodelList.at(row);
qDebug()<<Q_FUNC_INFO<<"Row--"<<row<<"Role--"<<role<<endl;
switch (role) {
case 1:return wm->getcity();
}
return "str";
}

QHash<int, QByteArray> MyCityModel::roleNames() const
{
QHash<int, QByteArray> roles;
roles[1]="cityname";
return roles;
}

WeatherModel *MyCityModel::getWeather(int index)
{
WeatherModel *wm=m_weathermodelList.at(index);
return wm;
}

void MyCityModel::init()
{
for(int i=0;i<10;i++)
{
    m_weatherModel=new WeatherModel;
    if(i==0)
    {
        m_weatherModel->setCity("Bengalur");
    }
    else if(i==1)
    {
        m_weatherModel->setCity("Kolkata");
    }
    else if(i==2)
    {
        m_weatherModel->setCity("Mumbai");
    }
    else if(i==3)
    {
        m_weatherModel->setCity("Pune");
    }
    else if(i==4)
    {
        m_weatherModel->setCity("chennai");
    }
    else if(i==5)
    {
        m_weatherModel->setCity("Delhi");
    }
    else if(i==6)
    {
        m_weatherModel->setCity("Bengalur");
    }
    else if(i==7)
    {
        m_weatherModel->setCity("Manglore");
    }
    else if(i==8)
    {
        m_weatherModel->setCity("Rajasthan");
    }
    else if(i==9)
    {
        m_weatherModel->setCity("Gujarath");
    }
    m_weathermodelList.push_back(m_weatherModel);
}
}
