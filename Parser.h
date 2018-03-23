#ifndef XERXES_PARSER_H
#define XERXES_PARSER_H

#include "Configuration.h"
#include "Doser.h"
#include "Validator.h"

class Parser {
public:
    void parse_commandline(const int *argc, const char *argv[]);
    Parser();
    Parser(config *conf, Logger *logger);
    static void help();
    static void show_banner();

private:
    config *conf;
    Logger *logger;
    void getUserAgents();
};


#endif //XERXES_PARSER_H
