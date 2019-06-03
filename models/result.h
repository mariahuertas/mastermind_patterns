#ifndef RESULT_H
#define RESULT_H


class Result
{
public:
    Result();
    ~Result();
    void incrementWhiteToken();
    void incrementBlackToken();
    int getWhiteToken();
    int getBlackToken();

private:
    int resultWhite;
    int resultBlack;


};

#endif // RESULT_H
