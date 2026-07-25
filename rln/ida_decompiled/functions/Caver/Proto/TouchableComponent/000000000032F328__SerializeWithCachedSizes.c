/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F328
 * Mangled: _ZNK5Caver5Proto18TouchableComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::TouchableComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032F104  Caver::Proto::TouchableComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x000000000032F348 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032F34C string=0x000000000032F350 "<="
 *   insn=0x000000000032F36C string=0x000000000032F370 ")"
 *   insn=0x000000000032F378 string=0x0000000000000002 "LF"
 *   insn=0x000000000032F37C string=0x000000000032F380 ")"
 *   insn=0x000000000032F384 string=0x000000000032F388 "("
 *   insn=0x000000000032F390 string=0x000000000032F394 "o)"
 *   insn=0x000000000032F394 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 24);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v5 = *(_DWORD *)(v4 + 24);
  }
  if ( (v5 & 2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 16) )
      v7 = v4;
    else
      v7 = Caver::Proto::TouchableComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
  }
  return this;
}

