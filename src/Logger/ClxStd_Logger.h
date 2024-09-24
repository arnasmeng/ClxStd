#ifndef _CLX_STD_LOGGER_
#define _CLX_STD_LOGGER_
#include <sstream>
#include <string>
#include <cstdint>

using std::ostringstream;
using std::uint16_t;


namespace ClxStd
{
    class Logger
    {
            /*CONSTRUCTOR*/
            Logger();
            uint16_t _level;

        public:
            Logger* Get();
            Logger* instance;
            enum Prefix
            {
                tAbs,
                tDelta,
                tid,
                objName,
                count
            };
            Logger& operator()(); 

    };









}
#endif