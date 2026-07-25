/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A79C
 * Mangled: _ZNK5Caver5Proto18WaterMeshComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000030A3DC  Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x000000000030A7B8 string=0x000000000030A7BC "("
 *   insn=0x000000000030A7D4 string=0x0000000000000001 "ELF"
 *   insn=0x000000000030A7DC string=0x00000000001F56D0 "P'"
 *   insn=0x000000000030A7EC string=0x0000000000000002 "LF"
 *   insn=0x000000000030A7F8 string=0x000000000030A7FC "("
 *   insn=0x000000000030A804 string=0x000000000030A808 ")"
 *   insn=0x000000000030A80C string=0x0000000000000003 "F"
 *   insn=0x000000000030A814 string=0x000000000030A818 ")"
 *   insn=0x000000000030A818 string=0x000000000030A81C "("
 *   insn=0x000000000030A820 string=0x000000000030A824 "K"
 *   insn=0x000000000030A824 string=0x00000000001F9950 "0'"
 *   insn=0x000000000030A834 string=0x000000000030A838 ")"
 *   insn=0x000000000030A844 string=0x000000000030A848 ")"
 *   insn=0x000000000030A84C string=0x000000000030A850 "("
 *   insn=0x000000000030A858 string=0x000000000030A85C "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 40);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 40);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
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
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      return this;
    goto LABEL_12;
  }
LABEL_8:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::WaterMeshComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 40) & 8) != 0 )
  {
LABEL_12:
    if ( *(_QWORD *)(v4 + 32) )
      v8 = v4;
    else
      v8 = Caver::Proto::WaterMeshComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_QWORD *)(v8 + 32),
             a2,
             a4);
  }
  return this;
}

