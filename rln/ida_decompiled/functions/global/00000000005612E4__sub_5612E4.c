/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005612E4
 * Mangled: sub_5612E4
 * Demangled: sub_5612E4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 18
 *   insn=0x00000000005612F0 string=0x00000000005612F4 """
 *   insn=0x00000000005612FC string=0x0000000000561300 "b"
 *   insn=0x0000000000561300 string=0x0000000000561304 "B"
 *   insn=0x0000000000561304 string=0x0000000000561308 "#"
 *   insn=0x0000000000561308 string=0x000000000056130C "cj""
 *   insn=0x0000000000561310 string=0x0000000000561318 "b"
 *   insn=0x000000000056131C string=0x0000000000561320 "`"
 *   insn=0x0000000000561320 string=0x0000000000561324 "Q"
 *   insn=0x0000000000561324 string=0x0000000000561328 """
 *   insn=0x0000000000561328 string=0x000000000056132C "`"
 *   insn=0x000000000056132C string=0x0000000000561330 "B$E"
 *   insn=0x0000000000561330 string=0x0000000000561334 "B@"
 *   insn=0x0000000000561334 string=0x0000000000561338 "b"
 *   insn=0x0000000000561338 string=0x000000000056133C "ck"
 *   insn=0x0000000000561340 string=0x0000000000561344 " "
 *   insn=0x0000000000561344 string=0x0000000000561348 "`"
 *   insn=0x000000000056134C string=0x0000000000561350 "!@"
 *   insn=0x0000000000561350 string=0x0000000000561354 "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5612E4(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 8) = off_6DB410;
  sub_55F390(a1 + 8);
  sub_51F468(a1 + 112);
  *(_QWORD *)(a1 + 8) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 64));
  v4 = a2[1];
  *(_QWORD *)a1 = v4;
  result = *(_QWORD *)(v4 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

