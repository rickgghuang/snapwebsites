// Snap Websites Server -- snap manager CGI, daemon, library, plugins
// Copyright (c) 2016-2019  Made to Order Software Corp.  All Rights Reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

// ourselves
//
#include "snapmanager/plugin_base.h"

// last entry
//
#include <snapwebsites/poison.h>


/** \file
 * \brief Implementation of the plugin_base class.
 *
 * At this point the only function defined in the base of all plugins
 * is the destructor, which does nothing.
 */

namespace snap_manager
{


plugin_base::~plugin_base()
{
}



} // namespace snap_manager
// vim: ts=4 sw=4 et
