/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457cb0
 * Function: Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled
 * Signature: undefined __thiscall GameMenuViewControllerDidSetCoinDoublerEnabled(GameViewController * this, GameMenuViewController * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled(Caver::GameMenuViewController*,
   bool) */

void __thiscall
Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled
          (GameViewController *this,GameMenuViewController *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xa8);
  *(bool *)(lVar1 + 0x1ca) = param_2;
  *(undefined1 *)(lVar1 + 0x1cb) = 1;
  return;
}


