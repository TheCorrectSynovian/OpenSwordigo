/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c4f40
 * Function: Caver::SwingableWeaponComponent::SetGlowIntensity
 * Signature: undefined __thiscall SetGlowIntensity(SwingableWeaponComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SetGlowIntensity(float) */

void __thiscall
Caver::SwingableWeaponComponent::SetGlowIntensity(SwingableWeaponComponent *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x168);
  if (lVar4 == 0) {
    lVar4 = *(long *)(this + 0x108);
    if (lVar4 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf8),(Component *)this);
      lVar4 = *(long *)(this + 0x108);
      if (lVar4 != 0) goto LAB_003c4f7c;
    }
    else {
LAB_003c4f7c:
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x168);
    *(long *)(this + 0x168) = lVar4;
    if ((plVar3 != (long *)0x0) &&
       (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar3 + 8))();
      lVar4 = *(long *)(this + 0x168);
    }
    if ((DAT_00683734 < param_1) && (lVar4 == 0)) {
      CreateGlowObject(this);
      lVar4 = *(long *)(this + 0x168);
    }
  }
  *(float *)(this + 0x1a4) = param_1;
  *(float *)(this + 0x1b8) =
       *(float *)(this + 0x19c) + (*(float *)(this + 0x1a0) - *(float *)(this + 0x19c)) * param_1;
  if (lVar4 == 0) {
    lVar4 = *(long *)(this + 0x108);
    if (lVar4 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf8),(Component *)this);
      lVar4 = *(long *)(this + 0x108);
      if (lVar4 != 0) goto LAB_003c5010;
    }
    else {
LAB_003c5010:
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x168);
    *(long *)(this + 0x168) = lVar4;
    if ((plVar3 != (long *)0x0) &&
       (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar3 + 8))();
      lVar4 = *(long *)(this + 0x168);
    }
    if (lVar4 != 0) goto LAB_003c504c;
  }
  else {
LAB_003c504c:
    *(float *)(lVar4 + 0xec) = param_1;
    *(undefined1 *)(lVar4 + 0x70) = 1;
    *(undefined1 *)(lVar4 + 0xa0) = 1;
    if (lVar4 == 0) {
      lVar4 = *(long *)(this + 0x108);
      if (lVar4 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf8),(Component *)this);
        lVar4 = *(long *)(this + 0x108);
        if (lVar4 != 0) goto LAB_003c50e8;
      }
      else {
LAB_003c50e8:
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      plVar3 = *(long **)(this + 0x168);
      *(long *)(this + 0x168) = lVar4;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(this + 0x168);
      }
    }
    uVar1 = *(undefined4 *)(this + 0x1b8);
    *(undefined1 *)(lVar4 + 0x70) = 1;
    *(undefined1 *)(lVar4 + 0xa0) = 1;
    *(undefined4 *)(lVar4 + 0xf0) = uVar1;
  }
  lVar4 = *(long *)(this + 0xf0);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    lVar4 = *(long *)(this + 0xf0);
    if (lVar4 == 0) goto LAB_003c5090;
  }
  *(float *)(lVar4 + 0x7c) = param_1;
LAB_003c5090:
  lVar4 = *(long *)(this + 0xd8);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    lVar4 = *(long *)(this + 0xd8);
    if (lVar4 == 0) {
      return;
    }
  }
  *(float *)(lVar4 + 0x7c) = param_1 * 0.5 + 0.5;
  return;
}


