/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035E0
 * Mangled: ._ZN5Caver5Proto10MusicTrackC2Ev
 * Demangled: Caver::Proto::MusicTrack::MusicTrack(void)
 *
 * Callers: 1
 *   0x00000000004834EC  Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist *)
 *
 * Callees: 1
 *   0x00000000002D88A0  Caver::Proto::SoundLibrary::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002035E4 string=0x00000000002D88F8 "h "
 *   insn=0x00000000002035E8 string=0x00000000002035EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack *this)
{
  JUMPOUT(0x2D88F8);
}

