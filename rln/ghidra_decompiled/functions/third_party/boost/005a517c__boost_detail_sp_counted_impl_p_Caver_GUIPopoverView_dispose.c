/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a517c
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIPopoverView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIPopoverView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIPopoverView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIPopoverView>::dispose
          (sp_counted_impl_p<Caver::GUIPopoverView> *this)

{
                    /* try { // try from 005a517c to 006a518f has its CatchHandler @ 005a5740 */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a518c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
                    /* try { // try from 005a5190 to 006a51a3 has its CatchHandler @ 005a57f8 */
  return;
}


