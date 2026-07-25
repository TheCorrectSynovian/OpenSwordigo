/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9FE0
 * Mangled: ._ZN5Caver11AudioSystem15hasSharedSystemEv
 * Demangled: Caver::AudioSystem::hasSharedSystem(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047E318  Caver::AudioSystem::hasSharedSystem(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9FE4 string=0x000000000047E318 "H"
 *   insn=0x00000000001F9FE8 string=0x00000000001F9FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::hasSharedSystem(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem15hasSharedSystemEv(this);
}

