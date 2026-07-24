/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1060
 * Function: Caver::GetAudioFileData
 * Signature: undefined __cdecl GetAudioFileData(string * param_1, BufferFormat * param_2, void * * param_3, int * param_4, int * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GetAudioFileData(std::string const&, Caver::AudioBuffer::BufferFormat*, void**, int*,
   int*) */

int Caver::GetAudioFileData
              (string *param_1,BufferFormat *param_2,void **param_3,int *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__ptr;
  undefined4 uVar6;
  ulong __size;
  int local_88 [2];
  int local_80;
  int local_7c;
  short local_72;
  int local_70;
  short local_66;
  int local_64;
  uint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = GetAndroidAssetManager();
  lVar5 = AAssetManager_open(uVar4,*(undefined8 *)param_1,2);
  if (lVar5 == 0) {
    iVar2 = 0;
    goto LAB_005d1198;
  }
                    /* try { // try from 005d10c0 to 006d10cb has its CatchHandler @ 005d3ba4 */
  iVar2 = AAsset_read(lVar5,local_88,0x2c);
                    /* try { // try from 005d10ec to 006d1113 has its CatchHandler @ 005d3b68 */
  if ((((iVar2 == 0x2c) && (local_88[0] == 0x46464952)) && (local_80 == 0x45564157)) &&
     ((local_7c == 0x20746d66 && (local_64 == 0x61746164)))) {
    __size = (ulong)local_60;
    __ptr = malloc(__size);
    uVar3 = AAsset_read(lVar5,__ptr,__size);
    if (uVar3 == local_60) {
      if (local_66 == 0x10) {
        uVar6 = 2;
        if (local_72 != 1) {
          uVar6 = 4;
        }
LAB_005d11e4:
        *(undefined4 *)param_2 = uVar6;
      }
      else {
                    /* try { // try from 005d1158 to 006d116b has its CatchHandler @ 005d3b70 */
        if (local_66 == 8) {
          uVar6 = 3;
          if (local_72 == 1) {
            uVar6 = 1;
          }
          goto LAB_005d11e4;
        }
      }
      *param_3 = __ptr;
      *param_4 = uVar3;
      *param_5 = local_70;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
    __ptr = (void *)0x0;
  }
  AAsset_close(lVar5);
                    /* try { // try from 005d1184 to 006d1193 has its CatchHandler @ 005d3af4 */
  if ((__ptr != (void *)0x0) && (iVar2 == 0)) {
    free(__ptr);
  }
LAB_005d1198:
                    /* try { // try from 005d11a0 to 006d11ab has its CatchHandler @ 005d34dc */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d11ac to 006d11b3 has its CatchHandler @ 005d2c18 */
                    /* try { // try from 005d11b4 to 006d121b has its CatchHandler @ 005d34dc */
  return iVar2;
}


