/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a79c8
 * Function: boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ProfileManager> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose
          (sp_counted_impl_p<Caver::ProfileManager> *this)

{
  ProfileManager *this_00;
  
  this_00 = *(ProfileManager **)(this + 0x18);
  if (this_00 != (ProfileManager *)0x0) {
    Caver::ProfileManager::~ProfileManager(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


