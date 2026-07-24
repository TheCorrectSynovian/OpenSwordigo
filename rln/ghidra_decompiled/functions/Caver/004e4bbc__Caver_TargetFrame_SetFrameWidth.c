/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4bbc
 * Function: Caver::TargetFrame::SetFrameWidth
 * Signature: undefined __thiscall SetFrameWidth(TargetFrame * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::SetFrameWidth(float) */

void __thiscall Caver::TargetFrame::SetFrameWidth(TargetFrame *this,float param_1)

{
  long lVar1;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = *(undefined4 *)(this + 0x78);
  local_2c = *(undefined4 *)(this + 0x80);
  local_30 = (float)(int)(param_1 * 0.5) + (float)(int)(param_1 * 0.5);
  local_38 = (*(float *)(this + 0x74) + *(float *)(this + 0x7c) * 0.5) - local_30 * 0.5;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


