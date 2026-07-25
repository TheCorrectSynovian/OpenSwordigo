/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC460
 * Mangled: ._ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_RKN5boost10shared_ptrINS1_12StoreProductEEES3_EEEED2Ev
 * Demangled: std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *
 * Callers: 3
 *   0x00000000004BD890  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000004BECAC  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>> *)
 *
 * Callees: 1
 *   0x00000000004BED00  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC468 string=0x00000000001FC46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
{
  return _ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_RKN5boost10shared_ptrINS1_12StoreProductEEES3_EEEED2Ev();
}

