/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9410
 * Mangled: ._ZN5Caver5Proto13MusicPlaylistC2Ev
 * Demangled: Caver::Proto::MusicPlaylist::MusicPlaylist(void)
 *
 * Callers: 2
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *   0x00000000002E5908  Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D9130  Caver::Proto::MusicTrack::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9414 string=0x00000000002D9188 "h "
 *   insn=0x00000000001F9418 string=0x00000000001F941C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist *this)
{
  JUMPOUT(0x2D9188);
}

