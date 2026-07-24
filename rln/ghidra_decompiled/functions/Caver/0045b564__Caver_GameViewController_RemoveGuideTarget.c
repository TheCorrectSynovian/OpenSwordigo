/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045b564
 * Function: Caver::GameViewController::RemoveGuideTarget
 * Signature: undefined __thiscall RemoveGuideTarget(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::RemoveGuideTarget() */

void __thiscall Caver::GameViewController::RemoveGuideTarget(GameViewController *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 0x128);
  if (plVar2 != (long *)0x0) {
    *(undefined1 *)(plVar2 + 0x1d) = 1;
    *(undefined8 *)(this + 0x128) = 0;
    iVar1 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x120);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
                    /* catch() { ... } // from try @ 0045b624 with catch @ 0045b5d8 */
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 0045b5fc to 0055b60f has its CatchHandler @ 0045b714 */
                    /* WARNING: Could not recover jumptable at 0x0045b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


