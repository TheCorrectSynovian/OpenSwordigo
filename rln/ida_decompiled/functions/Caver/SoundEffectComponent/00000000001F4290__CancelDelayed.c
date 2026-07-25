/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4290
 * Mangled: ._ZN5Caver20SoundEffectComponent13CancelDelayedEv
 * Demangled: Caver::SoundEffectComponent::CancelDelayed(void)
 *
 * Callers: 2
 *   0x000000000029F84C  Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *   0x00000000002A0C60  Caver::StaticMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000239868  Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4298 string=0x00000000001F429C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectComponent::CancelDelayed(Caver::SoundEffectComponent *this)
{
  JUMPOUT(0x239AAC);
}

