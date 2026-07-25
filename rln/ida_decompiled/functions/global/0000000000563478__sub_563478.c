/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563478
 * Mangled: sub_563478
 * Demangled: sub_563478
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x000000000051F468  sub_51F468
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x0000000000563498 string=0x000000000056349C "`"
 *   insn=0x00000000005634A4 string=0x00000000005634A8 "`"
 *   insn=0x00000000005634A8 string=0x00000000005634AC "cj""
 *   insn=0x00000000005634AC string=0x00000000005634B0 "F"
 *   insn=0x00000000005634B8 string=0x00000000005634BC "a"
 *   insn=0x00000000005634BC string=0x00000000005634C0 "!"
 *   insn=0x00000000005634C4 string=0x00000000005634C8 "bj!"
 *   insn=0x00000000005634CC string=0x00000000005634D0 "`"
 *   insn=0x00000000005634D8 string=0x00000000005634DC "`"
 *   insn=0x00000000005634DC string=0x00000000005634E0 ":"
 *   insn=0x00000000005634F4 string=0x00000000005634F8 "a"
 *   insn=0x00000000005634F8 string=0x00000000005634FC "!"
 *   insn=0x0000000000563500 string=0x0000000000563504 "bj!"
 *   insn=0x0000000000563510 string=0x0000000000563514 "!@"
 *   insn=0x0000000000563518 string=0x000000000056351C "a"
 *   insn=0x000000000056351C string=0x0000000000563520 "|"
 *   insn=0x0000000000563520 string=0x0000000000563524 "`"
 *   insn=0x000000000056352C string=0x0000000000563530 "`"
 *   insn=0x0000000000563530 string=0x0000000000563534 "!"
 *   insn=0x0000000000563534 string=0x0000000000563538 "!@"
 *   insn=0x0000000000563538 string=0x000000000056353C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_563478(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x1

  v4 = (__int64)(a1 + 1);
  v5 = a2[1];
  *a1 = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24));
  *v6 = a2[2];
  sub_5219C8((__int64)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  sub_562010(v4);
  return sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), v4);
}

