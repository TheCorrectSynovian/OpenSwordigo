/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046442c
 * Function: boost::detail::sp_counted_impl_p<Caver::Scene>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Scene> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Scene>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Scene>::dispose(sp_counted_impl_p<Caver::Scene> *this)

{
                    /* try { // try from 0046442c to 0056443f has its CatchHandler @ 004650cc */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


