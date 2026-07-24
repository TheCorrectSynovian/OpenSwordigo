/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5ef8
 * Function: Caver::SwingableWeaponComponent::StopSwing
 * Signature: undefined __thiscall StopSwing(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::StopSwing() */

void __thiscall Caver::SwingableWeaponComponent::StopSwing(SwingableWeaponComponent *this)

{
  CollisionShapeComponent *this_00;
  WeaponTrailComponent *pWVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x160);
  this[0x170] = (SwingableWeaponComponent)0x0;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xbc) != '\0')) {
    *(undefined1 *)(lVar2 + 0xbc) = 0;
    this_00 = *(CollisionShapeComponent **)(this + 0xa0);
    if (this_00 == (CollisionShapeComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
      this_00 = *(CollisionShapeComponent **)(this + 0xa0);
      if (this_00 == (CollisionShapeComponent *)0x0) goto LAB_003c5f44;
    }
    CollisionShapeComponent::SetEnabled(this_00,false);
  }
LAB_003c5f44:
  pWVar1 = *(WeaponTrailComponent **)(this + 0xd8);
  if (pWVar1 == (WeaponTrailComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    pWVar1 = *(WeaponTrailComponent **)(this + 0xd8);
    if (pWVar1 == (WeaponTrailComponent *)0x0) goto LAB_003c5f64;
  }
  WeaponTrailComponent::ResetTrail(pWVar1);
LAB_003c5f64:
  pWVar1 = *(WeaponTrailComponent **)(this + 0xf0);
  if (pWVar1 == (WeaponTrailComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    pWVar1 = *(WeaponTrailComponent **)(this + 0xf0);
    if (pWVar1 == (WeaponTrailComponent *)0x0) {
      return;
    }
  }
  WeaponTrailComponent::ResetTrail(pWVar1);
  return;
}


