/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF370
 * Mangled: ._ZN5Caver5Proto10MusicTrack27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002D9704  Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D8E1C  Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF378 string=0x00000000001FF37C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MusicTrack::MergePartialFromCodedStream(
        Caver::Proto::MusicTrack *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto10MusicTrack27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

