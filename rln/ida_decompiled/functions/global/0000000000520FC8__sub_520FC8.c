/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520FC8
 * Mangled: sub_520FC8
 * Demangled: sub_520FC8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 7
 *   insn=0x0000000000520FC8 string=0x0000000000520FCC "!"
 *   insn=0x0000000000520FD8 string=0x0000000000520FDC "T"
 *   insn=0x0000000000520FE0 string=0x0000000000520FE4 "s"
 *   insn=0x0000000000520FE4 string=0x0000000000520FE8 "`"
 *   insn=0x0000000000520FEC string=0x0000000000520FFC "d"
 *   insn=0x0000000000521008 string=0x000000000052100C "`"
 *   insn=0x0000000000521018 string=0x000000000052101C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520FC8(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v3; // x3
  unsigned int v4; // w20
  __int64 v5; // x19
  __int64 result; // x0

  v3 = *(_QWORD *)(a1 + 240);
  v4 = a3;
  if ( !v3 )
    sub_5652C8(a1);
  v5 = v3 + a2;
  result = *(unsigned __int8 *)(v5 + 313);
  if ( !*(_BYTE *)(v5 + 313) )
  {
    LOBYTE(result) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    if ( v4 == (unsigned __int8)result )
    {
      return v4;
    }
    else
    {
      *(_BYTE *)(v5 + 313) = result;
      return (unsigned __int8)result;
    }
  }
  return result;
}

