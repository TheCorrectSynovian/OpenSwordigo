/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b7b4
 * Function: boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ProfileManager_Android> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose
          (sp_counted_impl_p<Caver::ProfileManager_Android> *this)

{
  ProfileManager_Android *this_00;
  
  this_00 = *(ProfileManager_Android **)(this + 0x18);
  if (this_00 != (ProfileManager_Android *)0x0) {
    Caver::ProfileManager_Android::~ProfileManager_Android(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


