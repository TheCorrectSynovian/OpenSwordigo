/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A50
 * Mangled: ._ZN5Caver5Proto13MusicPlaylist9MergeFromERKS1_
 * Demangled: Caver::Proto::MusicPlaylist::MergeFrom(Caver::Proto::MusicPlaylist const&)
 *
 * Callers: 4
 *   0x00000000002D91D8  Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&)
 *   0x00000000002D9B78  Caver::Proto::MusicPlaylist::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D9C78  Caver::Proto::MusicPlaylist::CopyFrom(Caver::Proto::MusicPlaylist const&)
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *
 * Callees: 1
 *   0x00000000002D91D8  Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A58 string=0x0000000000203A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicPlaylist::MergeFrom(
        Caver::Proto::MusicPlaylist *this,
        const Caver::Proto::MusicPlaylist *a2)
{
  JUMPOUT(0x2D92A0);
}

