/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044bc24
 * Function: Caver::GameSceneController::GameControlButtonDown
 * Signature: undefined __thiscall GameControlButtonDown(GameSceneController * this, GameControlButton param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton) */

void __thiscall
Caver::GameSceneController::GameControlButtonDown(GameSceneController *this,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  CharControllerComponent *this_00;
  long *plVar3;
  long *plVar4;
  TouchableComponent *this_01;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  PortalComponent *this_02;
  long *plVar9;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = *(CharControllerComponent **)(this + 0xe0);
  if (this_00 == (CharControllerComponent *)0x0) goto switchD_0044bc70_caseD_7;
  switch(param_2) {
  case 1:
    iVar6 = -1;
    goto LAB_0044bd38;
  case 2:
    iVar6 = 1;
LAB_0044bd38:
    CharControllerComponent::StartMovingToDirection(this_00,iVar6);
    break;
  case 3:
    uVar5 = CharControllerComponent::CanJump(this_00);
    if ((uVar5 & 1) != 0) {
      CharControllerComponent::StartJumping(*(CharControllerComponent **)(this + 0xe0));
    }
    break;
  case 4:
    uVar5 = CharControllerComponent::CanPickup(this_00);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = CharControllerComponent::CanSwing(*(CharControllerComponent **)(this + 0xe0)),
       (uVar5 & 1) != 0)) {
      CharControllerComponent::Swing(*(CharControllerComponent **)(this + 0xe0));
    }
    break;
  case 5:
    uVar5 = CharControllerComponent::CanUse(this_00);
    if ((uVar5 & 1) == 0) {
      uVar5 = CharControllerComponent::CanPickup(*(CharControllerComponent **)(this + 0xe0));
      if ((uVar5 & 1) != 0) {
        CharControllerComponent::Pickup
                  (*(CharControllerComponent **)(this + 0xe0),(SceneObject *)0x0,true);
      }
    }
    else {
      CharControllerComponent::Use(*(CharControllerComponent **)(this + 0xe0));
    }
    break;
  case 6:
    lVar8 = *(long *)(*(long *)(this + 8) + 0x68);
    plVar9 = *(long **)(*(long *)(this + 8) + 0x70);
    if ((plVar9 != (long *)0x0) && (plVar9[1] == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if (lVar8 != 0) {
      local_58 = *(undefined8 *)(*(long *)(this + 8) + 0x68);
      plVar9 = *(long **)(*(long *)(this + 8) + 0x70);
      if (plVar9 != (long *)0x0) {
        plVar9[1] = plVar9[1] + 1;
      }
      plStack_50 = plVar9;
      BeginCasting(this,(shared_ptr *)&local_58);
      if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar8 = plVar9[2];
        plVar9[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
    }
    break;
  case 10:
    plVar3 = (long *)ComponentManager::ComponentCollectionForInterface
                               ((ComponentManager *)(*(long *)(this + 0x20) + 0x1e0),
                                (long)PTR_Interface_007e68e8);
    for (plVar9 = (long *)*plVar3; ((long *)plVar3[1] != plVar9 && (*(long *)(*plVar9 + 0x28) == 0))
        ; plVar9 = plVar9 + 1) {
    }
LAB_0044bdb8:
    if ((long *)plVar3[1] != plVar9) {
      this_02 = (PortalComponent *)*plVar9;
      if ((this_02[0x98] != (PortalComponent)0x0) && (*(long *)(this_02 + 0xa0) != 0)) {
        PortalComponent::Enter(this_02);
        break;
      }
      do {
        plVar9 = plVar9 + 1;
        if (plVar9 == (long *)plVar3[1]) break;
      } while (*(long *)(*plVar9 + 0x28) == 0);
      goto LAB_0044bdb8;
    }
    break;
  case 0xb:
    plVar4 = (long *)ComponentManager::ComponentCollectionForInterface
                               ((ComponentManager *)(*(long *)(this + 0x20) + 0x1e0),
                                (long)PTR_Interface_007e4f20);
    puVar2 = PTR_Interface_007e62f8;
    plVar3 = (long *)plVar4[1];
    for (plVar9 = (long *)*plVar4; (plVar3 != plVar9 && (*(long *)(*plVar9 + 0x28) == 0));
        plVar9 = plVar9 + 1) {
    }
joined_r0x0044be04:
    if (plVar3 != plVar9) {
      this_01 = (TouchableComponent *)
                SceneObject::ComponentWithInterface(*(SceneObject **)(*plVar9 + 0x28),(long)puVar2);
      if (this_01 != (TouchableComponent *)0x0) {
        TouchableComponent::Trigger(this_01);
      }
      do {
        plVar9 = plVar9 + 1;
        if (plVar9 == (long *)plVar4[1]) break;
      } while (*(long *)(*plVar9 + 0x28) == 0);
      goto joined_r0x0044be04;
    }
  }
switchD_0044bc70_caseD_7:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


