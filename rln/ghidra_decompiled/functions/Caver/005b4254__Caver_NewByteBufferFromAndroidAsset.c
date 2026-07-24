/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4254
 * Function: Caver::NewByteBufferFromAndroidAsset
 * Signature: undefined __cdecl NewByteBufferFromAndroidAsset(string * param_1, uint * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewByteBufferFromAndroidAsset(std::string const&, unsigned int*) */

void * Caver::NewByteBufferFromAndroidAsset(string *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  
                    /* try { // try from 005b4260 to 006b4263 has its CatchHandler @ 005b4294 */
                    /* try { // try from 005b426c to 006b426f has its CatchHandler @ 005b428c */
  lVar2 = AAssetManager_open(DAT_007e9f58,*(undefined8 *)param_1,2);
  if (lVar2 == 0) {
    pvVar4 = (void *)0x0;
    *param_2 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 005b426c with catch @ 005b428c */
    uVar3 = AAsset_getLength(lVar2);
                    /* catch() { ... } // from try @ 005b4260 with catch @ 005b4294 */
    pvVar4 = operator_new__(uVar3);
                    /* try { // try from 005b42a0 to 006b42a3 has its CatchHandler @ 005b42b4 */
                    /* try { // try from 005b42a4 to 006b42b7 has its CatchHandler @ 005b4244 */
    iVar1 = AAsset_read(lVar2,pvVar4,uVar3);
    if (iVar1 < 0) {
      *param_2 = 0;
      operator_delete__(pvVar4);
      pvVar4 = (void *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 005b42a0 with catch @ 005b42b4 */
      AAsset_close(lVar2);
      *param_2 = (uint)uVar3;
    }
  }
  return pvVar4;
}


