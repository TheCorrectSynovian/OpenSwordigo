/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED5D8
 * Mangled: _ZNK5Caver5Proto9QuestText24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::QuestText::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x00000000002ED5E8 string=0x00000000002ED5EC "hBA9"
 *   insn=0x00000000002ED5F4 string=0x00000000002ED5F8 "a\n@"
 *   insn=0x00000000002ED5F4 string=0x00000000002ED608 "h"@"
 *   insn=0x00000000002ED600 string=0x00000000002ED604 "S("
 *   insn=0x00000000002ED604 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002ED60C string=0x00000000002ED610 "k"
 *   insn=0x00000000002ED614 string=0x00000000002ED618 "h"
 *   insn=0x00000000002ED624 string=0x00000000002ED628 "J("
 *   insn=0x00000000002ED628 string=0x00000000002ED62C "h""
 *   insn=0x00000000002ED634 string=0x00000000002ED638 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x19
  __int64 v4; // x21

  v2 = this;
  if ( (*(_BYTE *)(this + 80) & 1) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
  if ( *(int *)(v2 + 32) >= 1 )
  {
    v4 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               2,
               *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8 * v4++),
               a2);
    while ( v4 < *(int *)(v2 + 32) );
  }
  return this;
}

