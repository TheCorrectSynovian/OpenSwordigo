/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ff78
 * Function: Caver::PhysicsObjectState::setPosition
 * Signature: undefined __thiscall setPosition(PhysicsObjectState * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::setPosition(Caver::Vector2 const&) */

void __thiscall Caver::PhysicsObjectState::setPosition(PhysicsObjectState *this,Vector2 *param_1)

{
  SceneObject *this_00;
  float fVar1;
  
  this_00 = *(SceneObject **)this;
  if (ABS(*(float *)param_1 - *(float *)(this_00 + 0x70)) <= DAT_00683488) {
    fVar1 = *(float *)(param_1 + 4);
    if (ABS(fVar1 - *(float *)(this_00 + 0x74)) <= DAT_00683488) {
      return;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 4);
  }
  *(float *)(this_00 + 0x70) = *(float *)param_1;
  *(float *)(this_00 + 0x74) = fVar1;
  if (this_00[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
  }
  return;
}


