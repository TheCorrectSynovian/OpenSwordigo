/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C310
 * Mangled: _ZNK5Caver5Proto19WeaponGlowComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032BF78  Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 16
 *   insn=0x000000000032C330 string=0x000000000032C334 "H"
 *   insn=0x000000000032C348 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032C350 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032C360 string=0x000000000032C364 ")MC"
 *   insn=0x000000000032C368 string=0x0000000000000002 "LF"
 *   insn=0x000000000032C370 string=0x000000000032C374 ")"
 *   insn=0x000000000032C374 string=0x000000000032C378 "("
 *   insn=0x000000000032C37C string=0x000000000032C380 "t5"
 *   insn=0x000000000032C380 string=0x00000000001F9950 "0'"
 *   insn=0x000000000032C384 string=0x000000000032C388 "h"
 *   insn=0x000000000032C390 string=0x000000000032C394 ")MC"
 *   insn=0x000000000032C398 string=0x0000000000000003 "F"
 *   insn=0x000000000032C3A0 string=0x000000000032C3A4 ")"
 *   insn=0x000000000032C3A4 string=0x000000000032C3A8 "("
 *   insn=0x000000000032C3AC string=0x000000000032C3B0 "h5"
 *   insn=0x000000000032C3B4 string=0x000000000032C3B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 36);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 36);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 16) )
    v7 = v4;
  else
    v7 = Caver::Proto::WeaponGlowComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v4 + 32),
             a3);
  }
LABEL_11:
  if ( *(_QWORD *)(v4 + 24) )
    v8 = v4;
  else
    v8 = Caver::Proto::WeaponGlowComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v8 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 36) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v4 + 32),
             a3);
  return this;
}

