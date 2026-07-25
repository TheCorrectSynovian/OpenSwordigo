/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB10
 * Mangled: ._ZNSt3mapISsN5boost8functionIFPN5Caver9ComponentEvEEESt4lessISsESaISt4pairIKSsS6_EEEixERSA_
 * Demangled: std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000002442A8  Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Callees: 1
 *   0x0000000000244320  std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB18 string=0x00000000001FDB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::function<Caver::Component * ()(void)>>::operator[]()
{
  return _ZNSt3mapISsN5boost8functionIFPN5Caver9ComponentEvEEESt4lessISsESaISt4pairIKSsS6_EEEixERSA_();
}

