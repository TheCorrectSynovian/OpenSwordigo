/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F49C0
 * Mangled: ._ZN5Caver17SoundEffectSource4PlayEv
 * Demangled: Caver::SoundEffectSource::Play(void)
 *
 * Callers: 2
 *   0x000000000047F6F8  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Callees: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F49C8 string=0x00000000001F49CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::Play(Caver::SoundEffectSource *this)
{
  JUMPOUT(0x48472C);
}

