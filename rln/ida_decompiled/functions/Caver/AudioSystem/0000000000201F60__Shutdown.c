/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F60
 * Mangled: ._ZN5Caver11AudioSystem8ShutdownEv
 * Demangled: Caver::AudioSystem::Shutdown(void)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x000000000047E504  Caver::AudioSystem::~AudioSystem()
 *
 * Callees: 1
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201F68 string=0x0000000000201F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::Shutdown(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem8ShutdownEv(this);
}

