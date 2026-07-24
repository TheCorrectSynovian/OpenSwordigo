/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d16c0
 * Function: Caver::AudioListener::setUpVector
 * Signature: undefined __thiscall setUpVector(AudioListener * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioListener::setUpVector(Caver::Vector3 const&) */

void __thiscall Caver::AudioListener::setUpVector(AudioListener *this,Vector3 *param_1)

{
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 8);
  UpdateOrientation(this);
  return;
}


