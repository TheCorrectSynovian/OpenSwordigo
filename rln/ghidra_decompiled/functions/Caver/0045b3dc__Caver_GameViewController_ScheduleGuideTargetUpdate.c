/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045b3dc
 * Function: Caver::GameViewController::ScheduleGuideTargetUpdate
 * Signature: undefined __thiscall ScheduleGuideTargetUpdate(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::ScheduleGuideTargetUpdate() */

void __thiscall Caver::GameViewController::ScheduleGuideTargetUpdate(GameViewController *this)

{
  shared_ptr *psVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x118) != 0) {
    psVar1 = (shared_ptr *)(this + 0x118);
    uVar3 = GameState::GuideTargetCompleted(*(GameState **)(this + 0xa8),psVar1);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 0045ab2c with catch @ 0045b410 */
      if (plVar4 != (long *)0x0) {
        *(undefined1 *)(plVar4 + 0x1d) = 1;
        *(undefined8 *)(this + 0x128) = 0;
        iVar2 = (int)plVar4[1] + -1;
        *(int *)(plVar4 + 1) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      plVar4 = *(long **)(this + 0x120);
      *(undefined8 *)psVar1 = 0;
      *(undefined8 *)(this + 0x120) = 0;
      if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar5 = plVar4[2];
        plVar4[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0045ab08 with catch @ 0045b47c */
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
    if (*(long *)psVar1 != 0) {
      return;
    }
  }
  *(undefined4 *)(this + 0x130) = 0x3fc00000;
  return;
}


