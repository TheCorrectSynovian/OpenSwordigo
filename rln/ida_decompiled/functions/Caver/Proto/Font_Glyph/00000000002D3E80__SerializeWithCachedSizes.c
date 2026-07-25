/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3E80
 * Mangled: _ZNK5Caver5Proto10Font_Glyph24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Font_Glyph::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 12
 *   insn=0x00000000002D3EB8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002D3EC0 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002D3ED0 string=0x00000000002D3ED4 ")"
 *   insn=0x00000000002D3ED8 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D3EE0 string=0x00000000002D3EE4 ")"
 *   insn=0x00000000002D3EE4 string=0x00000000002D3EE8 "("
 *   insn=0x00000000002D3EF0 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D3EF4 string=0x00000000002D3EF8 "h"
 *   insn=0x00000000002D3F00 string=0x0000000000000003 "F"
 *   insn=0x00000000002D3F18 string=0x00000000002D3F1C ")"
 *   insn=0x00000000002D3F28 string=0x00000000002D3F2C ")"
 *   insn=0x00000000002D3F30 string=0x00000000002D3F34 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::SerializeWithCachedSizes(
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
LABEL_11:
      this = google::protobuf::internal::WireFormatLite::WriteInt32(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_DWORD *)(v4 + 24),
               a2,
               a4);
      if ( (*(_DWORD *)(v4 + 40) & 8) == 0 )
        return this;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 16) )
    v7 = v4;
  else
    v7 = Caver::Proto::Font_Glyph::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 4) != 0 )
    goto LABEL_11;
LABEL_4:
  if ( (v5 & 8) == 0 )
    return this;
LABEL_12:
  if ( *(_QWORD *)(v4 + 32) )
    v8 = v4;
  else
    v8 = Caver::Proto::Font_Glyph::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v8 + 32),
           a2,
           a4);
}

