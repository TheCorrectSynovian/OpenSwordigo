/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a560
 * Function: Caver::MenuItemSlot::TouchBegan
 * Signature: undefined __thiscall TouchBegan(MenuItemSlot * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::MenuItemSlot::TouchBegan(MenuItemSlot *this,FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  string *psVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_48 [8];
  long local_40;
  long *local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (this[0x278] != (MenuItemSlot)0x0) {
    this[0x278] = (MenuItemSlot)0x0;
  }
  if (this[0x120] == (MenuItemSlot)0x0) {
    GUIResponder::TouchBegan((GUIResponder *)this,param_1);
  }
  else if (this[0x121] == (MenuItemSlot)0x0) {
    puVar5 = *(undefined8 **)(this + 0xf0);
    this[0x121] = (MenuItemSlot)0x1;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,this);
    }
    psVar6 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_40,"click",auStack_48);
    AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
    if ((local_38 != (long *)0x0) &&
       (iVar8 = (int)local_38[1] + -1, *(int *)(local_38 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*local_38 + 8))();
    }
    if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
  }
  else if (this[0x122] != (MenuItemSlot)0x0) {
    plVar4 = *(long **)(this + 0xf0);
    this[0x121] = (MenuItemSlot)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,this);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


