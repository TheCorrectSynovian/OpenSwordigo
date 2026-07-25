/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7DA0
 * Mangled: ._ZN5Caver11AudioSystem5SetupEv
 * Demangled: Caver::AudioSystem::Setup(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7DA8 string=0x00000000001F7DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::Setup(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem5SetupEv(this);
}

