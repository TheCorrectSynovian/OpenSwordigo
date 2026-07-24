/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604e44
 * Function: PVRTModelPODCopyTexture
 * Signature: undefined __cdecl PVRTModelPODCopyTexture(SPODTexture * param_1, SPODTexture * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyTexture(SPODTexture const&, SPODTexture&) */

void PVRTModelPODCopyTexture(SPODTexture *param_1,SPODTexture *param_2)

{
  size_t sVar1;
  void *__dest;
  char *__s;
  
  __s = *(char **)param_1;
                    /* try { // try from 00604e60 to 00704e73 has its CatchHandler @ 0060536c */
  if (__s == (char *)0x0) {
                    /* try { // try from 00604e94 to 00704ebb has its CatchHandler @ 0060522c */
    return;
  }
  sVar1 = strlen(__s);
  if (sVar1 + 1 == 0) {
    __dest = *(void **)param_2;
  }
  else {
    __dest = calloc(sVar1 + 1,1);
    *(void **)param_2 = __dest;
    if (__dest == (void *)0x0) {
      return;
    }
    __s = *(char **)param_1;
  }
  sVar1 = strlen(__s);
                    /* try { // try from 00604ebc to 00704f13 has its CatchHandler @ 00604a8c */
  memcpy(__dest,__s,sVar1 + 1);
  return;
}


