/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300E74
 * Mangled: _ZNK5Caver5Proto16SceneObjectGroup24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003009C8  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 17
 *   insn=0x0000000000300E9C string=0x0000000000300EA0 ","
 *   insn=0x0000000000300EA0 string=0x00000000001F7750 "0'"
 *   insn=0x0000000000300EA8 string=0x0000000000300EAC "k"
 *   insn=0x0000000000300EC0 string=0x0000000000300EC4 "#"
 *   insn=0x0000000000300ED0 string=0x0000000000300ED4 ""
 *   insn=0x0000000000300ED8 string=0x0000000000300EDC ""
 *   insn=0x0000000000300EE0 string=0x0000000000300EE4 ""
 *   insn=0x0000000000300EE0 string=0x0000000000300F14 ")"
 *   insn=0x0000000000300F00 string=0x0000000000000003 "F"
 *   insn=0x0000000000300F04 string=0x0000000000300F08 "j"
 *   insn=0x0000000000300F18 string=0x0000000000300F1C ")yD"
 *   insn=0x0000000000300F28 string=0x0000000000300F2C ")"
 *   insn=0x0000000000300F2C string=0x0000000000300F30 "("
 *   insn=0x0000000000300F38 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000300F3C string=0x0000000000300F40 "H"
 *   insn=0x0000000000300F4C string=0x0000000000300F50 "X"
 *   insn=0x0000000000300F70 string=0x0000000000300F74 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x8

  v4 = this;
  if ( (*(_BYTE *)(this + 96) & 1) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
  if ( *(int *)(v4 + 32) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               2,
               *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6++),
               a2);
    while ( v6 < *(int *)(v4 + 32) );
  }
  v7 = *(_DWORD *)(v4 + 96);
  if ( (v7 & 4) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(unsigned __int8 *)(v4 + 80),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 96);
    if ( (v7 & 0x20) == 0 )
    {
LABEL_8:
      if ( (v7 & 0x10) == 0 )
        goto LABEL_9;
      goto LABEL_16;
    }
  }
  else if ( (v7 & 0x20) == 0 )
  {
    goto LABEL_8;
  }
  if ( *(_QWORD *)(v4 + 88) )
    v8 = v4;
  else
    v8 = Caver::Proto::SceneObjectGroup::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v8 + 88),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 96);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_9:
    if ( (v7 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 81),
             a2,
             a4);
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(unsigned __int8 *)(v4 + 82),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 96) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 81),
             a2,
             a4);
  return this;
}

