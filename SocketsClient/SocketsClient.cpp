#include <winsock2.h>
#include <ws2tcpip.h>
#include <tchar.h>
#include "iostream"
#include "Comms.h"
#include "Server.cpp"
#include "Client.cpp"
using namespace std;


#define ENABLE_CLIENT

int main(int argc, char* argv[]) {


#ifdef ENABLE_SERVER
	Server socketsServer;
	socketsServer.start();
#endif


#ifdef ENABLE_CLIENT
	Client socketsClient;
	socketsClient.start();
#endif

	return 0;
}




