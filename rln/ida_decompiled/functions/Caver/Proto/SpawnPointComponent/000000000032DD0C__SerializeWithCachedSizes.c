/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DD0C
 * Mangled: _ZNK5Caver5Proto19SpawnPointComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032DAC4  Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x000000000032DD2C string=0x0000000000000001 "ELF"
 *   insn=0x000000000032DD30 string=0x000000000032DD34 "g"
 *   insn=0x000000000032DD34 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032DD50 string=0x000000000032DD54 ")%@"
 *   insn=0x000000000032DD5C string=0x0000000000000002 "LF"
 *   insn=0x000000000032DD60 string=0x000000000032DD64 ")"
 *   insn=0x000000000032DD68 string=0x000000000032DD6C "("
 *   insn=0x000000000032DD78 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 24);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 24);
  }
  if ( (v5 & 2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 16) )
      v7 = v4;
    else
      v7 = Caver::Proto::SpawnPointComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
  }
  return this;
}

