/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052b520
 * Function: Caver::NewMenuView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(NewMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewMenuView::LayoutSubviews() */

void __thiscall Caver::NewMenuView::LayoutSubviews(NewMenuView *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  GUIView *this_00;
  long lVar5;
  ulong uVar6;
  Rectangle local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
                    /* catch() { ... } // from try @ 0052b554 with catch @ 0052b530 */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0052b550 to 0062b553 has its CatchHandler @ 0052b564 */
                    /* try { // try from 0052b554 to 0062b577 has its CatchHandler @ 0052b530 */
  lVar4 = *(long *)(this + 0xf8);
  if (*(long *)(this + 0x100) != lVar4) {
                    /* catch() { ... } // from try @ 0052b550 with catch @ 0052b564 */
    lVar5 = 0;
    uVar6 = 0;
    do {
      this_00 = *(GUIView **)(lVar4 + lVar5);
      uVar1 = *(undefined4 *)(this_00 + 0x7c);
      uVar2 = *(undefined4 *)(this_00 + 0x80);
      Vector2::Rounded();
      local_80 = uVar1;
      uStack_7c = uVar2;
      GUIView::SetFrame(this_00,local_88);
      lVar4 = *(long *)(this + 0xf8);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(this + 0x100) - lVar4 >> 4));
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


