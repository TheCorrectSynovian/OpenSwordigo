/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1f9c
 * Function: boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ProgramState> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose
          (sp_counted_impl_p<Caver::ProgramState> *this)

{
  ProgramState *this_00;
  
  this_00 = *(ProgramState **)(this + 0x18);
  if (this_00 != (ProgramState *)0x0) {
    Caver::ProgramState::~ProgramState(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


