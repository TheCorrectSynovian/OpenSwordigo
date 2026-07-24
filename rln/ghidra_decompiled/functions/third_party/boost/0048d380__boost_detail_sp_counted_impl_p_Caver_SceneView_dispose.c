/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d380
 * Function: boost::detail::sp_counted_impl_p<Caver::SceneView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::SceneView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::SceneView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::SceneView>::dispose
          (sp_counted_impl_p<Caver::SceneView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 0048d388 to 0058d46f has its CatchHandler @ 0048d098 */
                    /* WARNING: Could not recover jumptable at 0x0048d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}


