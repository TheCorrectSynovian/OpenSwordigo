/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB620
 * Mangled: ._ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_bS3_EEEED2Ev
 * Demangled: std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *
 * Callers: 3
 *   0x00000000004BDF04  std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *   0x00000000004BEAC8  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>> *)
 *
 * Callees: 1
 *   0x00000000004BEB1C  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB628 string=0x00000000001FB62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
{
  return _ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_bS3_EEEED2Ev();
}

