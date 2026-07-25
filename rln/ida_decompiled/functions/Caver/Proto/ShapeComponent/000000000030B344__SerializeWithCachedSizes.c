/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B344
 * Mangled: _ZNK5Caver5Proto14ShapeComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 18
 *   insn=0x000000000030B35C string=0x000000000030B360 "("
 *   insn=0x000000000030B378 string=0x000000000030B37C ")"
 *   insn=0x000000000030B380 string=0x0000000000000001 "ELF"
 *   insn=0x000000000030B388 string=0x000000000030B38C ")"
 *   insn=0x000000000030B38C string=0x000000000030B390 "("
 *   insn=0x000000000030B394 string=0x000000000030B398 "n"
 *   insn=0x000000000030B398 string=0x00000000001F9950 "0'"
 *   insn=0x000000000030B39C string=0x000000000030B3A0 "("
 *   insn=0x000000000030B3A8 string=0x000000000030B3AC ")"
 *   insn=0x000000000030B3B0 string=0x0000000000000002 "LF"
 *   insn=0x000000000030B3B8 string=0x000000000030B3BC ")"
 *   insn=0x000000000030B3BC string=0x000000000030B3C0 "("
 *   insn=0x000000000030B3C4 string=0x000000000030B3C8 "b"
 *   insn=0x000000000030B3D8 string=0x000000000030B3DC ")"
 *   insn=0x000000000030B3E4 string=0x0000000000000003 "F"
 *   insn=0x000000000030B3E8 string=0x000000000030B3EC ")"
 *   insn=0x000000000030B3F0 string=0x000000000030B3F4 "("
 *   insn=0x000000000030B3FC string=0x000000000030B400 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 40);
  if ( (v5 & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::ShapeComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 40);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return this;
      goto LABEL_13;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v8 = v4;
  else
    v8 = Caver::Proto::ShapeComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v8 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 40) & 4) != 0 )
  {
LABEL_13:
    if ( *(_QWORD *)(v4 + 32) )
      v9 = v4;
    else
      v9 = Caver::Proto::ShapeComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(_QWORD *)(v9 + 32),
             a2,
             a4);
  }
  return this;
}

