/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050ebcc
 * Function: boost::detail::sp_counted_impl_p<Caver::DraggableMenuItem>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::DraggableMenuItem> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::DraggableMenuItem>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::DraggableMenuItem>::dispose
          (sp_counted_impl_p<Caver::DraggableMenuItem> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}


