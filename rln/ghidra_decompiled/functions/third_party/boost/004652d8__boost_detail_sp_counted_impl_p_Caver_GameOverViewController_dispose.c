/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004652d8
 * Function: boost::detail::sp_counted_impl_p<Caver::GameOverViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameOverViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameOverViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameOverViewController>::dispose
          (sp_counted_impl_p<Caver::GameOverViewController> *this)

{
                    /* try { // try from 004652dc to 005653ab has its CatchHandler @ 004652dc
                       catch() { ... } // from try @ 004652dc with catch @ 004652dc
                       catch() { ... } // from try @ 00465660 with catch @ 004652dc
                       catch() { ... } // from try @ 00465920 with catch @ 004652dc */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004652e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


