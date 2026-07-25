/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF30
 * Mangled: ._ZN5boost6detail12lexical_castIjSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m
 * Demangled: boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callers: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x0000000000488B48  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF38 string=0x00000000001FAF3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::lexical_cast<unsigned int,std::string,false,char>()
{
  return _ZN5boost6detail12lexical_castIjSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m();
}

