/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD730
 * Mangled: ._ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIfEEbRT_
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Callers: 1
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Callees: 1
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD738 string=0x00000000001FD73C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><float>()
{
  return _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIfEEbRT_();
}

