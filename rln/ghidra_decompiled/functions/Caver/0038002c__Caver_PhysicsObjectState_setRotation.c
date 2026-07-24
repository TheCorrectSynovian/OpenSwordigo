/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038002c
 * Function: Caver::PhysicsObjectState::setRotation
 * Signature: undefined __thiscall setRotation(PhysicsObjectState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::setRotation(float) */

void __thiscall Caver::PhysicsObjectState::setRotation(PhysicsObjectState *this,float param_1)

{
  SceneObject *this_00;
  
  this_00 = *(SceneObject **)this;
  if ((DAT_00683488 < ABS(param_1 - *(float *)(this_00 + 0x80))) &&
     (*(float *)(this_00 + 0x80) = param_1, this_00[0xb4] == (SceneObject)0x0)) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
  }
  return;
}


