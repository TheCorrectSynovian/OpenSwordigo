/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005826CC
 * Mangled: sub_5826CC
 * Demangled: sub_5826CC
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 3
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x00000000005822A0  sub_5822A0
 *
 * Referenced strings: 3
 *   insn=0x000000000058272C string=0x0000000000582730 "b""
 *   insn=0x0000000000582748 string=0x000000000058274C "_"
 *   insn=0x0000000000582750 string=0x0000000000582754 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5826CC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x20
  char v6; // w22
  char *v7; // x0
  char *v8; // x0
  __int64 result; // x0
  unsigned __int64 v10; // [xsp+30h] [xbp+30h] BYREF
  unsigned __int64 v11; // [xsp+38h] [xbp+38h] BYREF

  v5 = a2;
  v6 = sub_5822A0(a2);
  v7 = (char *)sub_581E04(v6, a1);
  sub_581EC4(v6, v7, (char *)(v5 + 8), &v10);
  LOBYTE(v5) = sub_5822A0(a3);
  v8 = (char *)sub_581E04(v5, a1);
  sub_581EC4(v5, v8, (char *)(a3 + 8), &v11);
  if ( v10 >= v11 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v10 > v11 )
    return 1;
  else
    return (unsigned int)result;
}

