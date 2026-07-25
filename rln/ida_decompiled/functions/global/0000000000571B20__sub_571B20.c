/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571B20
 * Mangled: sub_571B20
 * Demangled: sub_571B20
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000571B3C string=0x0000000000571B40 "`"
 *   insn=0x0000000000571B48 string=0x0000000000571B4C "dj#"
 *   insn=0x0000000000571B54 string=0x0000000000571B58 "`"
 *   insn=0x0000000000571B60 string=0x0000000000571B64 "cB"
 *   insn=0x0000000000571B68 string=0x0000000000571B6C "`\n"
 *   insn=0x0000000000571B78 string=0x0000000000571B7C "`"
 *   insn=0x0000000000571B7C string=0x0000000000571B80 "dh""
 *   insn=0x0000000000571B88 string=0x0000000000571B8C "`"
 *   insn=0x0000000000571B94 string=0x0000000000571B98 "aj "
 *   insn=0x0000000000571B9C string=0x0000000000571BA0 "`\n"
 *   insn=0x0000000000571BB0 string=0x0000000000571BB4 "a"
 *   insn=0x0000000000571BB4 string=0x0000000000571BB8 "!"
 *   insn=0x0000000000571BBC string=0x0000000000571BC0 "bj!"
 *   insn=0x0000000000571BC0 string=0x0000000000571BC4 "@?"
 *   insn=0x0000000000571BEC string=0x0000000000571BF0 "B"
 *   insn=0x0000000000571BF8 string=0x0000000000571BFC "B"
 *   insn=0x0000000000571C18 string=0x0000000000571C1C "B"
 *   insn=0x0000000000571C28 string=0x0000000000571C2C "g"
 *   insn=0x0000000000571C2C string=0x0000000000571C30 "@"
 *   insn=0x0000000000571C30 string=0x0000000000571C34 "A"
 *   insn=0x0000000000571C38 string=0x0000000000571C3C "!"
 *   insn=0x0000000000571C4C string=0x0000000000571C50 "^"
 *   insn=0x0000000000571C50 string=0x0000000000571C54 " \n"
 *   insn=0x0000000000571C60 string=0x0000000000571C64 " \n"
 *   insn=0x0000000000571C6C string=0x0000000000571C70 " \n"
 *   insn=0x0000000000571C90 string=0x0000000000571C94 "!$E"
 *   insn=0x0000000000571C94 string=0x0000000000571C98 "!@"
 *   insn=0x0000000000571C9C string=0x0000000000571CA0 "O"
 *   insn=0x0000000000571CA4 string=0x0000000000571CA8 "?"
 *   insn=0x0000000000571CA8 string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571B20(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x0
  _QWORD *v7; // x0
  __int64 v8; // x0
  __int64 result; // x0

  v5 = a2[1];
  *a1 = v5;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24)) = a2[2];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v5 - 24), a3);
  v6 = a2[3];
  a1[2] = v6;
  v7 = (__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24) + 16);
  *v7 = a2[4];
  sub_5219C8((__int64)v7, a3);
  v8 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v8 - 24)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}

