/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003600a4
 * Function: Caver::CharControllerComponent::BeginCasting
 * Signature: undefined __thiscall BeginCasting(CharControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
    */

void __thiscall
Caver::CharControllerComponent::BeginCasting(CharControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  SwingableWeaponControllerComponent *pSVar2;
  long *plVar3;
  CharAnimControllerComponent *this_00;
  long lVar4;
  
  if (*(int *)(this + 0x250) != 0) {
    this[0x24c] = (CharControllerComponent)0x0;
  }
  pSVar2 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
  this[0x244] = (CharControllerComponent)0x0;
  this[0x1c8] = (CharControllerComponent)0x1;
  if (pSVar2 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
    pSVar2 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    if (pSVar2 != (SwingableWeaponControllerComponent *)0x0) goto LAB_003600ec;
  }
  else {
LAB_003600ec:
    SwingableWeaponControllerComponent::SetWeaponHidden(pSVar2,true);
  }
  pSVar2 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
  if (pSVar2 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
    pSVar2 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar2 != (SwingableWeaponControllerComponent *)0x0) goto LAB_00360110;
  }
  else {
LAB_00360110:
    SwingableWeaponControllerComponent::SetWeaponHidden(pSVar2,true);
  }
  this[0x2ec] = (CharControllerComponent)0x1;
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x2f0);
  *(long *)(this + 0x2f0) = lVar4;
  if ((plVar3 == (long *)0x0) ||
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 != 0)) {
    this_00 = *(CharAnimControllerComponent **)(this + 400);
  }
  else {
    (**(code **)(*plVar3 + 8))();
    this_00 = *(CharAnimControllerComponent **)(this + 400);
  }
  if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_00360158;
  this_00 = *(CharAnimControllerComponent **)(this + 0x98);
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_003601a0;
  }
  else {
LAB_003601a0:
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  plVar3 = *(long **)(this + 400);
  *(CharAnimControllerComponent **)(this + 400) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    this_00 = *(CharAnimControllerComponent **)(this + 400);
  }
LAB_00360158:
  CharAnimControllerComponent::BeginCasting(this_00);
  *(undefined4 *)(this + 0x22c) = 0;
  SkillComponent::BeginCasting(*(SkillComponent **)(this + 0x2f0));
  return;
}


