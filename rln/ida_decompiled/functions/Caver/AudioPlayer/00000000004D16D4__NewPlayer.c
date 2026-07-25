/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D16D4
 * Mangled: _ZN5Caver11AudioPlayer9NewPlayerEv
 * Demangled: Caver::AudioPlayer::NewPlayer(void)
 *
 * Callers: 1
 *   0x00000000001FE8F0  Caver::AudioPlayer::NewPlayer(void)
 *
 * Callees: 1
 *   0x00000000001FB5C0  Caver::NewAudioPlayerImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004D16D4 string=0x00000000001FB5C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioPlayer::NewPlayer(Caver::AudioPlayer *this)
{
  return Caver::NewAudioPlayerImpl(this);
}

