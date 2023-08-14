#ifndef _METRICS_AUXILIAR_FUNCTIONS_H
#define _METRICS_AUXILIAR_FUNCTIONS_H

#include <logging/logging.hpp>

void inline initLogging(void)
{
    static bool initialized = false;

    if (!initialized)
    {
        // Logging setup
        logging::LoggingConfig logConfig;
        logConfig.logLevel = "off";
        logConfig.filePath = "";
        logging::loggingInit(logConfig);
        initialized = true;
    }
}

#endif // _METRICS_AUXILIAR_FUNCTIONS_H
