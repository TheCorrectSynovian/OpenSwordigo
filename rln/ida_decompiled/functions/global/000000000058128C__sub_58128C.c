/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000058128C
 * Mangled: sub_58128C
 * Demangled: sub_58128C
 *
 * Callers: 5
 *   0x0000000000581658  sub_581658
 *   0x00000000005817D0  sub_5817D0
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000005819C0  sub_5819C0
 *   0x0000000000581ADC  sub_581ADC
 *
 * Callees: 8
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001FBC40  .memset
 *   0x00000000001FE620  .abort
 *   0x000000000057FDB8  sub_57FDB8
 *   0x000000000057FECC  sub_57FECC
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000581080  sub_581080
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 13
 *   insn=0x00000000005812B8 string=0x00000000005812BC "a"
 *   insn=0x00000000005812BC string=0x00000000005812C0 "t"
 *   insn=0x00000000005812BC string=0x00000000001FBC40 "0'"
 *   insn=0x00000000005812C8 string=0x00000000005812CC "`"
 *   insn=0x00000000005812D8 string=0x00000000005812DC "@"
 *   insn=0x00000000005812F4 string=0x00000000005812F8 " "
 *   insn=0x00000000005812FC string=0x0000000000581300 ""
 *   insn=0x000000000058130C string=0x0000000000581310 "!"
 *   insn=0x0000000000581310 string=0x0000000000581314 "c"
 *   insn=0x0000000000581314 string=0x00000000001F60A0 "0'"
 *   insn=0x000000000058132C string=0x0000000000581330 " "
 *   insn=0x0000000000581344 string=0x0000000000581348 "N"
 *   insn=0x0000000000581348 string=0x000000000058134C "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_58128C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x30
  __int64 result; // x0
  __int64 v8; // [xsp+48h] [xbp+48h] BYREF
  __int64 v9[200]; // [xsp+50h] [xbp+50h] BYREF
  int v10; // [xsp+690h] [xbp+690h]

  memset(a1, 0, 0x3C0u);
  a1[99] = v3;
  a1[104] = 0x4000000000000000LL;
  if ( (unsigned int)sub_5806A8(a1, (char *)v9) )
    abort();
  if ( (!&pthread_create || pthread_once((pthread_once_t *)&algn_6FE3C1[3], (void (*)(void))sub_57FDB8))
    && !byte_6FE360[0] )
  {
    sub_57FDB8();
  }
  sub_57FECC((__int64)a1, a2, &v8);
  v9[197] = 0;
  v10 = 1;
  v9[198] = 31;
  result = sub_581080(a1, v9);
  a1[99] = a3;
  return result;
}

