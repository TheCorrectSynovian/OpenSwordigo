/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005630F0
 * Mangled: sub_5630F0
 * Demangled: sub_5630F0
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
 * Referenced strings: 20
 *   insn=0x0000000000563110 string=0x0000000000563114 "`"
 *   insn=0x000000000056311C string=0x0000000000563120 "cj""
 *   insn=0x0000000000563128 string=0x000000000056312C "`"
 *   insn=0x000000000056312C string=0x0000000000563130 "&"
 *   insn=0x0000000000563138 string=0x000000000056313C "a"
 *   insn=0x000000000056313C string=0x0000000000563140 "!"
 *   insn=0x0000000000563144 string=0x0000000000563148 "bj!"
 *   insn=0x000000000056314C string=0x0000000000563150 "`"
 *   insn=0x0000000000563158 string=0x000000000056315C "`"
 *   insn=0x0000000000563174 string=0x0000000000563178 "a"
 *   insn=0x0000000000563178 string=0x000000000056317C "!"
 *   insn=0x0000000000563180 string=0x0000000000563184 "bj!"
 *   insn=0x0000000000563190 string=0x0000000000563194 "!@"
 *   insn=0x0000000000563198 string=0x000000000056319C "a\n"
 *   insn=0x000000000056319C string=0x00000000005631A0 "\"
 *   insn=0x00000000005631A0 string=0x00000000005631A4 "`"
 *   insn=0x00000000005631AC string=0x00000000005631B0 "`""
 *   insn=0x00000000005631B0 string=0x00000000005631B4 "!"
 *   insn=0x00000000005631B4 string=0x00000000005631B8 "!@"
 *   insn=0x00000000005631B8 string=0x00000000005631BC "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5630F0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  v4 = (__int64)(a1 + 2);
  v5 = a2[1];
  *a1 = v5;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24)) = a2[2];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v5 - 24), 0);
  v6 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24)) = a2[3];
  sub_562010(v4);
  return sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), v4);
}

