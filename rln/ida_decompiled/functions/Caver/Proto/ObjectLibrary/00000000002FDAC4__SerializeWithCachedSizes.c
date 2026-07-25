/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDAC4
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 27
 *   insn=0x00000000002FDAD4 string=0x00000000002FDAD8 "h"
 *   insn=0x00000000002FDAE0 string=0x00000000002FDAE4 "a\n@"
 *   insn=0x00000000002FDAE0 string=0x00000000002FDAF4 "h"@"
 *   insn=0x00000000002FDAF0 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002FDAF8 string=0x00000000002FDAFC "k"
 *   insn=0x00000000002FDAFC string=0x00000000002FDB28 "hZ@"
 *   insn=0x00000000002FDB00 string=0x00000000002FDB04 "h"
 *   insn=0x00000000002FDB08 string=0x0000000000000002 "LF"
 *   insn=0x00000000002FDB14 string=0x00000000002FDB18 "h""
 *   insn=0x00000000002FDB14 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002FDB20 string=0x00000000002FDB24 ""
 *   insn=0x00000000002FDB2C string=0x00000000002FDB30 "k"
 *   insn=0x00000000002FDB30 string=0x00000000002FDB5C "h"
 *   insn=0x00000000002FDB34 string=0x00000000002FDB38 "h*@"
 *   insn=0x00000000002FDB48 string=0x00000000002FDB4C "hZ"
 *   insn=0x00000000002FDB54 string=0x00000000002FDB58 ""
 *   insn=0x00000000002FDB60 string=0x00000000002FDB64 "k"
 *   insn=0x00000000002FDB64 string=0x00000000002FDB90 "h"
 *   insn=0x00000000002FDB68 string=0x00000000002FDB6C "hF@"
 *   insn=0x00000000002FDB78 string=0x00000000002FDB7C "u"
 *   insn=0x00000000002FDB7C string=0x00000000002FDB80 "h"
 *   insn=0x00000000002FDB88 string=0x00000000002FDB8C ""
 *   insn=0x00000000002FDB94 string=0x00000000002FDB98 "k"
 *   insn=0x00000000002FDB9C string=0x00000000002FDBA0 "hb@"
 *   insn=0x00000000002FDBAC string=0x00000000002FDBB0 "h"
 *   insn=0x00000000002FDBB0 string=0x00000000002FDBB4 "h"
 *   insn=0x00000000002FDBBC string=0x00000000002FDBC0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x19
  __int64 v6; // x21
  __int64 v7; // x21
  __int64 v8; // x21
  __int64 v9; // x21

  v4 = this;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
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
  if ( *(int *)(v4 + 88) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               3,
               *(_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * v7++),
               a2);
    while ( v7 < *(int *)(v4 + 88) );
  }
  if ( *(int *)(v4 + 144) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_4,
               *(_QWORD *)(*(_QWORD *)(v4 + 136) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 144) );
  }
  if ( *(int *)(v4 + 200) >= 1 )
  {
    v9 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_5,
               *(_QWORD *)(*(_QWORD *)(v4 + 192) + 8 * v9++),
               a2,
               a4);
    while ( v9 < *(int *)(v4 + 200) );
  }
  return this;
}

