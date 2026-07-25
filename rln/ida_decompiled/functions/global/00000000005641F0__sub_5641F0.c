/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005641F0
 * Mangled: sub_5641F0
 * Demangled: sub_5641F0
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000563BDC  sub_563BDC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000564214 string=0x0000000000564218 "`"
 *   insn=0x0000000000564228 string=0x000000000056422C "`"
 *   insn=0x000000000056422C string=0x0000000000564230 "cj""
 *   insn=0x000000000056423C string=0x0000000000564240 "a"
 *   insn=0x0000000000564240 string=0x0000000000564244 "!"
 *   insn=0x0000000000564248 string=0x000000000056424C "bj!"
 *   insn=0x000000000056424C string=0x0000000000564250 "p"
 *   insn=0x0000000000564250 string=0x0000000000564254 "`"
 *   insn=0x000000000056425C string=0x0000000000564260 "`"
 *   insn=0x0000000000564270 string=0x0000000000564274 "Z"
 *   insn=0x0000000000564274 string=0x0000000000564278 "`"
 *   insn=0x0000000000564278 string=0x000000000056427C "`"
 *   insn=0x0000000000564278 string=0x00000000005642A4 "`"
 *   insn=0x0000000000564284 string=0x0000000000564288 "`"
 *   insn=0x00000000005642A8 string=0x00000000005642AC "a"
 *   insn=0x00000000005642B0 string=0x00000000005642B4 "! @"
 *   insn=0x00000000005642B4 string=0x00000000005642B8 "!"
 *   insn=0x00000000005642D4 string=0x00000000005642D8 "a"
 *   insn=0x00000000005642D8 string=0x00000000005642DC "!"
 *   insn=0x00000000005642E0 string=0x00000000005642E4 "bj!"
 *   insn=0x00000000005642E4 string=0x00000000005642E8 "wu"
 *   insn=0x00000000005642F0 string=0x00000000005642F4 "!@"
 *   insn=0x00000000005642F8 string=0x00000000005642FC "a"
 *   insn=0x0000000000564300 string=0x0000000000564304 "`"
 *   insn=0x0000000000564304 string=0x0000000000564308 "X"
 *   insn=0x000000000056430C string=0x0000000000564310 "`"
 *   insn=0x0000000000564310 string=0x0000000000564314 "!"
 *   insn=0x0000000000564314 string=0x0000000000564318 "!@"
 *   insn=0x0000000000564318 string=0x000000000056431C "a"
 *   insn=0x000000000056431C string=0x0000000000564320 "j_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5641F0(__int64 *a1, __int64 *a2, const char **a3, int a4)
{
  __int64 v6; // x21
  __int64 v7; // x0
  _QWORD *v10; // x0
  __int64 v11; // x1

  v6 = (__int64)(a1 + 1);
  v7 = a2[1];
  *a1 = v7;
  v10 = (__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24));
  *v10 = a2[2];
  sub_5219C8((__int64)v10, 0);
  v11 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[3];
  sub_562010(v6);
  sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_563BDC(v6, *a3, a4 | 0x10u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

