/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a04b0
 * Function: Caver::GUIView::PresentModalView
 * Signature: undefined __thiscall PresentModalView(GUIView * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&, bool) */

void __thiscall Caver::GUIView::PresentModalView(GUIView *this,shared_ptr *param_1,bool param_2)

{
  GUIWindow *this_00;
  
                    /* try { // try from 005a04b0 to 006a0597 has its CatchHandler @ 0059fb4c */
                    /* catch() { ... } // from try @ 005a02c0 with catch @ 005a04b4 */
                    /* catch() { ... } // from try @ 0059ff74 with catch @ 005a04b8 */
  this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))();
  if (this_00 != (GUIWindow *)0x0) {
    GUIWindow::PresentModalView(this_00,param_1,param_2);
    return;
  }
  return;
}


