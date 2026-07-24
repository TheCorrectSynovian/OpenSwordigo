/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b5430
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIViewLayout> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose
          (sp_counted_impl_p<Caver::GUIViewLayout> *this)

{
  GUIViewLayout *this_00;
  
  this_00 = *(GUIViewLayout **)(this + 0x18);
  if (this_00 != (GUIViewLayout *)0x0) {
    Caver::GUIViewLayout::~GUIViewLayout(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


