/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315678
 * Mangled: _ZNK5Caver5Proto27ElevatorControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ElevatorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 5
 *   insn=0x0000000000315698 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003156A0 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003156C0 string=0x0000000000000002 "LF"
 *   insn=0x00000000003156C8 string=0x00000000003156CC "M"
 *   insn=0x00000000003156CC string=0x00000000001F7400 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::SerializeWithCachedSizes(
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
    return google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_DWORD *)(v4 + 16),
             a2,
             a4);
  return this;
}

