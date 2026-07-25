/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E990
 * Mangled: sub_51E990
 * Demangled: sub_51E990
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 4
 *   insn=0x000000000051E998 string=0x000000000051E99C "!"
 *   insn=0x000000000051E9A4 string=0x000000000051E9D4 " "
 *   insn=0x000000000051E9A8 string=0x000000000051E9AC "_"
 *   insn=0x000000000051E9B4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_51E990(__int64 a1, __int64 a2)
{
  const char *v2; // x0
  const char *v3; // x1

  v2 = *(const char **)(a1 + 8);
  v3 = *(const char **)(a2 + 8);
  if ( v2 == v3 )
    return 1;
  if ( *v2 == 42 )
    return 0;
  return strcmp(v2, v3) == 0;
}

