/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9B78
 * Mangled: _ZN5Caver5Proto13MusicPlaylist21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MusicPlaylist::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203A50  Caver::Proto::MusicPlaylist::MergeFrom(Caver::Proto::MusicPlaylist const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicPlaylist::CheckTypeAndMergeFrom(
        Caver::Proto::MusicPlaylist *this,
        const Caver::Proto::MusicPlaylist *a2)
{
  Caver::Proto::MusicPlaylist::MergeFrom(this, a2);
}

