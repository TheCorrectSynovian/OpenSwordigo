/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F30
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver11SceneObjectEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 6
 *   0x000000000022BEF8  Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000465804  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000468A54  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x000000000022CC5C  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F38 string=0x00000000001F7F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver11SceneObjectEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

