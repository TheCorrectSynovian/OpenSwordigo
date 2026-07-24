/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588b14
 * Function: boost::detail::sp_counted_impl_p<Caver::FloatColor>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::FloatColor> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::FloatColor>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::FloatColor>::dispose
          (sp_counted_impl_p<Caver::FloatColor> *this)

{
                    /* catch() { ... } // from try @ 00588adc with catch @ 00588b18 */
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
                    /* catch() { ... } // from try @ 00588a94 with catch @ 00588b20 */
  return;
}


