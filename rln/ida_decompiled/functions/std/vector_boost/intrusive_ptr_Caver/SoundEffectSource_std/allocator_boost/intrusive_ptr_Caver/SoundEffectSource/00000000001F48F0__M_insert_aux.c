/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F48F0
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver17SoundEffectSourceEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 3
 *   0x000000000047F6F8  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *   0x000000000047F9F8  Caver::AudioSystem::AddSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Callees: 1
 *   0x00000000004805FC  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F48F8 string=0x00000000001F48FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver17SoundEffectSourceEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

