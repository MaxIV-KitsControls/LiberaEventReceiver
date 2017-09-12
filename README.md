# Libera Brilliance plus -> LiberaEventReceiver
* boards.evrx2  -  Tango Device implementation

Event receiver module: Used for synchronization and triggering purposes (Trigger, Interlock, Postmortem, Machine Clock); supports other event decoding & distribution.

* Assumptions:
  * Firmwares: 0x00005e9d
  * After the firmware update - do the power cycle:
    * libera-bmc --power --cycle --set

Functionalities are described in the User Manual (v2.82) under following chapters:

* 2.8.7.1 (Upstream Optical Event Generation)
* 2.8.7.2 (Absolute timestamp feature)
* 2.8.8 (Hardware signal generation)
* 2.6.4 (Optical event-generated interlock)

Obligatory configuration:

* To switch off application daemon
  * /etc/init.d/libera-ebpm stop
* /var/opt/libera/cfg/libera-ebpm.xml   is stored after the stop
* Edit the XML file and change the timing frequency parameter
  * nano /var/opt/libera/cfg/libera-ebpm.xml
  * sfp_freq value="99930819"
* /etc/init.d/libera-ebpm start

# TODO
* To implement a correct way to synchronize the absolute time (not with announce_synchronization)
* To implement the corrent timestamp format for event signals and feed them into archiver
* To review TODO in the src files
