/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC3B4
 * Mangled: _ZNK5Caver5Proto15StateProperties24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::StateProperties::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 6
 *   insn=0x00000000002EC3C4 string=0x00000000002EC3C8 "h"
 *   insn=0x00000000002EC3D0 string=0x00000000002EC3D4 "k"
 *   insn=0x00000000002EC3D8 string=0x00000000002EC3DC "h\n@"
 *   insn=0x00000000002EC3EC string=0x00000000002EC3F0 "h"
 *   insn=0x00000000002EC3EC string=0x00000000001F7750 "0'"
 *   insn=0x00000000002EC3F8 string=0x00000000002EC3FC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x19
  __int64 v4; // x21

  v2 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v4 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               1,
               *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8 * v4++),
               a2);
    while ( v4 < *(int *)(v2 + 24) );
  }
  return this;
}

