/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F4D0
 * Mangled: sub_51F4D0
 * Demangled: sub_51F4D0
 *
 * Callers: 2
 *   0x000000000057121C  sub_57121C
 *   0x0000000000571470  sub_571470
 *
 * Callees: 2
 *   0x00000000001F9C10  .__errno
 *   0x00000000001F9D50  .fflush
 *
 * Referenced strings: 6
 *   insn=0x000000000051F4E4 string=0x000000000051F4E8 "b"
 *   insn=0x000000000051F4F4 string=0x00000000001F9C10 "0'"
 *   insn=0x000000000051F504 string=0x00000000001F9D50 "0'"
 *   insn=0x000000000051F508 string=0x000000000051F50C "u"
 *   insn=0x000000000051F528 string=0x000000000051F52C "_"
 *   insn=0x000000000051F530 string=0x000000000051F548 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F4D0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // x20
  FILE *v5; // x0
  __int64 result; // x0

  if ( !a2 || *(_QWORD *)a1 )
    return 0;
  v4 = (_DWORD *)__errno();
  v5 = 0;
  *v4 = 0;
  while ( fflush(v5) )
  {
    if ( *v4 != 4 )
      return 0;
    v5 = *(FILE **)a1;
  }
  *(_QWORD *)a1 = a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}

