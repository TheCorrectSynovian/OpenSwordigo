/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9070
 * Function: Caver::SwingableWeaponControllerComponent::SetWeaponHidden
 * Signature: undefined __thiscall SetWeaponHidden(SwingableWeaponControllerComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::SetWeaponHidden(bool) */

void __thiscall
Caver::SwingableWeaponControllerComponent::SetWeaponHidden
          (SwingableWeaponControllerComponent *this,bool param_1)

{
  SceneObject *this_00;
  
  this[0xac] = (SwingableWeaponControllerComponent)param_1;
  if (*(long *)(this + 0x98) != 0) {
    this_00 = *(SceneObject **)(*(long *)(this + 0x98) + 0x28);
    this_00[0xf4] = (SceneObject)param_1;
    if ((!param_1) && (this_00[0xf0] == (SceneObject)0x0)) {
      SceneObject::Activate(this_00);
      return;
    }
  }
  return;
}


