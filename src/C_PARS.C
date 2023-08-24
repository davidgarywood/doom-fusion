
// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: c_pars.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx Exp $
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
rcsid[] = "c_pas.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx";

#include "c_var.h"
#include "c_cmd.h"
#include "c_pars.h"
#include "d_player.h"
#include "doomstat.h"
#include <string.h>

// Global Variables
player_t* c_player;
char* c_input;

// Console Module Variables
c_var_t c_vars[];
void parse_input(char* input, player_t* player);

char* remove_command(const char* check, const char* string);

char* remove_command(const char* check, const char* string)
{
}

// Code

void exec_command(int i, char* input, player_t* player)
{
 if (i = -1)
   {
    player->message = "Error command initialised from incomplete type";
    return;
   }
 c_player = player;
 c_input = input;
 c_vars[i].location;
}

void parse_input(char* input, player_t* player)
{
 int found;
 int i;
 int array_num;

 i = 1;
 array_num = -1;
 found = 0;

 for (i=1; i< (sizeof(c_vars)); i++)
    {
     const char* check = input;
     const char* string = c_vars[i].name;

      if (strcasecmp(check, string))
        {
         input = remove_command(check, string);
         found = 1;
         array_num = i;
        } // Endif
    } // EndFor

  if (found = 0)
    {
     player->message = "Unknown Command";
    }
  if (found = 1)
    {
     exec_command(array_num, input, player);
    }
}


// EOF

