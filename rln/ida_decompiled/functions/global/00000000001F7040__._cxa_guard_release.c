/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7040
 * Mangled: .__cxa_guard_release
 * Demangled: .__cxa_guard_release
 *
 * Callers: 15
 *   0x0000000000243E48  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *   0x0000000000451E5C  Caver::BlastParticleEmitter::TitleForParameter(uint)
 *   0x00000000004529E0  Caver::FountainParticleEmitter::TitleForParameter(uint)
 *   0x000000000045579C  Caver::SparkParticleEmitter::TitleForParameter(uint)
 *   0x00000000004560A4  Caver::TrailParticleEmitter::TitleForParameter(uint)
 *   0x00000000004568D0  Caver::WhooshParticleEmitter::TitleForParameter(uint)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *   0x00000000004AB3CC  Caver::FWKeyboard::sharedKeyboard(void)
 *   0x00000000004AB680  Caver::FWMouse::sharedMouse(void)
 *   0x00000000004B4B84  Caver::TimerCurrentSeconds(void)
 *   0x000000000053C340  sub_53C340
 *   0x000000000053D830  sub_53D830
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000566074  sub_566074
 *
 * Callees: 1
 *   0x000000000051E468  __cxa_guard_release
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7044 string=0x000000000051E468 """
 *   insn=0x00000000001F7048 string=0x00000000001F704C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __cxa_guard_release(__guard *a1)
{
  _cxa_guard_release(a1);
}

