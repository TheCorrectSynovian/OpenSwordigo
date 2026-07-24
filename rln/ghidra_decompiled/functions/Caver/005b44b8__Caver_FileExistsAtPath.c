/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b44b8
 * Function: Caver::FileExistsAtPath
 * Signature: undefined __cdecl FileExistsAtPath(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FileExistsAtPath(std::string const&) */

void Caver::FileExistsAtPath(string *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_98;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_0066887c(param_1,0,*(undefined8 *)(DAT_007e9f60 + -0x18));
  if (iVar2 == 0) {
    lVar4 = AAssetManager_open(DAT_007e9f58,*(undefined8 *)param_1,2);
    uVar3 = 0;
    if (lVar4 == 0) goto LAB_005b4548;
    AAsset_close();
  }
  else {
    iVar2 = stat(*(char **)param_1,(stat *)&stack0xffffffffffffff58);
    if ((iVar2 != 0) || (((local_98 & 0xf000) != 0x8000 && ((local_98 & 0xf000) != 0x4000)))) {
      uVar3 = 0;
      goto LAB_005b4548;
    }
  }
  uVar3 = 1;
LAB_005b4548:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


