/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053D774
 * Mangled: sub_53D774
 * Demangled: sub_53D774
 *
 * Callers: 3
 *   0x000000000053D7B8  sub_53D7B8
 *   0x000000000053DA84  sub_53DA84
 *   0x000000000053DB28  sub_53DB28
 *
 * Callees: 1
 *   0x000000000053CB20  sub_53CB20
 *
 * Referenced strings: 5
 *   insn=0x000000000053D774 string=0x000000000053D778 "A"
 *   insn=0x000000000053D790 string=0x000000000053D794 "A"
 *   insn=0x000000000053D794 string=0x000000000053D798 "@"
 *   insn=0x000000000053D798 string=0x000000000053D79C "!DD"
 *   insn=0x000000000053D7A0 string=0x000000000053D7A4 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *sub_53D774()
{
  __int64 *result; // x0

  sub_53CB20((__int64)&unk_6FC840, 2);
  result = &qword_6FBE48;
  qword_6FBE40 = (__int64)&unk_6FC840;
  qword_6FBE48 = (__int64)&unk_6FC840;
  return result;
}

