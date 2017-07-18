/*----- PROTECTED REGION ID(LiberaEventReceiverClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        LiberaEventReceiverClass.h
//
// description : Include for the LiberaEventReceiver root class.
//               This class is the singleton class for
//                the LiberaEventReceiver device class.
//               It contains all properties and methods which the 
//               LiberaEventReceiver requires only once e.g. the commands.
//
// project :     Libera BPM Event Receiver Device Server
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


#ifndef LiberaEventReceiverClass_H
#define LiberaEventReceiverClass_H

#include <tango.h>
#include <LiberaEventReceiver.h>


/*----- PROTECTED REGION END -----*/	//	LiberaEventReceiverClass.h


namespace LiberaEventReceiver_ns
{
/*----- PROTECTED REGION ID(LiberaEventReceiverClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	LiberaEventReceiverClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute PMNotificationCounter class definition
class PMNotificationCounterAttrib: public Tango::Attr
{
public:
	PMNotificationCounterAttrib():Attr("PMNotificationCounter",
			Tango::DEV_SHORT, Tango::READ) {};
	~PMNotificationCounterAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_PMNotificationCounter(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_PMNotificationCounter_allowed(ty);}
};

//	Attribute OffsetTune class definition
class OffsetTuneAttrib: public Tango::Attr
{
public:
	OffsetTuneAttrib():Attr("OffsetTune",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~OffsetTuneAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_OffsetTune(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_OffsetTune(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_OffsetTune_allowed(ty);}
};

//	Attribute CompensateTune class definition
class CompensateTuneAttrib: public Tango::Attr
{
public:
	CompensateTuneAttrib():Attr("CompensateTune",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~CompensateTuneAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_CompensateTune(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_CompensateTune(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_CompensateTune_allowed(ty);}
};

//	Attribute PLLLock class definition
class PLLLockAttrib: public Tango::Attr
{
public:
	PLLLockAttrib():Attr("PLLLock",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~PLLLockAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_PLLLock(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_PLLLock_allowed(ty);}
};

//	Attribute T0Delay class definition
class T0DelayAttrib: public Tango::Attr
{
public:
	T0DelayAttrib():Attr("T0Delay",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T0DelayAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0Delay(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0Delay(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0Delay_allowed(ty);}
};

//	Attribute RtcDecoderSwitch class definition
class RtcDecoderSwitchAttrib: public Tango::Attr
{
public:
	RtcDecoderSwitchAttrib():Attr("RtcDecoderSwitch",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~RtcDecoderSwitchAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_RtcDecoderSwitch(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_RtcDecoderSwitch(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_RtcDecoderSwitch_allowed(ty);}
};

//	Attribute McSource class definition
class McSourceAttrib: public Tango::Attr
{
public:
	McSourceAttrib():Attr("McSource",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~McSourceAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_McSource(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_McSource(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_McSource_allowed(ty);}
};

//	Attribute T0Direction class definition
class T0DirectionAttrib: public Tango::Attr
{
public:
	T0DirectionAttrib():Attr("T0Direction",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T0DirectionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0Direction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0Direction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0Direction_allowed(ty);}
};

//	Attribute T0OutputType class definition
class T0OutputTypeAttrib: public Tango::Attr
{
public:
	T0OutputTypeAttrib():Attr("T0OutputType",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T0OutputTypeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0OutputType(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0OutputType(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0OutputType_allowed(ty);}
};

//	Attribute T0State class definition
class T0StateAttrib: public Tango::Attr
{
public:
	T0StateAttrib():Attr("T0State",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T0StateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0State(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0State(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0State_allowed(ty);}
};

//	Attribute T1Source class definition
class T1SourceAttrib: public Tango::Attr
{
public:
	T1SourceAttrib():Attr("T1Source",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T1SourceAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1Source(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1Source(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1Source_allowed(ty);}
};

//	Attribute T2Source class definition
class T2SourceAttrib: public Tango::Attr
{
public:
	T2SourceAttrib():Attr("T2Source",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T2SourceAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2Source(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2Source(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2Source_allowed(ty);}
};

//	Attribute MgtOut class definition
class MgtOutAttrib: public Tango::Attr
{
public:
	MgtOutAttrib():Attr("MgtOut",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~MgtOutAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_MgtOut(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_MgtOut(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_MgtOut_allowed(ty);}
};

//	Attribute T0inMask class definition
class T0inMaskAttrib: public Tango::Attr
{
public:
	T0inMaskAttrib():Attr("T0inMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T0inMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0inMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0inMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0inMask_allowed(ty);}
};

//	Attribute T1inMask class definition
class T1inMaskAttrib: public Tango::Attr
{
public:
	T1inMaskAttrib():Attr("T1inMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T1inMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1inMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1inMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1inMask_allowed(ty);}
};

//	Attribute T2inMask class definition
class T2inMaskAttrib: public Tango::Attr
{
public:
	T2inMaskAttrib():Attr("T2inMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T2inMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2inMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2inMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2inMask_allowed(ty);}
};

//	Attribute T0idOutput class definition
class T0idOutputAttrib: public Tango::Attr
{
public:
	T0idOutputAttrib():Attr("T0idOutput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T0idOutputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0idOutput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0idOutput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0idOutput_allowed(ty);}
};

//	Attribute T1inFunction class definition
class T1inFunctionAttrib: public Tango::Attr
{
public:
	T1inFunctionAttrib():Attr("T1inFunction",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T1inFunctionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1inFunction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1inFunction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1inFunction_allowed(ty);}
};

//	Attribute T2inFunction class definition
class T2inFunctionAttrib: public Tango::Attr
{
public:
	T2inFunctionAttrib():Attr("T2inFunction",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T2inFunctionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2inFunction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2inFunction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2inFunction_allowed(ty);}
};

//	Attribute MCinMask class definition
class MCinMaskAttrib: public Tango::Attr
{
public:
	MCinMaskAttrib():Attr("MCinMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~MCinMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_MCinMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_MCinMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_MCinMask_allowed(ty);}
};

//	Attribute MCinFunction class definition
class MCinFunctionAttrib: public Tango::Attr
{
public:
	MCinFunctionAttrib():Attr("MCinFunction",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~MCinFunctionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_MCinFunction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_MCinFunction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_MCinFunction_allowed(ty);}
};

//	Attribute T0Duration class definition
class T0DurationAttrib: public Tango::Attr
{
public:
	T0DurationAttrib():Attr("T0Duration",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T0DurationAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0Duration(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0Duration(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0Duration_allowed(ty);}
};

//	Attribute InterlockID class definition
class InterlockIDAttrib: public Tango::Attr
{
public:
	InterlockIDAttrib():Attr("InterlockID",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~InterlockIDAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_InterlockID(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_InterlockID(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_InterlockID_allowed(ty);}
};

//	Attribute T2EdgeFalling class definition
class T2EdgeFallingAttrib: public Tango::Attr
{
public:
	T2EdgeFallingAttrib():Attr("T2EdgeFalling",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~T2EdgeFallingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2EdgeFalling(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2EdgeFalling(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2EdgeFalling_allowed(ty);}
};

//	Attribute T2EdgeRising class definition
class T2EdgeRisingAttrib: public Tango::Attr
{
public:
	T2EdgeRisingAttrib():Attr("T2EdgeRising",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~T2EdgeRisingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2EdgeRising(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2EdgeRising(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2EdgeRising_allowed(ty);}
};

//	Attribute T1EdgeFalling class definition
class T1EdgeFallingAttrib: public Tango::Attr
{
public:
	T1EdgeFallingAttrib():Attr("T1EdgeFalling",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~T1EdgeFallingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1EdgeFalling(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1EdgeFalling(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1EdgeFalling_allowed(ty);}
};

//	Attribute T1EdgeRising class definition
class T1EdgeRisingAttrib: public Tango::Attr
{
public:
	T1EdgeRisingAttrib():Attr("T1EdgeRising",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~T1EdgeRisingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1EdgeRising(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1EdgeRising(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1EdgeRising_allowed(ty);}
};

//	Attribute T2IdInput class definition
class T2IdInputAttrib: public Tango::Attr
{
public:
	T2IdInputAttrib():Attr("T2IdInput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T2IdInputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2IdInput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2IdInput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2IdInput_allowed(ty);}
};

//	Attribute T1IdInput class definition
class T1IdInputAttrib: public Tango::Attr
{
public:
	T1IdInputAttrib():Attr("T1IdInput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T1IdInputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1IdInput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1IdInput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1IdInput_allowed(ty);}
};

//	Attribute T1Direction class definition
class T1DirectionAttrib: public Tango::Attr
{
public:
	T1DirectionAttrib():Attr("T1Direction",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T1DirectionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1Direction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1Direction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1Direction_allowed(ty);}
};

//	Attribute T2Direction class definition
class T2DirectionAttrib: public Tango::Attr
{
public:
	T2DirectionAttrib():Attr("T2Direction",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T2DirectionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2Direction(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2Direction(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2Direction_allowed(ty);}
};

//	Attribute SynchronizeLMT class definition
class SynchronizeLMTAttrib: public Tango::Attr
{
public:
	SynchronizeLMTAttrib():Attr("SynchronizeLMT",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~SynchronizeLMTAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_SynchronizeLMT(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_SynchronizeLMT(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_SynchronizeLMT_allowed(ty);}
};

//	Attribute RTCTimestamp class definition
class RTCTimestampAttrib: public Tango::Attr
{
public:
	RTCTimestampAttrib():Attr("RTCTimestamp",
			Tango::DEV_LONG, Tango::READ) {};
	~RTCTimestampAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_RTCTimestamp(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_RTCTimestamp_allowed(ty);}
};

//	Attribute RTCTimestampState class definition
class RTCTimestampStateAttrib: public Tango::Attr
{
public:
	RTCTimestampStateAttrib():Attr("RTCTimestampState",
			Tango::DEV_SHORT, Tango::READ) {};
	~RTCTimestampStateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_RTCTimestampState(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_RTCTimestampState_allowed(ty);}
};

//	Attribute T1State class definition
class T1StateAttrib: public Tango::Attr
{
public:
	T1StateAttrib():Attr("T1State",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T1StateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1State(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1State(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1State_allowed(ty);}
};

//	Attribute T2State class definition
class T2StateAttrib: public Tango::Attr
{
public:
	T2StateAttrib():Attr("T2State",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~T2StateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2State(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2State(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2State_allowed(ty);}
};

//	Attribute T1Duration class definition
class T1DurationAttrib: public Tango::Attr
{
public:
	T1DurationAttrib():Attr("T1Duration",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T1DurationAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1Duration(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1Duration(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1Duration_allowed(ty);}
};

//	Attribute T1idOutput class definition
class T1idOutputAttrib: public Tango::Attr
{
public:
	T1idOutputAttrib():Attr("T1idOutput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T1idOutputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T1idOutput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T1idOutput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T1idOutput_allowed(ty);}
};

//	Attribute T2idOutput class definition
class T2idOutputAttrib: public Tango::Attr
{
public:
	T2idOutputAttrib():Attr("T2idOutput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T2idOutputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2idOutput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2idOutput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2idOutput_allowed(ty);}
};

//	Attribute T0IdInput class definition
class T0IdInputAttrib: public Tango::Attr
{
public:
	T0IdInputAttrib():Attr("T0IdInput",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T0IdInputAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T0IdInput(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T0IdInput(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T0IdInput_allowed(ty);}
};

//	Attribute T2Duration class definition
class T2DurationAttrib: public Tango::Attr
{
public:
	T2DurationAttrib():Attr("T2Duration",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~T2DurationAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_T2Duration(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_T2Duration(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_T2Duration_allowed(ty);}
};

//	Attribute RtcT1inMask class definition
class RtcT1inMaskAttrib: public Tango::Attr
{
public:
	RtcT1inMaskAttrib():Attr("RtcT1inMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~RtcT1inMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_RtcT1inMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_RtcT1inMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_RtcT1inMask_allowed(ty);}
};

//	Attribute RtcT2inMask class definition
class RtcT2inMaskAttrib: public Tango::Attr
{
public:
	RtcT2inMaskAttrib():Attr("RtcT2inMask",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~RtcT2inMaskAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_RtcT2inMask(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->write_RtcT2inMask(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_RtcT2inMask_allowed(ty);}
};

//	Attribute DDTriggerCounter class definition
class DDTriggerCounterAttrib: public Tango::Attr
{
public:
	DDTriggerCounterAttrib():Attr("DDTriggerCounter",
			Tango::DEV_LONG, Tango::READ) {};
	~DDTriggerCounterAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_DDTriggerCounter(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_DDTriggerCounter_allowed(ty);}
};

//	Attribute MCLock class definition
class MCLockAttrib: public Tango::Attr
{
public:
	MCLockAttrib():Attr("MCLock",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~MCLockAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_MCLock(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_MCLock_allowed(ty);}
};

//	Attribute PLLClockGood class definition
class PLLClockGoodAttrib: public Tango::Attr
{
public:
	PLLClockGoodAttrib():Attr("PLLClockGood",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~PLLClockGoodAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_PLLClockGood(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_PLLClockGood_allowed(ty);}
};

//	Attribute UserData class definition
class UserDataAttrib: public Tango::SpectrumAttr
{
public:
	UserDataAttrib():SpectrumAttr("UserData",
			Tango::DEV_SHORT, Tango::READ, 256) {};
	~UserDataAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_UserData(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_UserData_allowed(ty);}
};

//	Attribute logs class definition
class logsAttrib: public Tango::SpectrumAttr
{
public:
	logsAttrib():SpectrumAttr("logs",
			Tango::DEV_STRING, Tango::READ, 2048) {};
	~logsAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<LiberaEventReceiver *>(dev))->read_logs(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<LiberaEventReceiver *>(dev))->is_logs_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command GetParameters class definition
class GetParametersClass : public Tango::Command
{
public:
	GetParametersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetParametersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetParametersClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_GetParameters_allowed(any);}
};

//	Command ReloadSystemProperties class definition
class ReloadSystemPropertiesClass : public Tango::Command
{
public:
	ReloadSystemPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ReloadSystemPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ReloadSystemPropertiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_ReloadSystemProperties_allowed(any);}
};

//	Command MagicCommand class definition
class MagicCommandClass : public Tango::Command
{
public:
	MagicCommandClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	MagicCommandClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~MagicCommandClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_MagicCommand_allowed(any);}
};

//	Command AnnounceSynchronization class definition
class AnnounceSynchronizationClass : public Tango::Command
{
public:
	AnnounceSynchronizationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AnnounceSynchronizationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AnnounceSynchronizationClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_AnnounceSynchronization_allowed(any);}
};

//	Command ForceInitSettings class definition
class ForceInitSettingsClass : public Tango::Command
{
public:
	ForceInitSettingsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ForceInitSettingsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ForceInitSettingsClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_ForceInitSettings_allowed(any);}
};

//	Command SetTraceLevel class definition
class SetTraceLevelClass : public Tango::Command
{
public:
	SetTraceLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetTraceLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetTraceLevelClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_SetTraceLevel_allowed(any);}
};

//	Command StartSynchronization class definition
class StartSynchronizationClass : public Tango::Command
{
public:
	StartSynchronizationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartSynchronizationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartSynchronizationClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LiberaEventReceiver *>(dev))->is_StartSynchronization_allowed(any);}
};


/**
 *	The LiberaEventReceiverClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  LiberaEventReceiverClass : public Tango::DeviceClass
#else
class LiberaEventReceiverClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(LiberaEventReceiverClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	LiberaEventReceiverClass::Additionnal DServer data members

	//	Class properties data members
	public:
		//	Institute:	0: TANGO_INSTITUTE (GENERIC)
		//  1: ALBA
		//  2: ESRF
		//  3: ELETTRA
		//  4: SOLEIL
		Tango::DevShort	institute;
	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static LiberaEventReceiverClass *init(const char *);
		static LiberaEventReceiverClass *instance();
		~LiberaEventReceiverClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		LiberaEventReceiverClass(string &);
		static LiberaEventReceiverClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	LiberaEventReceiver_H
