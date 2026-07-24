/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003675d8
 * Function: Caver::SceneObject::updateSpeedMultiplier
 * Signature: undefined __thiscall updateSpeedMultiplier(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::updateSpeedMultiplier() const */

float __thiscall Caver::SceneObject::updateSpeedMultiplier(SceneObject *this)

{
  float fVar1;
  
  if (*(SceneObject **)(this + 0x30) == (SceneObject *)0x0) {
    fVar1 = *(float *)(this + 0x40);
  }
  else {
    fVar1 = (float)updateSpeedMultiplier(*(SceneObject **)(this + 0x30));
    fVar1 = fVar1 * *(float *)(this + 0x40);
  }
  return fVar1;
}


