/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FABC0
 * Mangled: ._ZNSt3mapIlN5boost10shared_ptrIN5Caver19ComponentCollectionEEESt4lessIlESaISt4pairIKlS4_EEEixERS8_
 * Demangled: std::map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::operator[](long const&)
 *
 * Callers: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callees: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FABC8 string=0x00000000001FABCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<long,boost::shared_ptr<Caver::ComponentCollection>>::operator[]()
{
  JUMPOUT(0x247650);
}

