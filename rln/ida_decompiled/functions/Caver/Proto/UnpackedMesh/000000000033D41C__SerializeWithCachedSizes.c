/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D41C
 * Mangled: _ZNK5Caver5Proto12UnpackedMesh24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x000000000033D438 string=0x000000000033D43C "k"
 *   insn=0x000000000033D448 string=0x0000000000000001 "ELF"
 *   insn=0x000000000033D460 string=0x000000000033D464 ""
 *   insn=0x000000000033D46C string=0x000000000033D470 "k"
 *   insn=0x000000000033D47C string=0x0000000000000002 "LF"
 *   insn=0x000000000033D494 string=0x000000000033D498 ""
 *   insn=0x000000000033D4A0 string=0x000000000033D4A4 "k"
 *   insn=0x000000000033D4B0 string=0x0000000000000003 "F"
 *   insn=0x000000000033D4C8 string=0x000000000033D4CC ""
 *   insn=0x000000000033D500 string=0x00000000001FD700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // x21

  v3 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v5 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
               a2,
               *(float *)(*(_QWORD *)(v3 + 16) + 4 * v5++),
               a3);
    while ( v5 < *(int *)(v3 + 24) );
  }
  if ( *(int *)(v3 + 56) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               a2,
               *(float *)(*(_QWORD *)(v3 + 48) + 4 * v6++),
               a3);
    while ( v6 < *(int *)(v3 + 56) );
  }
  if ( *(int *)(v3 + 88) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(*(_QWORD *)(v3 + 80) + 4 * v7++),
               a3);
    while ( v7 < *(int *)(v3 + 88) );
  }
  if ( (*(_BYTE *)(v3 + 120) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBytes(4, *(_QWORD *)(v3 + 112), a2);
  return this;
}

