/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055ede4
 * Function: boost::detail::sp_counted_impl_p<Caver::Program>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Program> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Program>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Program>::dispose(sp_counted_impl_p<Caver::Program> *this)

{
  Program *this_00;
  
  this_00 = *(Program **)(this + 0x18);
  if (this_00 != (Program *)0x0) {
    Caver::Program::~Program(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


