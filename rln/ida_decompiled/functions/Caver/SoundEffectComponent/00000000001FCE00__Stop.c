/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE00
 * Mangled: ._ZN5Caver20SoundEffectComponent4StopEv
 * Demangled: Caver::SoundEffectComponent::Stop(void)
 *
 * Callers: 1
 *   0x000000000028BD40  Caver::MagicSpellCastComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000023A86C  Caver::SoundEffectComponent::Stop(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE08 string=0x00000000001FCE0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectComponent::Stop(Caver::SoundEffectComponent *this)
{
  return _ZN5Caver20SoundEffectComponent4StopEv(this);
}

