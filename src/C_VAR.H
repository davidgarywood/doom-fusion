// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: c_var.h,v 0.1 1999/05/15  02:49 GMT+1 Hakx Exp $
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

#ifndef __C_VAR__
#define __C_VAR__


typedef struct
{
  const char *const name; // name
  const void *location;   // variable
} c_var_t;

extern c_var_t c_vars[];

#endif

// EOF

