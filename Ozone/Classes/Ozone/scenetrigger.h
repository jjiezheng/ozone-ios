/*
* Ozone - iOS Edition
* Copyright (C) 2009-2013 Ignacio Sanchez

* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program. If not, see http://www.gnu.org/licenses/
*
*/

/* 
 * File:   scenetrigger.h
 * Author: nacho
 *
 * Created on 21 de septiembre de 2009, 0:11
 */

#pragma once
#ifndef _SCENETRIGGER_H
#define	_SCENETRIGGER_H

#include "item.h"

class SceneTrigger : public Item
{

public:

    SceneTrigger(void);

    virtual void Init(short posX, short posY, u8 rotation, short width, short height, char* szScript)
    {
    };
    
    virtual void Update(Timer* timer)
    {
    };

};

#endif	/* _SCENETRIGGER_H */

