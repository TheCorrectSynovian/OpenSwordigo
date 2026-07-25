/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005819C0
 * Mangled: sub_5819C0
 * Demangled: sub_5819C0
 *
 * Callers: 1
 *   0x000000000051E194  __cxa_rethrow
 *
 * Callees: 7
 *   0x00000000001FE620  .abort
 *   0x0000000000201760  .memcpy
 *   0x000000000057FF60  sub_57FF60
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581474  sub_581474
 *   0x0000000000581654  nullsub_6
 *   0x0000000000581658  sub_581658
 *
 * Referenced strings: 3
 *   insn=0x0000000000581A30 string=0x0000000000581A34 "K"
 *   insn=0x0000000000581A44 string=0x0000000000581A48 "@"
 *   insn=0x0000000000581A54 string=0x0000000000581A58 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5819C0(
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
  char v12; // [xsp+0h] [xbp+0h]
  _QWORD v14[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v15[98]; // [xsp+490h] [xbp+490h] BYREF

  if ( a1[2] )
  {
    sub_58128C(v14, (__int64)&a9, v9);
    memcpy(v15, v14, 0x3C0u);
    if ( (unsigned int)sub_581474(a1, v15) != 7 )
      abort();
    sub_57FF60((__int64)v14, (__int64)v15);
    nullsub_6();
  }
  else
  {
    sub_581658(a1, 0, v9, a4, a5, a6, a7, a8, v12);
  }
  return a1;
}

