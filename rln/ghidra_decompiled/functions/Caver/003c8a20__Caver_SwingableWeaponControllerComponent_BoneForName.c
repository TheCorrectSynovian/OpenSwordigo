/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c8a20
 * Function: Caver::SwingableWeaponControllerComponent::BoneForName
 * Signature: undefined __thiscall BoneForName(SwingableWeaponControllerComponent * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&) */

long __thiscall
Caver::SwingableWeaponControllerComponent::BoneForName
          (SwingableWeaponControllerComponent *this,string *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(this + 0x80);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  if (plVar3[0x11] == 0) {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    if (plVar3[0x11] == 0) {
      return 0;
    }
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar3 = *(long **)(this + 0x80);
      lVar2 = plVar3[0x11];
      goto joined_r0x003c8ad0;
    }
  }
  lVar2 = plVar3[0x11];
joined_r0x003c8ad0:
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    lVar2 = plVar3[0x11];
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x18);
  iVar1 = Skeleton::BoneIndexForName((Skeleton *)*puVar4,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  return puVar4[2] + (long)iVar1 * 0xdc;
}


