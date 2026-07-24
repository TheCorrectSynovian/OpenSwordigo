/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bbd0
 * Function: boost::detail::sp_counted_impl_p<Caver::Model>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Model> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Model>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Model>::dispose(sp_counted_impl_p<Caver::Model> *this)

{
  Model *this_00;
  
  this_00 = *(Model **)(this + 0x18);
  if (this_00 != (Model *)0x0) {
    Caver::Model::~Model(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


