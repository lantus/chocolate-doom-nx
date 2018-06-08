//
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//     Networking module which uses SDL_net
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "doomtype.h"
#include "i_system.h"
#include "m_argv.h"
#include "m_misc.h"
#include "net_defs.h"
#include "net_io.h"
#include "net_packet.h"
#include "net_sdl.h"
#include "z_zone.h"

//
// NETWORKING
//

 

 
static void NET_SDL_FreeAddress(net_addr_t *addr)
{
 
}

static boolean NET_SDL_InitClient(void)
{
 

    return true;
}

static boolean NET_SDL_InitServer(void)
{
 

    return true;
}

static void NET_SDL_SendPacket(net_addr_t *addr, net_packet_t *packet)
{
 
}

static boolean NET_SDL_RecvPacket(net_addr_t **addr, net_packet_t **packet)
{
 

    return true;
}

void NET_SDL_AddrToString(net_addr_t *addr, char *buffer, int buffer_len)
{
 
}

net_addr_t *NET_SDL_ResolveAddress(char *address)
{
    

        return NULL;
    
}

// Complete module

net_module_t net_sdl_module =
{
    NET_SDL_InitClient,
    NET_SDL_InitServer,
    NET_SDL_SendPacket,
    NET_SDL_RecvPacket,
    NET_SDL_AddrToString,
    NET_SDL_FreeAddress,
    NET_SDL_ResolveAddress,
};

