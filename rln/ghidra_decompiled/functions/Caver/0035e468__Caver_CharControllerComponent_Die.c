/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035e468
 * Function: Caver::CharControllerComponent::Die
 * Signature: undefined __thiscall Die(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::Die() */

void __thiscall Caver::CharControllerComponent::Die(CharControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  SwingableWeaponControllerComponent *pSVar5;
  string *psVar6;
  CharAnimControllerComponent *this_00;
  long *plVar7;
  long lVar8;
  int iVar9;
  code *pcVar10;
  undefined1 auStack_58 [8];
  long *local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x2d0) != 0) {
    DropQuickly(this);
  }
  lVar8 = *(long *)(this + 400);
  if (lVar8 == 0) {
    lVar8 = *(long *)(this + 0x98);
    if (lVar8 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar8 = *(long *)(this + 0x98);
      if (lVar8 != 0) goto LAB_0035e4c0;
    }
    else {
LAB_0035e4c0:
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(long *)(this + 400) = lVar8;
    if ((plVar4 != (long *)0x0) &&
       (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar4 + 8))();
      lVar8 = *(long *)(this + 400);
    }
    if (lVar8 != 0) goto LAB_0035e4fc;
  }
  else {
LAB_0035e4fc:
    lVar8 = *(long *)(lVar8 + 0x170);
    if ((lVar8 != 0) &&
       (DAT_00683944 <
        (*(float *)(lVar8 + 0x28) * DAT_0068493c - *(float *)(lVar8 + 0xc)) *
        *(float *)(lVar8 + 0x30) * *(float *)(lVar8 + 0x34))) {
      pSVar5 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
      if (pSVar5 == (SwingableWeaponControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
        pSVar5 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
        if (pSVar5 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035e554;
      }
      else {
LAB_0035e554:
        SwingableWeaponControllerComponent::StopSwing(pSVar5);
      }
      pSVar5 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
      if (pSVar5 == (SwingableWeaponControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
        pSVar5 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
        if (pSVar5 == (SwingableWeaponControllerComponent *)0x0) goto LAB_0035e578;
      }
      SwingableWeaponControllerComponent::StopSwing(pSVar5);
    }
  }
LAB_0035e578:
  if (*(int *)(this + 0x250) != 0) {
    this[0x24c] = (CharControllerComponent)0x0;
  }
  psVar6 = (string *)AudioSystem::sharedSystem();
  FUN_00666bb8(&local_50,"hiro_die",auStack_58);
  AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
  if ((local_48 != (long *)0x0) &&
     (iVar9 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
  if (local_50 + -3 == (long *)PTR_DAT_007e5de8) {
LAB_0035e5f0:
    plVar4 = *(long **)(this + 0x140);
  }
  else {
    plVar4 = local_50 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar4;
      *(int *)plVar4 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar9) goto LAB_0035e5f0;
    operator_delete(local_50 + -3);
    plVar4 = *(long **)(this + 0x140);
  }
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    plVar4 = *(long **)(this + 0x140);
    if (plVar4 == (long *)0x0) goto LAB_0035e6ac;
  }
  lVar8 = (**(code **)(*plVar4 + 0x108))();
  *(undefined4 *)(lVar8 + 0xc) = 0;
  this_00 = *(CharAnimControllerComponent **)(this + 400);
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(CharAnimControllerComponent **)(this + 0x98);
      if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_0035e6ec;
    }
    else {
LAB_0035e6ec:
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = this_00;
    if ((plVar4 != (long *)0x0) &&
       (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar4 + 8))(plVar4);
      this_00 = *(CharAnimControllerComponent **)(this + 400);
    }
  }
  CharAnimControllerComponent::StopAction(this_00);
  plVar4 = *(long **)(this + 400);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(this + 0x98);
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      plVar4 = *(long **)(this + 0x98);
      if (plVar4 != (long *)0x0) goto LAB_0035e748;
    }
    else {
LAB_0035e748:
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar7 = *(long **)(this + 400);
    *(long **)(this + 400) = plVar4;
    if ((plVar7 != (long *)0x0) &&
       (iVar9 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar7 + 8))();
      plVar4 = *(long **)(this + 400);
    }
  }
  plVar7 = *(long **)(this + 0x140);
  pcVar10 = *(code **)(*plVar4 + 0x108);
  if (plVar7 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    plVar7 = *(long **)(this + 0x140);
  }
  local_50 = (long *)(**(code **)(*plVar7 + 0x108))();
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  (*pcVar10)(_DAT_00683c38,plVar4,&local_50);
  if ((local_50 != (long *)0x0) &&
     (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  *(undefined4 *)(this + 0x2f8) = 0;
LAB_0035e6ac:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


