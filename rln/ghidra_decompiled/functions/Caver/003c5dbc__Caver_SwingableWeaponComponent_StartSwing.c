/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5dbc
 * Function: Caver::SwingableWeaponComponent::StartSwing
 * Signature: undefined __thiscall StartSwing(SwingableWeaponComponent * this, int param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::StartSwing(int, float, float) */

void __thiscall
Caver::SwingableWeaponComponent::StartSwing
          (SwingableWeaponComponent *this,int param_1,float param_2,float param_3)

{
  WeaponTrailComponent *pWVar1;
  long lVar2;
  
  if (this[0x170] != (SwingableWeaponComponent)0x0) {
    return;
  }
  if (this[0x171] != (SwingableWeaponComponent)0x0) {
    return;
  }
  pWVar1 = *(WeaponTrailComponent **)(this + 0xd8);
  if (pWVar1 == (WeaponTrailComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    pWVar1 = *(WeaponTrailComponent **)(this + 0xd8);
    if (pWVar1 != (WeaponTrailComponent *)0x0) goto LAB_003c5e18;
  }
  else {
LAB_003c5e18:
    WeaponTrailComponent::ResetTrail(pWVar1);
  }
  pWVar1 = *(WeaponTrailComponent **)(this + 0xf0);
  if (pWVar1 == (WeaponTrailComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    pWVar1 = *(WeaponTrailComponent **)(this + 0xf0);
    if (pWVar1 != (WeaponTrailComponent *)0x0) goto LAB_003c5e38;
  }
  else {
LAB_003c5e38:
    WeaponTrailComponent::ResetTrail(pWVar1);
  }
  *(int *)(this + 0x180) = param_1;
  *(float *)(this + 0x174) = param_2;
  *(float *)(this + 0x178) = param_3;
  *(undefined4 *)(this + 0x17c) = 0;
  this[0x1c4] = (SwingableWeaponComponent)0x0;
  this[0x171] = (SwingableWeaponComponent)0x1;
  *(float *)(this + 400) = (float)param_1;
  *(undefined8 *)(this + 0x194) = 0;
  lVar2 = *(long *)(this + 0xd8);
  *(float *)(this + 0x184) = (float)param_1;
  *(undefined8 *)(this + 0x188) = 0;
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    lVar2 = *(long *)(this + 0xd8);
    if (lVar2 != 0) goto LAB_003c5e90;
  }
  else {
LAB_003c5e90:
    WeaponTrail::FadeIn((WeaponTrail *)(lVar2 + 0x70),param_3 * 0.5);
  }
  lVar2 = *(long *)(this + 0xf0);
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    lVar2 = *(long *)(this + 0xf0);
    if (lVar2 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
      lVar2 = *(long *)(this + 0xf0);
      if (lVar2 == 0) {
        return;
      }
      goto LAB_003c5ec4;
    }
  }
  *(undefined4 *)(lVar2 + 0x9c) = 0;
LAB_003c5ec4:
  WeaponTrail::FadeIn((WeaponTrail *)(lVar2 + 0x70),param_3 * 0.5);
  return;
}


