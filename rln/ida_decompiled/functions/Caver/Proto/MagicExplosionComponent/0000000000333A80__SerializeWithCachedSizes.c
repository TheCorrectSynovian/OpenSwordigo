/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333A80
 * Mangled: _ZNK5Caver5Proto23MagicExplosionComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000333704  Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x0000000000333A94 string=0x0000000000333A98 ""
 *   insn=0x0000000000333A9C string=0x0000000000333AA0 "H"
 *   insn=0x0000000000333AA4 string=0x0000000000333AA8 "H"
 *   insn=0x0000000000333ABC string=0x0000000000000001 "ELF"
 *   insn=0x0000000000333AC4 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000333AD4 string=0x0000000000000002 "LF"
 *   insn=0x0000000000333AE0 string=0x0000000000333AE4 ""
 *   insn=0x0000000000333AEC string=0x0000000000333AF0 ")G"
 *   insn=0x0000000000333AF4 string=0x0000000000000003 "F"
 *   insn=0x0000000000333AFC string=0x0000000000333B00 ")"
 *   insn=0x0000000000333B00 string=0x0000000000333B04 "("
 *   insn=0x0000000000333B0C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000333B20 string=0x0000000000333B24 "G+"
 *   insn=0x0000000000333B28 string=0x0000000000333B2C ""
 *   insn=0x0000000000333B40 string=0x0000000000333B44 "?+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(
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
    if ( (v5 & 0x10) == 0 )
    {
LABEL_3:
      if ( (v5 & 2) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 0x10) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 2) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_9:
  if ( *(_QWORD *)(v4 + 16) )
    v7 = v4;
  else
    v7 = Caver::Proto::MagicExplosionComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 4) == 0 )
  {
LABEL_5:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 28),
             a3);
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 24),
           a3);
  if ( (*(_DWORD *)(v4 + 36) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 28),
             a3);
  return this;
}

