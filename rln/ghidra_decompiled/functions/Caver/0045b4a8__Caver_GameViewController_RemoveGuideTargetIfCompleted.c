/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045b4a8
 * Function: Caver::GameViewController::RemoveGuideTargetIfCompleted
 * Signature: undefined __thiscall RemoveGuideTargetIfCompleted(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::RemoveGuideTargetIfCompleted() */

void __thiscall Caver::GameViewController::RemoveGuideTargetIfCompleted(GameViewController *this)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(this + 0x118) != 0) {
    uVar2 = GameState::GuideTargetCompleted
                      (*(GameState **)(this + 0xa8),(shared_ptr *)(this + 0x118));
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(this + 0x128);
      if (plVar3 != (long *)0x0) {
        *(undefined1 *)(plVar3 + 0x1d) = 1;
        *(undefined8 *)(this + 0x128) = 0;
        iVar1 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plVar3 = *(long **)(this + 0x120);
      *(undefined8 *)(this + 0x118) = 0;
      *(undefined8 *)(this + 0x120) = 0;
      if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar4 = plVar3[2];
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0045b560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x18))(plVar3);
          return;
        }
      }
    }
  }
  return;
}


