#include "ClxStd_Logger.h"

namespace ClxStd
{
    
    Logger::Logger(){};

    Logger* Logger::Get()
    {
        if (!instance)
        {
            static Logger ins;
            instance = &ins;
        }
            
        return instance;
    }

    Logger& Logger::operator()()
    {
        return *Logger::Get();
    }

}