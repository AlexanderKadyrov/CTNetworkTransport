#ifndef CTNetworkTransport_hpp
#define CTNetworkTransport_hpp

#include <vector>

class CTNetworkTransport {
public:
    virtual ~CTNetworkTransport() {}
    virtual void sendData(const std::vector<unsigned char>& data) = 0;
};

#endif
