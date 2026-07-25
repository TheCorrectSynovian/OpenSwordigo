/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005726B8
 * Mangled: sub_5726B8
 * Demangled: sub_5726B8
 *
 * Callers: 2
 *   0x00000000005726B8  sub_5726B8
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 1
 *   0x000000000057263C  sub_57263C
 *
 * Referenced strings: 10
 *   insn=0x00000000005726C4 string=0x00000000005726C8 "t"
 *   insn=0x00000000005726D4 string=0x00000000005726D8 "A"
 *   insn=0x00000000005726D8 string=0x00000000005726DC "`"
 *   insn=0x00000000005726E4 string=0x00000000005726E8 "a"
 *   insn=0x00000000005726F4 string=0x00000000005726F8 "s\n@"
 *   insn=0x0000000000572714 string=0x0000000000572718 "a"
 *   insn=0x0000000000572718 string=0x000000000057271C " "
 *   insn=0x0000000000572724 string=0x0000000000572728 "a""
 *   insn=0x0000000000572734 string=0x0000000000572738 "?"
 *   insn=0x0000000000572738 string=0x000000000057273C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_5726B8(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  _DWORD *result; // x0

  v2 = a2;
  if ( a2 )
  {
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 0:
        case 6:
        case 0x18:
        case 0x27:
        case 0x31:
        case 0x40:
        case 0x45:
        case 0x47:
        case 0x4A:
        case 0x4B:
          return 0;
        case 5:
          result = (_DWORD *)sub_57263C(a1, (__int64 *)(v2 + 8));
          if ( !result || *result != 47 )
            return 0;
          return result;
        case 7:
        case 8:
        case 0x32:
          goto LABEL_4;
        default:
          result = (_DWORD *)sub_5726B8(a1, *(_QWORD *)(v2 + 8));
          if ( result )
            return result;
LABEL_4:
          v2 = *(_QWORD *)(v2 + 16);
          if ( !v2 )
            return 0;
          continue;
      }
    }
  }
  return 0;
}

