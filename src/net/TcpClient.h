//
// Created by Twometer on 20/09/2019.
//

#ifndef NEXTCRAFT_TCPCLIENT_H
#define NEXTCRAFT_TCPCLIENT_H

#include <winsock2.h>
#include <ws2tcpip.h>
#include <cstdint>

class TcpClient {
private:
    SOCKET tcpSocket;

public:
    bool Connect(const char* host, unsigned short port);

    int Receive(uint8_t* buf, int len);

    uint8_t ReadByte();

    void Send(uint8_t* buf, int len);

    void Close();

};


#endif //NEXTCRAFT_TCPCLIENT_H
