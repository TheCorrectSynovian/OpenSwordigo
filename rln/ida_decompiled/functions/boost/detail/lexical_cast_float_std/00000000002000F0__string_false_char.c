/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000F0
 * Mangled: ._ZN5boost6detail12lexical_castIfSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m
 * Demangled: boost::detail::lexical_cast<float,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callers: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000F8 string=0x00000000002000FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::lexical_cast<float,std::string,false,char>()
{
  JUMPOUT(0x488DF4);
}

