/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442acc
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIBubbleView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIBubbleView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIBubbleView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIBubbleView>::dispose
          (sp_counted_impl_p<Caver::GUIBubbleView> *this)

{
                    /* catch() { ... } // from try @ 00442a5c with catch @ 00442ad0 */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00442adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}


