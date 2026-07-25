/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560770
 * Mangled: sub_560770
 * Demangled: sub_560770
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000560794 string=0x0000000000560798 "`"
 *   insn=0x00000000005607A8 string=0x00000000005607AC "cj""
 *   insn=0x00000000005607B4 string=0x00000000005607B8 "`"
 *   insn=0x00000000005607B8 string=0x00000000005607BC "K"
 *   insn=0x00000000005607C4 string=0x00000000005607C8 "a"
 *   insn=0x00000000005607C8 string=0x00000000005607CC "!"
 *   insn=0x00000000005607D0 string=0x00000000005607D4 "bj!"
 *   insn=0x00000000005607D8 string=0x00000000005607DC "`"
 *   insn=0x00000000005607E4 string=0x00000000005607E8 "`"
 *   insn=0x00000000005607E8 string=0x00000000005607EC "?"
 *   insn=0x00000000005607F8 string=0x00000000005607FC "1"
 *   insn=0x00000000005607FC string=0x0000000000560800 "`"
 *   insn=0x0000000000560800 string=0x0000000000560804 "`"
 *   insn=0x0000000000560800 string=0x000000000056082C "`"
 *   insn=0x000000000056080C string=0x0000000000560810 "`"
 *   insn=0x0000000000560830 string=0x0000000000560834 "a"
 *   insn=0x0000000000560838 string=0x000000000056083C "! @"
 *   insn=0x000000000056083C string=0x0000000000560840 "!"
 *   insn=0x000000000056085C string=0x0000000000560860 "a"
 *   insn=0x0000000000560860 string=0x0000000000560864 "!"
 *   insn=0x0000000000560868 string=0x000000000056086C "bj!"
 *   insn=0x0000000000560878 string=0x000000000056087C "!@"
 *   insn=0x0000000000560880 string=0x0000000000560884 "a\n"
 *   insn=0x0000000000560888 string=0x000000000056088C "`"
 *   insn=0x0000000000560890 string=0x0000000000560894 "!"
 *   insn=0x0000000000560894 string=0x0000000000560898 "`""
 *   insn=0x0000000000560898 string=0x000000000056089C "!$E"
 *   insn=0x000000000056089C string=0x00000000005608A0 "!@"
 *   insn=0x00000000005608A0 string=0x00000000005608A4 "a\n"
 *   insn=0x00000000005608A4 string=0x00000000005608A8 "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560770(__int64 *a1, __int64 *a2, const char **a3, int a4)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v10; // x1

  v6 = (__int64)(a1 + 2);
  v7 = a2[1];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[2];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v10 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v10 - 24)) = a2[3];
  sub_55EDEC(v6);
  sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_55F8C0(v6, *a3, a4 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

