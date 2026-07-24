/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e574
 * Function: Caver::GUIViewController::NewLoadingView
 * Signature: undefined __thiscall NewLoadingView(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::NewLoadingView() */

void __thiscall Caver::GUIViewController::NewLoadingView(GUIViewController *this)

{
  GUILoadingView *this_00;
  shared_ptr<Caver::GUILoadingView> *in_x8;
  
  this_00 = operator_new(0xf8);
  GUILoadingView::GUILoadingView(this_00);
  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(in_x8,this_00);
  return;
}


