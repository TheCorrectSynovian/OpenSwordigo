/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309064
 * Mangled: _ZNK5Caver5Proto28GroundMeshGeneratorComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 23
 *   insn=0x000000000030907C string=0x0000000000309080 "h"
 *   insn=0x0000000000309080 string=0x0000000000309084 ""
 *   insn=0x0000000000309088 string=0x000000000030908C "H"
 *   insn=0x0000000000309094 string=0x0000000000309098 "("
 *   insn=0x000000000030909C string=0x00000000003090A0 "hH7P7"
 *   insn=0x00000000003090A0 string=0x00000000003090A4 "P7"
 *   insn=0x00000000003090B8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003090C0 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003090D0 string=0x0000000000000002 "LF"
 *   insn=0x00000000003090D4 string=0x00000000003090D8 "~"
 *   insn=0x00000000003090DC string=0x00000000003090E0 "H"
 *   insn=0x00000000003090E8 string=0x0000000000000003 "F"
 *   insn=0x00000000003090EC string=0x00000000003090F0 "x"
 *   insn=0x0000000000309104 string=0x0000000000309108 "r"
 *   insn=0x000000000030910C string=0x0000000000309110 ""
 *   insn=0x000000000030911C string=0x0000000000309120 "l"
 *   insn=0x0000000000309124 string=0x0000000000309128 "h"
 *   insn=0x0000000000309150 string=0x00000000001F7400 "0'"
 *   insn=0x0000000000309154 string=0x0000000000309158 "("
 *   insn=0x0000000000309174 string=0x0000000000309178 " "
 *   insn=0x000000000030918C string=0x0000000000309190 "@"
 *   insn=0x000000000030919C string=0x00000000003091A0 "H"
 *   insn=0x00000000003091A8 string=0x00000000003091AC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 56);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 28),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_9;
    goto LABEL_20;
  }
LABEL_19:
  this = google::protobuf::internal::WireFormatLite::WriteEnum(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_DWORD *)(v4 + 36),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x100) == 0 )
      goto LABEL_10;
    goto LABEL_21;
  }
LABEL_20:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           a2,
           *(float *)(v4 + 40),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x100) == 0 )
  {
LABEL_10:
    if ( (v5 & 0x200) == 0 )
      goto LABEL_11;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           a2,
           *(float *)(v4 + 44),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x200) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x400) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             a2,
             *(float *)(v4 + 52),
             a3);
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           a2,
           *(float *)(v4 + 48),
           a3);
  if ( (*(_DWORD *)(v4 + 56) & 0x400) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             a2,
             *(float *)(v4 + 52),
             a3);
  return this;
}

