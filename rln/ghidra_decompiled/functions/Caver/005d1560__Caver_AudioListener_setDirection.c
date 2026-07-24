/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1560
 * Function: Caver::AudioListener::setDirection
 * Signature: undefined __thiscall setDirection(AudioListener * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioListener::setDirection(Caver::Vector3 const&) */

void __thiscall Caver::AudioListener::setDirection(AudioListener *this,Vector3 *param_1)

{
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 8);
  UpdateOrientation(this);
  return;
}


