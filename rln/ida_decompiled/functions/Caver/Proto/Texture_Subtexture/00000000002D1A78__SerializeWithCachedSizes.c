/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1A78
 * Mangled: _ZNK5Caver5Proto18Texture_Subtexture24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D1A90 string=0x00000000002D1A94 "h"
 *   insn=0x00000000002D1AB0 string=0x00000000002D1AB4 "'"
 *   insn=0x00000000002D1AB4 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D1AC4 string=0x00000000002D1AC8 ")-D"
 *   insn=0x00000000002D1ACC string=0x0000000000000002 "LF"
 *   insn=0x00000000002D1AD4 string=0x00000000002D1AD8 ")"
 *   insn=0x00000000002D1AD8 string=0x00000000002D1ADC "("
 *   insn=0x00000000002D1AE4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D1AF8 string=0x0000000000000003 "F"
 *   insn=0x00000000002D1B00 string=0x00000000002D1B04 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 36);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 36);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(v4 + 32),
               a3);
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::Texture_Subtexture::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 36) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             a2,
             *(float *)(v4 + 32),
             a3);
  return this;
}

