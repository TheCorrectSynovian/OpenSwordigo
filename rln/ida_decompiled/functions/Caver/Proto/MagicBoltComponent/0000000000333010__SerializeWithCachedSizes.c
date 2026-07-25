/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333010
 * Mangled: _ZNK5Caver5Proto18MagicBoltComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000332C6C  Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x0000000000333024 string=0x0000000000333028 ""
 *   insn=0x000000000033302C string=0x0000000000333030 "H"
 *   insn=0x0000000000333034 string=0x0000000000333038 "H"
 *   insn=0x000000000033304C string=0x0000000000000001 "ELF"
 *   insn=0x0000000000333054 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000333064 string=0x0000000000000002 "LF"
 *   insn=0x0000000000333070 string=0x0000000000333074 ""
 *   insn=0x000000000033307C string=0x0000000000000003 "F"
 *   insn=0x0000000000333088 string=0x000000000033308C "h"
 *   insn=0x0000000000333094 string=0x0000000000333098 ")"
 *   insn=0x00000000003330A4 string=0x00000000003330A8 ")"
 *   insn=0x00000000003330A8 string=0x00000000003330AC "("
 *   insn=0x00000000003330B0 string=0x00000000003330B4 "'"
 *   insn=0x00000000003330B4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000003330B8 string=0x00000000003330BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 36);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 36);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 32),
             a3);
  }
LABEL_10:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::MagicBoltComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 36) & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 32),
             a3);
  return this;
}

