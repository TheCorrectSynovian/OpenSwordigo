/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5600
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14LightComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::LightComponent>*,std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>>,boost::intrusive_ptr<Caver::LightComponent> const&)
 *
 * Callers: 1
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *
 * Callees: 1
 *   0x00000000002239B4  std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::LightComponent>*,std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>>,boost::intrusive_ptr<Caver::LightComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5608 string=0x00000000001F560C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::intrusive_ptr<Caver::LightComponent>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14LightComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

