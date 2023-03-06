#ifndef PLUGINARC_PLUGIN_H
#define PLUGINARC_PLUGIN_H

#include <QQmlExtensionPlugin>

class PlugInArcPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // PLUGINARC_PLUGIN_H
