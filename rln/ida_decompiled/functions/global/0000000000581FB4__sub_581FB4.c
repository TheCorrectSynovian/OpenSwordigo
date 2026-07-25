/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581FB4
 * Mangled: sub_581FB4
 * Demangled: sub_581FB4
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 2
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *
 * Referenced strings: 3
 *   insn=0x0000000000581FCC string=0x0000000000581FD0 "s*C"
 *   insn=0x0000000000582024 string=0x0000000000582028 "_"
 *   insn=0x000000000058202C string=0x0000000000582030 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581FB4(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // w19
  char *v7; // x21
  __int64 result; // x0
  unsigned __int64 v9; // [xsp+40h] [xbp+40h] BYREF
  unsigned __int64 v10; // [xsp+48h] [xbp+48h] BYREF

  v5 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v7 = (char *)sub_581E04(v5, a1);
  sub_581EC4(v5, v7, (char *)(a2 + 8), &v9);
  sub_581EC4((unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3, v7, (char *)(a3 + 8), &v10);
  if ( v9 >= v10 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v9 > v10 )
    return 1;
  else
    return (unsigned int)result;
}

