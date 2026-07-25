/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E91C8
 * Mangled: _ZNK5Caver5Proto21PlayerProfile_Counter24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PlayerProfile_Counter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E91EC string=0x00000000002E91F0 "X9"
 *   insn=0x00000000002E91F0 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E9210 string=0x0000000000000002 "LF"
 *   insn=0x00000000002E9218 string=0x00000000002E921C "-1"
 *   insn=0x00000000002E921C string=0x00000000001F56D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 28);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 28);
  }
  if ( (v5 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
  return this;
}

