/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033dde8
 * Function: boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUITextBubble> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose
          (sp_counted_impl_p<Caver::GUITextBubble> *this)

{
  GUITextBubble *this_00;
  
  this_00 = *(GUITextBubble **)(this + 0x18);
  if (this_00 != (GUITextBubble *)0x0) {
    Caver::GUITextBubble::~GUITextBubble(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


