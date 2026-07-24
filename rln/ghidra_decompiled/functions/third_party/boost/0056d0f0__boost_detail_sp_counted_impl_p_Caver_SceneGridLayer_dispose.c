/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d0f0
 * Function: boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::SceneGridLayer> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose
          (sp_counted_impl_p<Caver::SceneGridLayer> *this)

{
  SceneGridLayer *this_00;
  
  this_00 = *(SceneGridLayer **)(this + 0x18);
  if (this_00 != (SceneGridLayer *)0x0) {
    Caver::SceneGridLayer::~SceneGridLayer(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


