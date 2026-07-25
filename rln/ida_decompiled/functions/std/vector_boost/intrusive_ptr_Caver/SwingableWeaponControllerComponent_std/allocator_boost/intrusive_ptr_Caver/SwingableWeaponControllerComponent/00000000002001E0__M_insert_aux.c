/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001E0
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver34SwingableWeaponControllerComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Callers: 1
 *   0x000000000026BC7C  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Callees: 1
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001E8 string=0x00000000002001EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver34SwingableWeaponControllerComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

