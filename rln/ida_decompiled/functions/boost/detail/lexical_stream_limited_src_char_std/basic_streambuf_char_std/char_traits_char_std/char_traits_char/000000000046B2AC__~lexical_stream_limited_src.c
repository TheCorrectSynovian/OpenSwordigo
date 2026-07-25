/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B2AC
 * Mangled: _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ED0Ev
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::~lexical_stream_limited_src()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 4
 *   insn=0x000000000046B2B8 string=0x000000000046B2BC "%E"
 *   insn=0x000000000046B2C0 string=0x000000000046B2C4 "A"
 *   insn=0x000000000046B2C4 string=0x000000000046B2C8 ""
 *   insn=0x000000000046B2DC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::~lexical_stream_limited_src(
        _QWORD *a1)
{
  *a1 = off_6B7710;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

