#include "Arduino.h"
#include <UIPEthernet.h>
#include <SPI.h>
#include "webclient_ethernet.h"


WebClient::WebClient(char *username, char *password)
{
  username_ = username;
  password_ = password;
}

bool WebClient::init()
{
  return true;
}