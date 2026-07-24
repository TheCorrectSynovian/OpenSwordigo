/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605128
 * Function: CPVRTModelPOD::SetFrame
 * Signature: undefined __thiscall SetFrame(CPVRTModelPOD * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::SetFrame(float) */

void __thiscall CPVRTModelPOD::SetFrame(CPVRTModelPOD *this,float param_1)

{
  float *pfVar1;
  
  if (*(int *)(this + 0x78) != 0) {
    pfVar1 = *(float **)(this + 0x80);
    pfVar1[2] = (float)(int)param_1;
    *pfVar1 = param_1;
    pfVar1[1] = param_1 - (float)(int)param_1;
    return;
  }
                    /* try { // try from 0060514c to 0070515f has its CatchHandler @ 00605628 */
  pfVar1 = *(float **)(this + 0x80);
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  *pfVar1 = param_1;
  return;
}


