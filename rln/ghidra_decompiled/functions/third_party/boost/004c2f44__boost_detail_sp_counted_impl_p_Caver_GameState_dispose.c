/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2f44
 * Function: boost::detail::sp_counted_impl_p<Caver::GameState>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameState> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameState>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameState>::dispose
          (sp_counted_impl_p<Caver::GameState> *this)

{
  GameState *this_00;
  
  this_00 = *(GameState **)(this + 0x18);
  if (this_00 != (GameState *)0x0) {
    Caver::GameState::~GameState(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


