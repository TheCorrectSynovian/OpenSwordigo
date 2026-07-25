/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005717C4
 * Mangled: sub_5717C4
 * Demangled: sub_5717C4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000005717E0 string=0x00000000005717E4 "`"
 *   insn=0x00000000005717EC string=0x00000000005717F0 "dj#"
 *   insn=0x00000000005717F8 string=0x00000000005717FC "`"
 *   insn=0x00000000005717FC string=0x0000000000571800 ":"
 *   insn=0x0000000000571804 string=0x0000000000571808 "cB"
 *   insn=0x000000000057180C string=0x0000000000571810 "`\n"
 *   insn=0x000000000057181C string=0x0000000000571820 "`"
 *   insn=0x0000000000571820 string=0x0000000000571824 "dh""
 *   insn=0x0000000000571824 string=0x0000000000571828 "0"
 *   insn=0x000000000057182C string=0x0000000000571830 "`"
 *   insn=0x0000000000571838 string=0x000000000057183C "aj "
 *   insn=0x0000000000571840 string=0x0000000000571844 "`\n"
 *   insn=0x0000000000571854 string=0x0000000000571858 "a"
 *   insn=0x0000000000571858 string=0x000000000057185C "!"
 *   insn=0x0000000000571860 string=0x0000000000571864 "bj!"
 *   insn=0x0000000000571888 string=0x000000000057188C "l"
 *   insn=0x0000000000571890 string=0x0000000000571894 "B"
 *   insn=0x000000000057189C string=0x00000000005718A0 "B 9"
 *   insn=0x00000000005718BC string=0x00000000005718C0 "B"
 *   insn=0x00000000005718D0 string=0x00000000005718D4 "@"
 *   insn=0x00000000005718D4 string=0x00000000005718D8 "A"
 *   insn=0x00000000005718DC string=0x00000000005718E0 "!"
 *   insn=0x00000000005718F4 string=0x00000000005718F8 " \n"
 *   insn=0x0000000000571904 string=0x0000000000571908 " \n"
 *   insn=0x0000000000571910 string=0x0000000000571914 " \n"
 *   insn=0x0000000000571934 string=0x0000000000571938 "!<E"
 *   insn=0x0000000000571938 string=0x000000000057193C "!@"
 *   insn=0x0000000000571940 string=0x0000000000571944 "&"
 *   insn=0x000000000057194C string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5717C4(__int64 *a1, __int64 *a2, __int64 a3)
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
  sub_5210E8((__int64)a1 + *(_QWORD *)(v5 - 24), a3);
  v6 = a2[3];
  a1[2] = v6;
  v7 = (__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24) + 16);
  *v7 = a2[4];
  sub_5210E8((__int64)v7, a3);
  v8 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v8 - 24)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}

