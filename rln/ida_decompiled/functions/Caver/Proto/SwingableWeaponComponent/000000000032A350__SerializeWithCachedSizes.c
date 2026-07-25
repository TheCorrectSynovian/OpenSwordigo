/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A350
 * Mangled: _ZNK5Caver5Proto24SwingableWeaponComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000329BD0  Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 22
 *   insn=0x000000000032A364 string=0x000000000032A368 ""
 *   insn=0x000000000032A36C string=0x000000000032A370 "H"
 *   insn=0x000000000032A378 string=0x000000000032A37C "("
 *   insn=0x000000000032A380 string=0x000000000032A384 "h"
 *   insn=0x000000000032A384 string=0x000000000032A388 ""
 *   insn=0x000000000032A38C string=0x000000000032A390 "H 7"
 *   insn=0x000000000032A3AC string=0x0000000000000001 "ELF"
 *   insn=0x000000000032A3B4 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032A3C4 string=0x0000000000000002 "LF"
 *   insn=0x000000000032A3D0 string=0x000000000032A3D4 ""
 *   insn=0x000000000032A3E8 string=0x000000000032A3EC "h"
 *   insn=0x000000000032A418 string=0x000000000032A41C "("
 *   insn=0x000000000032A450 string=0x000000000032A454 " "
 *   insn=0x000000000032A460 string=0x000000000032A464 "H"
 *   insn=0x000000000032A468 string=0x000000000032A46C "@"
 *   insn=0x000000000032A480 string=0x000000000032A484 "`"
 *   insn=0x000000000032A490 string=0x000000000032A494 ""
 *   insn=0x000000000032A4A8 string=0x000000000032A4AC "h"
 *   insn=0x000000000032A4CC string=0x000000000032A4D0 ")"
 *   insn=0x000000000032A4DC string=0x000000000032A4E0 ")"
 *   insn=0x000000000032A4E4 string=0x000000000032A4E8 "("
 *   insn=0x000000000032A4F4 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 68);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 68);
    if ( (v5 & 0x80) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x400) == 0 )
        goto LABEL_4;
      goto LABEL_17;
    }
  }
  else if ( (v5 & 0x80) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 44),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x400) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x800) == 0 )
      goto LABEL_5;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 56),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x800) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x1000) == 0 )
      goto LABEL_6;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 60),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x1000) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x100) == 0 )
      goto LABEL_7;
    goto LABEL_20;
  }
LABEL_19:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_DWORD *)(v4 + 64),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x100) == 0 )
  {
LABEL_7:
    if ( (v5 & 2) == 0 )
      goto LABEL_8;
    goto LABEL_21;
  }
LABEL_20:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_DWORD *)(v4 + 48),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 2) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x200) == 0 )
      goto LABEL_9;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x200) == 0 )
  {
LABEL_9:
    if ( (v5 & 4) == 0 )
      goto LABEL_10;
    goto LABEL_23;
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(_DWORD *)(v4 + 52),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 4) == 0 )
  {
LABEL_10:
    if ( (v5 & 8) == 0 )
      goto LABEL_11;
    goto LABEL_24;
  }
LABEL_23:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           a2,
           *(float *)(v4 + 20),
           a3);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 8) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_12;
    goto LABEL_25;
  }
LABEL_24:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[2],
           a2,
           *(float *)(v4 + 24),
           a3);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_12:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_13;
LABEL_26:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[4],
             a2,
             *(float *)(v4 + 40),
             a3);
    if ( (*(_DWORD *)(v4 + 68) & 0x20) == 0 )
      return this;
    goto LABEL_27;
  }
LABEL_25:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[3],
           a2,
           *(float *)(v4 + 28),
           a3);
  v5 = *(_DWORD *)(v4 + 68);
  if ( (v5 & 0x40) != 0 )
    goto LABEL_26;
LABEL_13:
  if ( (v5 & 0x20) == 0 )
    return this;
LABEL_27:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::SwingableWeaponComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[5],
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
}

