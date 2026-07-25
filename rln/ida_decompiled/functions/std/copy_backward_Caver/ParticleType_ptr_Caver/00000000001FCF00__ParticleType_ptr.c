/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF00
 * Mangled: ._ZSt13copy_backwardIPN5Caver12ParticleTypeES2_ET0_T_S4_S3_
 * Demangled: std::copy_backward<Caver::ParticleType *,Caver::ParticleType *>(Caver::ParticleType *,Caver::ParticleType *,Caver::ParticleType *)
 *
 * Callers: 1
 *   0x0000000000454D40  std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Callees: 1
 *   0x0000000000454D40  std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF08 string=0x00000000001FCF0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::copy_backward<Caver::ParticleType *,Caver::ParticleType *>()
{
  JUMPOUT(0x455158);
}

