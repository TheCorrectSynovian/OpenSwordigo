/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1cd0
 * Function: Caver::GUIWindow::~GUIWindow
 * Signature: undefined __thiscall ~GUIWindow(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::~GUIWindow() */

void __thiscall Caver::GUIWindow::~GUIWindow(GUIWindow *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  GUIWindow *pGVar4;
  long lVar5;
  long *plVar6;
  GUIWindow *pGVar7;
  
                    /* try { // try from 005a1cec to 006a1cf3 has its CatchHandler @ 005a228c */
  plVar6 = *(long **)(this + 0x218);
  puVar1 = PTR_vtable_007e68c8 + 0x188;
                    /* try { // try from 005a1d00 to 006a1d17 has its CatchHandler @ 005a22b0 */
  puVar2 = PTR_vtable_007e68c8 + 0x1b8;
  *(undefined **)this = PTR_vtable_007e68c8 + 0x10;
  *(undefined **)(this + 0xf8) = puVar2;
  *(undefined **)(this + 0xf0) = puVar1;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 005a1d4c to 006a1d53 has its CatchHandler @ 005a2038 */
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = *(long **)(this + 0x208);
                    /* try { // try from 005a1d5c to 006a1d77 has its CatchHandler @ 005a20d0 */
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x1f0);
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 005a1d9c to 006a1da3 has its CatchHandler @ 005a20d4 */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  pGVar4 = *(GUIWindow **)(this + 0x1c0);
                    /* try { // try from 005a1dc8 to 006a1dcf has its CatchHandler @ 005a1fe8 */
  while (pGVar4 != this + 0x1c0) {
    plVar6 = *(long **)(pGVar4 + 0x18);
    pGVar7 = *(GUIWindow **)pGVar4;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 005a1df0 to 006a1e17 has its CatchHandler @ 005a1fdc */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    operator_delete(pGVar4);
                    /* try { // try from 005a1e2c to 006a1e5f has its CatchHandler @ 005a20d4 */
    pGVar4 = pGVar7;
  }
  pGVar4 = *(GUIWindow **)(this + 0x1b0);
  while (pGVar4 != this + 0x1b0) {
    pGVar7 = *(GUIWindow **)pGVar4;
    operator_delete(pGVar4);
    pGVar4 = pGVar7;
  }
  std::
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  ::_M_erase((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
              *)(this + 0x180),*(_Rb_tree_node **)(this + 400));
  std::
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  ::_M_erase((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)(this + 0x150),*(_Rb_tree_node **)(this + 0x160));
  std::
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  ::_M_erase((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)(this + 0x120),*(_Rb_tree_node **)(this + 0x130));
  plVar6 = *(long **)(this + 0x118);
                    /* try { // try from 005a1e80 to 006a1ea7 has its CatchHandler @ 005a21c0 */
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = *(long **)(this + 0x108);
                    /* try { // try from 005a1ed4 to 006a1efb has its CatchHandler @ 005a2228 */
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 005a1efc to 006a200b has its CatchHandler @ 005a1684 */
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


