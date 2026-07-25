/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7294
 * Mangled: _ZNK5Caver5Proto13GUIViewLayout24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GUIViewLayout::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D72BC string=0x00000000002D72C0 "$"
 *   insn=0x00000000002D72C0 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D72C8 string=0x00000000002D72CC "k"
 *   insn=0x00000000002D72D8 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D72E4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D72F0 string=0x00000000002D72F4 ""
 *   insn=0x00000000002D72FC string=0x00000000002D7310 "i "
 *   insn=0x00000000002D7314 string=0x00000000002D7318 ")"
 *   insn=0x00000000002D7324 string=0x00000000002D7328 ")"
 *   insn=0x00000000002D732C string=0x00000000002D7330 "("
 *   insn=0x00000000002D732C string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  __int64 v7; // x8

  v4 = this;
  if ( (*(_BYTE *)(this + 88) & 1) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
  if ( *(int *)(v4 + 32) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 32) );
  }
  if ( (*(_BYTE *)(v4 + 88) & 4) != 0 )
  {
    if ( *(_QWORD *)(v4 + 80) )
      v7 = v4;
    else
      v7 = Caver::Proto::GUIViewLayout::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(_QWORD *)(v7 + 80),
             a2,
             a4);
  }
  return this;
}

