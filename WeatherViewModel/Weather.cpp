#include "Weather.h"

Weather::Weather(QObject *parent)
    : QObject{parent}
{

}
const QString &Weather::time() const
{
    return m_time;
}

void Weather::setTime(const QString &newTime)
{
    m_time = newTime;
}

const QString &Weather::weather() const
{
    return m_weather;
}

void Weather::setWeather(const QString &newWeather)
{
    m_weather = newWeather;
}

int Weather::temperature() const
{
    return m_temperature;
}

void Weather::setTemperature(int newTemperature)
{
    m_temperature = newTemperature;
}

const QString &Weather::img() const
{
    return m_img;
}

void Weather::setImg(const QString &newImg)
{
    m_img = newImg;
}
