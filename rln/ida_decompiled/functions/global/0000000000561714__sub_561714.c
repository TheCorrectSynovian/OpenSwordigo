/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561714
 * Mangled: sub_561714
 * Demangled: sub_561714
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x0000000000561738 string=0x000000000056173C "`"
 *   insn=0x0000000000561748 string=0x000000000056174C "cj""
 *   insn=0x0000000000561754 string=0x0000000000561758 "`"
 *   insn=0x0000000000561758 string=0x000000000056175C "c"
 *   insn=0x0000000000561760 string=0x0000000000561764 "cB"
 *   insn=0x0000000000561764 string=0x0000000000561768 "`\n"
 *   insn=0x0000000000561774 string=0x0000000000561778 "`"
 *   insn=0x0000000000561778 string=0x000000000056177C "dh""
 *   insn=0x000000000056177C string=0x0000000000561780 "Z"
 *   insn=0x0000000000561784 string=0x0000000000561788 "ub"
 *   insn=0x0000000000561788 string=0x000000000056178C "a"
 *   insn=0x0000000000561790 string=0x0000000000561794 "!"
 *   insn=0x0000000000561798 string=0x000000000056179C "bj!"
 *   insn=0x00000000005617A0 string=0x00000000005617A4 "a\n"
 *   insn=0x00000000005617A8 string=0x00000000005617AC "a"
 *   insn=0x00000000005617AC string=0x00000000005617B0 "!"
 *   insn=0x00000000005617B4 string=0x00000000005617B8 "bj!"
 *   insn=0x00000000005617BC string=0x00000000005617C0 "a\n"
 *   insn=0x00000000005617C4 string=0x00000000005617C8 "`"
 *   insn=0x00000000005617D0 string=0x00000000005617D4 "`"
 *   insn=0x00000000005617D4 string=0x00000000005617D8 "D"
 *   insn=0x00000000005617E4 string=0x00000000005617E8 "6"
 *   insn=0x00000000005617E8 string=0x00000000005617EC "`"
 *   insn=0x00000000005617EC string=0x00000000005617F0 "`"
 *   insn=0x00000000005617EC string=0x0000000000561818 "`"
 *   insn=0x00000000005617F8 string=0x00000000005617FC "`"
 *   insn=0x000000000056181C string=0x0000000000561820 "a"
 *   insn=0x0000000000561824 string=0x0000000000561828 "! @"
 *   insn=0x0000000000561828 string=0x000000000056182C "!"
 *   insn=0x0000000000561848 string=0x000000000056184C "a"
 *   insn=0x000000000056184C string=0x0000000000561850 "!"
 *   insn=0x0000000000561854 string=0x0000000000561858 "bj!"
 *   insn=0x0000000000561864 string=0x0000000000561868 "!@"
 *   insn=0x000000000056186C string=0x0000000000561870 "a"
 *   insn=0x0000000000561870 string=0x0000000000561874 "5"
 *   insn=0x0000000000561878 string=0x000000000056187C "`"
 *   insn=0x0000000000561884 string=0x0000000000561888 "`B"
 *   insn=0x000000000056188C string=0x0000000000561890 "u"
 *   insn=0x0000000000561890 string=0x0000000000561894 "j"
 *   insn=0x000000000056189C string=0x00000000005618A0 ",@"
 *   insn=0x00000000005618A0 string=0x0000000000571950 """
 *   insn=0x00000000005618A4 string=0x00000000005618A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561714(__int64 *a1, __int64 *a2, const char *a3, unsigned int a4)
{
  __int64 v7; // x0
  __int64 v9; // x0
  _QWORD *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1

  v7 = a2[2];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v9 = a2[4];
  a1[2] = v9;
  v10 = (__int64 *)((char *)a1 + *(_QWORD *)(v9 - 24) + 16);
  *v10 = a2[5];
  sub_5210E8((__int64)v10, 0);
  v11 = a2[1];
  *a1 = v11;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[6];
  a1[2] = a2[7];
  v12 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v12 - 24)) = a2[8];
  a1[2] = a2[9];
  sub_55EDEC((__int64)(a1 + 3));
  sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), (__int64)(a1 + 3));
  if ( sub_55F8C0((__int64)(a1 + 3), a3, a4) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

