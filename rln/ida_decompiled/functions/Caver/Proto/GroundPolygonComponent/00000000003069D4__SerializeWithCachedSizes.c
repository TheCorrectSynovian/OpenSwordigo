/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003069D4
 * Mangled: _ZNK5Caver5Proto22GroundPolygonComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 22
 *   insn=0x00000000003069F0 string=0x00000000003069F4 "k"
 *   insn=0x0000000000306A00 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000306A0C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000306A18 string=0x0000000000306A1C ""
 *   insn=0x0000000000306A20 string=0x0000000000306A24 "h"
 *   insn=0x0000000000306A28 string=0x0000000000306A2C "h"
 *   insn=0x0000000000306A2C string=0x0000000000306A30 ""
 *   insn=0x0000000000306A34 string=0x0000000000306A38 ""
 *   insn=0x0000000000306A54 string=0x0000000000306A58 ")"
 *   insn=0x0000000000306A5C string=0x0000000000000002 "LF"
 *   insn=0x0000000000306A64 string=0x0000000000306A68 ")"
 *   insn=0x0000000000306A68 string=0x0000000000306A6C "("
 *   insn=0x0000000000306A84 string=0x0000000000000003 "F"
 *   insn=0x0000000000306AA0 string=0x0000000000306AA4 "g"
 *   insn=0x0000000000306AA8 string=0x0000000000306AAC "H"
 *   insn=0x0000000000306AB8 string=0x0000000000306ABC "a"
 *   insn=0x0000000000306ACC string=0x0000000000306AD0 ")"
 *   insn=0x0000000000306ADC string=0x0000000000306AE0 ")"
 *   insn=0x0000000000306AE0 string=0x0000000000306AE4 "("
 *   insn=0x0000000000306AF0 string=0x0000000000306AF4 "H"
 *   insn=0x0000000000306B00 string=0x0000000000306B04 "O"
 *   insn=0x0000000000306B24 string=0x0000000000306B28 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  if ( *(int *)(this + 32) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
               *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 32) );
  }
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 4) != 0 )
  {
    if ( *(_QWORD *)(v4 + 80) )
      v8 = v4;
    else
      v8 = Caver::Proto::GroundPolygonComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v8 + 80),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 108);
    if ( (v7 & 8) == 0 )
    {
LABEL_6:
      if ( (v7 & 0x10) == 0 )
        goto LABEL_7;
      goto LABEL_17;
    }
  }
  else if ( (v7 & 8) == 0 )
  {
    goto LABEL_6;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 88),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_7:
    if ( (v7 & 0x20) == 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 92),
           a3);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x20) == 0 )
  {
LABEL_8:
    if ( (v7 & 1) == 0 )
      goto LABEL_9;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 96),
           a3);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 1) == 0 )
  {
LABEL_9:
    if ( (v7 & 0x40) == 0 )
      goto LABEL_10;
    goto LABEL_23;
  }
LABEL_19:
  if ( *(_QWORD *)(v4 + 16) )
    v9 = v4;
  else
    v9 = Caver::Proto::GroundPolygonComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v9 + 16),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x40) == 0 )
  {
LABEL_10:
    if ( (v7 & 0x80) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             *(unsigned __int8 *)(v4 + 104),
             a2,
             a4);
  }
LABEL_23:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 100),
           a3);
  if ( (*(_DWORD *)(v4 + 108) & 0x80) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             *(unsigned __int8 *)(v4 + 104),
             a2,
             a4);
  return this;
}

