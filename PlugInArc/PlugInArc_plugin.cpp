#include "PlugInArc_plugin.h"
#include"MyArc.h"
#include "MyItem.h"

#include <qqml.h>

void PlugInArcPlugin::registerTypes(const char *uri)
{
    // @uri com.pthinks.arc
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
    qmlRegisterType<MyArc>(uri, 1, 0, "MyArc");
}

