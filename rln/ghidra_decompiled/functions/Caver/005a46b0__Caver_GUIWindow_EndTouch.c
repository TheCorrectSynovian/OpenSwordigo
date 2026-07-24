/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a46b0
 * Function: Caver::GUIWindow::EndTouch
 * Signature: undefined __thiscall EndTouch(GUIWindow * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::EndTouch(Caver::FWTouch const&) */

void __thiscall Caver::GUIWindow::EndTouch(GUIWindow *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  GUIWindow *pGVar4;
  GUIWindow *pGVar5;
  GUIWindow *pGVar6;
  ulong uVar7;
  code *pcVar8;
  GUIWindow *pGVar9;
  GUIWindow *pGVar10;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xe5] == (GUIWindow)0x0) {
    CancelTouch(this,param_1);
  }
  else {
                    /* try { // try from 005a46ec to 006a46ef has its CatchHandler @ 005a474c */
                    /* try { // try from 005a46f0 to 006a476b has its CatchHandler @ 005a4680 */
    if (*(GUIWindow **)(this + 0x1c0) == this + 0x1c0) {
      lVar2 = GUIApplication::sharedApplication();
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x18);
      local_50 = *(ulong *)param_1;
      plVar3 = (long *)std::
                       map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                       ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                                     *)(this + 0x180),&local_50);
      if ((long *)*plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005a46ec with catch @ 005a474c */
        lVar2 = (**(code **)(*(long *)*plVar3 + 0xf0))();
        plVar3 = (long *)*plVar3;
        if (((lVar2 == 0) || (*(char *)((long)plVar3 + 0xe4) != '\0')) ||
           (*(char *)((long)plVar3 + 0xe5) == '\0')) {
          pcVar8 = *(code **)(*plVar3 + 0x18);
        }
        else {
          pcVar8 = *(code **)(*plVar3 + 0x10);
        }
                    /* try { // try from 005a476c to 006a4793 has its CatchHandler @ 005a479c */
        (*pcVar8)(plVar3,param_1);
        local_50 = *(ulong *)param_1;
        std::
        _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
        ::erase((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 *)(this + 0x150),&local_50);
        pGVar5 = this + 0x188;
                    /* try { // try from 005a4794 to 006a479f has its CatchHandler @ 005a4680 */
        pGVar6 = pGVar5;
        if (*(GUIWindow **)(this + 400) != (GUIWindow *)0x0) {
          uVar7 = *(ulong *)param_1;
          pGVar10 = *(GUIWindow **)(this + 400);
LAB_005a479c:
          do {
            pGVar4 = pGVar10;
                    /* catch() { ... } // from try @ 005a476c with catch @ 005a479c */
            pGVar6 = pGVar5;
            if (uVar7 <= *(ulong *)(pGVar4 + 0x20)) {
              pGVar10 = *(GUIWindow **)(pGVar4 + 0x10);
              if (uVar7 < *(ulong *)(pGVar4 + 0x20)) goto code_r0x005a47c4;
              pGVar9 = *(GUIWindow **)(pGVar4 + 0x18);
              while (pGVar10 != (GUIWindow *)0x0) {
                pGVar5 = pGVar10 + 0x18;
                if (uVar7 <= *(ulong *)(pGVar10 + 0x20)) {
                  pGVar4 = pGVar10;
                  pGVar5 = pGVar10 + 0x10;
                }
                pGVar10 = *(GUIWindow **)pGVar5;
              }
              while (pGVar5 = pGVar4, pGVar9 != (GUIWindow *)0x0) {
                pGVar5 = pGVar9;
                pGVar10 = pGVar9 + 0x10;
                if (*(ulong *)(pGVar9 + 0x20) <= uVar7) {
                  pGVar5 = pGVar6;
                  pGVar10 = pGVar9 + 0x18;
                }
                pGVar6 = pGVar5;
                pGVar9 = *(GUIWindow **)pGVar10;
              }
              break;
            }
            pGVar10 = *(GUIWindow **)(pGVar4 + 0x18);
          } while (*(GUIWindow **)(pGVar4 + 0x18) != (GUIWindow *)0x0);
        }
LAB_005a47d4:
        std::
        _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
        ::_M_erase_aux((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                        *)(this + 0x180),pGVar5,pGVar6);
      }
    }
    else {
      EndTouch(*(GUIWindow **)(*(long *)(this + 0x1c8) + 0x10),param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x005a47c4:
  pGVar5 = pGVar4;
  pGVar6 = pGVar4;
  if (pGVar10 == (GUIWindow *)0x0) goto LAB_005a47d4;
  goto LAB_005a479c;
}


