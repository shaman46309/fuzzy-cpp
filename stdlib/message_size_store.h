#include <string>

namespace showcase {

class MessageSizeStore
{
    public:
    MessageSizeStore () : _max_size( 0 ) {}
    void checkMessage (const std::string& message ) 
    {
        const int size = message.length();
        if ( size > _max_size )
        {
            _max_size = size;
        }
    }
    int getSize ()
    {
        return _max_size;
    }

private:
    int _max_size;
};
} // namespace showcase
