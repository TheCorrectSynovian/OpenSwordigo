/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311998
 * Function: boost::detail::sp_counted_base::destroy
 * Signature: undefined __thiscall destroy(sp_counted_base * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_base::destroy() */

void __thiscall boost::detail::sp_counted_base::destroy(sp_counted_base *this)

{
  if (this != (sp_counted_base *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003119a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}


