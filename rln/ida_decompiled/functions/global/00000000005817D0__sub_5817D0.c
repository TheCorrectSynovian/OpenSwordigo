/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005817D0
 * Mangled: sub_5817D0
 * Demangled: sub_5817D0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x0000000000201760  .memcpy
 *   0x000000000057FF60  sub_57FF60
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581474  sub_581474
 *   0x0000000000581654  nullsub_6
 *
 * Referenced strings: 3
 *   insn=0x0000000000581848 string=0x000000000058184C "\n"
 *   insn=0x0000000000581854 string=0x0000000000581858 "a"
 *   insn=0x0000000000581874 string=0x0000000000581878 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5817D0(
        _QWORD *a1,
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
  _QWORD v15[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v16[98]; // [xsp+490h] [xbp+490h] BYREF

  sub_58128C(v15, (__int64)&a9, v9);
  memcpy(v16, v15, 0x3C0u);
  a1[2] = a2;
  a1[3] = a3;
  if ( (unsigned int)sub_581474(a1, v16) == 7 )
  {
    sub_57FF60((__int64)v15, (__int64)v16);
    nullsub_6();
  }
  return a1;
}

