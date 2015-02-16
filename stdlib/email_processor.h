#include <functional>
#include <string>
#include <iostream>

namespace showcase {

class EmailProcessor
{
public:
    void receiveMessage (const std::string& message)
    {
        if ( _handler_func ) 
        {
            _handler_func( message );
        }
        // other processing
        std::cout << "Received message [" << message << "]\n";
    }
    void setHandlerFunc (std::function<void (const std::string&)> handler_func)
    {
        _handler_func = handler_func;
    }

private:
        std::function<void (const std::string&)> _handler_func;
};

} // namespace showcase
