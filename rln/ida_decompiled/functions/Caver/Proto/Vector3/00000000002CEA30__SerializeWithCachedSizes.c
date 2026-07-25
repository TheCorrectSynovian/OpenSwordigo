/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEA30
 * Mangled: _ZNK5Caver5Proto7Vector324SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Vector3::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 9
 *   insn=0x00000000002CEA48 string=0x00000000002CEA4C "h"
 *   insn=0x00000000002CEA4C string=0x00000000002CEA50 ""
 *   insn=0x00000000002CEA64 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002CEA68 string=0x00000000002CEA6C "u"
 *   insn=0x00000000002CEA7C string=0x0000000000000002 "LF"
 *   insn=0x00000000002CEA80 string=0x00000000002CEA84 "o"
 *   insn=0x00000000002CEA88 string=0x00000000002CEA8C "H"
 *   insn=0x00000000002CEA98 string=0x0000000000000003 "F"
 *   insn=0x00000000002CEAA0 string=0x00000000002CEAA4 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  int v4; // w8

  v3 = this;
  v4 = *(_DWORD *)(this + 24);
  if ( (v4 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v4 = *(_DWORD *)(v3 + 24);
    if ( (v4 & 2) == 0 )
    {
LABEL_3:
      if ( (v4 & 4) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(v3 + 20),
               a3);
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v3 + 16),
           a3);
  if ( (*(_DWORD *)(v3 + 24) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             a2,
             *(float *)(v3 + 20),
             a3);
  return this;
}

