/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F5E4
 * Mangled: _ZN5Caver11AudioSystem15SetSoundEnabledEb
 * Demangled: Caver::AudioSystem::SetSoundEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001F8830  Caver::AudioSystem::SetSoundEnabled(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000047F5E4 string=0x000000000047F5E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::SetSoundEnabled(__int64 this, char a2)
{
  *(_BYTE *)(this + 120) = a2 & 1;
  return this;
}

