/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD80
 * Mangled: ._ZN5boost9function0IPN5Caver9ComponentEE4swapERS4_
 * Demangled: boost::function0<Caver::Component *>::swap(boost::function0<Caver::Component *>&)
 *
 * Callers: 1
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Callees: 1
 *   0x0000000000244F18  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD88 string=0x00000000001FFD8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function0<Caver::Component *>::swap()
{
  JUMPOUT(0x24505C);
}

