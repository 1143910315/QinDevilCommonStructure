#ifndef CCSYSTEMINFO_H
#define CCSYSTEMINFO_H
#include <QStringList>

class CCSystemInfo {
public:
    CCSystemInfo();
    static QStringList get_mac();
    static QString get_mac_frist();
    static void getcpuid(unsigned int CPUInfo[4], unsigned int InfoType);
    #if defined(_MSC_VER) // MSVC
    static void getcpuidex(unsigned int CPUInfo[4], unsigned int InfoType, unsigned int ECXValue);
    #endif
    static QString get_cpuId();
};

#endif // CCSYSTEMINFO_H
