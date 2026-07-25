/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002029B0
 * Mangled: ._ZNSt3mapISsN5Caver12TargetActionIFvRKSsRKN5boost10shared_ptrINS0_12StoreProductEEES3_EEESt4lessISsESaISt4pairIS2_SB_EEEixES3_
 * Demangled: std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000004BD7CC  Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,std::allocator<std::string>> const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callees: 1
 *   0x00000000004BD890  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002029B8 string=0x00000000002029BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::operator[]()
{
  return _ZNSt3mapISsN5Caver12TargetActionIFvRKSsRKN5boost10shared_ptrINS0_12StoreProductEEES3_EEESt4lessISsESaISt4pairIS2_SB_EEEixES3_();
}

