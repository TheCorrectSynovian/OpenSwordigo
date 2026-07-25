/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E00
 * Mangled: ._ZN5Caver11AudioSystemD2Ev
 * Demangled: Caver::AudioSystem::~AudioSystem()
 *
 * Callers: 1
 *   0x000000000047E37C  Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *
 * Callees: 1
 *   0x000000000047E504  Caver::AudioSystem::~AudioSystem()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E08 string=0x00000000001F7E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AudioSystem::~AudioSystem(Caver::AudioSystem *this)
{
  _ZN5Caver11AudioSystemD2Ev(this);
}

