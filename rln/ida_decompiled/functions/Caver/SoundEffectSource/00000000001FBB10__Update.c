/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB10
 * Mangled: ._ZN5Caver17SoundEffectSource6UpdateEf
 * Demangled: Caver::SoundEffectSource::Update(float)
 *
 * Callers: 1
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Callees: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB18 string=0x00000000001FBB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::Update(Caver::SoundEffectSource *this, float a2)
{
  JUMPOUT(0x484580);
}

