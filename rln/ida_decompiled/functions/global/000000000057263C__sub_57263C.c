/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057263C
 * Mangled: sub_57263C
 * Demangled: sub_57263C
 *
 * Callers: 2
 *   0x00000000005726B8  sub_5726B8
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x000000000057263C string=0x0000000000572640 "b"
 *   insn=0x0000000000572640 string=0x0000000000572644 "@"
 *   insn=0x0000000000572640 string=0x00000000005726AC "!"
 *   insn=0x0000000000572644 string=0x0000000000572648 """
 *   insn=0x0000000000572654 string=0x0000000000572658 "#"
 *   insn=0x000000000057265C string=0x0000000000572660 "a"
 *   insn=0x0000000000572660 string=0x0000000000572664 "_"
 *   insn=0x0000000000572668 string=0x000000000057266C ""
 *   insn=0x0000000000572668 string=0x0000000000572680 "!@"
 *   insn=0x0000000000572670 string=0x0000000000572674 "_"
 *   insn=0x0000000000572678 string=0x000000000057267C " "
 *   insn=0x000000000057267C string=0x00000000005726A0 """
 *   insn=0x0000000000572684 string=0x0000000000572688 "A"
 *   insn=0x0000000000572688 string=0x0000000000572670 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57263C(__int64 a1, __int64 *a2)
{
  __int64 v2; // x2
  __int64 v3; // x0
  __int64 v4; // x2
  __int64 v5; // x1
  int v6; // w0

  v2 = *(_QWORD *)(a1 + 288);
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 304) = 1;
    return 0;
  }
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *a2;
  v5 = *(_QWORD *)(v3 + 16);
  v6 = v4;
  if ( !v5 || *(_DWORD *)v5 != 47 )
    return 0;
  if ( (int)v4 > 0 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v5 + 16);
      --v6;
      if ( !v5 || *(_DWORD *)v5 != 47 )
        break;
      if ( !v6 )
        return *(_QWORD *)(v5 + 8);
    }
    return 0;
  }
  if ( (_DWORD)v4 )
    return 0;
  return *(_QWORD *)(v5 + 8);
}

