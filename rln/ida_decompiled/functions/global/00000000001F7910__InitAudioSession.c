/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7910
 * Mangled: ._Z16InitAudioSessionN5boost8functionIFvvEEES2_
 * Demangled: InitAudioSession(boost::function<void ()(void)>,boost::function<void ()(void)>)
 *
 * Callers: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x00000000004D12B8  InitAudioSession(boost::function<void ()(void)>,boost::function<void ()(void)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7918 string=0x00000000001F791C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 InitAudioSession()
{
  return _Z16InitAudioSessionN5boost8functionIFvvEEES2_();
}

