#ifndef COMMONSTRUCTURE_H
#define COMMONSTRUCTURE_H

struct structure_initData {
    int powerLevel;
    int line;
    char userId[16];
};

struct structure_repairForUserName {
    unsigned short userName[16];
};

struct structure_repairKeyForUserName {
    structure_repairForUserName qinForUserName[12];
};

struct structure_allGameData {
    long long time;
    unsigned short qinLessKey[16];
    structure_repairKeyForUserName repairKey;
    unsigned short name[1];
};

struct structure_pingData {
    long long time;
};

struct structure_LessKey {
    int numberQin;
    unsigned short lessKey[4];
};

struct structure_repairKey {
    int keyId;
    bool isChecked;
};

struct structure_playKey {
    unsigned short playKey[10];
};

struct structure_clearData {
    long long time;
};

struct structure_logMessage {
    unsigned short log[1];
};

struct structure_hitKeyNumber {
    int qinId;
    long long time;
};

struct structure_hitKeyIndex {
    int index;
    long long time;
};

struct structure_askHitKeyIndex {
    int clientId;
    long long time;
};

struct structure_replyHitKeyIndex {
    int index;
    int clientId;
    long long time;
};
#endif // COMMONSTRUCTURE_H
