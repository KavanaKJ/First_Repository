#ifndef WEATHER_H
#define WEATHER_H
#include <QString>
#include <QObject>

class Weather : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int temp READ temperature CONSTANT)
    Q_PROPERTY(Qstring tim READ time CONSTANT)
    Q_PROPERTY(QString weather READ weather CONSTANT)
    Q_PROPERTY(QString img READ img CONSTANT)
public:
    explicit Weather(QObject *parent = nullptr);

    const QString &time() const;
    void setTime(const QString &newTime);

    const QString &weather() const;
    void setWeather(const QString &newWeather);

    int temperature() const;
    void setTemperature(int newTemperature);

    const QString &img() const;
    void setImg(const QString &newImg);

signals:
private:
    int m_temperature;
    QString m_time;
    QString m_weather;
    QString m_img;
};

#endif // WEATHER_H
