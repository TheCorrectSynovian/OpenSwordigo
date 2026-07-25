/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB6F0
 * Mangled: .__cxa_guard_abort
 * Demangled: .__cxa_guard_abort
 *
 * Callers: 6
 *   0x0000000000451E5C  Caver::BlastParticleEmitter::TitleForParameter(uint)
 *   0x00000000004529E0  Caver::FountainParticleEmitter::TitleForParameter(uint)
 *   0x000000000045579C  Caver::SparkParticleEmitter::TitleForParameter(uint)
 *   0x00000000004560A4  Caver::TrailParticleEmitter::TitleForParameter(uint)
 *   0x00000000004568D0  Caver::WhooshParticleEmitter::TitleForParameter(uint)
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 1
 *   0x000000000051E3F4  __cxa_guard_abort
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB6F4 string=0x000000000051E3F4 """
 *   insn=0x00000000001FB6F8 string=0x00000000001FB6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __cxa_guard_abort(__guard *a1)
{
  _cxa_guard_abort(a1);
}

