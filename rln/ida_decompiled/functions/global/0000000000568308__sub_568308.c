/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568308
 * Mangled: sub_568308
 * Demangled: sub_568308
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203020  .memchr
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 8
 *   insn=0x0000000000568328 string=0x000000000056832C "u"
 *   insn=0x0000000000568334 string=0x0000000000568338 "`"
 *   insn=0x0000000000568340 string=0x0000000000568358 "s"
 *   insn=0x0000000000568358 string=0x000000000056835C "_"
 *   insn=0x000000000056835C string=0x0000000000568360 "S"
 *   insn=0x000000000056837C string=0x0000000000568380 "(k"
 *   insn=0x0000000000568380 string=0x0000000000568384 " "
 *   insn=0x0000000000568384 string=0x0000000000568368 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_568308(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v5; // x0
  __int64 v6; // x21
  size_t v7; // x20
  __int64 v8; // x19
  unsigned __int64 v10; // x19

  v5 = strlen(a2);
  v6 = *a1;
  v7 = v5;
  v8 = *(_QWORD *)(*a1 - 24);
  if ( !v5 || !v8 )
    return -1;
  v10 = v8 - 1;
  if ( a3 <= v10 )
    v10 = a3;
  do
  {
    if ( memchr(a2, *(unsigned __int8 *)(v6 + v10), v7) )
      break;
    --v10;
  }
  while ( v10 != -1 );
  return v10;
}

