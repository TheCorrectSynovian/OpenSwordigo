/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bb38
 * Function: Caver::NewMenuView::~NewMenuView
 * Signature: undefined __thiscall ~NewMenuView(NewMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewMenuView::~NewMenuView() */

void __thiscall Caver::NewMenuView::~NewMenuView(NewMenuView *this)

{
                    /* catch() { ... } // from try @ 0052bb04 with catch @ 0052bb3c */
  *(undefined **)this = PTR_vtable_007e7d68 + 0x10;
  std::
  vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::
  ~vector((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
           *)(this + 0xf8));
  GUIView::~GUIView((GUIView *)this);
  return;
}


