/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b23a0
 * Function: boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GuideTarget> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose
          (sp_counted_impl_p<Caver::GuideTarget> *this)

{
  GuideTarget *this_00;
  
  this_00 = *(GuideTarget **)(this + 0x18);
  if (this_00 != (GuideTarget *)0x0) {
    Caver::GuideTarget::~GuideTarget(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


