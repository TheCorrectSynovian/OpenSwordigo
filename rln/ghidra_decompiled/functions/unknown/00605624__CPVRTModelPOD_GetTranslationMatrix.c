/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605624
 * Function: CPVRTModelPOD::GetTranslationMatrix
 * Signature: undefined __cdecl GetTranslationMatrix(SPODNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetTranslationMatrix(SPODNode const&) const */

void CPVRTModelPOD::GetTranslationMatrix(SPODNode *param_1)

{
  SPODNode *in_x1;
  PVRTMATRIXf *in_x8;
  
                    /* catch() { ... } // from try @ 0060514c with catch @ 00605628 */
  GetTranslationMatrix((CPVRTModelPOD *)param_1,in_x8,in_x1);
  return;
}


