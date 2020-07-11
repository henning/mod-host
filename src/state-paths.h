/*
 * This file is part of mod-host.
 *
 * mod-host is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mod-host is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mod-host.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
************************************************************************************************************************
*
************************************************************************************************************************
*/

#ifndef STATE_PATHS_H
#define STATE_PATHS_H

/*
************************************************************************************************************************
*           INCLUDE FILES
************************************************************************************************************************
*/

/*
************************************************************************************************************************
*           FUNCTION PROTOTYPES
************************************************************************************************************************
*/

char* GetPluginStateDir(int instance, const char *dir);

char* MakePluginStatePath(int instance, const char *dir, const char *path);
char* MapAbstractPluginStatePath(int instance, const char *dir, const char *absolute_path);
char* MapAbsolutePluginStatePath(int instance, const char *dir, const char *abstract_path);

int RecursivelyRemovePluginPath(const char *path);

/*
************************************************************************************************************************
*           END HEADER
************************************************************************************************************************
*/

#endif
