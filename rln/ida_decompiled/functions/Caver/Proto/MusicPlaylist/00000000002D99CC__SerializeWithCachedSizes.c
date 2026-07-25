/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D99CC
 * Mangled: _ZNK5Caver5Proto13MusicPlaylist24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MusicPlaylist::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D99DC string=0x00000000002D99E0 "hBA9"
 *   insn=0x00000000002D99E8 string=0x00000000002D99EC "a\n@"
 *   insn=0x00000000002D99E8 string=0x00000000002D99FC "h"@"
 *   insn=0x00000000002D99F4 string=0x00000000002D99F8 "Vw"
 *   insn=0x00000000002D99F8 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D9A00 string=0x00000000002D9A04 "k"
 *   insn=0x00000000002D9A08 string=0x00000000002D9A0C "h"
 *   insn=0x00000000002D9A10 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D9A1C string=0x00000000002D9A20 "h""
 *   insn=0x00000000002D9A1C string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D9A28 string=0x00000000002D9A2C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x19
  __int64 v6; // x21

  v4 = this;
  if ( (*(_BYTE *)(this + 80) & 1) != 0 )
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
  return this;
}

