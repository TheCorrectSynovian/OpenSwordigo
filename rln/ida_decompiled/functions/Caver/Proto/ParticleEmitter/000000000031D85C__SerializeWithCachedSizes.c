/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D85C
 * Mangled: _ZNK5Caver5Proto15ParticleEmitter24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 21
 *   insn=0x000000000031D878 string=0x000000000031D890 "h"
 *   insn=0x000000000031D880 string=0x0000000000000001 "ELF"
 *   insn=0x000000000031D888 string=0x00000000001F7400 "0'"
 *   insn=0x000000000031D890 string=0x000000000031D894 ")"
 *   insn=0x000000000031D898 string=0x000000000031D89C ")yF"
 *   insn=0x000000000031D8A0 string=0x0000000000000002 "LF"
 *   insn=0x000000000031D8A8 string=0x000000000031D8AC ")"
 *   insn=0x000000000031D8AC string=0x000000000031D8B0 "("
 *   insn=0x000000000031D8B4 string=0x000000000031D8B8 "&p"
 *   insn=0x000000000031D8B8 string=0x00000000001F9950 "0'"
 *   insn=0x000000000031D8C0 string=0x000000000031D8C4 "k"
 *   insn=0x000000000031D8D0 string=0x0000000000000003 "F"
 *   insn=0x000000000031D8E8 string=0x000000000031D8EC ""
 *   insn=0x000000000031D8F0 string=0x000000000031D8F4 ""
 *   insn=0x000000000031D8F8 string=0x000000000031D8FC "H"
 *   insn=0x000000000031D900 string=0x000000000031D95C ")"
 *   insn=0x000000000031D93C string=0x000000000031D940 ""
 *   insn=0x000000000031D954 string=0x000000000031D958 "h"
 *   insn=0x000000000031D960 string=0x000000000031D964 ")yF"
 *   insn=0x000000000031D970 string=0x000000000031D974 ")"
 *   insn=0x000000000031D978 string=0x000000000031D97C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x21
  int v9; // w8
  __int64 v10; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 80);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 80);
  }
  if ( (v5 & 4) != 0 )
  {
    if ( *(_QWORD *)(v4 + 24) )
      v7 = v4;
    else
      v7 = Caver::Proto::ParticleEmitter::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v7 + 24),
             a2,
             a4);
  }
  if ( *(int *)(v4 + 56) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(*(_QWORD *)(v4 + 48) + 4 * v8++),
               a3);
    while ( v8 < *(int *)(v4 + 56) );
  }
  v9 = *(_DWORD *)(v4 + 80);
  if ( (v9 & 8) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v4 + 32),
             a3);
    v9 = *(_DWORD *)(v4 + 80);
    if ( (v9 & 0x10) == 0 )
    {
LABEL_13:
      if ( (v9 & 0x20) == 0 )
        goto LABEL_14;
LABEL_18:
      this = google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)&byte_6,
               a2,
               *(float *)(v4 + 40),
               a3);
      if ( (*(_DWORD *)(v4 + 80) & 2) == 0 )
        return this;
      goto LABEL_19;
    }
  }
  else if ( (v9 & 0x10) == 0 )
  {
    goto LABEL_13;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 36),
           a3);
  v9 = *(_DWORD *)(v4 + 80);
  if ( (v9 & 0x20) != 0 )
    goto LABEL_18;
LABEL_14:
  if ( (v9 & 2) == 0 )
    return this;
LABEL_19:
  if ( *(_QWORD *)(v4 + 16) )
    v10 = v4;
  else
    v10 = Caver::Proto::ParticleEmitter::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_QWORD *)(v10 + 16),
           a2,
           a4);
}

