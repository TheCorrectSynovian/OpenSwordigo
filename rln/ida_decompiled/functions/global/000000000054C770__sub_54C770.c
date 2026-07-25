/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C770
 * Mangled: sub_54C770
 * Demangled: sub_54C770
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000054C778 string=0x000000000054C77C "@"
 *   insn=0x000000000054C778 string=0x000000000054C78C "@@"
 *   insn=0x000000000054C780 string=0x000000000054C784 "_"
 *   insn=0x000000000054C788 string=0x000000000054C7A8 "@"
 *   insn=0x000000000054C78C string=0x000000000054C790 "`"
 *   insn=0x000000000054C790 string=0x000000000054C794 ""
 *   insn=0x000000000054C794 string=0x000000000054C7B0 "A"
 *   insn=0x000000000054C7B0 string=0x000000000054C7B4 " @"
 *   insn=0x000000000054C7B4 string=0x000000000054C7B8 "_"
 *   insn=0x000000000054C7BC string=0x000000000054C7C0 " "
 *   insn=0x000000000054C7C4 string=0x000000000054C7C8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C770(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x1
  bool v4; // zf

  if ( !*(_DWORD *)a1 && a1 == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
    return *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    while ( *(_QWORD *)(result + 24) )
      result = *(_QWORD *)(result + 24);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( a1 == *(_QWORD *)(v3 + 16) )
    {
      do
      {
        result = *(_QWORD *)(v3 + 8);
        v4 = *(_QWORD *)(result + 16) == v3;
        v3 = result;
      }
      while ( v4 );
    }
    else
    {
      return *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

