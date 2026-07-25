/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201020
 * Mangled: ._ZN5boost9function3IvRKSsbS2_E11move_assignERS3_
 * Demangled: boost::function3<void,std::string const&,bool,std::string const&>::move_assign(boost::function3<void,std::string const&,bool,std::string const&>&)
 *
 * Callers: 1
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Callees: 1
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201028 string=0x000000000020102C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function3<void,std::string const&,bool,std::string const&>::move_assign()
{
  JUMPOUT(0x4BF338);
}

