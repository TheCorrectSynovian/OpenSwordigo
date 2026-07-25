/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9FC0
 * Mangled: ._ZN5Caver5Scene12GetAllGroupsEPSt6vectorIN5boost13intrusive_ptrINS_16SceneObjectGroupEEESaIS5_EE
 * Demangled: Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *
 * Callers: 1
 *   0x0000000000471AE8  Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x0000000000468C5C  Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9FC8 string=0x00000000001F9FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::GetAllGroups()
{
  return _ZN5Caver5Scene12GetAllGroupsEPSt6vectorIN5boost13intrusive_ptrINS_16SceneObjectGroupEEESaIS5_EE();
}

