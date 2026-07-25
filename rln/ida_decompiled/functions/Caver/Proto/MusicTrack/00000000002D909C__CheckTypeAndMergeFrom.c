/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D909C
 * Mangled: _ZN5Caver5Proto10MusicTrack21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MusicTrack::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202670  Caver::Proto::MusicTrack::MergeFrom(Caver::Proto::MusicTrack const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicTrack::CheckTypeAndMergeFrom(
        Caver::Proto::MusicTrack *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MusicTrack::MergeFrom();
}

