#ifndef CTNetworkTransport_h
#define CTNetworkTransport_h

#include <vector>

class CTNetworkTransport {
public:
    virtual ~CTNetworkTransport() {}
    virtual void sendData(const std::vector<unsigned char>& data) = 0;
};

#endif
