/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d6540
 * Function: Caver::OpenAAssetFileDescriptor
 * Signature: undefined __cdecl OpenAAssetFileDescriptor(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OpenAAssetFileDescriptor(std::string const&) */

int Caver::OpenAAssetFileDescriptor(string *param_1)

{
  long lVar1;
  int __fd;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  __off_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = GetAndroidAssetManager();
  lVar3 = AAssetManager_open(uVar2,*(undefined8 *)param_1,2);
  if (lVar3 != 0) {
    __fd = AAsset_openFileDescriptor(lVar3,&local_40,auStack_48);
    AAsset_close(lVar3);
    if (-1 < __fd) {
      lseek(__fd,local_40,0);
      goto LAB_005d65b4;
    }
  }
  __fd = 0;
LAB_005d65b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return __fd;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


