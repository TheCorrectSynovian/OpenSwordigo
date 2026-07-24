/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7714
 * Function: Caver::GameOverlayView::Layout
 * Signature: undefined __cdecl Layout(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::Layout() */

void Caver::GameOverlayView::Layout(void)

{
  long lVar1;
  long *plVar2;
  string *in_x0;
  GUIViewLayout *pGVar3;
  undefined8 *in_x8;
  long lVar4;
  string *psVar5;
  shared_ptr asStack_58 [8];
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar3 = operator_new(0x70);
  GUIViewLayout::GUIViewLayout(pGVar3);
  *in_x8 = pGVar3;
  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>
            ((shared_count *)(in_x8 + 1),pGVar3);
  boost::detail::sp_enable_shared_from_this();
  for (psVar5 = *(string **)(in_x0 + 0x120); in_x0 + 0x110 != psVar5;
      psVar5 = (string *)FUN_0064c640(psVar5)) {
    pGVar3 = (GUIViewLayout *)*in_x8;
    LayoutForSubview(in_x0,(GUIView *)(psVar5 + 0x20));
    GUIViewLayout::AddSubview(pGVar3,asStack_58);
    plVar2 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d76e0 with catch @ 004d7814
                        */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004d7818 to 005d781f has its CatchHandler @ 004d7828 */
                    /* try { // try from 004d7820 to 005d782b has its CatchHandler @ 004d7698 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d7818 with catch @ 004d7828
                        */
                    /* catch() { ... } // from try @ 004d7850 with catch @ 004d782c
                       catch() { ... } // from try @ 004d786c with catch @ 004d782c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


