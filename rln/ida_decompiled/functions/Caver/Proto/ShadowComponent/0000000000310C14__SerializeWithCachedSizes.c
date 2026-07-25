/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310C14
 * Mangled: _ZNK5Caver5Proto15ShadowComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ShadowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000310994  Caver::Proto::ShadowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x0000000000310C2C string=0x0000000000310C30 "h"
 *   insn=0x0000000000310C30 string=0x0000000000310C34 ""
 *   insn=0x0000000000310C48 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000310C60 string=0x0000000000000002 "LF"
 *   insn=0x0000000000310C6C string=0x0000000000310C70 "H"
 *   insn=0x0000000000310C78 string=0x0000000000310C7C ")-A"
 *   insn=0x0000000000310C84 string=0x0000000000000003 "F"
 *   insn=0x0000000000310C88 string=0x0000000000310C8C ")"
 *   insn=0x0000000000310C90 string=0x0000000000310C94 "("
 *   insn=0x0000000000310C9C string=0x0000000000310CA0 ","
 *   insn=0x0000000000310CA0 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 32);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_6:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             a2,
             *(float *)(v4 + 16),
             a3);
    if ( (*(_DWORD *)(v4 + 32) & 4) == 0 )
      return this;
    goto LABEL_7;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
           a2,
           *(float *)(this + 12),
           a3);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 2) != 0 )
    goto LABEL_6;
LABEL_3:
  if ( (v5 & 4) == 0 )
    return this;
LABEL_7:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::ShadowComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
}

