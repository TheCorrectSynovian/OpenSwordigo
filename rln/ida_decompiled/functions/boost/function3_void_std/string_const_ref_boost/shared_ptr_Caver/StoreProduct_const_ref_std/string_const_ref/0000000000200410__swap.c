/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200410
 * Mangled: ._ZN5boost9function3IvRKSsRKNS_10shared_ptrIN5Caver12StoreProductEEES2_E4swapERS9_
 * Demangled: boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::swap(boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>&)
 *
 * Callers: 1
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Callees: 1
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200418 string=0x000000000020041C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::swap()
{
  JUMPOUT(0x4BEF98);
}

