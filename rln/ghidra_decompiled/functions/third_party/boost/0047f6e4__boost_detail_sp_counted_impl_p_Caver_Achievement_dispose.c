/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047f6e4
 * Function: boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Achievement> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose
          (sp_counted_impl_p<Caver::Achievement> *this)

{
  Achievement *this_00;
  
  this_00 = *(Achievement **)(this + 0x18);
  if (this_00 != (Achievement *)0x0) {
    Caver::Achievement::~Achievement(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


