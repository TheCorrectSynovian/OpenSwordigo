/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055057c
 * Function: boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<CPVRTModelPOD> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose(sp_counted_impl_p<CPVRTModelPOD> *this)

{
  CPVRTModelPOD *this_00;
  
  this_00 = *(CPVRTModelPOD **)(this + 0x18);
                    /* try { // try from 0055058c to 006505a7 has its CatchHandler @ 0055037c */
  if (this_00 != (CPVRTModelPOD *)0x0) {
                    /* catch() { ... } // from try @ 00550564 with catch @ 00550590 */
                    /* catch() { ... } // from try @ 005503b4 with catch @ 00550594 */
    CPVRTModelPOD::~CPVRTModelPOD(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


