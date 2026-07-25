/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201600
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 1
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 1
 *   0x00000000004A88F0  std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201608 string=0x000000000020160C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GUIViewLayout>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

