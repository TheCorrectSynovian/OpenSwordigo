/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051c61c
 * Function: Caver::LevelUpView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(LevelUpView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpView::LayoutSubviews() */

void __thiscall Caver::LevelUpView::LayoutSubviews(LevelUpView *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  GUIView *this_00;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0051c5ec with catch @ 0051c640 */
  this_00 = *(GUIView **)(this + 0x108);
  if (this_00 != (GUIView *)0x0) {
    local_60 = *(undefined8 *)(this_00 + 0x7c);
                    /* catch() { ... } // from try @ 0051c5a0 with catch @ 0051c654 */
                    /* try { // try from 0051c658 to 0061c65f has its CatchHandler @ 0051c668 */
                    /* try { // try from 0051c660 to 0061c66b has its CatchHandler @ 0051c54c */
                    /* catch() { ... } // from try @ 0051c658 with catch @ 0051c668 */
                    /* catch() { ... } // from try @ 0051c6b4 with catch @ 0051c66c
                       catch() { ... } // from try @ 0051c6d0 with catch @ 0051c66c */
    local_68 = CONCAT44(*(float *)(this + 0x88) + 6.0,
                        (-6.0 - (float)local_60) + *(float *)(this + 0x84) + *(float *)(this + 0x8c)
                       );
    GUIView::SetFrame(this_00,(Rectangle *)&local_68);
  }
  if (0 < *(int *)(this + 0x118)) {
                    /* try { // try from 0051c6b0 to 0061c6b3 has its CatchHandler @ 0051c6c4 */
                    /* try { // try from 0051c6b4 to 0061c6c7 has its CatchHandler @ 0051c66c */
    uVar2 = *(undefined8 *)(**(long **)(this + 0x120) + 0x7c);
                    /* catch() { ... } // from try @ 0051c6b0 with catch @ 0051c6c4 */
                    /* try { // try from 0051c6c8 to 0061c6cf has its CatchHandler @ 0051c6d8 */
                    /* try { // try from 0051c6d0 to 0061c6db has its CatchHandler @ 0051c66c */
                    /* catch() { ... } // from try @ 0051c6c8 with catch @ 0051c6d8 */
    Vector2::Rounded();
    uVar3 = DAT_006945d0;
                    /* catch() { ... } // from try @ 0051c774 with catch @ 0051c708 */
    if (0 < *(int *)(this + 0x118)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        local_68 = local_70;
        local_60 = uVar2;
        GUIView::SetFrame(*(GUIView **)(*(long *)(this + 0x120) + lVar4),(Rectangle *)&local_68);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
                    /* try { // try from 0051c74c to 0061c74f has its CatchHandler @ 0051c768 */
        local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                            (float)local_70 + (float)uVar3);
                    /* try { // try from 0051c750 to 0061c757 has its CatchHandler @ 0051c77c */
      } while (lVar5 < *(int *)(this + 0x118));
    }
  }
                    /* catch() { ... } // from try @ 0051c74c with catch @ 0051c768 */
                    /* try { // try from 0051c76c to 0061c773 has its CatchHandler @ 0051c778 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0051c774 to 0061c78f has its CatchHandler @ 0051c708 */
                    /* catch() { ... } // from try @ 0051c76c with catch @ 0051c778 */
                    /* catch() { ... } // from try @ 0051c750 with catch @ 0051c77c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


