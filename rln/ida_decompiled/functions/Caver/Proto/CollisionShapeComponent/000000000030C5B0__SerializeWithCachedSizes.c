/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030C5B0
 * Mangled: _ZNK5Caver5Proto23CollisionShapeComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000030BCE0  Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 33
 *   insn=0x000000000030C5C4 string=0x000000000030C5C8 ""
 *   insn=0x000000000030C5CC string=0x000000000030C5D0 "H"
 *   insn=0x000000000030C5D8 string=0x000000000030C5DC "("
 *   insn=0x000000000030C5E0 string=0x000000000030C5E4 "h"
 *   insn=0x000000000030C5E8 string=0x000000000030C5EC "(\t"
 *   insn=0x000000000030C5F0 string=0x000000000030C5F4 "(@7"
 *   insn=0x000000000030C60C string=0x0000000000000002 "LF"
 *   insn=0x000000000030C624 string=0x0000000000000003 "F"
 *   insn=0x000000000030C630 string=0x000000000030C634 ""
 *   insn=0x000000000030C648 string=0x000000000030C64C "h"
 *   insn=0x000000000030C670 string=0x000000000030C674 "s"
 *   insn=0x000000000030C678 string=0x000000000030C67C "("
 *   insn=0x000000000030C688 string=0x000000000030C68C "m"
 *   insn=0x000000000030C6A0 string=0x000000000030C6A4 "W"
 *   insn=0x000000000030C6A4 string=0x00000000001F7400 "0'"
 *   insn=0x000000000030C6B4 string=0x000000000030C6B8 ")"
 *   insn=0x000000000030C6B8 string=0x000000000030C6BC " "
 *   insn=0x000000000030C6C4 string=0x000000000030C6C8 ")"
 *   insn=0x000000000030C6C8 string=0x000000000030C6CC "("
 *   insn=0x000000000030C6D4 string=0x00000000001F9950 "0'"
 *   insn=0x000000000030C6E4 string=0x000000000030C6E8 ")"
 *   insn=0x000000000030C6E8 string=0x000000000030C6EC "@"
 *   insn=0x000000000030C6F4 string=0x000000000030C6F8 ")"
 *   insn=0x000000000030C6F8 string=0x000000000030C6FC "("
 *   insn=0x000000000030C708 string=0x000000000030C70C "("
 *   insn=0x000000000030C710 string=0x000000000030C714 "`"
 *   insn=0x000000000030C718 string=0x000000000030C71C "e"
 *   insn=0x000000000030C72C string=0x000000000030C730 ")"
 *   insn=0x000000000030C73C string=0x000000000030C740 ")"
 *   insn=0x000000000030C740 string=0x000000000030C744 "("
 *   insn=0x000000000030C750 string=0x000000000030C754 "("
 *   insn=0x000000000030C760 string=0x000000000030C764 "7"
 *   insn=0x000000000030C780 string=0x000000000030C784 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 64);
  if ( (v5 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(unsigned __int8 *)(this + 13),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 64);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_17;
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 14),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 8) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(unsigned __int8 *)(v4 + 15),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(unsigned __int8 *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_7;
    goto LABEL_20;
  }
LABEL_19:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 20),
           a3);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_8;
    goto LABEL_21;
  }
LABEL_20:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 24),
           a3);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x400) == 0 )
      goto LABEL_9;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteEnum(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_DWORD *)(v4 + 28),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x400) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x800) == 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
LABEL_22:
  if ( *(_QWORD *)(v4 + 40) )
    v7 = v4;
  else
    v7 = Caver::Proto::CollisionShapeComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(_QWORD *)(v7 + 40),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x800) == 0 )
  {
LABEL_10:
    if ( (v5 & 1) == 0 )
      goto LABEL_11;
    goto LABEL_30;
  }
LABEL_26:
  if ( *(_QWORD *)(v4 + 48) )
    v8 = v4;
  else
    v8 = Caver::Proto::CollisionShapeComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           *(_QWORD *)(v8 + 48),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 1) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x1000) == 0 )
      goto LABEL_12;
    goto LABEL_31;
  }
LABEL_30:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_9[2],
           *(unsigned __int8 *)(v4 + 12),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x1000) == 0 )
  {
LABEL_12:
    if ( (v5 & 0x100) == 0 )
      goto LABEL_13;
    goto LABEL_35;
  }
LABEL_31:
  if ( *(_QWORD *)(v4 + 56) )
    v9 = v4;
  else
    v9 = Caver::Proto::CollisionShapeComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[3],
           *(_QWORD *)(v9 + 56),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x100) == 0 )
  {
LABEL_13:
    if ( (v5 & 0x200) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[5],
             *(unsigned __int8 *)(v4 + 36),
             a2,
             a4);
  }
LABEL_35:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[4],
           a2,
           *(float *)(v4 + 32),
           a3);
  if ( (*(_DWORD *)(v4 + 64) & 0x200) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[5],
             *(unsigned __int8 *)(v4 + 36),
             a2,
             a4);
  return this;
}

