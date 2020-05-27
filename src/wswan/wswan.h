#ifndef __WSWAN_H
#define __WSWAN_H

#include <src/mednafen.h>
#include <src/state.h>
#include <src/general.h>

using namespace Mednafen;

#include "interrupt.h"

namespace MDFN_IEN_WSWAN
{

#define  mBCD(value) (((value)/10)<<4)|((value)%10)

extern		uint32 WS_InDebug;
extern          uint32 rom_size;
extern          int wsc;

enum
{
 WSWAN_SEX_MALE = 1,
 WSWAN_SEX_FEMALE = 2
};

enum
{
 WSWAN_BLOOD_A = 1,
 WSWAN_BLOOD_B = 2,
 WSWAN_BLOOD_O = 3,
 WSWAN_BLOOD_AB = 4
};

}

#endif
