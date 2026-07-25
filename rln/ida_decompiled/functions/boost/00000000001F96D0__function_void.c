/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F96D0
 * Mangled: ._ZN5boost8functionIFvRKSsbS2_EEaSERKS4_
 * Demangled: boost::function<void ()(std::string const&,bool,std::string const&)>::operator=(boost::function<void ()(std::string const&,bool,std::string const&)> const&)
 *
 * Callers: 1
 *   0x00000000004BDCC8  Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>)
 *
 * Callees: 1
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F96D8 string=0x00000000001F96DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function<void ()(std::string const&,bool,std::string const&)>::operator=()
{
  JUMPOUT(0x4BF140);
}

