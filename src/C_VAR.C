// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: c_var.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx Exp $
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
// DESCRIPTION:
//
// Provides the client's variables, etc.
//
//-----------------------------------------------------------------------------

static const char
rcsid[] = "c_var.c,v 0.1 1999/05/15  02:49 GMT+1 Hakx";

#include "c_var.h"
#include "c_cmd.h"

c_var_t c_vars[] = {
 // Player vars
 {"name",        &cmd_name},
 {"color",       &cmd_color},
 {"gender",      &cmd_gender},

 // Cheat vars
 {"noclip",      &cmd_noclip},
 {"idclip",      &cmd_noclip},
 {"idspispopd",  &cmd_noclip},
 {"god",         &cmd_god},
 {"iddqd",       &cmd_god},
 {"berserk",     &cmd_berserk},
 {"idbeholds",   &cmd_berserk},
 {"lightamp",    &cmd_lightamp},
 {"idbeholdl",   &cmd_lightamp},
 {"invunerability", &cmd_invun},
 {"invun",          &cmd_invun},
 {"idbeholdv",      &cmd_invun},
 {"allmap",         &cmd_allmap},
 {"idbeholda",   &cmd_allmap},
 {"idqd",        &cmd_giveammo},
 {"giveammo",    &cmd_giveammo},
 {"givekeys",    &cmd_givekeys},
 {"giveweapons", &cmd_giveweapons},
 {"givehealth",  &cmd_givehealth},
 {"givearmor",   &cmd_givearmor},

 // General vars etc
 {"gamma",       &cmd_gamma},
 {"zoomin",      &cmd_zoomin},
 {"zoomout",     &cmd_zoomout},

 // I/O Stuff
 {"savegame",   &cmd_savegame},
 {"loadgame",   &cmd_loadgame},
 {"endgame",    &cmd_endgame},

/* Hakx 5/15/99 Could be getting ahead of myself here :)
extern void cmd_loadwad(void);
extern void cmd_unloadwad(void);
*/
};


// EOF

