/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F52C
 * Mangled: sub_55F52C
 * Demangled: sub_55F52C
 *
 * Callers: 3
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x000000000057115C  sub_57115C
 *   0x000000000057121C  sub_57121C
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 4
 *   insn=0x000000000055F53C string=0x000000000055F540 "!@"
 *   insn=0x000000000055F554 string=0x000000000055F558 "!"
 *   insn=0x000000000055F560 string=0x000000000055F564 "!$E"
 *   insn=0x000000000055F564 string=0x000000000055F568 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55F52C(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = off_6DB410;
  v2 = a1 + 104;
  sub_55F390(a1);
  sub_51F468(v2);
  *(_QWORD *)a1 = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

