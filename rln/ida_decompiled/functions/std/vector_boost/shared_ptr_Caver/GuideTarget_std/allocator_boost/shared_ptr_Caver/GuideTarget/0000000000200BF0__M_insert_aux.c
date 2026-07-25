/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BF0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver11GuideTargetEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B171C  std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200BF8 string=0x0000000000200BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GuideTarget>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver11GuideTargetEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

