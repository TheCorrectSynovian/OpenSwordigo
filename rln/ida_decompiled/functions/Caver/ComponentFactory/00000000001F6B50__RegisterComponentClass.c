/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B50
 * Mangled: ._ZN5Caver16ComponentFactory22RegisterComponentClassERKSsN5boost8functionIFPNS_9ComponentEvEEE
 * Demangled: Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000002442A8  Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B58 string=0x00000000001F6B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ComponentFactory::RegisterComponentClass()
{
  return _ZN5Caver16ComponentFactory22RegisterComponentClassERKSsN5boost8functionIFPNS_9ComponentEvEEE();
}

