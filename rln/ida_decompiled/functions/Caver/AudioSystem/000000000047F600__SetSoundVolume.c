/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F600
 * Mangled: _ZN5Caver11AudioSystem14SetSoundVolumeEf
 * Demangled: Caver::AudioSystem::SetSoundVolume(float)
 *
 * Callers: 1
 *   0x00000000001FEBD0  Caver::AudioSystem::SetSoundVolume(float)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::SetSoundVolume(__int64 this, float a2)
{
  *(float *)(this + 124) = a2;
  return this;
}

