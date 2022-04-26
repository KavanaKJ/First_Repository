#ifndef WEATHERMODEL_H
#define WEATHERMODEL_H

#include <QAbstractListModel>
#include <QObject>
#include<QString>
#include<QDebug>
#include"Weather.h"

class WeatherModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit WeatherModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &index)const override;
    QVariant data(const QModelIndex &index,int role)const override;
    QHash<int,QByteArray> roleNames()const override;
    void init();
    Q_INVOKABLE Weather* getW(int index);
    const QString &getcity() const;
    void setCity(const QString &newCity);

private:
    QList<Weather*> m_weatherlist;
    Weather *m_weather;
    QString m_city;
};

#endif // WEATHERMODEL_H
