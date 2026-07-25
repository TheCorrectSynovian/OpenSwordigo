/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202670
 * Mangled: ._ZN5Caver5Proto10MusicTrack9MergeFromERKS1_
 * Demangled: Caver::Proto::MusicTrack::MergeFrom(Caver::Proto::MusicTrack const&)
 *
 * Callers: 4
 *   0x00000000002D8938  Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack const&)
 *   0x00000000002D909C  Caver::Proto::MusicTrack::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D90A0  Caver::Proto::MusicTrack::CopyFrom(Caver::Proto::MusicTrack const&)
 *   0x00000000002D9B7C  google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *
 * Callees: 1
 *   0x00000000002D8938  Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202678 string=0x000000000020267C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MusicTrack::MergeFrom()
{
  JUMPOUT(0x2D8994);
}

