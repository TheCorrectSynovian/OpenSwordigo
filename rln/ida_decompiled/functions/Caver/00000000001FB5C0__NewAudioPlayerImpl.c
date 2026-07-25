/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5C0
 * Mangled: ._ZN5Caver18NewAudioPlayerImplEv
 * Demangled: Caver::NewAudioPlayerImpl(void)
 *
 * Callers: 1
 *   0x00000000004D16D4  Caver::AudioPlayer::NewPlayer(void)
 *
 * Callees: 1
 *   0x00000000004D16D8  Caver::NewAudioPlayerImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB5C8 string=0x00000000001FB5CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::NewAudioPlayerImpl(Caver *this)
{
  return _ZN5Caver18NewAudioPlayerImplEv(this);
}

