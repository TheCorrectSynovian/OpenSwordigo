/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4EC0
 * Mangled: ._ZN5Caver11AudioSystem12CreateDeviceEv
 * Demangled: Caver::AudioSystem::CreateDevice(void)
 *
 * Callers: 2
 *   0x000000000047EF74  Caver::AudioSystem::SetCanEndAudioInterruption(bool)
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x000000000047EFBC  Caver::AudioSystem::CreateDevice(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4EC8 string=0x00000000001F4ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::CreateDevice(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem12CreateDeviceEv(this);
}

