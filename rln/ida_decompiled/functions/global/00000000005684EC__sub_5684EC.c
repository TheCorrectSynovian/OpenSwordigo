/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005684EC
 * Mangled: sub_5684EC
 * Demangled: sub_5684EC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203020  .memchr
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 3
 *   insn=0x000000000056850C string=0x0000000000568510 "Hk"
 *   insn=0x0000000000568544 string=0x0000000000568548 " "
 *   insn=0x0000000000568548 string=0x000000000056852C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5684EC(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v6; // x0
  __int64 v7; // x20
  size_t v8; // x23
  unsigned __int64 v9; // x22

  v6 = strlen(a2);
  v7 = *a1;
  v8 = v6;
  v9 = *(_QWORD *)(v7 - 24);
  if ( a3 >= v9 )
    return -1;
  while ( memchr(a2, *(unsigned __int8 *)(v7 + a3), v8) )
  {
    if ( ++a3 >= v9 )
      return -1;
  }
  return a3;
}

