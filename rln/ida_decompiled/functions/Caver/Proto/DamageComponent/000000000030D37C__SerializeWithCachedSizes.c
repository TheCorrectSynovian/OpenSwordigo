/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D37C
 * Mangled: _ZNK5Caver5Proto15DamageComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x000000000030D394 string=0x000000000030D398 "("
 *   insn=0x000000000030D39C string=0x000000000030D3A0 "h"
 *   insn=0x000000000030D3A0 string=0x000000000030D3A4 ""
 *   insn=0x000000000030D3A8 string=0x000000000030D3AC "H"
 *   insn=0x000000000030D3C8 string=0x0000000000000001 "ELF"
 *   insn=0x000000000030D3D0 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000030D3D4 string=0x000000000030D3D8 "("
 *   insn=0x000000000030D3E0 string=0x0000000000000002 "LF"
 *   insn=0x000000000030D3E8 string=0x00000000001F7400 "0'"
 *   insn=0x000000000030D3F8 string=0x0000000000000003 "F"
 *   insn=0x000000000030D414 string=0x000000000030D418 "&"
 *   insn=0x000000000030D41C string=0x000000000030D420 "H"
 *   insn=0x000000000030D44C string=0x000000000030D450 ""
 *   insn=0x000000000030D464 string=0x000000000030D468 "h"
 *   insn=0x000000000030D488 string=0x000000000030D48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 44);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 44);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteEnum(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 8) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteEnum(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(unsigned __int8 *)(v4 + 28),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 2) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 36),
           a3);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x100) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(unsigned __int8 *)(v4 + 41),
             a2,
             a4);
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(unsigned __int8 *)(v4 + 40),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 44) & 0x100) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(unsigned __int8 *)(v4 + 41),
             a2,
             a4);
  return this;
}

