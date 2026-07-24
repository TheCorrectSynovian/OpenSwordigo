/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442478
 * Function: boost::detail::sp_counted_impl_p<Caver::GUILabel>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUILabel> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUILabel>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUILabel>::dispose(sp_counted_impl_p<Caver::GUILabel> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00442488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00442488 to 0054251f has its CatchHandler @ 00442488
                       catch() { ... } // from try @ 00442488 with catch @ 00442488
                       catch() { ... } // from try @ 00442544 with catch @ 00442488 */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}


