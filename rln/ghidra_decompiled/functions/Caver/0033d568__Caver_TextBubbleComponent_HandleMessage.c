/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d568
 * Function: Caver::TextBubbleComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::HandleMessage(int, void*) */

undefined8 Caver::TextBubbleComponent::HandleMessage(int param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  undefined *puVar5;
  GUITextBubble *this;
  int *piVar6;
  int iVar7;
  long *local_50;
  undefined1 auStack_48 [8];
  long local_40;
  long *local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if ((int)param_2 != 0x16) goto LAB_0033d6b0;
  this = *(GUITextBubble **)((ulong)(uint)param_1 + 0x78);
  if (*(ulong *)(this + 0x80) < *(long *)(*(long *)(this + 0x28) + -0x18) - 1U) {
    GUITextBubble::FinishShowingText(this);
    psVar4 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_40,"click",auStack_48);
    AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
    if ((local_50 != (long *)0x0) &&
       (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
    puVar5 = (undefined *)(local_40 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_0033d6b0;
    piVar6 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0033d6f8:
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    *(undefined1 *)((ulong)(uint)param_1 + 0x75) = 0;
    psVar4 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_40,"click",auStack_48);
    AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
    if ((local_38 != (long *)0x0) &&
       (iVar7 = (int)local_38[1] + -1, *(int *)(local_38 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_38 + 8))();
    }
    puVar5 = (undefined *)(local_40 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_0033d6b0;
    piVar6 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0033d6f8;
    do {
      iVar7 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar7 < 1) {
    operator_delete(puVar5);
  }
LAB_0033d6b0:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


