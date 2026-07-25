/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003233F0
 * Mangled: _ZNK5Caver5Proto24OrbitControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000323170  Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x0000000000323408 string=0x000000000032340C "("
 *   insn=0x0000000000323408 string=0x0000000000323420 "\t"
 *   insn=0x0000000000323424 string=0x0000000000323428 ")}D"
 *   insn=0x000000000032342C string=0x0000000000000001 "ELF"
 *   insn=0x0000000000323434 string=0x0000000000323438 ")"
 *   insn=0x0000000000323438 string=0x000000000032343C "("
 *   insn=0x0000000000323440 string=0x0000000000323444 "CY"
 *   insn=0x0000000000323444 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000323448 string=0x000000000032344C "("
 *   insn=0x0000000000323454 string=0x0000000000000002 "LF"
 *   insn=0x0000000000323470 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 32);
  if ( (v5 & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::OrbitControllerComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(v4 + 28),
               a3);
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v4 + 24),
           a3);
  if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             a2,
             *(float *)(v4 + 28),
             a3);
  return this;
}

