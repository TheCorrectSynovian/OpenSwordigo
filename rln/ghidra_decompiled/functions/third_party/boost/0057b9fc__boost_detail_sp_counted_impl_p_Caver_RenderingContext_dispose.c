/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b9fc
 * Function: boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::RenderingContext> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose
          (sp_counted_impl_p<Caver::RenderingContext> *this)

{
  RenderingContext *this_00;
  
  this_00 = *(RenderingContext **)(this + 0x18);
  if (this_00 != (RenderingContext *)0x0) {
    Caver::RenderingContext::~RenderingContext(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


