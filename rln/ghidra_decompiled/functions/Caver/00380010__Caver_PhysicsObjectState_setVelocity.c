/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380010
 * Function: Caver::PhysicsObjectState::setVelocity
 * Signature: undefined __thiscall setVelocity(PhysicsObjectState * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&) */

void __thiscall Caver::PhysicsObjectState::setVelocity(PhysicsObjectState *this,Vector2 *param_1)

{
  *(undefined8 *)(*(long *)this + 0x68) = *(undefined8 *)param_1;
  return;
}


