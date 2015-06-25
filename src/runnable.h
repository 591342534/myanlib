/*******************************************************************************
   Copyright (C) 2014 MyanDB Software Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU Affero General Public License, version 3,
   as published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program. If not, see <http://www.gnu.org/license/>.
*******************************************************************************/

#ifndef RUNNABLE_H_INCLUDED
#define RUNNABLE_H_INCLUDED

namespace myan
{
namespace utils
{

class Runnable
{
public:
    virtual ~Runnable() {};
    virtual void run() {};
};

}
}

#endif // RUNNABLE_H_INCLUDED
