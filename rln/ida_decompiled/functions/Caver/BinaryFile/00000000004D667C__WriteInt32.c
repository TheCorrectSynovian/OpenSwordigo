/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D667C
 * Mangled: _ZN5Caver10BinaryFile10WriteInt32Ei
 * Demangled: Caver::BinaryFile::WriteInt32(int)
 *
 * Callers: 1
 *   0x00000000001FF3D0  Caver::BinaryFile::WriteInt32(int)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6550  .fwrite
 *   0x00000000001F9240  .gzwrite
 *   0x00000000001FDE10  Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *
 * Referenced strings: 11
 *   insn=0x00000000004D6688 string=0x00000000004D668C "T"
 *   insn=0x00000000004D669C string=0x0000000000000001 "ELF"
 *   insn=0x00000000004D66AC string=0x00000000004D66B0 "h"
 *   insn=0x00000000004D66AC string=0x00000000001FDE10 "0'"
 *   insn=0x00000000004D66B4 string=0x00000000004D66B8 "`"
 *   insn=0x00000000004D66B8 string=0x00000000004D66E4 "c"
 *   insn=0x00000000004D66C0 string=0x00000000004D66C4 "`"
 *   insn=0x00000000004D66D4 string=0x00000000004D66D8 ""
 *   insn=0x00000000004D66D4 string=0x00000000001F9240 "0'"
 *   insn=0x00000000004D66F4 string=0x00000000001F6550 "0'"
 *   insn=0x00000000004D6718 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall Caver::BinaryFile::WriteInt32(Caver::BinaryFile *this, int a2, __int64 a3, int a4)
{
  FILE *v6; // x3
  int v7; // [xsp+0h] [xbp-20h] BYREF
  _BYTE ptr[4]; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = a2;
  Caver::CopyToFileBuffer32((Caver *)ptr, (unsigned __int8 *)&v7, (const unsigned __int8 *)&dword_0 + 1, a4);
  if ( *(_DWORD *)this == 1 )
  {
    v6 = (FILE *)*((_QWORD *)this + 1);
  }
  else
  {
    if ( *(_DWORD *)this == 2 && *((_QWORD *)this + 1) )
      return gzwrite();
    v6 = 0;
  }
  return fwrite(ptr, 1u, 4u, v6);
}

