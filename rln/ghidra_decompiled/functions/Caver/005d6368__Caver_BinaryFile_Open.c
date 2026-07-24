/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d6368
 * Function: Caver::BinaryFile::Open
 * Signature: undefined __thiscall Open(BinaryFile * this, string * param_1, Mode param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::Open(std::string const&, Caver::BinaryFile::Mode, bool) */

void __thiscall
Caver::BinaryFile::Open(BinaryFile *this,undefined8 *param_1,int param_3,uint param_4)

{
  char *__modes;
  undefined *puVar1;
  long lVar2;
  int __fd;
  undefined8 uVar3;
  long lVar4;
  FILE *pFVar5;
  undefined1 auStack_58 [8];
  __off_t local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_4 & 1) == 0) {
    *(undefined4 *)this = 1;
    __modes = "wb";
    if (param_3 != 1) {
      __modes = "rb";
    }
    pFVar5 = fopen((char *)*param_1,__modes);
    *(FILE **)(this + 8) = pFVar5;
    if ((*(int *)this == 1) && (pFVar5 != (FILE *)0x0)) {
      fseek(pFVar5,0,2);
      pFVar5 = (FILE *)0x0;
      if (*(int *)this == 1) {
        pFVar5 = *(FILE **)(this + 8);
      }
      lVar4 = ftell(pFVar5);
      *(int *)(this + 0x10) = (int)lVar4;
      if (*(int *)this == 1) {
        pFVar5 = *(FILE **)(this + 8);
      }
      else {
        pFVar5 = (FILE *)0x0;
      }
                    /* catch() { ... } // from try @ 005d5f14 with catch @ 005d64b0 */
                    /* catch() { ... } // from try @ 005d64c8 with catch @ 005d64b4 */
      fseek(pFVar5,0,0);
      goto LAB_005d64bc;
    }
  }
  else {
    *(undefined4 *)this = 2;
    *(undefined4 *)(this + 0x10) = 0;
    uVar3 = GetAndroidAssetManager();
    lVar4 = AAssetManager_open(uVar3,*param_1,2);
    if (lVar4 == 0) {
LAB_005d646c:
      __fd = 0;
    }
    else {
      __fd = AAsset_openFileDescriptor(lVar4,&local_50,auStack_58);
      AAsset_close(lVar4);
      if (__fd < 0) goto LAB_005d646c;
      lseek(__fd,local_50,0);
    }
    puVar1 = &DAT_0069827c;
    if (param_3 != 1) {
      puVar1 = &DAT_006969e5;
    }
    lVar4 = gzdopen(__fd,puVar1);
    *(long *)(this + 8) = lVar4;
    if ((lVar4 != 0) && (*(int *)this == 2)) {
LAB_005d64bc:
      uVar3 = 1;
      goto LAB_005d64c0;
    }
  }
  uVar3 = 0;
                    /* try { // try from 005d64a8 to 006d64b3 has its CatchHandler @ 005d576c */
LAB_005d64c0:
                    /* try { // try from 005d64c4 to 006d64c7 has its CatchHandler @ 005d64d8 */
                    /* try { // try from 005d64c8 to 006d64eb has its CatchHandler @ 005d64b4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005d64c4 with catch @ 005d64d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


