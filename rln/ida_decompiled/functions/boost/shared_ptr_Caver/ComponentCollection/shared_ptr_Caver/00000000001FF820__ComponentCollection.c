/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF820
 * Mangled: ._ZN5boost10shared_ptrIN5Caver19ComponentCollectionEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ComponentCollection>::shared_ptr<Caver::ComponentCollection>(Caver::ComponentCollection *)
 *
 * Callers: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callees: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF828 string=0x00000000001FF82C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ComponentCollection>::shared_ptr<Caver::ComponentCollection>()
{
  JUMPOUT(0x247548);
}

