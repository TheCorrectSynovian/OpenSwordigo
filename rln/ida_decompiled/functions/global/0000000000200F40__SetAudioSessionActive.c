/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F40
 * Mangled: ._Z21SetAudioSessionActiveb
 * Demangled: SetAudioSessionActive(bool)
 *
 * Callers: 3
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x00000000004D12BC  SetAudioSessionActive(bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F48 string=0x0000000000200F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall SetAudioSessionActive(bool a1)
{
  return _Z21SetAudioSessionActiveb(a1);
}

