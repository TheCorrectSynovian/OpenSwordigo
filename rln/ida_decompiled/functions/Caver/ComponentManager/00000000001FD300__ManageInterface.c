/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD300
 * Mangled: ._ZN5Caver16ComponentManager15ManageInterfaceEl
 * Demangled: Caver::ComponentManager::ManageInterface(long)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD308 string=0x00000000001FD30C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ComponentManager::ManageInterface(Caver::ComponentManager *this)
{
  JUMPOUT(0x24783C);
}

