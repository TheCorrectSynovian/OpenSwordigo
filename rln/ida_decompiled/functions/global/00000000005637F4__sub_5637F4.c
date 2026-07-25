/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005637F4
 * Mangled: sub_5637F4
 * Demangled: sub_5637F4
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x000000000051F468  sub_51F468
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000563810 string=0x0000000000563814 "`"
 *   insn=0x000000000056381C string=0x0000000000563820 "cj""
 *   insn=0x0000000000563828 string=0x000000000056382C "`"
 *   insn=0x000000000056382C string=0x0000000000563830 "f"
 *   insn=0x0000000000563834 string=0x0000000000563838 "cB"
 *   insn=0x0000000000563838 string=0x000000000056383C "`\n"
 *   insn=0x0000000000563848 string=0x000000000056384C "`"
 *   insn=0x000000000056384C string=0x0000000000563850 "dh""
 *   insn=0x0000000000563850 string=0x0000000000563854 "]"
 *   insn=0x0000000000563858 string=0x000000000056385C "ub"
 *   insn=0x000000000056385C string=0x0000000000563860 "a"
 *   insn=0x0000000000563864 string=0x0000000000563868 "!"
 *   insn=0x000000000056386C string=0x0000000000563870 "bj!"
 *   insn=0x0000000000563874 string=0x0000000000563878 "a\n"
 *   insn=0x000000000056387C string=0x0000000000563880 "a"
 *   insn=0x0000000000563880 string=0x0000000000563884 "!"
 *   insn=0x0000000000563888 string=0x000000000056388C "bj!"
 *   insn=0x0000000000563890 string=0x0000000000563894 "a\n"
 *   insn=0x0000000000563898 string=0x000000000056389C "`"
 *   insn=0x00000000005638A4 string=0x00000000005638A8 "`"
 *   insn=0x00000000005638A8 string=0x00000000005638AC "G"
 *   insn=0x00000000005638C0 string=0x00000000005638C4 "a"
 *   insn=0x00000000005638C4 string=0x00000000005638C8 "!"
 *   insn=0x00000000005638CC string=0x00000000005638D0 "bj!"
 *   insn=0x00000000005638DC string=0x00000000005638E0 "!@"
 *   insn=0x00000000005638E4 string=0x00000000005638E8 "a"
 *   insn=0x00000000005638F0 string=0x00000000005638F4 "`"
 *   insn=0x00000000005638FC string=0x0000000000563900 "`B"
 *   insn=0x0000000000563904 string=0x0000000000563908 "u"
 *   insn=0x0000000000563918 string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5637F4(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1

  v4 = a2[2];
  *a1 = v4;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v4 - 24)) = a2[3];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v4 - 24), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24) + 16);
  *v6 = a2[5];
  sub_5219C8((__int64)v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v8 - 24)) = a2[8];
  a1[2] = a2[9];
  sub_562010((__int64)(a1 + 3));
  return sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), (__int64)(a1 + 3));
}

