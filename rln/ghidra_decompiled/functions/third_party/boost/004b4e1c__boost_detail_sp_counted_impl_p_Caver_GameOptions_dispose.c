/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4e1c
 * Function: boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameOptions> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose
          (sp_counted_impl_p<Caver::GameOptions> *this)

{
  GameOptions *this_00;
  
  this_00 = *(GameOptions **)(this + 0x18);
  if (this_00 != (GameOptions *)0x0) {
    Caver::GameOptions::~GameOptions(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


