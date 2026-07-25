/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003149E0
 * Mangled: _ZNK5Caver5Proto15EntityComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::EntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 4
 *   insn=0x0000000000314A00 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000314A04 string=0x0000000000314A08 "2"
 *   insn=0x0000000000314A08 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000314A28 string=0x0000000000000002 "LF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 20);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 20);
  }
  if ( (v5 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(unsigned __int8 *)(v4 + 16),
             a2,
             a4);
  return this;
}

