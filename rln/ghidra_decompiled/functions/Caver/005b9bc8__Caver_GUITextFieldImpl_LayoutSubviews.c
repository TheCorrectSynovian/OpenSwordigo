/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9bc8
 * Function: Caver::GUITextFieldImpl::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::LayoutSubviews() */

void __thiscall Caver::GUITextFieldImpl::LayoutSubviews(GUITextFieldImpl *this)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
                    /* try { // try from 005b9c08 to 006b9c0b has its CatchHandler @ 005b9c24 */
  local_30 = (*(float *)(this + 0x8c) - *(float *)(this + 0x170)) - *(float *)(this + 0x174);
  fStack_2c = (*(float *)(this + 0x90) - *(float *)(this + 0x178)) - *(float *)(this + 0x17c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b9c08 with catch @ 005b9c24
                        */
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                      *(float *)(this + 0x178),
                      (float)*(undefined8 *)(this + 0x84) + *(float *)(this + 0x170));
                    /* try { // try from 005b9c28 to 006b9c2b has its CatchHandler @ 005b9c34 */
                    /* try { // try from 005b9c2c to 006b9c37 has its CatchHandler @ 005b9b30 */
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b9c28 with catch @ 005b9c34
                        */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


