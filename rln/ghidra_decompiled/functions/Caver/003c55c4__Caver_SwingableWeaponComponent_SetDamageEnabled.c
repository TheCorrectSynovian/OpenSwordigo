/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c55c4
 * Function: Caver::SwingableWeaponComponent::SetDamageEnabled
 * Signature: undefined __thiscall SetDamageEnabled(SwingableWeaponComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SetDamageEnabled(bool) */

void __thiscall
Caver::SwingableWeaponComponent::SetDamageEnabled(SwingableWeaponComponent *this,bool param_1)

{
  CollisionShapeComponent *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x160);
  if ((lVar1 != 0) && ((*(char *)(lVar1 + 0xbc) != '\0') != param_1)) {
    *(bool *)(lVar1 + 0xbc) = param_1;
    this_00 = *(CollisionShapeComponent **)(this + 0xa0);
    if (this_00 == (CollisionShapeComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
      this_00 = *(CollisionShapeComponent **)(this + 0xa0);
      if (this_00 == (CollisionShapeComponent *)0x0) {
        return;
      }
    }
    CollisionShapeComponent::SetEnabled(this_00,param_1);
    return;
  }
  return;
}


