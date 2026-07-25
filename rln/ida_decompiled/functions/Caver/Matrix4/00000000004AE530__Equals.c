/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE530
 * Mangled: _ZNK5Caver7Matrix46EqualsERKS0_f
 * Demangled: Caver::Matrix4::Equals(Caver::Matrix4 const&,float)
 *
 * Callers: 1
 *   0x00000000001F9CF0  Caver::Matrix4::Equals(Caver::Matrix4 const&,float)
 *
 * Callees: 0
 *
 * Referenced strings: 72
 *   insn=0x00000000004AE530 string=0x00000000004AE534 """
 *   insn=0x00000000004AE534 string=0x00000000004AE538 "!8""
 *   insn=0x00000000004AE538 string=0x00000000004AE53C "!"
 *   insn=0x00000000004AE53C string=0x00000000004AE540 "   "
 *   insn=0x00000000004AE540 string=0x00000000004AE544 "l"
 *   insn=0x00000000004AE548 string=0x00000000004AE54C """
 *   insn=0x00000000004AE54C string=0x00000000004AE550 "!8""
 *   insn=0x00000000004AE550 string=0x00000000004AE554 "!"
 *   insn=0x00000000004AE554 string=0x00000000004AE558 "   "
 *   insn=0x00000000004AE560 string=0x00000000004AE564 ""@"
 *   insn=0x00000000004AE564 string=0x00000000004AE568 "!8""
 *   insn=0x00000000004AE568 string=0x00000000004AE56C "!"
 *   insn=0x00000000004AE56C string=0x00000000004AE570 "   "
 *   insn=0x00000000004AE578 string=0x00000000004AE57C """
 *   insn=0x00000000004AE57C string=0x00000000004AE580 "!8""
 *   insn=0x00000000004AE580 string=0x00000000004AE584 "!"
 *   insn=0x00000000004AE584 string=0x00000000004AE588 "   "
 *   insn=0x00000000004AE588 string=0x00000000004AE58C ",\t"
 *   insn=0x00000000004AE590 string=0x00000000004AE594 """
 *   insn=0x00000000004AE594 string=0x00000000004AE598 "!8""
 *   insn=0x00000000004AE598 string=0x00000000004AE59C "!"
 *   insn=0x00000000004AE59C string=0x00000000004AE5A0 "   "
 *   insn=0x00000000004AE5A0 string=0x00000000004AE5A4 "l"
 *   insn=0x00000000004AE5A8 string=0x00000000004AE5AC """
 *   insn=0x00000000004AE5AC string=0x00000000004AE5B0 "!8""
 *   insn=0x00000000004AE5B0 string=0x00000000004AE5B4 "!"
 *   insn=0x00000000004AE5B4 string=0x00000000004AE5B8 "   "
 *   insn=0x00000000004AE5C0 string=0x00000000004AE5C4 """
 *   insn=0x00000000004AE5C4 string=0x00000000004AE5C8 "!8""
 *   insn=0x00000000004AE5C8 string=0x00000000004AE5CC "!"
 *   insn=0x00000000004AE5CC string=0x00000000004AE5D0 "   "
 *   insn=0x00000000004AE5D8 string=0x00000000004AE5DC """
 *   insn=0x00000000004AE5DC string=0x00000000004AE5E0 "!8""
 *   insn=0x00000000004AE5E0 string=0x00000000004AE5E4 "!"
 *   insn=0x00000000004AE5E4 string=0x00000000004AE5E8 "   "
 *   insn=0x00000000004AE5E8 string=0x00000000004AE5EC ","
 *   insn=0x00000000004AE5F0 string=0x00000000004AE5F4 "" @"
 *   insn=0x00000000004AE5F4 string=0x00000000004AE5F8 "!8""
 *   insn=0x00000000004AE5F8 string=0x00000000004AE5FC "!"
 *   insn=0x00000000004AE5FC string=0x00000000004AE600 "   "
 *   insn=0x00000000004AE600 string=0x00000000004AE604 "l"
 *   insn=0x00000000004AE608 string=0x00000000004AE60C ""$@"
 *   insn=0x00000000004AE60C string=0x00000000004AE610 "!8""
 *   insn=0x00000000004AE610 string=0x00000000004AE614 "!"
 *   insn=0x00000000004AE614 string=0x00000000004AE618 "   "
 *   insn=0x00000000004AE620 string=0x00000000004AE624 ""(@"
 *   insn=0x00000000004AE624 string=0x00000000004AE628 "!8""
 *   insn=0x00000000004AE628 string=0x00000000004AE62C "!"
 *   insn=0x00000000004AE62C string=0x00000000004AE630 "   "
 *   insn=0x00000000004AE638 string=0x00000000004AE63C "",@"
 *   insn=0x00000000004AE63C string=0x00000000004AE640 "!8""
 *   insn=0x00000000004AE640 string=0x00000000004AE644 "!"
 *   insn=0x00000000004AE644 string=0x00000000004AE648 "   "
 *   insn=0x00000000004AE648 string=0x00000000004AE64C ","
 *   insn=0x00000000004AE650 string=0x00000000004AE654 ""0@"
 *   insn=0x00000000004AE654 string=0x00000000004AE658 "!8""
 *   insn=0x00000000004AE658 string=0x00000000004AE65C "!"
 *   insn=0x00000000004AE65C string=0x00000000004AE660 "   "
 *   insn=0x00000000004AE660 string=0x00000000004AE664 "l"
 *   insn=0x00000000004AE668 string=0x00000000004AE66C ""4@"
 *   insn=0x00000000004AE66C string=0x00000000004AE670 "!8""
 *   insn=0x00000000004AE670 string=0x00000000004AE674 "!"
 *   insn=0x00000000004AE674 string=0x00000000004AE678 "   "
 *   insn=0x00000000004AE680 string=0x00000000004AE684 ""8@"
 *   insn=0x00000000004AE684 string=0x00000000004AE688 "!8""
 *   insn=0x00000000004AE688 string=0x00000000004AE68C "!"
 *   insn=0x00000000004AE68C string=0x00000000004AE690 "   "
 *   insn=0x00000000004AE698 string=0x00000000004AE69C ""<@"
 *   insn=0x00000000004AE69C string=0x00000000004AE6A0 "!8""
 *   insn=0x00000000004AE6A0 string=0x00000000004AE6A4 "!"
 *   insn=0x00000000004AE6A4 string=0x00000000004AE6A8 "   "
 *   insn=0x00000000004AE6A8 string=0x00000000004AE6AC "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Matrix4::Equals(float *a1, float *a2, float a3)
{
  return fabsf(*a1 - *a2) <= a3
      && fabsf(a1[1] - a2[1]) <= a3
      && fabsf(a1[2] - a2[2]) <= a3
      && fabsf(a1[3] - a2[3]) <= a3
      && fabsf(a1[4] - a2[4]) <= a3
      && fabsf(a1[5] - a2[5]) <= a3
      && fabsf(a1[6] - a2[6]) <= a3
      && fabsf(a1[7] - a2[7]) <= a3
      && fabsf(a1[8] - a2[8]) <= a3
      && fabsf(a1[9] - a2[9]) <= a3
      && fabsf(a1[10] - a2[10]) <= a3
      && fabsf(a1[11] - a2[11]) <= a3
      && fabsf(a1[12] - a2[12]) <= a3
      && fabsf(a1[13] - a2[13]) <= a3
      && fabsf(a1[14] - a2[14]) <= a3
      && fabsf(a1[15] - a2[15]) <= a3;
}

