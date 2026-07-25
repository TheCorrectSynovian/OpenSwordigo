/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C234
 * Mangled: _ZNK5Caver5Proto10PackedMesh24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9290  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 15
 *   insn=0x000000000033C250 string=0x000000000033C254 "k"
 *   insn=0x000000000033C254 string=0x000000000033C258 "A"
 *   insn=0x000000000033C260 string=0x00000000001FDE40 "0'"
 *   insn=0x000000000033C274 string=0x000000000033C278 "K"
 *   insn=0x000000000033C28C string=0x00000000001F9290 "0'"
 *   insn=0x000000000033C298 string=0x000000000033C29C "+"
 *   insn=0x000000000033C2A4 string=0x000000000033C2A8 "m"
 *   insn=0x000000000033C2A8 string=0x000000000033C2AC "A"
 *   insn=0x000000000033C2C8 string=0x000000000033C2CC "K"
 *   insn=0x000000000033C2EC string=0x000000000033C2F0 "+"
 *   insn=0x000000000033C2F8 string=0x000000000033C2FC "m"
 *   insn=0x000000000033C2FC string=0x000000000033C300 "A"
 *   insn=0x000000000033C31C string=0x000000000033C320 "K"
 *   insn=0x000000000033C340 string=0x000000000033C344 "+"
 *   insn=0x000000000033C378 string=0x00000000001FD700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x20
  __int64 v4; // x21
  __int64 v5; // x21
  __int64 v6; // x21

  v2 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32(a2, 0xAu);
    this = google::protobuf::io::CodedOutputStream::WriteVarint32(a2, *(_DWORD *)(v2 + 48));
    if ( *(int *)(v2 + 24) >= 1 )
    {
      v4 = 0;
      do
        this = google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                 a2,
                 *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4 * v4++));
      while ( v4 < *(int *)(v2 + 24) );
    }
  }
  if ( *(int *)(v2 + 64) > 0 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32(a2, 0x12u);
    this = google::protobuf::io::CodedOutputStream::WriteVarint32(a2, *(_DWORD *)(v2 + 88));
    if ( *(int *)(v2 + 64) >= 1 )
    {
      v5 = 0;
      do
        this = google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                 a2,
                 *(_DWORD *)(*(_QWORD *)(v2 + 56) + 4 * v5++));
      while ( v5 < *(int *)(v2 + 64) );
    }
  }
  if ( *(int *)(v2 + 104) > 0 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32(a2, 0x1Au);
    this = google::protobuf::io::CodedOutputStream::WriteVarint32(a2, *(_DWORD *)(v2 + 128));
    if ( *(int *)(v2 + 104) >= 1 )
    {
      v6 = 0;
      do
        this = google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                 a2,
                 *(_DWORD *)(*(_QWORD *)(v2 + 96) + 4 * v6++));
      while ( v6 < *(int *)(v2 + 104) );
    }
  }
  if ( (*(_BYTE *)(v2 + 144) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBytes(4, *(_QWORD *)(v2 + 136), a2);
  return this;
}

