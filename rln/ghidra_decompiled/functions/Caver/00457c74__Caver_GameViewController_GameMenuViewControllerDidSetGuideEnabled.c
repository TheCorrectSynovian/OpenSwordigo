/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457c74
 * Function: Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled
 * Signature: undefined __thiscall GameMenuViewControllerDidSetGuideEnabled(GameViewController * this, GameMenuViewController * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(Caver::GameMenuViewController*,
   bool) */

void __thiscall
Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled
          (GameViewController *this,GameMenuViewController *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xa8);
  *(bool *)(lVar1 + 0x1c8) = param_2;
  *(undefined1 *)(lVar1 + 0x1c9) = 1;
  UpdateGuideTarget(this,false);
  return;
}


