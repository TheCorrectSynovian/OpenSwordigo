/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311f24
 * Function: boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PlayerProfile> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose
          (sp_counted_impl_p<Caver::PlayerProfile> *this)

{
  PlayerProfile *this_00;
  
  this_00 = *(PlayerProfile **)(this + 0x18);
  if (this_00 != (PlayerProfile *)0x0) {
    Caver::PlayerProfile::~PlayerProfile(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


