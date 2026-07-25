/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F81A0
 * Mangled: ._ZNSt3tr110_HashtableISt4pairIPKN6google8protobuf11MessageLiteEiES1_IKS7_NS3_8internal13ExtensionInfoEESaISB_ESt10_Select1stISB_ESt8equal_toIS7_ENS3_4hashIS7_EENS_8__detail18_Mod_range_hashingENSJ_20_Default_ranged_hashENSJ_20_Prime_rehash_policyELb0ELb0ELb1EE9_M_rehashEm
 * Demangled: std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_rehash(ulong)
 *
 * Callers: 1
 *   0x00000000004E0538  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *
 * Callees: 1
 *   0x00000000004E0538  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F81A8 string=0x00000000001F81AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_rehash()
{
  JUMPOUT(0x4E06C4);
}

