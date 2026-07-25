/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB260
 * Mangled: ._ZNSt6vectorIN5Caver12ParticleTypeESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Callers: 1
 *   0x0000000000453C94  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x0000000000454D40  std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB268 string=0x00000000001FB26C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::ParticleType>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver12ParticleTypeESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_();
}

