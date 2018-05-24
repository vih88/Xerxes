#ifndef XERXES_PARSER_H
#define XERXES_PARSER_H

#include "Configuration.hpp"
#include "Engine.hpp"
#include "Validator.hpp"

class Parser {
public:
    void parse_commandline(int argc, const char *argv[]);
    Parser();
    Parser(Config *conf, Logger *logger);
    static void help();
    static void show_banner();

private:
    Config *conf;
    Logger *logger;
    void getUserAgents();
    void check_root();
};


#endif //XERXES_PARSER_H
