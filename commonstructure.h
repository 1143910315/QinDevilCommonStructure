#ifndef COMMONSTRUCTURE_H
#define COMMONSTRUCTURE_H

struct structure_initData {
    int powerLevel;
    int line;
    char userId[16];
};

struct structure_allGameData {
    long long time;
    char qin[12];
    int qinForId[12];
};

struct structure_pingData {
    long long time;
};
#endif // COMMONSTRUCTURE_H
