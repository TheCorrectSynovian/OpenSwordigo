/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604db0
 * Function: PVRTModelPODCopyCamera
 * Signature: undefined __cdecl PVRTModelPODCopyCamera(SPODCamera * param_1, SPODCamera * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyCamera(SPODCamera const&, SPODCamera&, int) */

void PVRTModelPODCopyCamera(SPODCamera *param_1,SPODCamera *param_2,int param_3)

{
  void *__dest;
  void *__src;
  ulong __nmemb;
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00604db8 to 00704ddf has its CatchHandler @ 00605238 */
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)param_2 = uVar1;
  __src = *(void **)(param_1 + 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  __nmemb = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
                    /* try { // try from 00604de0 to 00704e37 has its CatchHandler @ 00604a8c */
  if (param_3 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = calloc(__nmemb,4);
    *(void **)(param_2 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      return;
    }
    __src = *(void **)(param_1 + 0x10);
  }
  memcpy(__dest,__src,__nmemb);
  return;
}


