/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005151ac
 * Function: boost::detail::sp_counted_impl_p<Caver::FontText>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::FontText> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::FontText>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::FontText>::dispose(sp_counted_impl_p<Caver::FontText> *this)

{
  FontText *this_00;
  
  this_00 = *(FontText **)(this + 0x18);
  if (this_00 != (FontText *)0x0) {
    Caver::FontText::~FontText(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


