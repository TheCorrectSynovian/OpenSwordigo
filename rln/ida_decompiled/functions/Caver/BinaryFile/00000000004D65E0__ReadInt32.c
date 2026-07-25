/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D65E0
 * Mangled: _ZN5Caver10BinaryFile9ReadInt32Ev
 * Demangled: Caver::BinaryFile::ReadInt32(void)
 *
 * Callers: 1
 *   0x00000000001FE090  Caver::BinaryFile::ReadInt32(void)
 *
 * Callees: 4
 *   0x00000000001F5B40  .fread
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8BE0  Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *   0x0000000000201980  .gzread
 *
 * Referenced strings: 12
 *   insn=0x00000000004D65EC string=0x00000000004D65F0 "S"
 *   insn=0x00000000004D65F0 string=0x00000000004D65F4 "h"
 *   insn=0x00000000004D65F8 string=0x00000000004D65FC ""
 *   insn=0x00000000004D6600 string=0x00000000004D6604 "`"
 *   insn=0x00000000004D6620 string=0x00000000004D6624 ""
 *   insn=0x00000000004D663C string=0x00000000004D6640 "@}"
 *   insn=0x00000000004D6640 string=0x00000000001F5B40 "P'"
 *   insn=0x00000000004D664C string=0x00000000004D6650 "d"
 *   insn=0x00000000004D664C string=0x0000000000000001 "ELF"
 *   insn=0x00000000004D6650 string=0x00000000001F8BE0 "0'"
 *   insn=0x00000000004D6654 string=0x00000000004D6658 "h"
 *   insn=0x00000000004D6678 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BinaryFile::ReadInt32(Caver::BinaryFile *this)
{
  int v1; // w3
  FILE *v2; // x3
  unsigned int v4; // [xsp+0h] [xbp-20h] BYREF
  unsigned __int8 ptr[4]; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v6; // [xsp+8h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)this == 1 )
  {
    v2 = (FILE *)*((_QWORD *)this + 1);
    goto LABEL_7;
  }
  if ( *(_DWORD *)this != 2 || !*((_QWORD *)this + 1) )
  {
    v2 = 0;
LABEL_7:
    fread(ptr, 1u, 4u, v2);
    goto LABEL_8;
  }
  gzread();
LABEL_8:
  Caver::CopyFromFileBuffer32((Caver *)&v4, ptr, (const unsigned __int8 *)&dword_0 + 1, v1);
  return v4;
}

