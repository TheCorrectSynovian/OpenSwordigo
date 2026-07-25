/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046AF3C
 * Mangled: _ZN5boost6detail12lexical_castIiSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m
 * Demangled: boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callers: 1
 *   0x0000000000200350  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callees: 8
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F30  boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&)
 *   0x00000000001FDCB0  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000046AF50 string=0x000000000046AF54 "V"
 *   insn=0x000000000046AF60 string=0x000000000046AF64 "3"
 *   insn=0x000000000046AF8C string=0x000000000046AF90 "yG"
 *   insn=0x000000000046AF90 string=0x000000000046AF94 "A"
 *   insn=0x000000000046AFA0 string=0x000000000046AFA4 "\t"
 *   insn=0x000000000046AFA4 string=0x000000000046AFA8 ""
 *   insn=0x000000000046AFB4 string=0x000000000046AFB8 ">K"
 *   insn=0x000000000046AFB8 string=0x00000000001FDCB0 "0'"
 *   insn=0x000000000046AFCC string=0x000000000046AFD0 ">D"
 *   insn=0x000000000046B000 string=0x000000000046B004 ""
 *   insn=0x000000000046B004 string=0x000000000046B008 ")"
 *   insn=0x000000000046B00C string=0x000000000046B010 "J"
 *   insn=0x000000000046B010 string=0x000000000046B014 "A"
 *   insn=0x000000000046B014 string=0x000000000046B018 " "
 *   insn=0x000000000046B01C string=0x000000000046B020 "@"
 *   insn=0x000000000046B02C string=0x00000000001F6F30 "0'"
 *   insn=0x000000000046B030 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046B038 string=0x000000000046B03C "-'"
 *   insn=0x000000000046B03C string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::lexical_cast<int,std::string,false,char>(__int64 *a1)
{
  unsigned int v3; // [xsp+24h] [xbp-7Ch]
  __int64 v4; // [xsp+60h] [xbp-40h] BYREF
  __int64 v5; // [xsp+68h] [xbp-38h]
  __int64 v6; // [xsp+70h] [xbp-30h]
  __int64 v7; // [xsp+78h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_53DB28(&v4);
  v5 = *a1;
  v6 = v5 + *(_QWORD *)(v5 - 24);
  if ( (boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><int>() & 1) == 0 )
    boost::throw_exception<boost::bad_lexical_cast>();
  sub_53C0C8(&v4);
  return v3;
}

