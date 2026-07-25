/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B44B8
 * Mangled: _ZN5Caver16FileExistsAtPathERKSs
 * Demangled: Caver::FileExistsAtPath(std::string const&)
 *
 * Callers: 2
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000004B42F4  Caver::DocumentsDirectoryPath(void)
 *
 * Callees: 5
 *   0x00000000001F4EE0  .stat
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002002F0  .AAssetManager_open
 *   0x0000000000201240  .AAsset_close
 *   0x000000000056887C  sub_56887C
 *
 * Referenced strings: 16
 *   insn=0x00000000004B44C4 string=0x00000000004B44C8 "T"
 *   insn=0x00000000004B44DC string=0x00000000004B44E0 "h"
 *   insn=0x00000000004B44F0 string=0x00000000004B44F4 "`"
 *   insn=0x00000000004B44F8 string=0x00000000004B44FC "y"
 *   insn=0x00000000004B44FC string=0x00000000004B4500 "`"
 *   insn=0x00000000004B44FC string=0x00000000001F4EE0 "P'"
 *   insn=0x00000000004B4510 string=0x00000000004B4514 "a"
 *   insn=0x00000000004B4518 string=0x00000000004B451C "u/"
 *   insn=0x00000000004B451C string=0x00000000004B4520 "@"
 *   insn=0x00000000004B4520 string=0x00000000004B4524 "G3"
 *   insn=0x00000000004B4524 string=0x00000000004B4528 ""
 *   insn=0x00000000004B452C string=0x00000000004B4530 ""
 *   insn=0x00000000004B4534 string=0x00000000004B4538 "`"
 *   insn=0x00000000004B453C string=0x00000000004B4540 "!"
 *   insn=0x00000000004B4554 string=0x00000000004B4568 "Z"
 *   insn=0x00000000004B4568 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

AAsset *__fastcall Caver::FileExistsAtPath(const char **a1)
{
  AAsset *result; // x0
  int v3; // w8
  _BYTE v4[16]; // [xsp+8h] [xbp-98h] BYREF
  int v5; // [xsp+18h] [xbp-88h]
  __int64 v6; // [xsp+88h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (unsigned int)sub_56887C(a1, 0, *(_QWORD *)(qword_6E9F60 - 24)) )
  {
    if ( stat(*a1, (struct stat *)v4) )
      return 0;
    v3 = v5 & 0xF000;
    if ( v3 != 0x8000 && v3 != 0x4000 )
      return 0;
  }
  else
  {
    result = AAssetManager_open((AAssetManager *)qword_6E9F58, *a1, 2);
    if ( !result )
      return result;
    AAsset_close(result);
  }
  return (AAsset *)(&dword_0 + 1);
}

