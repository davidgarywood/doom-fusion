// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: c_cmd.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx Exp $
//
//
//  Copyright (C) 1999 David Wood (Hakx).
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 
//  02111-1307, USA.
//
//
//
// DESCRIPTION:
//
// Provides the client's variables, etc.
//
//-----------------------------------------------------------------------------

static const char
rcsid[] = "c_cmd.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx";

#include "c_cmd.h"
#include "doomstat.h"
#include <string.h>

// Global Vars
char* c_input;
player_t* c_player;

// Player vars
extern void cmd_name(void);
extern void cmd_color(void);
extern void cmd_gender(void);

void cmd_name()
{
 char* local_name;
 int i;

 for (i=1; i< (sizeof(c_input)); i++)
    {



    } // EndFor
}

// EOF

