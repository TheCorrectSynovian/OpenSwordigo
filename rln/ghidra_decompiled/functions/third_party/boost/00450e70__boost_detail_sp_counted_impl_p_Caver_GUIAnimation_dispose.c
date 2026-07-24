/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450e70
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIAnimation> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose
          (sp_counted_impl_p<Caver::GUIAnimation> *this)

{
  GUIAnimation *this_00;
  
  this_00 = *(GUIAnimation **)(this + 0x18);
  if (this_00 != (GUIAnimation *)0x0) {
    Caver::GUIAnimation::~GUIAnimation(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


