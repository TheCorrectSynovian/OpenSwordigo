/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA40
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10MusicTrackEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *
 * Callers: 1
 *   0x00000000002D91D8  Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&)
 *
 * Callees: 1
 *   0x00000000002D9B7C  google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA48 string=0x00000000001FAA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10MusicTrackEE9MergeFromERKS5_();
}

