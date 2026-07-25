/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002020E0
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPSsS2_EET0_T_S4_S3_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *
 * Callers: 2
 *   0x0000000000244F18  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *   0x0000000000428DF4  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *
 * Callees: 1
 *   0x00000000002455F0  std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002020E8 string=0x00000000002020EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPSsS2_EET0_T_S4_S3_();
}

