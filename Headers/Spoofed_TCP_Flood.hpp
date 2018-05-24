#ifndef XERXES_SPOOFED_TCP_FLOOD_H
#define XERXES_SPOOFED_TCP_FLOOD_H

#include "Spoofed_Flood.hpp"

class Spoofed_TCP_Flood : public Spoofed_Flood {
public:
    Spoofed_TCP_Flood(const Config *conf, Logger *logger);

private:
    void attack(const int *id) override;
    void init_headers(iphdr *ip, tcphdr *tcp, char *buf);
    void override_headers(tcphdr *tcp, iphdr *ip);
};


#endif //XERXES_SPOOFED_TCP_FLOOD_H
