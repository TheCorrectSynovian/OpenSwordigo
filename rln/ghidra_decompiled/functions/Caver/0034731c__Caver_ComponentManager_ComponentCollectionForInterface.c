/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034731c
 * Function: Caver::ComponentManager::ComponentCollectionForInterface
 * Signature: undefined __thiscall ComponentCollectionForInterface(ComponentManager * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::ComponentCollectionForInterface(long) */

void __thiscall
Caver::ComponentManager::ComponentCollectionForInterface(ComponentManager *this,long param_1)

{
  ComponentManager *pCVar1;
  ComponentManager *pCVar2;
  long lVar3;
  ComponentManager *pCVar4;
  ComponentCollection *pCVar5;
  undefined8 *puVar6;
  long lVar7;
  ComponentManager *pCVar8;
  long *plVar9;
  undefined8 local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pCVar1 = this + 0x38;
  pCVar8 = *(ComponentManager **)(this + 0x40);
  pCVar2 = pCVar1;
  while (pCVar8 != (ComponentManager *)0x0) {
    pCVar4 = pCVar8 + 0x18;
    if (param_1 <= *(long *)(pCVar8 + 0x20)) {
      pCVar2 = pCVar8;
      pCVar4 = pCVar8 + 0x10;
    }
    pCVar8 = *(ComponentManager **)pCVar4;
  }
  local_40 = param_1;
  if (pCVar2 != pCVar1) {
    pCVar8 = pCVar1;
    if (*(long *)(pCVar2 + 0x20) <= param_1) {
      pCVar8 = pCVar2;
    }
    if (pCVar8 != pCVar1) goto LAB_003474c4;
  }
  pCVar5 = operator_new(0x18);
  *(undefined8 *)(pCVar5 + 8) = 0;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)pCVar5 = 0;
  boost::shared_ptr<Caver::ComponentCollection>::shared_ptr<Caver::ComponentCollection>
            ((shared_ptr<Caver::ComponentCollection> *)&local_50,pCVar5);
  puVar6 = (undefined8 *)
           std::
           map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
           ::operator[]((map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                         *)(this + 0x30),&local_40);
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  plVar9 = (long *)puVar6[1];
  *puVar6 = local_50;
  puVar6[1] = local_48;
  if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pCVar2 = pCVar1;
  if ((local_48 == (long *)0x0) || (lVar7 = local_48[1], local_48[1] = lVar7 + -1, lVar7 + -1 != 0))
  {
LAB_00347458:
    pCVar8 = *(ComponentManager **)(this + 0x40);
  }
  else {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar7 = local_48[2];
    local_48[2] = lVar7 + -1;
    if (lVar7 + -1 != 0) goto LAB_00347458;
    (**(code **)(*local_48 + 0x18))(local_48);
    pCVar8 = *(ComponentManager **)(this + 0x40);
  }
  while (pCVar8 != (ComponentManager *)0x0) {
    pCVar4 = pCVar8 + 0x18;
    if (local_40 <= *(long *)(pCVar8 + 0x20)) {
      pCVar2 = pCVar8;
      pCVar4 = pCVar8 + 0x10;
    }
    pCVar8 = *(ComponentManager **)pCVar4;
  }
  pCVar8 = pCVar1;
  if ((pCVar2 != pCVar1) && (*(long *)(pCVar2 + 0x20) <= local_40)) {
    pCVar8 = pCVar2;
  }
LAB_003474c4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(pCVar8 + 0x28));
}


