/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308204
 * Mangled: _ZNK5Caver5Proto19GroundMeshComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 21
 *   insn=0x000000000030822C string=0x0000000000308230 "4"
 *   insn=0x0000000000308230 string=0x00000000001FD700 "0'"
 *   insn=0x0000000000308244 string=0x0000000000308248 "."
 *   insn=0x0000000000308250 string=0x0000000000308254 "k"
 *   insn=0x000000000030826C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000308278 string=0x000000000030827C ""
 *   insn=0x0000000000308280 string=0x0000000000308284 "h"
 *   insn=0x000000000030828C string=0x0000000000308290 ")"
 *   insn=0x000000000030829C string=0x00000000003082A0 ")"
 *   insn=0x00000000003082A0 string=0x00000000003082A4 "("
 *   insn=0x00000000003082B4 string=0x00000000003082B8 "k"
 *   insn=0x00000000003082DC string=0x00000000003082E0 ""
 *   insn=0x00000000003082E8 string=0x00000000003082EC "k"
 *   insn=0x00000000003082F4 string=0x00000000003082F8 " "
 *   insn=0x0000000000308310 string=0x0000000000308314 ""
 *   insn=0x0000000000308324 string=0x0000000000308328 ")"
 *   insn=0x0000000000308328 string=0x000000000030832C "@"
 *   insn=0x0000000000308334 string=0x0000000000308338 ")"
 *   insn=0x0000000000308338 string=0x000000000030833C "("
 *   insn=0x000000000030836C string=0x0000000000308370 "`"
 *   insn=0x0000000000308374 string=0x0000000000308378 "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x21
  int v11; // w8
  __int64 v12; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 220);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBytes(4, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 220);
  }
  if ( (v5 & 2) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteBytes(5, *(_QWORD *)(v4 + 24), a2);
  if ( *(int *)(v4 + 40) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_6,
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 40) );
  }
  if ( (*(_BYTE *)(v4 + 220) & 8) != 0 )
  {
    if ( *(_QWORD *)(v4 + 88) )
      v8 = v4;
    else
      v8 = Caver::Proto::GroundMeshComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(_QWORD *)(v8 + 88),
             a2,
             a4);
  }
  if ( *(int *)(v4 + 104) >= 1 )
  {
    v9 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_8,
               *(_QWORD *)(*(_QWORD *)(v4 + 96) + 8 * v9++),
               a2,
               a4);
    while ( v9 < *(int *)(v4 + 104) );
  }
  if ( *(int *)(v4 + 160) >= 1 )
  {
    v10 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)byte_9,
               *(_QWORD *)(*(_QWORD *)(v4 + 152) + 8 * v10++),
               a2,
               a4);
    while ( v10 < *(int *)(v4 + 160) );
  }
  v11 = *(_DWORD *)(v4 + 220);
  if ( (v11 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(v4 + 208) )
      v12 = v4;
    else
      v12 = Caver::Proto::GroundMeshComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_9[1],
             *(_QWORD *)(v12 + 208),
             a2,
             a4);
    v11 = *(_DWORD *)(v4 + 220);
  }
  if ( (v11 & 0x80) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             *(unsigned __int8 *)(v4 + 216),
             a2,
             a4);
  return this;
}

