/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e940
 * Function: Caver::GUIView::IsSubviewRemoved
 * Signature: undefined __thiscall IsSubviewRemoved(GUIView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&) */

bool __thiscall Caver::GUIView::IsSubviewRemoved(GUIView *this,shared_ptr *param_1)

{
  return *(GUIView **)(*(long *)param_1 + 0x58) != this;
}


