/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4b84
 * Function: boost::detail::sp_counted_impl_p<Caver::Font>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Font> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Font>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Font>::dispose(sp_counted_impl_p<Caver::Font> *this)

{
  Font *this_00;
  
  this_00 = *(Font **)(this + 0x18);
  if (this_00 != (Font *)0x0) {
    Caver::Font::~Font(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


