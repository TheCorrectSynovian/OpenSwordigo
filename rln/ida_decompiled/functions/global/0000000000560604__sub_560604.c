/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560604
 * Mangled: sub_560604
 * Demangled: sub_560604
 *
 * Callers: 1
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Callees: 10
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000056063C string=0x0000000000560640 "B`"
 *   insn=0x00000000005606B0 string=0x00000000005606B4 "`"
 *   insn=0x00000000005606C4 string=0x00000000005606C8 "S"
 *   insn=0x00000000005606EC string=0x00000000005606F0 "! @"
 *   insn=0x00000000005606F0 string=0x00000000005606F4 "!"
 *   insn=0x00000000005606F4 string=0x00000000005606F8 "G"
 *   insn=0x0000000000560710 string=0x0000000000560714 "5"
 *   insn=0x000000000056072C string=0x0000000000560730 "e"
 *   insn=0x0000000000560738 string=0x000000000056073C "!@"
 *   insn=0x000000000056074C string=0x0000000000560750 "F"
 *   insn=0x0000000000560750 string=0x0000000000560754 "!"
 *   insn=0x0000000000560758 string=0x000000000056075C "!$E"
 *   insn=0x000000000056075C string=0x0000000000560760 "!@"
 *   insn=0x0000000000560764 string=0x0000000000560768 "Xn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560604(_QWORD *a1, const char *a2, int a3)
{
  __int64 v3; // x19

  v3 = (__int64)(a1 + 32);
  sub_521E3C((__int64)(a1 + 32));
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB498;
  a1[1] = 0;
  a1[32] = &unk_6DB4C0;
  sub_5210E8(v3, 0);
  *a1 = off_6B7CC8;
  a1[32] = off_6B7CF0;
  sub_55EDEC((__int64)(a1 + 2));
  sub_5210E8(v3, (__int64)(a1 + 2));
  if ( sub_55F8C0((__int64)(a1 + 2), a2, a3 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

