/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a454c
 * Function: Caver::GUIWindow::CancelTouch
 * Signature: undefined __thiscall CancelTouch(GUIWindow * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::CancelTouch(Caver::FWTouch const&) */

void __thiscall Caver::GUIWindow::CancelTouch(GUIWindow *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  GUIWindow *pGVar4;
  GUIWindow *pGVar5;
  GUIWindow *pGVar6;
  ulong uVar7;
  GUIWindow *pGVar8;
  GUIWindow *pGVar9;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005a4568 to 006a4573 has its CatchHandler @ 005a4454 */
                    /* catch() { ... } // from try @ 005a4540 with catch @ 005a4570 */
                    /* catch() { ... } // from try @ 005a4624 with catch @ 005a4574 */
  if (*(GUIWindow **)(this + 0x1c0) == this + 0x1c0) {
    lVar2 = GUIApplication::sharedApplication();
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x18);
    local_40 = *(ulong *)param_1;
    plVar3 = (long *)std::
                     map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                     ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                                   *)(this + 0x180),&local_40);
    plVar3 = (long *)*plVar3;
                    /* try { // try from 005a45c0 to 006a45cb has its CatchHandler @ 005a45d8 */
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
      local_40 = *(ulong *)param_1;
                    /* catch() { ... } // from try @ 005a45c0 with catch @ 005a45d8 */
      std::
      _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
      ::erase((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
               *)(this + 0x150),&local_40);
      pGVar5 = this + 0x188;
      pGVar6 = pGVar5;
      if (*(GUIWindow **)(this + 400) != (GUIWindow *)0x0) {
        uVar7 = *(ulong *)param_1;
        pGVar9 = *(GUIWindow **)(this + 400);
LAB_005a45f8:
        do {
          pGVar4 = pGVar9;
                    /* try { // try from 005a45fc to 006a4623 has its CatchHandler @ 005a462c */
          pGVar6 = pGVar5;
          if (uVar7 <= *(ulong *)(pGVar4 + 0x20)) {
            pGVar9 = *(GUIWindow **)(pGVar4 + 0x10);
            if (uVar7 < *(ulong *)(pGVar4 + 0x20)) goto code_r0x005a4620;
            pGVar8 = *(GUIWindow **)(pGVar4 + 0x18);
            while (pGVar9 != (GUIWindow *)0x0) {
              pGVar5 = pGVar9 + 0x18;
              if (uVar7 <= *(ulong *)(pGVar9 + 0x20)) {
                pGVar4 = pGVar9;
                pGVar5 = pGVar9 + 0x10;
              }
              pGVar9 = *(GUIWindow **)pGVar5;
                    /* catch() { ... } // from try @ 005a46f0 with catch @ 005a4680
                       catch() { ... } // from try @ 005a4794 with catch @ 005a4680 */
            }
            while (pGVar5 = pGVar4, pGVar8 != (GUIWindow *)0x0) {
              pGVar5 = pGVar8;
              pGVar9 = pGVar8 + 0x10;
              if (*(ulong *)(pGVar8 + 0x20) <= uVar7) {
                pGVar5 = pGVar6;
                pGVar9 = pGVar8 + 0x18;
              }
              pGVar6 = pGVar5;
              pGVar8 = *(GUIWindow **)pGVar9;
            }
            break;
          }
          pGVar9 = *(GUIWindow **)(pGVar4 + 0x18);
        } while (*(GUIWindow **)(pGVar4 + 0x18) != (GUIWindow *)0x0);
      }
LAB_005a4630:
                    /* catch() { ... } // from try @ 005a458c with catch @ 005a4630 */
      std::
      _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
      ::_M_erase_aux((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                      *)(this + 0x180),pGVar5,pGVar6);
    }
  }
  else {
                    /* try { // try from 005a458c to 006a4593 has its CatchHandler @ 005a4630 */
    CancelTouch(*(GUIWindow **)(*(long *)(this + 0x1c8) + 0x10),param_1);
  }
                    /* try { // try from 005a4640 to 006a464b has its CatchHandler @ 005a464c */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005a4640 with catch @ 005a464c */
                    /* try { // try from 005a4650 to 006a4653 has its CatchHandler @ 005a4658 */
                    /* catch() { ... } // from try @ 005a4650 with catch @ 005a4658 */
  return;
code_r0x005a4620:
                    /* try { // try from 005a4624 to 006a463f has its CatchHandler @ 005a4574 */
  pGVar5 = pGVar4;
  pGVar6 = pGVar4;
  if (pGVar9 == (GUIWindow *)0x0) goto LAB_005a4630;
  goto LAB_005a45f8;
}


