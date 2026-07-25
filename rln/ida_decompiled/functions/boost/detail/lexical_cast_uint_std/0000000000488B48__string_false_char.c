/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000488B48
 * Mangled: _ZN5boost6detail12lexical_castIjSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m
 * Demangled: boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callers: 1
 *   0x00000000001FAF30  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callees: 8
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C90  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x00000000001F6F30  boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000488B5C string=0x0000000000488B60 "V"
 *   insn=0x0000000000488B6C string=0x0000000000488B70 "3"
 *   insn=0x0000000000488B98 string=0x0000000000488B9C "yG"
 *   insn=0x0000000000488B9C string=0x0000000000488BA0 "A"
 *   insn=0x0000000000488BAC string=0x0000000000488BB0 "\t"
 *   insn=0x0000000000488BB0 string=0x0000000000488BB4 ""
 *   insn=0x0000000000488BC0 string=0x0000000000488BC4 "3"
 *   insn=0x0000000000488BC4 string=0x00000000001F6C90 "0'"
 *   insn=0x0000000000488BD8 string=0x0000000000488BDC ";"
 *   insn=0x0000000000488C0C string=0x0000000000488C10 ""
 *   insn=0x0000000000488C10 string=0x0000000000488C14 ")"
 *   insn=0x0000000000488C18 string=0x0000000000488C1C "Ja@"
 *   insn=0x0000000000488C1C string=0x0000000000488C20 "A"
 *   insn=0x0000000000488C20 string=0x0000000000488C24 " "
 *   insn=0x0000000000488C28 string=0x0000000000488C2C "@"
 *   insn=0x0000000000488C38 string=0x00000000001F6F30 "0'"
 *   insn=0x0000000000488C3C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000488C44 string=0x0000000000488C48 "*"
 *   insn=0x0000000000488C48 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::lexical_cast<unsigned int,std::string,false,char>(__int64 *a1)
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
  if ( (boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><unsigned int>()
      & 1) == 0 )
    boost::throw_exception<boost::bad_lexical_cast>();
  sub_53C0C8(&v4);
  return v3;
}

