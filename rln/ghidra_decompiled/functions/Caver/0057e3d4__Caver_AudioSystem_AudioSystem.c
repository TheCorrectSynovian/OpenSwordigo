/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e3d4
 * Function: Caver::AudioSystem::AudioSystem
 * Signature: undefined __thiscall AudioSystem(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::AudioSystem() */

void __thiscall Caver::AudioSystem::AudioSystem(AudioSystem *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  AudioListener::AudioListener((AudioListener *)(this + 0x40));
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (AudioSystem)0x1;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined2 *)(this + 0x80) = 0x100;
                    /* catch() { ... } // from try @ 0057e340 with catch @ 0057e420 */
  return;
}


