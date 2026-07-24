/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055e7fc
 * Function: boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ObjectLibrary> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose
          (sp_counted_impl_p<Caver::ObjectLibrary> *this)

{
  ObjectLibrary *this_00;
  
  this_00 = *(ObjectLibrary **)(this + 0x18);
  if (this_00 != (ObjectLibrary *)0x0) {
    Caver::ObjectLibrary::~ObjectLibrary(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


