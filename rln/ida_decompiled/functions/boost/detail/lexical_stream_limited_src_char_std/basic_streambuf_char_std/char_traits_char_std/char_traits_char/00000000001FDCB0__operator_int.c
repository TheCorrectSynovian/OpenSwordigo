/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDCB0
 * Mangled: ._ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIiEEbRT_
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *
 * Callers: 1
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callees: 1
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDCB8 string=0x00000000001FDCBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><int>()
{
  return _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIiEEbRT_();
}

