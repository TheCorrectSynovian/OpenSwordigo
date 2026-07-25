/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E77AC
 * Mangled: _ZNK5Caver5Proto8GameData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GameData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 34
 *   insn=0x00000000002E77BC string=0x00000000002E77C0 "h"
 *   insn=0x00000000002E77C8 string=0x00000000002E77CC "k"
 *   insn=0x00000000002E77CC string=0x00000000002E77F8 "hR@"
 *   insn=0x00000000002E77D0 string=0x00000000002E77D4 "h\n@"
 *   insn=0x00000000002E77D8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002E77E0 string=0x00000000002E77E4 "[H"
 *   insn=0x00000000002E77E4 string=0x00000000002E77E8 "h"
 *   insn=0x00000000002E77E4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002E77F0 string=0x00000000002E77F4 ""
 *   insn=0x00000000002E77FC string=0x00000000002E7800 "k"
 *   insn=0x00000000002E7800 string=0x00000000002E782C "h"
 *   insn=0x00000000002E7804 string=0x00000000002E7808 "h&@"
 *   insn=0x00000000002E780C string=0x0000000000000002 "LF"
 *   insn=0x00000000002E7814 string=0x00000000002E7818 "NH"
 *   insn=0x00000000002E7818 string=0x00000000002E781C "hR"
 *   insn=0x00000000002E7824 string=0x00000000002E7828 ""
 *   insn=0x00000000002E7830 string=0x00000000002E7834 "k"
 *   insn=0x00000000002E7834 string=0x00000000002E7860 "h"
 *   insn=0x00000000002E7838 string=0x00000000002E783C "hB@"
 *   insn=0x00000000002E7840 string=0x0000000000000003 "F"
 *   insn=0x00000000002E7848 string=0x00000000002E784C "AH"
 *   insn=0x00000000002E784C string=0x00000000002E7850 "h"
 *   insn=0x00000000002E7858 string=0x00000000002E785C ""
 *   insn=0x00000000002E7864 string=0x00000000002E7868 "k"
 *   insn=0x00000000002E7868 string=0x00000000002E7894 "h"
 *   insn=0x00000000002E786C string=0x00000000002E7870 "h^@"
 *   insn=0x00000000002E787C string=0x00000000002E7880 "4H"
 *   insn=0x00000000002E7880 string=0x00000000002E7884 "h"
 *   insn=0x00000000002E788C string=0x00000000002E7890 ""
 *   insn=0x00000000002E7898 string=0x00000000002E789C "k"
 *   insn=0x00000000002E78A0 string=0x00000000002E78A4 "hz@"
 *   insn=0x00000000002E78B0 string=0x00000000002E78B4 "'H"
 *   insn=0x00000000002E78B4 string=0x00000000002E78B8 "h"
 *   insn=0x00000000002E78C0 string=0x00000000002E78C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::SerializeWithCachedSizes(
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
  __int64 v10; // x21

  v4 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 24) );
  }
  if ( *(int *)(v4 + 80) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_QWORD *)(*(_QWORD *)(v4 + 72) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 80) );
  }
  if ( *(int *)(v4 + 136) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_QWORD *)(*(_QWORD *)(v4 + 128) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 136) );
  }
  if ( *(int *)(v4 + 192) >= 1 )
  {
    v9 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_4,
               *(_QWORD *)(*(_QWORD *)(v4 + 184) + 8 * v9++),
               a2,
               a4);
    while ( v9 < *(int *)(v4 + 192) );
  }
  if ( *(int *)(v4 + 248) >= 1 )
  {
    v10 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_5,
               *(_QWORD *)(*(_QWORD *)(v4 + 240) + 8 * v10++),
               a2,
               a4);
    while ( v10 < *(int *)(v4 + 248) );
  }
  return this;
}

