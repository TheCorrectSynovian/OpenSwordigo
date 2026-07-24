/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d576c
 * Function: Caver::GameOverlayView::~GameOverlayView
 * Signature: undefined __thiscall ~GameOverlayView(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::~GameOverlayView() */

void __thiscall Caver::GameOverlayView::~GameOverlayView(GameOverlayView *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_007e5e88 + 0x10;
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x140),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x150),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x160),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x170),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x180),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 400),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x1b8),this);
  GUIControl::RemoveActionTarget(*(GUIControl **)(this + 0x1c8),this);
  plVar2 = *(long **)(this + 0x290);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d56c4 with catch @ 004d5810
                        */
                    /* try { // try from 004d5814 to 005d581b has its CatchHandler @ 004d5824 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 004d581c to 005d5827 has its CatchHandler @ 004d567c */
    plVar2[2] = lVar1 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d5814 with catch @ 004d5824
                        */
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d584c with catch @ 004d5828
                       catch() { ... } // from try @ 004d5868 with catch @ 004d5828 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x280);
                    /* try { // try from 004d5848 to 005d584b has its CatchHandler @ 004d585c */
                    /* try { // try from 004d584c to 005d585f has its CatchHandler @ 004d5828 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004d5848 with catch @ 004d585c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 004d5860 to 005d5867 has its CatchHandler @ 004d5870 */
    lVar1 = plVar2[2];
                    /* try { // try from 004d5868 to 005d5873 has its CatchHandler @ 004d5828 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d5860 with catch @ 004d5870 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x250);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x240);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x230);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x220);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x210);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x200);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x1f0);
                    /* catch() { ... } // from try @ 004d5a8c with catch @ 004d5a3c */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 004d5a5c to 005d5a5f has its CatchHandler @ 004d5a80 */
                    /* try { // try from 004d5a60 to 005d5a67 has its CatchHandler @ 004d5a78 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 004d5a60 with catch @ 004d5a78 */
  plVar2 = *(long **)(this + 0x1e0);
                    /* catch() { ... } // from try @ 004d5a5c with catch @ 004d5a80 */
                    /* try { // try from 004d5a84 to 005d5a8b has its CatchHandler @ 004d5a9c */
                    /* try { // try from 004d5a8c to 005d5a9f has its CatchHandler @ 004d5a3c */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004d5a84 with catch @ 004d5a9c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x1d0);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x1c0);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x1b0);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x198);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x188);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x178);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x168);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x158);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x148);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
              *)(this + 0x108),*(_Rb_tree_node **)(this + 0x118));
  plVar2 = *(long **)(this + 0x100);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


