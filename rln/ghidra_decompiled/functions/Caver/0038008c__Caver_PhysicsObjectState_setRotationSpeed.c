/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038008c
 * Function: Caver::PhysicsObjectState::setRotationSpeed
 * Signature: undefined __thiscall setRotationSpeed(PhysicsObjectState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::setRotationSpeed(float) */

void __thiscall Caver::PhysicsObjectState::setRotationSpeed(PhysicsObjectState *this,float param_1)

{
  *(float *)(*(long *)this + 0x84) = param_1;
  return;
}


