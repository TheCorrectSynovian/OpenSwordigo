/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F30
 * Mangled: ._ZN5boost15throw_exceptionINS_16bad_lexical_castEEEvRKT_
 * Demangled: boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&)
 *
 * Callers: 3
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000488B48  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Callees: 1
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F38 string=0x00000000001F6F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::throw_exception<boost::bad_lexical_cast>()
{
  JUMPOUT(0x46B1E8);
}

