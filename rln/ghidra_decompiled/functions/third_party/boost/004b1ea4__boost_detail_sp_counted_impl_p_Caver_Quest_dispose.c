/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1ea4
 * Function: boost::detail::sp_counted_impl_p<Caver::Quest>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Quest> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Quest>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Quest>::dispose(sp_counted_impl_p<Caver::Quest> *this)

{
  Quest *this_00;
  
  this_00 = *(Quest **)(this + 0x18);
  if (this_00 != (Quest *)0x0) {
    Caver::Quest::~Quest(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


