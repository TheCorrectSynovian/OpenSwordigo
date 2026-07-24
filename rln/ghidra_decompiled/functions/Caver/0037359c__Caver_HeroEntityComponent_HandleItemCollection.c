/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037359c
 * Function: Caver::HeroEntityComponent::HandleItemCollection
 * Signature: undefined __thiscall HandleItemCollection(HeroEntityComponent * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject*) */

void __thiscall
Caver::HeroEntityComponent::HandleItemCollection(HeroEntityComponent *this,SceneObject *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  CollectableItemComponent *this_00;
  GameEvent *pGVar7;
  undefined4 *puVar8;
  ProgramState *pPVar9;
  long *plVar10;
  int *piVar11;
  ProgramState *pPVar12;
  int iVar13;
  GameEvent *pGVar14;
  long lVar15;
  ProgramState *local_70;
  long *local_68;
  long local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  this_00 = (CollectableItemComponent *)
            SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e57a8);
  if (this_00 == (CollectableItemComponent *)0x0) goto LAB_003738c4;
  switch(*(undefined4 *)(this_00 + 0x70)) {
  case 1:
    lVar15 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7450);
    if (lVar15 != 0) {
      uVar1 = *(int *)(this_00 + 0x74) + *(int *)(lVar15 + 0x80);
      uVar2 = *(uint *)(lVar15 + 0x7c);
      if ((int)uVar1 <= (int)*(uint *)(lVar15 + 0x7c)) {
        uVar2 = uVar1;
      }
      if (*(char *)(lVar15 + 0x78) == '\0') {
        *(uint *)(lVar15 + 0x80) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      }
    }
    break;
  case 2:
    lVar15 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7ab0);
    if (lVar15 != 0) {
      uVar1 = *(int *)(this_00 + 0x74) + *(int *)(lVar15 + 0x74);
      uVar2 = *(uint *)(lVar15 + 0x70);
      if ((int)uVar1 <= (int)*(uint *)(lVar15 + 0x70)) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar15 + 0x74) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      pGVar7 = operator_new(0x68);
      *(undefined4 *)pGVar7 = 6;
      pGVar14 = pGVar7 + 0x10;
      *(undefined8 *)pGVar14 = 0;
      *(undefined8 *)(pGVar7 + 0x18) = 0;
      *(GameEvent **)(pGVar7 + 0x20) = pGVar14;
      *(GameEvent **)(pGVar7 + 0x28) = pGVar14;
      *(undefined8 *)(pGVar7 + 0x30) = 0;
      pGVar14 = pGVar7 + 0x40;
      *(undefined8 *)pGVar14 = 0;
      *(undefined8 *)(pGVar7 + 0x48) = 0;
      *(GameEvent **)(pGVar7 + 0x50) = pGVar14;
      *(GameEvent **)(pGVar7 + 0x58) = pGVar14;
      *(undefined8 *)(pGVar7 + 0x60) = 0;
      goto LAB_003737b4;
    }
    break;
  case 4:
    pGVar7 = operator_new(0x68);
    *(undefined4 *)pGVar7 = 8;
    pGVar14 = pGVar7 + 0x10;
    *(undefined8 *)pGVar14 = 0;
    *(undefined8 *)(pGVar7 + 0x18) = 0;
    *(GameEvent **)(pGVar7 + 0x20) = pGVar14;
    *(GameEvent **)(pGVar7 + 0x28) = pGVar14;
    *(undefined8 *)(pGVar7 + 0x30) = 0;
    pGVar14 = pGVar7 + 0x40;
    *(undefined8 *)pGVar14 = 0;
    *(undefined8 *)(pGVar7 + 0x48) = 0;
    *(GameEvent **)(pGVar7 + 0x50) = pGVar14;
    *(GameEvent **)(pGVar7 + 0x58) = pGVar14;
    *(undefined8 *)(pGVar7 + 0x60) = 0;
    FUN_00666bb8(&local_70,"amount",auStack_58);
    uVar3 = *(undefined4 *)(this_00 + 0x74);
    puVar8 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)(pGVar7 + 0x38),(string *)&local_70);
    *puVar8 = uVar3;
    pPVar9 = local_70 + -0x18;
    if (pPVar9 != (ProgramState *)PTR_DAT_007e5de8) {
      pPVar12 = local_70 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00373910:
        iVar13 = *(int *)pPVar12;
        *(int *)pPVar12 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *(int *)pPVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pPVar12,0x10);
          if (bVar5) {
            *(int *)pPVar12 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
LAB_0037391c:
      if (iVar13 < 1) {
        operator_delete(pPVar9);
      }
    }
    goto LAB_003737b4;
  case 5:
    pGVar7 = operator_new(0x68);
    *(undefined4 *)pGVar7 = 7;
    pGVar14 = pGVar7 + 0x10;
    *(undefined8 *)pGVar14 = 0;
    *(undefined8 *)(pGVar7 + 0x18) = 0;
    *(GameEvent **)(pGVar7 + 0x20) = pGVar14;
    *(GameEvent **)(pGVar7 + 0x28) = pGVar14;
    *(undefined8 *)(pGVar7 + 0x30) = 0;
    pGVar14 = pGVar7 + 0x40;
    *(undefined8 *)pGVar14 = 0;
    *(undefined8 *)(pGVar7 + 0x48) = 0;
    *(GameEvent **)(pGVar7 + 0x50) = pGVar14;
    *(GameEvent **)(pGVar7 + 0x58) = pGVar14;
    *(undefined8 *)(pGVar7 + 0x60) = 0;
    FUN_00666bb8(&local_70,"amount",auStack_58);
    uVar3 = *(undefined4 *)(this_00 + 0x74);
    puVar8 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)(pGVar7 + 0x38),(string *)&local_70);
    *puVar8 = uVar3;
    pPVar9 = local_70 + -0x18;
    if (pPVar9 != (ProgramState *)PTR_DAT_007e5de8) {
      pPVar12 = local_70 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00373910;
      do {
        iVar13 = *(int *)pPVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pPVar12,0x10);
        if (bVar5) {
          *(int *)pPVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_0037391c;
    }
LAB_003737b4:
    GameEvent::SendEvent(pGVar7);
  }
  CollectableItemComponent::HandleCollection(this_00);
  FUN_0066a528(&local_60,this_00 + 0x78);
  plVar10 = (long *)(local_60 + -0x18);
  lVar15 = *plVar10;
  if (plVar10 != (long *)PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar11;
      *piVar11 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(plVar10);
    }
  }
  if (lVar15 == 0) {
    param_1[0xe8] = (SceneObject)0x1;
  }
  else if (*(long *)(this + 0x168) != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_70 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_70,*(SceneObject **)(this + 0x28));
      SceneObjectLib::PushSceneObject(local_70,*(SceneObject **)(this_00 + 0x28));
      ProgramState::Execute(local_70,2);
    }
    if ((local_68 != (long *)0x0) &&
       (lVar15 = local_68[1], local_68[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar15 = local_68[2];
      local_68[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
  }
LAB_003738c4:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


