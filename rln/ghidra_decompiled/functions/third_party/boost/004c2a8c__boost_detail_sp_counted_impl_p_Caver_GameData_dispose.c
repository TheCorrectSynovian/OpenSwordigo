/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2a8c
 * Function: boost::detail::sp_counted_impl_p<Caver::GameData>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameData> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameData>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameData>::dispose(sp_counted_impl_p<Caver::GameData> *this)

{
  GameData *this_00;
  
  this_00 = *(GameData **)(this + 0x18);
  if (this_00 != (GameData *)0x0) {
    Caver::GameData::~GameData(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


