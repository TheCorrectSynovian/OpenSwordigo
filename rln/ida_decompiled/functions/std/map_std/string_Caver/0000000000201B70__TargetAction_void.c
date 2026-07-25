/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B70
 * Mangled: ._ZNSt3mapISsN5Caver12TargetActionIFvRKSsbS3_EEESt4lessISsESaISt4pairIS2_S5_EEEixES3_
 * Demangled: std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000004BDCC8  Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>)
 *
 * Callees: 1
 *   0x00000000004BDF04  std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B78 string=0x0000000000201B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::operator[]()
{
  return _ZNSt3mapISsN5Caver12TargetActionIFvRKSsbS3_EEESt4lessISsESaISt4pairIS2_S5_EEEixES3_();
}

