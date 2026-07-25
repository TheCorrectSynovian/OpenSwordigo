/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F550
 * Mangled: sub_51F550
 * Demangled: sub_51F550
 *
 * Callers: 2
 *   0x000000000057115C  sub_57115C
 *   0x00000000005713B0  sub_5713B0
 *
 * Callees: 3
 *   0x00000000001F5E30  .fdopen
 *   0x00000000001FEF30  .setvbuf
 *   0x000000000051F31C  sub_51F31C
 *
 * Referenced strings: 11
 *   insn=0x000000000051F564 string=0x000000000051F568 "m"
 *   insn=0x000000000051F56C string=0x000000000051F570 "`"
 *   insn=0x000000000051F570 string=0x000000000051F574 "`"
 *   insn=0x000000000051F58C string=0x000000000051F590 "(Z"
 *   insn=0x000000000051F590 string=0x000000000051F594 "`"
 *   insn=0x000000000051F590 string=0x00000000001F5E30 "P'"
 *   insn=0x000000000051F594 string=0x000000000051F598 " "
 *   insn=0x000000000051F598 string=0x000000000051F59C "!"
 *   insn=0x000000000051F59C string=0x000000000051F5A0 "a""
 *   insn=0x000000000051F5B8 string=0x000000000051F5BC "B"
 *   insn=0x000000000051F5C0 string=0x000000000051F5C4 "[~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F550(__int64 a1, int a2, char a3)
{
  char *v5; // x1
  FILE *v7; // x0

  v5 = sub_51F31C(a3);
  if ( !v5 )
    return 0;
  if ( *(_QWORD *)a1 )
    return 0;
  v7 = fdopen(a2, v5);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    return 0;
  *(_BYTE *)(a1 + 8) = 1;
  if ( !a2 )
    setvbuf(v7, 0, 2, 0);
  return a1;
}

