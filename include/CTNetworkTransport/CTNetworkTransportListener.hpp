#ifndef CTNetworkTransportListener_hpp
#define CTNetworkTransportListener_hpp

#include <vector>
#include <string>

class CTNetworkTransport;

class CTNetworkTransportListener {
public:
    virtual ~CTNetworkTransportListener() {}
    virtual void onConnect(CTNetworkTransport& transport) = 0;
    virtual void onReceive(CTNetworkTransport& transport, const std::vector<unsigned char>& data) = 0;
    virtual void onError(CTNetworkTransport& transport, const std::string& error) = 0;
    virtual void onDisconnect(CTNetworkTransport& transport) = 0;
};

#endif
