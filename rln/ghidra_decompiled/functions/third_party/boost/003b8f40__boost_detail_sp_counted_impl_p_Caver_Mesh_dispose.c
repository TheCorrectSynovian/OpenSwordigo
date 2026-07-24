/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8f40
 * Function: boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Mesh> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose(sp_counted_impl_p<Caver::Mesh> *this)

{
  Mesh *this_00;
  
  this_00 = *(Mesh **)(this + 0x18);
  if (this_00 != (Mesh *)0x0) {
    Caver::Mesh::~Mesh(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


