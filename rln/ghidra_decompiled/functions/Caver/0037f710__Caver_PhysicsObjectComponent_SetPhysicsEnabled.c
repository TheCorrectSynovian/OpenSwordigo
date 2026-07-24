/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f710
 * Function: Caver::PhysicsObjectComponent::SetPhysicsEnabled
 * Signature: undefined __thiscall SetPhysicsEnabled(PhysicsObjectComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::SetPhysicsEnabled(bool) */

void __thiscall
Caver::PhysicsObjectComponent::SetPhysicsEnabled(PhysicsObjectComponent *this,bool param_1)

{
  if (((PhysicsObjectComponent)param_1 != this[0x70]) &&
     (this[0x70] = (PhysicsObjectComponent)param_1, param_1)) {
    SceneObject::Activate(*(SceneObject **)(this + 0x28));
    return;
  }
  return;
}


