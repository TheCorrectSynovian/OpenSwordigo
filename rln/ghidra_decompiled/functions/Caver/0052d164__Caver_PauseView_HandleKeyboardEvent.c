/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052d164
 * Function: Caver::PauseView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(PauseView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall Caver::PauseView::HandleKeyboardEvent(PauseView *this,GUIKeyboardEvent *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(param_1 + 0xc) == 1) && (uVar1 = *(uint *)(param_1 + 0x10), uVar1 < 0x27)) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x40080a0000U) == 0) {
      if ((ulong)uVar1 == 0x21) {
        AndroidQuitApplication();
        return;
      }
    }
    else {
      puVar2 = *(undefined8 **)(this + 0xf0);
      if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052d1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,this);
        return;
      }
    }
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


