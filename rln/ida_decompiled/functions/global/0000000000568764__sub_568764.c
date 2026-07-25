/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568764
 * Mangled: sub_568764
 * Demangled: sub_568764
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000568764 string=0x0000000000568768 "!"
 *   insn=0x0000000000568770 string=0x0000000000568774 "C"
 *   insn=0x0000000000568774 string=0x000000000056877C "c"
 *   insn=0x000000000056877C string=0x0000000000568780 "_"
 *   insn=0x0000000000568780 string=0x0000000000568784 "@"
 *   insn=0x0000000000568798 string=0x000000000056879C "_"
 *   insn=0x000000000056879C string=0x00000000005687A0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568764(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 result; // x0
  __int64 v5; // x3
  unsigned __int64 v6; // x3

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( a3 > v6 )
      result = v6;
    else
      result = a3;
    while ( *(unsigned __int8 *)(v3 + result) == a2 )
    {
      if ( !result )
        return -1;
      --result;
    }
  }
  return result;
}

