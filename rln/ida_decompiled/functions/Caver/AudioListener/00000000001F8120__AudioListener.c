/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8120
 * Mangled: ._ZN5Caver13AudioListenerC2Ev
 * Demangled: Caver::AudioListener::AudioListener(void)
 *
 * Callers: 1
 *   0x000000000047E3D4  Caver::AudioSystem::AudioSystem(void)
 *
 * Callees: 1
 *   0x00000000004D12C0  Caver::AudioListener::AudioListener(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8124 string=0x00000000004D12C0 ")"
 *   insn=0x00000000001F8128 string=0x00000000001F812C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioListener::AudioListener(Caver::AudioListener *this)
{
  return _ZN5Caver13AudioListenerC2Ev(this);
}

