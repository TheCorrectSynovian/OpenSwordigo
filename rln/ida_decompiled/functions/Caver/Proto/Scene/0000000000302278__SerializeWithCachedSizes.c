/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302278
 * Mangled: _ZNK5Caver5Proto5Scene24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Scene::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 22
 *   insn=0x0000000000302294 string=0x0000000000302298 "k"
 *   insn=0x00000000003022A4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003022B0 string=0x00000000001F9950 "0'"
 *   insn=0x00000000003022BC string=0x00000000003022C0 ""
 *   insn=0x00000000003022C8 string=0x00000000003022CC ")"
 *   insn=0x00000000003022C8 string=0x00000000003022F8 "h"
 *   insn=0x00000000003022D0 string=0x00000000003022D4 ")"
 *   insn=0x00000000003022D8 string=0x0000000000000002 "LF"
 *   insn=0x00000000003022E0 string=0x00000000003022E4 ")"
 *   insn=0x00000000003022E4 string=0x00000000003022E8 "("
 *   insn=0x00000000003022F8 string=0x00000000003022FC ")"
 *   insn=0x0000000000302300 string=0x0000000000302304 ")"
 *   insn=0x0000000000302308 string=0x0000000000000003 "F"
 *   insn=0x0000000000302310 string=0x0000000000302314 ")"
 *   insn=0x0000000000302314 string=0x0000000000302318 "("
 *   insn=0x0000000000302328 string=0x000000000030232C "k"
 *   insn=0x0000000000302350 string=0x0000000000302354 ""
 *   insn=0x000000000030235C string=0x0000000000302370 ")"
 *   insn=0x0000000000302374 string=0x0000000000302378 ")"
 *   insn=0x0000000000302384 string=0x0000000000302388 ")"
 *   insn=0x000000000030238C string=0x0000000000302390 "("
 *   insn=0x000000000030239C string=0x00000000003023A0 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x21
  __int64 v11; // x8

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
  v7 = *(_DWORD *)(v4 + 152);
  if ( (v7 & 4) != 0 )
  {
    if ( *(_QWORD *)(v4 + 128) )
      v8 = v4;
    else
      v8 = Caver::Proto::Scene::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v8 + 128),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 152);
  }
  if ( (v7 & 8) != 0 )
  {
    if ( *(_QWORD *)(v4 + 136) )
      v9 = v4;
    else
      v9 = Caver::Proto::Scene::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(_QWORD *)(v9 + 136),
             a2,
             a4);
  }
  if ( *(int *)(v4 + 80) >= 1 )
  {
    v10 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_4,
               *(_QWORD *)(*(_QWORD *)(v4 + 72) + 8 * v10++),
               a2,
               a4);
    while ( v10 < *(int *)(v4 + 80) );
  }
  if ( (*(_BYTE *)(v4 + 152) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(v4 + 144) )
      v11 = v4;
    else
      v11 = Caver::Proto::Scene::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_QWORD *)(v11 + 144),
             a2,
             a4);
  }
  return this;
}

