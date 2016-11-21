/*----- PROTECTED REGION ID(LiberaEventReceiver::main.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        main.cpp
//
// description : C++ source for the LiberaBrilliancePlus device server main.
//               The main rule is to initialise (and create) the Tango
//               system and to create the DServerClass singleton.
//               The main should be the same for every Tango device server.
//
// project :     Libera BPM Device Server
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================
#include <tango.h>

#include <istd/trace.h>
#include <mci/mci.h>

int main(int argc,char *argv[])
{
    /*istd::TraceInit("-");
    istd::TraceStart(istd::eTrcLow);

    // need to initialize CORBA from mci before Tango does it
    mci::Init(argc, argv);*/


	// Initialize MCI layer
	try {
		mci::Init();
		istd::TraceInit();
		istd::TraceSetLevel(istd::eTrcOff);
	} catch (istd::Exception &e) {
		cout << "Received a MCI Exception" << endl;
		cout << "Exiting" << endl;
	}

    Tango::Util *tg = NULL;
	try
	{
		// Initialise the device server
		//----------------------------------------
		tg = Tango::Util::init(argc,argv);

		// Create the device server singleton 
		//	which will create everything
		//----------------------------------------
		tg->server_init(false);

		// Run the endless loop
		//----------------------------------------
		cout << "Ready to accept request" << endl;
		tg->server_run();
	}
	catch (bad_alloc &)
	{
		cout << "Can't allocate memory to store device object !!!" << endl;
		cout << "Exiting" << endl;
	}
	catch (CORBA::Exception &e)
	{
		Tango::Except::print_exception(e);
		
		cout << "Received a CORBA_Exception" << endl;
		cout << "Exiting" << endl;
	}
	Tango::Util::instance()->server_cleanup();


	// Destroy MCI layer
	try {
		istd::TraceStop();
		mci::Shutdown();
	} catch (istd::Exception &e) {
		cout << "Received a MCI Exception" << endl;
		cout << "Exiting" << endl;
	}
	return(0);
}

/*----- PROTECTED REGION END -----*/	//	LiberaEventReceiver::main.cpp
