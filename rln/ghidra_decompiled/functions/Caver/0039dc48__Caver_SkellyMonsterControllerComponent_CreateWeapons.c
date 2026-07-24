/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039dc48
 * Function: Caver::SkellyMonsterControllerComponent::CreateWeapons
 * Signature: undefined __thiscall CreateWeapons(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::CreateWeapons() */

void __thiscall
Caver::SkellyMonsterControllerComponent::CreateWeapons(SkellyMonsterControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SceneObject *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  string *psVar9;
  Component *pCVar10;
  SwingableWeaponControllerComponent *pSVar11;
  undefined1 auStack_58 [8];
  long *local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(*(long *)(this + 0x28) + 0x48);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  }
  else {
    puVar6 = (undefined8 *)(lVar8 + 0x128);
  }
  psVar9 = (string *)*puVar6;
  FUN_00666bb8(&local_50,"skelly_sword",auStack_58);
  ObjectLibrary::TemplateForName(psVar9,SUB81(&local_50,0));
  if (local_50 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar5 = local_50 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar5;
      *(int *)plVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_50 + -3);
    }
  }
  if (local_48[0] == (long *)0x0) goto LAB_0039df50;
  pCVar10 = *(Component **)(this + 0xe0);
  if (pCVar10 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar10 = *(Component **)(this + 0xe0);
    if (*(long *)(pCVar10 + 0x1a8) == 0) goto LAB_0039dd00;
LAB_0039dd14:
    pSVar4 = operator_new(0x128);
    SceneObject::SceneObject(pSVar4);
    *(int *)(pSVar4 + 8) = *(int *)(pSVar4 + 8) + 1;
    plVar5 = *(long **)(this + 0x100);
    *(SceneObject **)(this + 0x100) = pSVar4;
    if ((plVar5 != (long *)0x0) &&
       (iVar7 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*plVar5 + 8))();
      pSVar4 = *(SceneObject **)(this + 0x100);
    }
    pSVar4[0x18] = (SceneObject)0x0;
    SceneObject::InitWithTemplate(pSVar4,(intrusive_ptr *)local_48);
    pCVar10 = *(Component **)(this + 0xe0);
    if (pCVar10 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      pCVar10 = *(Component **)(this + 0xe0);
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1a8);
    }
    else {
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1a8);
    }
    if (pSVar11 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar10 + 0x198),pCVar10);
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1a8);
    }
    local_50 = (long *)SceneObject::ComponentWithInterface
                                 (*(SceneObject **)(this + 0x100),(long)PTR_Interface_007e7110);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    SwingableWeaponControllerComponent::SetWeaponComponent(pSVar11,(intrusive_ptr *)&local_50);
    if ((local_50 != (long *)0x0) &&
       (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
  }
  else {
    if (*(long *)(pCVar10 + 0x1a8) != 0) goto LAB_0039dd14;
LAB_0039dd00:
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar10 + 0x198),pCVar10);
    if (*(long *)(pCVar10 + 0x1a8) != 0) goto LAB_0039dd14;
  }
  pCVar10 = *(Component **)(this + 0xe0);
  if (pCVar10 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar10 = *(Component **)(this + 0xe0);
    if (*(long *)(pCVar10 + 0x1c0) == 0) goto LAB_0039de2c;
LAB_0039de40:
    pSVar4 = operator_new(0x128);
    SceneObject::SceneObject(pSVar4);
    *(int *)(pSVar4 + 8) = *(int *)(pSVar4 + 8) + 1;
    plVar5 = *(long **)(this + 0x108);
    *(SceneObject **)(this + 0x108) = pSVar4;
    if ((plVar5 != (long *)0x0) &&
       (iVar7 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*plVar5 + 8))();
      pSVar4 = *(SceneObject **)(this + 0x108);
    }
    pSVar4[0x18] = (SceneObject)0x0;
    SceneObject::InitWithTemplate(pSVar4,(intrusive_ptr *)local_48);
    pCVar10 = *(Component **)(this + 0xe0);
    if (pCVar10 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      pCVar10 = *(Component **)(this + 0xe0);
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1c0);
    }
    else {
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1c0);
    }
    if (pSVar11 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar10 + 0x1b0),pCVar10);
      pSVar11 = *(SwingableWeaponControllerComponent **)(pCVar10 + 0x1c0);
    }
    local_50 = (long *)SceneObject::ComponentWithInterface
                                 (*(SceneObject **)(this + 0x108),(long)PTR_Interface_007e7110);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    SwingableWeaponControllerComponent::SetWeaponComponent(pSVar11,(intrusive_ptr *)&local_50);
    if ((local_50 != (long *)0x0) &&
       (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
  }
  else {
    if (*(long *)(pCVar10 + 0x1c0) != 0) goto LAB_0039de40;
LAB_0039de2c:
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar10 + 0x1b0),pCVar10);
    if (*(long *)(pCVar10 + 0x1c0) != 0) goto LAB_0039de40;
  }
  if ((local_48[0] != (long *)0x0) &&
     (iVar7 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_48[0] + 8))();
  }
LAB_0039df50:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


