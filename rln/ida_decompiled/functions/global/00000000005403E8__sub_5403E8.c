/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005403E8
 * Mangled: sub_5403E8
 * Demangled: sub_5403E8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000005403E8 string=0x00000000005403EC "? "
 *   insn=0x00000000005403EC string=0x00000000005403F0 "B"
 *   insn=0x00000000005403F4 string=0x00000000005403F8 "`"
 *   insn=0x00000000005403F8 string=0x00000000005403FC "?("
 *   insn=0x00000000005403F8 string=0x0000000000540444 "D"
 *   insn=0x00000000005403FC string=0x0000000000540400 "@"
 *   insn=0x0000000000540400 string=0x0000000000540404 "D"
 *   insn=0x0000000000540400 string=0x0000000000540428 "D"
 *   insn=0x0000000000540404 string=0x0000000000540408 "?@"
 *   insn=0x000000000054040C string=0x0000000000540410 "A\t"
 *   insn=0x0000000000540410 string=0x0000000000540414 "c"
 *   insn=0x0000000000540418 string=0x000000000054041C "a"
 *   insn=0x000000000054041C string=0x0000000000540420 "A"
 *   insn=0x0000000000540428 string=0x000000000054042C "A\t"
 *   insn=0x000000000054042C string=0x0000000000540430 "C"
 *   insn=0x0000000000540434 string=0x0000000000540438 "a"
 *   insn=0x0000000000540438 string=0x000000000054043C "A"
 *   insn=0x0000000000540444 string=0x0000000000540448 "A\t"
 *   insn=0x0000000000540450 string=0x0000000000540454 "a"
 *   insn=0x0000000000540454 string=0x0000000000540458 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5403E8(_QWORD *result, int a2)
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

