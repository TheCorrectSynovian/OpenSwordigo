/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060f1e0
 * Function: PVRTModelPODCopyCPODData
 * Signature: undefined __cdecl PVRTModelPODCopyCPODData(CPODData * param_1, CPODData * param_2, uint param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyCPODData(CPODData const&, CPODData&, unsigned int, bool) */

void PVRTModelPODCopyCPODData(CPODData *param_1,CPODData *param_2,uint param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  long lVar3;
  size_t __nmemb;
  ulong uVar4;
  
                    /* try { // try from 0060f1f8 to 0070f203 has its CatchHandler @ 006113d8 */
                    /* try { // try from 0060f204 to 0070f28f has its CatchHandler @ 0060f050 */
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    free(*(void **)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  iVar1 = *(int *)param_1;
  *(int *)param_2 = iVar1;
  uVar4 = *(ulong *)(param_1 + 4);
  *(ulong *)(param_2 + 4) = uVar4;
  __src = *(void **)(param_1 + 0x10);
  if (param_4) {
    *(void **)(param_2 + 0x10) = __src;
  }
  else if (__src != (void *)0x0) {
    uVar2 = iVar1 - 1;
    if (uVar2 < 0xe) {
      lVar3 = *(long *)(&DAT_0069b8a0 + (long)(int)uVar2 * 8);
    }
    else {
      lVar3 = 0;
    }
    __nmemb = (uVar4 & 0xffffffff) * (ulong)param_3 * lVar3;
    if (__nmemb == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = calloc(__nmemb,1);
      *(void **)(param_2 + 0x10) = __dest;
      if (__dest == (void *)0x0) {
        return;
      }
      __src = *(void **)(param_1 + 0x10);
    }
                    /* try { // try from 0060f29c to 0070f30b has its CatchHandler @ 0060f050 */
    memcpy(__dest,__src,__nmemb);
    return;
  }
                    /* try { // try from 0060f290 to 0070f29b has its CatchHandler @ 00610ef4 */
  return;
}


