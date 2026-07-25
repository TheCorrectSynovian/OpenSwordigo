/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A20
 * Mangled: ._ZN5Caver20SoundEffectComponent9IsPlayingEv
 * Demangled: Caver::SoundEffectComponent::IsPlaying(void)
 *
 * Callers: 2
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000023A744  Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A28 string=0x0000000000201A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectComponent::IsPlaying(Caver::SoundEffectComponent *this)
{
  JUMPOUT(0x23A85C);
}

