/**************************************************************************
    Lightspark, a free flash player implementation

    Copyright (C) 2009,2010  Alessandro Pignotti (a.pignotti@sssup.it)
    Copyright (C) 2010 Alexandre Demers (papouta@hotmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/


#ifndef IPLUGIN_H
#define IPLUGIN_H

class IPlugin
{
  private:
    enum PLUGIN_TYPES { UNDEFINED=0, AUDIO=1 };
    PLUGIN_TYPES plugin_type; //type of plugin of PLUGIN_TYPES
    char* plugin_name; //name of the plugin
    char* host_application; //name of the application the plugin is created for
  public:
    virtual char* get_PluginType();
    virtual const char* get_PluginName();
    virtual char* get_HostApplication();
    virtual ~IPlugin();

};

/*************************
Extern "C" functions that each plugin must implement in order to be recognized as a plugin by us.
 
Plugin factory function
extern "C" IPlugin* Create_Plugin ();

Plugin cleanup function
extern "C" void Release_Plugin (IPlugin* p_plugin);
***************************/
#endif