/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524F58
 * Mangled: sub_524F58
 * Demangled: sub_524F58
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000524F58 string=0x0000000000524F5C "? "
 *   insn=0x0000000000524F5C string=0x0000000000524F60 "B"
 *   insn=0x0000000000524F64 string=0x0000000000524F68 "`"
 *   insn=0x0000000000524F68 string=0x0000000000524F6C "?("
 *   insn=0x0000000000524F68 string=0x0000000000524FB4 "D"
 *   insn=0x0000000000524F6C string=0x0000000000524F70 "@"
 *   insn=0x0000000000524F70 string=0x0000000000524F74 "D"
 *   insn=0x0000000000524F70 string=0x0000000000524F98 "D"
 *   insn=0x0000000000524F74 string=0x0000000000524F78 "?@"
 *   insn=0x0000000000524F7C string=0x0000000000524F80 "A\t"
 *   insn=0x0000000000524F80 string=0x0000000000524F84 "c"
 *   insn=0x0000000000524F88 string=0x0000000000524F8C "a"
 *   insn=0x0000000000524F8C string=0x0000000000524F90 "A"
 *   insn=0x0000000000524F98 string=0x0000000000524F9C "A\t"
 *   insn=0x0000000000524F9C string=0x0000000000524FA0 "C"
 *   insn=0x0000000000524FA4 string=0x0000000000524FA8 "a"
 *   insn=0x0000000000524FA8 string=0x0000000000524FAC "A"
 *   insn=0x0000000000524FB4 string=0x0000000000524FB8 "A\t"
 *   insn=0x0000000000524FC0 string=0x0000000000524FC4 "a"
 *   insn=0x0000000000524FC4 string=0x0000000000524FC8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524F58(_QWORD *result, int a2)
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

