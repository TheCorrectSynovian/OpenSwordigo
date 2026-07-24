/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034783c
 * Function: Caver::ComponentManager::ManageInterface
 * Signature: undefined __thiscall ManageInterface(ComponentManager * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::ManageInterface(long) */

void __thiscall Caver::ComponentManager::ManageInterface(ComponentManager *this,long param_1)

{
  ComponentManager *pCVar1;
  ComponentManager *pCVar2;
  ComponentManager *pCVar3;
  void *pvVar4;
  ComponentManager *pCVar5;
  ComponentManager *pCVar6;
  bool bVar7;
  
  pCVar5 = *(ComponentManager **)(this + 0x10);
  pCVar1 = this + 8;
  pCVar6 = pCVar1;
  pCVar3 = pCVar5;
  if (pCVar5 != (ComponentManager *)0x0) {
    do {
      pCVar2 = pCVar3 + 0x18;
      if (param_1 <= *(long *)(pCVar3 + 0x20)) {
        pCVar6 = pCVar3;
        pCVar2 = pCVar3 + 0x10;
      }
      pCVar3 = *(ComponentManager **)pCVar2;
    } while (*(ComponentManager **)pCVar2 != (ComponentManager *)0x0);
    if (pCVar6 != pCVar1) {
      pCVar3 = pCVar1;
      if (*(long *)(pCVar6 + 0x20) <= param_1) {
        pCVar3 = pCVar6;
      }
      if (pCVar3 != pCVar1) {
        return;
      }
    }
  }
  pCVar6 = pCVar1;
  if (pCVar5 == (ComponentManager *)0x0) {
LAB_003478f0:
    if (pCVar6 == *(ComponentManager **)(this + 0x18)) goto LAB_00347910;
    pCVar3 = (ComponentManager *)FUN_0064c700(pCVar6);
  }
  else {
    do {
      pCVar3 = pCVar5;
      pCVar6 = pCVar3 + 0x10;
      if (*(long *)(pCVar3 + 0x20) <= param_1) {
        pCVar6 = pCVar3 + 0x18;
      }
      pCVar5 = *(ComponentManager **)pCVar6;
    } while (*(ComponentManager **)pCVar6 != (ComponentManager *)0x0);
    pCVar6 = pCVar3;
    if (param_1 < *(long *)(pCVar3 + 0x20)) goto LAB_003478f0;
  }
  if (param_1 <= *(long *)(pCVar3 + 0x20)) {
    return;
  }
LAB_00347910:
  if (pCVar6 != (ComponentManager *)0x0) {
    if (pCVar1 == pCVar6) {
      bVar7 = true;
    }
    else {
      bVar7 = param_1 < *(long *)(pCVar6 + 0x20);
    }
    pvVar4 = operator_new(0x28);
    *(long *)((long)pvVar4 + 0x20) = param_1;
    FUN_0064c8a0(bVar7,pvVar4,pCVar6,pCVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  return;
}


