/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB60
 * Mangled: ._ZN5Caver11AudioSystem15SetSharedSystemEPS0_
 * Demangled: Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047E37C  Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB68 string=0x00000000001FEB6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem *this, Caver::AudioSystem *a2)
{
  return _ZN5Caver11AudioSystem15SetSharedSystemEPS0_(this, a2);
}

