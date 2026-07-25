/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E318
 * Mangled: _ZN5Caver11AudioSystem15hasSharedSystemEv
 * Demangled: Caver::AudioSystem::hasSharedSystem(void)
 *
 * Callers: 1
 *   0x00000000001F9FE0  Caver::AudioSystem::hasSharedSystem(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000047E318 string=0x000000000047E31C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AudioSystem::hasSharedSystem(Caver::AudioSystem *this)
{
  return qword_6E9D78 != 0;
}

