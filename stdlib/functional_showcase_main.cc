#include <iostream>
#include "email_processor.h"
#include "message_size_store.h"

using showcase::EmailProcessor;
using showcase::MessageSizeStore;

int main(int c, char **argv) {
EmailProcessor processor;
MessageSizeStore size_store;
processor.setHandlerFunc( 
        [&] (const std::string& message) { size_store.checkMessage( message ); } 
);
processor.receiveMessage("abra");
processor.receiveMessage("ca");
processor.receiveMessage("dabra");
std::cout << "Message Size store : max size was " << size_store.getSize() << std::endl;
}
