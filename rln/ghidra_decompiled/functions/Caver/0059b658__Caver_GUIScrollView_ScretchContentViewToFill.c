/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b658
 * Function: Caver::GUIScrollView::ScretchContentViewToFill
 * Signature: undefined __thiscall ScretchContentViewToFill(GUIScrollView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ScretchContentViewToFill(Caver::GUIView*) */

void __thiscall Caver::GUIScrollView::ScretchContentViewToFill(GUIScrollView *this,GUIView *param_1)

{
  long lVar1;
  float fVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 0059b664 to 0069b66f has its CatchHandler @ 0059c0b0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *(float *)(param_1 + 0x74);
  local_44 = *(float *)(param_1 + 0x78);
                    /* try { // try from 0059b690 to 0069b6b7 has its CatchHandler @ 0059c5fc */
  local_40 = *(float *)(param_1 + 0x7c);
  local_3c = *(float *)(param_1 + 0x80);
  if (0.0 < *(float *)(this + 0x8c) - local_40) {
    fVar2 = (*(float *)(this + 0x8c) - local_40) * 0.5;
    local_40 = local_40 + local_48;
    local_48 = local_48 - fVar2;
    local_40 = (fVar2 + local_48 + (local_40 - local_48)) - local_48;
  }
  if (0.0 < *(float *)(this + 0x90) - local_3c) {
    fVar2 = (*(float *)(this + 0x90) - local_3c) * 0.5;
    local_3c = local_3c + local_44;
    local_44 = local_44 - fVar2;
    local_3c = (fVar2 + local_44 + (local_3c - local_44)) - local_44;
  }
  GUIView::SetFrame(param_1,(Rectangle *)&local_48);
  (**(code **)(*(long *)this + 0x130))(this,param_1 + 0x74);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


