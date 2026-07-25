/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3A7C
 * Mangled: _ZNK5Caver5Proto23GuideTarget_LevelObject24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GuideTarget_LevelObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 3
 *   insn=0x00000000002E3AA0 string=0x00000000002E3AA4 "+O"
 *   insn=0x00000000002E3AA4 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E3ACC string=0x00000000002E3AD0 " O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x20
  int v3; // w8

  v2 = this;
  v3 = *(_DWORD *)(this + 32);
  if ( (v3 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v3 = *(_DWORD *)(v2 + 32);
  }
  if ( (v3 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v2 + 24), a2);
  return this;
}

