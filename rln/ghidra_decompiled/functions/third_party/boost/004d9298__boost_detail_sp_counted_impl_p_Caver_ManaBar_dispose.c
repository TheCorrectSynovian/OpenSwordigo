/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d9298
 * Function: boost::detail::sp_counted_impl_p<Caver::ManaBar>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ManaBar> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ManaBar>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ManaBar>::dispose(sp_counted_impl_p<Caver::ManaBar> *this)

{
                    /* catch() { ... } // from try @ 004d9288 with catch @ 004d9298 */
                    /* catch() { ... } // from try @ 004d925c with catch @ 004d929c */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 004d92a0 to 005d92e7 has its CatchHandler @ 004d92a0
                       catch(type#1 @ 00000000) { ... } // from try @ 004d92a0 with catch @ 004d92a0
                       catch(type#1 @ 00000000) { ... } // from try @ 004d9304 with catch @ 004d92a0
                       catch(type#1 @ 00000000) { ... } // from try @ 004d939c with catch @ 004d92a0
                        */
                    /* WARNING: Could not recover jumptable at 0x004d92a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}


