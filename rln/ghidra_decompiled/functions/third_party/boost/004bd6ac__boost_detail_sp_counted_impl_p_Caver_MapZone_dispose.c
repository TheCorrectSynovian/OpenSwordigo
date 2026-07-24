/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bd6ac
 * Function: boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::MapZone> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose(sp_counted_impl_p<Caver::MapZone> *this)

{
  MapZone *this_00;
  
  this_00 = *(MapZone **)(this + 0x18);
  if (this_00 != (MapZone *)0x0) {
    Caver::MapZone::~MapZone(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


