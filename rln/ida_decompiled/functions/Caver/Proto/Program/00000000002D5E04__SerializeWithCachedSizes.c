/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5E04
 * Mangled: _ZNK5Caver5Proto7Program24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Program::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x00000000002D5E1C string=0x00000000002D5E20 "h"
 *   insn=0x00000000002D5E20 string=0x00000000002D5E24 ""
 *   insn=0x00000000002D5E3C string=0x00000000002D5E40 "D"
 *   insn=0x00000000002D5E40 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D5E54 string=0x00000000002D5E58 "*"
 *   insn=0x00000000002D5E58 string=0x00000000001FD700 "0'"
 *   insn=0x00000000002D5E5C string=0x00000000002D5E60 "H"
 *   insn=0x00000000002D5E74 string=0x00000000002D5E78 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x20
  int v3; // w8

  v2 = this;
  v3 = *(_DWORD *)(this + 40);
  if ( (v3 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 24), a2);
    v3 = *(_DWORD *)(v2 + 40);
    if ( (v3 & 4) == 0 )
    {
LABEL_3:
      if ( (v3 & 1) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v2 + 16), a2);
    }
  }
  else if ( (v3 & 4) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBytes(2, *(_QWORD *)(v2 + 32), a2);
  if ( (*(_DWORD *)(v2 + 40) & 1) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v2 + 16), a2);
  return this;
}

