/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a11e0
 * Function: boost::detail::sp_counted_impl_p<Caver::Item>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Item> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Item>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Item>::dispose(sp_counted_impl_p<Caver::Item> *this)

{
  Item *this_00;
  
  this_00 = *(Item **)(this + 0x18);
  if (this_00 != (Item *)0x0) {
    Caver::Item::~Item(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


