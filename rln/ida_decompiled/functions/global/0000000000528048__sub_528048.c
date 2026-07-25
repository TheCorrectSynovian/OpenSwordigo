/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000528048
 * Mangled: sub_528048
 * Demangled: sub_528048
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000528048 string=0x000000000052804C "? "
 *   insn=0x000000000052804C string=0x0000000000528050 "B"
 *   insn=0x0000000000528054 string=0x0000000000528058 "`"
 *   insn=0x0000000000528058 string=0x000000000052805C "?("
 *   insn=0x0000000000528058 string=0x00000000005280A4 "D"
 *   insn=0x000000000052805C string=0x0000000000528060 "@"
 *   insn=0x0000000000528060 string=0x0000000000528064 "D"
 *   insn=0x0000000000528060 string=0x0000000000528088 "D"
 *   insn=0x0000000000528064 string=0x0000000000528068 "?@"
 *   insn=0x000000000052806C string=0x0000000000528070 "A\t"
 *   insn=0x0000000000528070 string=0x0000000000528074 "c"
 *   insn=0x0000000000528078 string=0x000000000052807C "a"
 *   insn=0x000000000052807C string=0x0000000000528080 "A"
 *   insn=0x0000000000528088 string=0x000000000052808C "A\t"
 *   insn=0x000000000052808C string=0x0000000000528090 "C"
 *   insn=0x0000000000528094 string=0x0000000000528098 "a"
 *   insn=0x0000000000528098 string=0x000000000052809C "A"
 *   insn=0x00000000005280A4 string=0x00000000005280A8 "A\t"
 *   insn=0x00000000005280B0 string=0x00000000005280B4 "a"
 *   insn=0x00000000005280B4 string=0x00000000005280B8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_528048(_QWORD *result, int a2)
{
  char *v2; // x2
  int v3; // w3

  v2 = (char *)result + *(_QWORD *)(*result - 24LL);
  if ( a2 == 8 )
  {
    *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 6) & 0xFFFFFFB5 | 0x40;
  }
  else if ( a2 == 10 )
  {
    *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 6) & 0xFFFFFFB5 | 2;
  }
  else
  {
    if ( a2 == 16 )
      v3 = 8;
    else
      v3 = 0;
    *((_DWORD *)v2 + 6) = v3 | *((_DWORD *)v2 + 6) & 0xFFFFFFB5;
  }
  return result;
}

