/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046541c
 * Function: boost::detail::sp_counted_impl_p<Caver::PortalViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PortalViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PortalViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PortalViewController>::dispose
          (sp_counted_impl_p<Caver::PortalViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00465424 to 0056542f has its CatchHandler @ 0046583c */
                    /* WARNING: Could not recover jumptable at 0x0046542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


