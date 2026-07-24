/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594468
 * Function: Caver::GUIBubbleView::GUIBubbleView
 * Signature: undefined __thiscall GUIBubbleView(GUIBubbleView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIBubbleView::GUIBubbleView() */

void __thiscall Caver::GUIBubbleView::GUIBubbleView(GUIBubbleView *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  GUITextBubble *pGVar4;
  long lVar5;
  GUITextBubble *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00594470 to 00694483 has its CatchHandler @ 005944f4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00594484 to 00694517 has its CatchHandler @ 00594244 */
  GUIView::GUIView((GUIView *)this);
  puVar3 = PTR_vtable_007e60c8;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined **)this = puVar3 + 0x10;
  pGVar4 = operator_new(0x98);
  GUITextBubble::GUITextBubble(pGVar4);
  local_48 = pGVar4;
  boost::detail::shared_count::shared_count<Caver::GUITextBubble>((shared_count *)&local_40,pGVar4);
  boost::detail::sp_enable_shared_from_this(&local_48,pGVar4,pGVar4);
  pGVar4 = *(GUITextBubble **)(this + 0xf0);
  plVar1 = *(long **)(this + 0xf8);
                    /* catch() { ... } // from try @ 00594470 with catch @ 005944f4 */
  *(GUITextBubble **)(this + 0xf0) = local_48;
  *(long **)(this + 0xf8) = local_40;
  local_48 = pGVar4;
  local_40 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00594518 to 0069462f has its CatchHandler @ 00594638 */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar5 = plVar1[2];
    plVar1[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
                    /* catch() { ... } // from try @ 005943fc with catch @ 00594544 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


