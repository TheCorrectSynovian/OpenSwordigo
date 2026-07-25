/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031ECA4
 * Mangled: _ZNK5Caver5Proto24ParticleEmitterComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 30
 *   insn=0x000000000031ECC0 string=0x000000000031ECC4 "k"
 *   insn=0x000000000031ECD0 string=0x0000000000000002 "LF"
 *   insn=0x000000000031ECD8 string=0x000000000031ECDC "}Z"
 *   insn=0x000000000031ECDC string=0x00000000001F56D0 "P'"
 *   insn=0x000000000031ECE8 string=0x000000000031ECEC ""
 *   insn=0x000000000031ECF4 string=0x000000000031ECF8 "H"
 *   insn=0x000000000031ED18 string=0x000000000031ED1C "k"
 *   insn=0x000000000031ED30 string=0x000000000031ED34 "k"
 *   insn=0x000000000031ED34 string=0x00000000001F9950 "0'"
 *   insn=0x000000000031ED40 string=0x000000000031ED44 ""
 *   insn=0x000000000031ED48 string=0x000000000031ED4C "H"
 *   insn=0x000000000031ED50 string=0x000000000031ED54 "H"
 *   insn=0x000000000031ED50 string=0x000000000031EDCC ")"
 *   insn=0x000000000031ED54 string=0x000000000031EDFC ")"
 *   insn=0x000000000031ED6C string=0x0000000000000003 "F"
 *   insn=0x000000000031ED70 string=0x000000000031ED74 "WZ"
 *   insn=0x000000000031ED78 string=0x000000000031ED7C ""
 *   insn=0x000000000031ED88 string=0x000000000031ED8C "QZ"
 *   insn=0x000000000031ED90 string=0x000000000031ED94 "h"
 *   insn=0x000000000031EDA0 string=0x000000000031EDA4 "KZ"
 *   insn=0x000000000031EDC4 string=0x000000000031EDC8 "h"
 *   insn=0x000000000031EDD0 string=0x000000000031EDD4 ")"
 *   insn=0x000000000031EDD4 string=0x000000000031EDD8 " "
 *   insn=0x000000000031EDE0 string=0x000000000031EDE4 ")"
 *   insn=0x000000000031EDE4 string=0x000000000031EDE8 "("
 *   insn=0x000000000031EDF4 string=0x000000000031EDF8 ""
 *   insn=0x000000000031EE00 string=0x000000000031EE04 ")"
 *   insn=0x000000000031EE10 string=0x000000000031EE14 ")"
 *   insn=0x000000000031EE14 string=0x000000000031EE18 "@"
 *   insn=0x000000000031EE18 string=0x000000000031EE1C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x21
  int v9; // w8
  __int64 v10; // x8
  __int64 v11; // x8

  v4 = this;
  if ( *(int *)(this + 40) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteInt32(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 40) );
  }
  v7 = *(_DWORD *)(v4 + 136);
  if ( (v7 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(_DWORD *)(v4 + 16),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 136);
    if ( (v7 & 8) == 0 )
    {
LABEL_6:
      if ( (v7 & 1) == 0 )
        goto LABEL_7;
      goto LABEL_18;
    }
  }
  else if ( (v7 & 8) == 0 )
  {
    goto LABEL_6;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 136);
  if ( (v7 & 1) == 0 )
  {
LABEL_7:
    if ( (v7 & 0x10) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 12),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 136) & 0x10) != 0 )
LABEL_8:
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 28),
             a2,
             a4);
LABEL_9:
  if ( *(int *)(v4 + 72) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_7,
               *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 72) );
  }
  v9 = *(_DWORD *)(v4 + 136);
  if ( (v9 & 4) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             *(unsigned __int8 *)(v4 + 20),
             a2,
             a4);
    v9 = *(_DWORD *)(v4 + 136);
    if ( (v9 & 0x80) == 0 )
    {
LABEL_14:
      if ( (v9 & 0x100) == 0 )
        return this;
      goto LABEL_25;
    }
  }
  else if ( (v9 & 0x80) == 0 )
  {
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v4 + 120) )
    v10 = v4;
  else
    v10 = Caver::Proto::ParticleEmitterComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(_QWORD *)(v10 + 120),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 136) & 0x100) != 0 )
  {
LABEL_25:
    if ( *(_QWORD *)(v4 + 128) )
      v11 = v4;
    else
      v11 = Caver::Proto::ParticleEmitterComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_9[1],
             *(_QWORD *)(v11 + 128),
             a2,
             a4);
  }
  return this;
}

