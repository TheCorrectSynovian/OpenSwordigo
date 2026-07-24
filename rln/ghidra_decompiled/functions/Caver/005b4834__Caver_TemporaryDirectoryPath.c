/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4834
 * Function: Caver::TemporaryDirectoryPath
 * Signature: undefined __thiscall TemporaryDirectoryPath(Caver * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TemporaryDirectoryPath() */

void __thiscall Caver::TemporaryDirectoryPath(Caver *this)

{
  ulong uVar1;
  
  uVar1 = FileExistsAtPath((string *)&DAT_007e9f50);
  if ((uVar1 & 1) == 0) {
    CreateDirectoryAtPath((string *)&DAT_007e9f50,true);
  }
  FUN_0066a528();
  return;
}


