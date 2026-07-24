/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035ebb8
 * Function: Caver::CharControllerComponent::CanPickup
 * Signature: undefined __thiscall CanPickup(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::CanPickup() */

bool __thiscall Caver::CharControllerComponent::CanPickup(CharControllerComponent *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  
  fVar3 = DAT_00683944;
  if (DAT_00683944 < *(float *)(this + 0x2f8)) {
    return false;
  }
  if (*(long *)(this + 0x80) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
  }
  else {
    cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
  }
  if (cVar1 != '\0') {
    return false;
  }
  lVar5 = *(long *)(this + 400);
  if (lVar5 == 0) {
    lVar5 = *(long *)(this + 0x98);
    if (lVar5 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar5 = *(long *)(this + 0x98);
      if (lVar5 != 0) goto LAB_0035ec8c;
    }
    else {
LAB_0035ec8c:
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(long *)(this + 400) = lVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
      lVar5 = *(long *)(*(long *)(this + 400) + 0x170);
      goto joined_r0x0035ecc8;
    }
  }
  lVar5 = *(long *)(lVar5 + 0x170);
joined_r0x0035ecc8:
  if (((lVar5 == 0) ||
      ((*(float *)(lVar5 + 0x28) * DAT_0068493c - *(float *)(lVar5 + 0xc)) *
       *(float *)(lVar5 + 0x30) * *(float *)(lVar5 + 0x34) <= fVar3)) &&
     (*(long *)(this + 0x298) != 0)) {
    return *(int *)(this + 0x290) == 1;
  }
  return false;
}


