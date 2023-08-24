//-----------------------------------------------------------------------------
//
// $Id: version.h,v 1.3 1998/04/20 13:29:58 jim Exp $
//
//-----------------------------------------------------------------------------


#ifndef __DOOMVERSION__
#define __DOOMVERSION__

#include "z_zone.h"  /* memory allocation wrappers -- killough */

// DOOM version
enum { VERSION =  204 }; // Hakx 5/14/99 --Changed to 204 (from 203) for Fusion
                         // difference from MBF

extern const char version_date[];

#endif

//----------------------------------------------------------------------------
//
// $Log: version.h,v $
// Revision 1.3  1998/04/20  13:29:58  jim
// Update BOOM version, BOOM.TXT
//
// Revision 1.2  1998/02/02  17:36:25  killough
// fix comments
//
//
// Revision 1.1  1998/02/02  13:22:00  killough
// version information files
//
//----------------------------------------------------------------------------
