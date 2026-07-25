/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF050
 * Mangled: ._ZN5boost8functionIFPN5Caver9ComponentEvEEaSERKS5_
 * Demangled: boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Callers: 1
 *   0x00000000002442A8  Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Callees: 1
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF058 string=0x00000000001FF05C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::function<Caver::Component * ()(void)>::operator=()
{
  return _ZN5boost8functionIFPN5Caver9ComponentEvEEaSERKS5_();
}

