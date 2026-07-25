/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547234
 * Mangled: sub_547234
 * Demangled: sub_547234
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000547258 string=0x000000000054725C "`"
 *   insn=0x0000000000547268 string=0x000000000054726C "cj""
 *   insn=0x0000000000547274 string=0x0000000000547278 "`"
 *   insn=0x0000000000547280 string=0x0000000000547284 "cB"
 *   insn=0x0000000000547284 string=0x0000000000547288 "`\n"
 *   insn=0x0000000000547294 string=0x0000000000547298 "`"
 *   insn=0x0000000000547298 string=0x000000000054729C "dh""
 *   insn=0x00000000005472A8 string=0x00000000005472AC "`"
 *   insn=0x00000000005472AC string=0x00000000005472B0 "yB"
 *   insn=0x00000000005472C4 string=0x00000000005472C8 "ub"
 *   insn=0x00000000005472C8 string=0x00000000005472CC "bj!"
 *   insn=0x00000000005472D0 string=0x00000000005472D4 "a\n"
 *   insn=0x00000000005472D8 string=0x00000000005472DC "a"
 *   insn=0x00000000005472DC string=0x00000000005472E0 "!"
 *   insn=0x00000000005472E4 string=0x00000000005472E8 "bj!"
 *   insn=0x00000000005472EC string=0x00000000005472F0 "a\n"
 *   insn=0x00000000005472F8 string=0x00000000005472FC "!@"
 *   insn=0x0000000000547300 string=0x0000000000547304 "a"
 *   insn=0x0000000000547318 string=0x000000000054731C "zZ"
 *   insn=0x000000000054731C string=0x0000000000547320 "`"
 *   insn=0x0000000000547324 string=0x0000000000547328 "b"
 *   insn=0x0000000000547334 string=0x0000000000547338 "`"
 *   insn=0x000000000054733C string=0x0000000000547340 "u2"
 *   insn=0x0000000000547340 string=0x0000000000547344 "ig"
 *   insn=0x0000000000547360 string=0x0000000000547364 "a"
 *   insn=0x0000000000547364 string=0x0000000000547368 "!"
 *   insn=0x000000000054736C string=0x0000000000547370 "bj!"
 *   insn=0x0000000000547370 string=0x0000000000547374 "T"
 *   insn=0x0000000000547378 string=0x000000000054737C "x"
 *   insn=0x000000000054737C string=0x0000000000547380 "a2@"
 *   insn=0x0000000000547388 string=0x000000000054738C " `"
 *   insn=0x0000000000547390 string=0x0000000000547394 "`"
 *   insn=0x00000000005473A8 string=0x00000000005473AC "v"
 *   insn=0x00000000005473AC string=0x00000000005473B0 "F"
 *   insn=0x00000000005473B8 string=0x00000000005473BC "e"
 *   insn=0x00000000005473BC string=0x0000000000571950 """
 *   insn=0x00000000005473C0 string=0x00000000005473C4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_547234(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // x0
  __int64 v7; // x0
  _QWORD *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x0

  v5 = a2[2];
  *a1 = v5;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24)) = a2[3];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v5 - 24), 0);
  v7 = a2[4];
  a1[2] = v7;
  v8 = (__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24) + 16);
  *v8 = a2[5];
  sub_5210E8((__int64)v8, 0);
  v9 = a2[1];
  *a1 = v9;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v9 - 24)) = a2[6];
  a1[2] = a2[7];
  v10 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v10 - 24)) = a2[8];
  a1[2] = a2[9];
  a1[4] = 0;
  a1[5] = 0;
  a1[3] = (__int64)off_6B7710;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_53DB28(a1 + 10);
  *((_DWORD *)a1 + 22) = a3;
  v11 = *a1;
  a1[3] = (__int64)off_6DA7B0;
  v12 = (__int64)a1 + *(_QWORD *)(v11 - 24);
  a1[12] = (__int64)&byte_6FD2F8;
  return sub_5210E8(v12, (__int64)(a1 + 3));
}

