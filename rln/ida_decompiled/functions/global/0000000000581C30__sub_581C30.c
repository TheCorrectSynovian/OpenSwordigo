/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581C30
 * Mangled: sub_581C30
 * Demangled: sub_581C30
 *
 * Callers: 1
 *   0x0000000000581CF0  sub_581CF0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000581C38 string=0x0000000000581C3C "sx"
 *   insn=0x0000000000581C58 string=0x0000000000581C5C "s"
 *   insn=0x0000000000581C64 string=0x0000000000581C68 "u"
 *   insn=0x0000000000581C6C string=0x0000000000581C70 "j"
 *   insn=0x0000000000581C70 string=0x0000000000581C74 "a~}"
 *   insn=0x0000000000581C70 string=0x0000000000581C9C "u|}"
 *   insn=0x0000000000581C84 string=0x0000000000581C88 "B"
 *   insn=0x0000000000581C88 string=0x0000000000581C8C " "
 *   insn=0x0000000000581C94 string=0x0000000000581C98 "s"
 *   insn=0x0000000000581C9C string=0x0000000000581CA0 "v~}"
 *   insn=0x0000000000581CAC string=0x0000000000581CB0 " "
 *   insn=0x0000000000581CB0 string=0x0000000000581CB4 " "
 *   insn=0x0000000000581CC8 string=0x0000000000581CCC "`z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581C30(
        __int64 result,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD),
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // x24
  int i; // w19
  int v10; // w0
  __int64 v11; // x21
  __int64 v12; // x0
  int v13; // [xsp+58h] [xbp+58h]

  v5 = result;
  for ( i = 2 * a4 + 1; i < a5; i = result + 1 )
  {
    if ( i + 1 < a5 )
    {
      v13 = a4;
      v10 = a2(v5, *(_QWORD *)(a3 + 8LL * i), *(_QWORD *)(a3 + 8LL * i + 8));
      a4 = v13;
      if ( v10 < 0 )
        ++i;
    }
    v11 = 8LL * a4;
    result = a2(v5, *(_QWORD *)(a3 + v11), *(_QWORD *)(a3 + 8LL * i));
    if ( (result & 0x80000000) == 0 )
      break;
    a4 = i;
    v12 = *(_QWORD *)(a3 + v11);
    *(_QWORD *)(a3 + v11) = *(_QWORD *)(a3 + 8LL * i);
    *(_QWORD *)(a3 + 8LL * i) = v12;
    result = (unsigned int)(2 * i);
  }
  return result;
}

