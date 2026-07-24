/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d67e0
 * Function: Caver::GameOverlayView::SetGameControlButtonState
 * Signature: undefined __thiscall SetGameControlButtonState(GameOverlayView * this, GameControlButton param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetGameControlButtonState(Caver::GameControlButton, bool) */

void __thiscall
Caver::GameOverlayView::SetGameControlButtonState
          (GameOverlayView *this,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 004d67fc to 005d67ff has its CatchHandler @ 004d683c */
  switch(param_2) {
  case 1:
    plVar3 = *(long **)(this + 0x140);
    break;
  case 2:
    plVar3 = *(long **)(this + 0x150);
    break;
  case 3:
    plVar3 = *(long **)(this + 0x160);
    break;
  case 4:
    plVar3 = *(long **)(this + 0x170);
    break;
  case 5:
    plVar3 = *(long **)(this + 0x180);
    break;
  case 6:
                    /* try { // try from 004d6828 to 005d682f has its CatchHandler @ 004d6838 */
    plVar3 = *(long **)(this + 400);
    break;
  default:
    goto switchD_004d67fc_default;
  }
  uVar2 = *(uint *)(plVar3 + 0x24);
                    /* try { // try from 004d6830 to 005d683f has its CatchHandler @ 004d6774 */
                    /* catch() { ... } // from try @ 004d6828 with catch @ 004d6838 */
  uVar1 = uVar2 | 1;
                    /* catch() { ... } // from try @ 004d67fc with catch @ 004d683c */
  if ((param_3 & 1) == 0) {
    uVar1 = uVar2 & 0xfffffffe;
  }
                    /* try { // try from 004d6840 to 005d6893 has its CatchHandler @ 004d6840
                       catch(type#1 @ 00000000) { ... } // from try @ 004d6840 with catch @ 004d6840
                       catch(type#1 @ 00000000) { ... } // from try @ 004d68b0 with catch @ 004d6840
                       catch(type#1 @ 00000000) { ... } // from try @ 004d6a88 with catch @ 004d6840
                        */
  *(uint *)(plVar3 + 0x24) = uVar1;
  if (uVar1 != uVar2) {
                    /* WARNING: Could not recover jumptable at 0x004d6858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x130))();
    return;
  }
switchD_004d67fc_default:
  return;
}


