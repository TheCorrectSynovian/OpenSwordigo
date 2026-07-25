/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522234
 * Mangled: sub_522234
 * Demangled: sub_522234
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005220F0  sub_5220F0
 *   0x0000000000522158  sub_522158
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 9
 *   insn=0x0000000000522244 string=0x0000000000522248 "B"
 *   insn=0x000000000052225C string=0x0000000000522260 "`f@"
 *   insn=0x0000000000522260 string=0x0000000000522264 "a"
 *   insn=0x000000000052226C string=0x0000000000522270 "@"
 *   insn=0x000000000052226C string=0x000000000052227C "`B"
 *   insn=0x0000000000522270 string=0x0000000000522274 ";K"
 *   insn=0x0000000000522274 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052228C string=0x0000000000522290 "T"
 *   insn=0x0000000000522290 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_522234(_QWORD *a1)
{
  _QWORD *v2; // x0

  *a1 = off_6B6B70;
  sub_5220F0((__int64)a1, 0);
  sub_522158((__int64)a1);
  v2 = (_QWORD *)a1[25];
  if ( v2 != a1 + 8 )
  {
    if ( v2 )
      operator delete[](v2);
    a1[25] = 0;
  }
  sub_53C0C8(a1 + 26);
  operator delete(a1);
}

