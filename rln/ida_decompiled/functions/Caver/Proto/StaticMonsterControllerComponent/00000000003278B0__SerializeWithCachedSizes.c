/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003278B0
 * Mangled: _ZNK5Caver5Proto32StaticMonsterControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 12
 *   insn=0x00000000003278C0 string=0x00000000003278C4 "h"
 *   insn=0x00000000003278CC string=0x00000000003278D0 "a"
 *   insn=0x00000000003278CC string=0x00000000003278E0 "h"
 *   insn=0x00000000003278D4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003278D8 string=0x00000000003278DC "}7"
 *   insn=0x00000000003278DC string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003278E4 string=0x00000000003278E8 "k"
 *   insn=0x00000000003278EC string=0x00000000003278F0 "h\n@"
 *   insn=0x00000000003278F4 string=0x0000000000000002 "LF"
 *   insn=0x00000000003278FC string=0x0000000000327900 "t7"
 *   insn=0x0000000000327900 string=0x0000000000327904 "h"
 *   insn=0x000000000032790C string=0x0000000000327910 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x19
  __int64 v6; // x21

  v4 = this;
  if ( (*(_BYTE *)(this + 48) & 1) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
  if ( *(int *)(v4 + 24) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteInt32(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 24) );
  }
  return this;
}

