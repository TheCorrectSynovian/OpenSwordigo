/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581ADC
 * Mangled: sub_581ADC
 * Demangled: sub_581ADC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000005806A8  sub_5806A8
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581368  sub_581368
 *
 * Referenced strings: 3
 *   insn=0x0000000000581B3C string=0x0000000000581B40 "@"
 *   insn=0x0000000000581B40 string=0x0000000000581B44 "`"
 *   insn=0x0000000000581B44 string=0x0000000000581B70 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581ADC(
        unsigned int (__fastcall *a1)(__int64 *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x30
  int v12; // w0
  int v13; // w19
  __int64 v15[120]; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v16[208]; // [xsp+460h] [xbp+460h] BYREF

  sub_58128C(v15, (__int64)&a9, v9);
  while ( 1 )
  {
    v12 = sub_5806A8(v15, (char *)v16);
    v13 = v12;
    if ( v12 != 5 && v12 || a1(v15, a2) )
      return 3;
    if ( v13 == 5 )
      break;
    sub_581368(v15, v16);
  }
  return 5;
}

