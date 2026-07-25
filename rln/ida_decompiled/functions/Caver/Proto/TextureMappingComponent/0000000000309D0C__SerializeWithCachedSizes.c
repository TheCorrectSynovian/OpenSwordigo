/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309D0C
 * Mangled: _ZNK5Caver5Proto23TextureMappingComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000309A5C  Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x0000000000309D24 string=0x0000000000309D28 "h"
 *   insn=0x0000000000309D28 string=0x0000000000309D2C ""
 *   insn=0x0000000000309D48 string=0x00000000001F7750 "0'"
 *   insn=0x0000000000309D58 string=0x0000000000000002 "LF"
 *   insn=0x0000000000309D64 string=0x0000000000309D68 "H"
 *   insn=0x0000000000309D70 string=0x0000000000309D74 ")"
 *   insn=0x0000000000309D7C string=0x0000000000000003 "F"
 *   insn=0x0000000000309D80 string=0x0000000000309D84 ")"
 *   insn=0x0000000000309D88 string=0x0000000000309D8C "("
 *   insn=0x0000000000309D98 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 40);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_6:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             a2,
             *(float *)(v4 + 24),
             a3);
    if ( (*(_DWORD *)(v4 + 40) & 4) == 0 )
      return this;
    goto LABEL_7;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 2) != 0 )
    goto LABEL_6;
LABEL_3:
  if ( (v5 & 4) == 0 )
    return this;
LABEL_7:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::TextureMappingComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
}

