/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200350
 * Mangled: ._ZN5boost6detail12lexical_castIiSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m
 * Demangled: boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callers: 2
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200358 string=0x000000000020035C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::lexical_cast<int,std::string,false,char>()
{
  return _ZN5boost6detail12lexical_castIiSsLb0EcEET_NS_11call_traitsIT0_E10param_typeEPT2_m();
}

