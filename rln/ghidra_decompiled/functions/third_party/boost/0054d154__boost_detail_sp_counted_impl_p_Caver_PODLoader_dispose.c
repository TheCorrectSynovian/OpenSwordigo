/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d154
 * Function: boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PODLoader> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose
          (sp_counted_impl_p<Caver::PODLoader> *this)

{
  PODLoader *this_00;
  
  this_00 = *(PODLoader **)(this + 0x18);
  if (this_00 != (PODLoader *)0x0) {
    Caver::PODLoader::~PODLoader(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


