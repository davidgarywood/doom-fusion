// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: c_cmd.h,v 0.1 1999/05/15  02:49 GMT+1 Hakx Exp $
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

#ifndef __C_CMD__
#define __C_CMD__

// Player vars
extern void cmd_name(void);
extern void cmd_color(void);
extern void cmd_gender(void);

// Cheat vars
extern void cmd_noclip(void);
extern void cmd_god(void);

extern void cmd_berserk(void);
extern void cmd_lightamp(void);
extern void cmd_invun(void);
extern void cmd_allmap(void);
extern void cmd_giveammo(void);
extern void cmd_givekeys(void);
extern void cmd_giveweapons(void);
extern void cmd_givehealth(void);
extern void cmd_givearmor(void);

// General vars etc
extern void cmd_gamma(void);
extern void cmd_zoomin(void);
extern void cmd_zoomout(void);

// I/O Stuff
extern void cmd_savegame(void);
extern void cmd_loadgame(void);
extern void cmd_endgame(void);

/* Hakx 5/15/99 Could be getting ahead of myself here :)
extern void cmd_loadwad(void);
extern void cmd_unloadwad(void);
*/

#endif

// EOF

