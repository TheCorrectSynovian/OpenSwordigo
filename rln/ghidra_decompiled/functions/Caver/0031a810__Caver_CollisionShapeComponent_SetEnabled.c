/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031a810
 * Function: Caver::CollisionShapeComponent::SetEnabled
 * Signature: undefined __thiscall SetEnabled(CollisionShapeComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SetEnabled(bool) */

void __thiscall
Caver::CollisionShapeComponent::SetEnabled(CollisionShapeComponent *this,bool param_1)

{
  SceneObject *this_00;
  
  if ((((CollisionShapeComponent)param_1 != this[0x178]) &&
      (this[0x178] = (CollisionShapeComponent)param_1, param_1)) &&
     (this_00 = *(SceneObject **)(this + 0x28), this_00[0xb4] == (SceneObject)0x0)) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
  }
  return;
}


