/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318A38
 * Mangled: _ZNK5Caver5Proto22PhysicsObjectComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003185B0  Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 23
 *   insn=0x0000000000318A4C string=0x0000000000318A50 "h"
 *   insn=0x0000000000318A50 string=0x0000000000318A54 ""
 *   insn=0x0000000000318A54 string=0x0000000000318A58 "h"
 *   insn=0x0000000000318A54 string=0x0000000000318A94 "i"
 *   insn=0x0000000000318A58 string=0x0000000000318A5C ""
 *   insn=0x0000000000318A60 string=0x0000000000318A64 "H"
 *   insn=0x0000000000318A80 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000318A8C string=0x0000000000318A90 "H"
 *   insn=0x0000000000318A98 string=0x0000000000318A9C ")"
 *   insn=0x0000000000318AA0 string=0x0000000000000002 "LF"
 *   insn=0x0000000000318AA8 string=0x0000000000318AAC ")"
 *   insn=0x0000000000318AAC string=0x0000000000318AB0 "("
 *   insn=0x0000000000318AB8 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000318AC8 string=0x0000000000000003 "F"
 *   insn=0x0000000000318ACC string=0x0000000000318AD0 "\"
 *   insn=0x0000000000318AD4 string=0x0000000000318AD8 "H"
 *   insn=0x0000000000318AE4 string=0x0000000000318AE8 "V"
 *   insn=0x0000000000318AFC string=0x0000000000318B00 "P"
 *   insn=0x0000000000318B04 string=0x0000000000318B08 ""
 *   insn=0x0000000000318B14 string=0x0000000000318B18 "J"
 *   insn=0x0000000000318B1C string=0x0000000000318B20 "h"
 *   insn=0x0000000000318B2C string=0x0000000000318B30 "`"
 *   insn=0x0000000000318B4C string=0x0000000000318B50 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 48);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(unsigned __int8 *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 48);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 16) )
    v7 = v4;
  else
    v7 = Caver::Proto::PhysicsObjectComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v4 + 24),
           a3);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 28),
           a3);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 36),
           a3);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             a2,
             *(float *)(v4 + 44),
             a3);
  }
LABEL_19:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(unsigned __int8 *)(v4 + 40),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 48) & 0x80) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             a2,
             *(float *)(v4 + 44),
             a3);
  return this;
}

