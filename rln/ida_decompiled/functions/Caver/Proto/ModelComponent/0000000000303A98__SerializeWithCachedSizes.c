/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303A98
 * Mangled: _ZNK5Caver5Proto14ModelComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003034DC  Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 33
 *   insn=0x0000000000303AAC string=0x0000000000303AB0 "h"
 *   insn=0x0000000000303AB0 string=0x0000000000303AB4 ""
 *   insn=0x0000000000303AB8 string=0x0000000000303ABC "H"
 *   insn=0x0000000000303AC0 string=0x0000000000303AC4 "H"
 *   insn=0x0000000000303AC0 string=0x0000000000303B3C ")"
 *   insn=0x0000000000303AC4 string=0x0000000000303B6C ")"
 *   insn=0x0000000000303AC8 string=0x0000000000303ACC "H87"
 *   insn=0x0000000000303ACC string=0x0000000000303BB4 ")"
 *   insn=0x0000000000303AE8 string=0x00000000001F7750 "0'"
 *   insn=0x0000000000303AEC string=0x0000000000303AF0 "H"
 *   insn=0x0000000000303AF8 string=0x0000000000000002 "LF"
 *   insn=0x0000000000303AFC string=0x0000000000303B00 "P"
 *   insn=0x0000000000303B10 string=0x0000000000000003 "F"
 *   insn=0x0000000000303B14 string=0x0000000000303B18 "J"
 *   insn=0x0000000000303B1C string=0x0000000000303B20 ""
 *   insn=0x0000000000303B2C string=0x0000000000303B30 "D"
 *   insn=0x0000000000303B34 string=0x0000000000303B38 "h"
 *   insn=0x0000000000303B40 string=0x0000000000303B44 ")y@"
 *   insn=0x0000000000303B50 string=0x0000000000303B54 ")"
 *   insn=0x0000000000303B54 string=0x0000000000303B58 "("
 *   insn=0x0000000000303B5C string=0x0000000000303B60 "|"
 *   insn=0x0000000000303B60 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000303B64 string=0x0000000000303B68 ""
 *   insn=0x0000000000303B70 string=0x0000000000303B74 ")y@"
 *   insn=0x0000000000303B80 string=0x0000000000303B84 ")"
 *   insn=0x0000000000303B84 string=0x0000000000303B88 "("
 *   insn=0x0000000000303B8C string=0x0000000000303B90 "p"
 *   insn=0x0000000000303BA4 string=0x0000000000303BA8 "B"
 *   insn=0x0000000000303BAC string=0x0000000000303BB0 ""
 *   insn=0x0000000000303BB8 string=0x0000000000303BBC ")y@"
 *   insn=0x0000000000303BC8 string=0x0000000000303BCC ")"
 *   insn=0x0000000000303BD0 string=0x0000000000303BD4 "("
 *   insn=0x0000000000303BDC string=0x0000000000303BE0 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::SerializeWithCachedSizes(
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
  v5 = *(_DWORD *)(this + 72);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 72);
    if ( (v5 & 8) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x10) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 8) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v4 + 36),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v4 + 40),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 4) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_14:
  if ( *(_QWORD *)(v4 + 48) )
    v7 = v4;
  else
    v7 = Caver::Proto::ModelComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_QWORD *)(v7 + 48),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 2) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
LABEL_22:
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(unsigned __int8 *)(v4 + 56),
             a2,
             a4);
    if ( (*(_DWORD *)(v4 + 72) & 0x80) == 0 )
      return this;
    goto LABEL_23;
  }
LABEL_18:
  if ( *(_QWORD *)(v4 + 24) )
    v8 = v4;
  else
    v8 = Caver::Proto::ModelComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v8 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x40) != 0 )
    goto LABEL_22;
LABEL_8:
  if ( (v5 & 0x80) == 0 )
    return this;
LABEL_23:
  if ( *(_QWORD *)(v4 + 64) )
    v9 = v4;
  else
    v9 = Caver::Proto::ModelComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_QWORD *)(v9 + 64),
           a2,
           a4);
}

