/*
Copyright (C) 2005 David Kamphausen <david.kamphausen@web.de>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef __main_lincity_hpp__
#define __main_lincity_hpp__

#include <string>
#include "GameView.hpp"

void initLincity();
void doLincityStep();
void setLincitySpeed( int speed );

//get Data form Lincity NG and Save City
void saveCityNG( GameView&, std::string );

//Load City and do setup for Lincity NG.
bool loadCityNG( GameView&, std::string );
void execute_timestep( GameView& );

#endif

/** @file lincity-ng/MainLincity.hpp */

