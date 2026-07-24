/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380098
 * Function: Caver::PhysicsObjectState::Update
 * Signature: undefined __thiscall Update(PhysicsObjectState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::Update(float) */

void __thiscall Caver::PhysicsObjectState::Update(PhysicsObjectState *this,float param_1)

{
  UpdateSpeedComponents(this,param_1);
  UpdateObjectState(this,param_1);
  return;
}


