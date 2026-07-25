/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003261B4
 * Mangled: _ZNK5Caver5Proto15AttackComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000325B44  Caver::Proto::AttackComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 36
 *   insn=0x00000000003261C8 string=0x00000000003261CC ""
 *   insn=0x00000000003261D0 string=0x00000000003261D4 "H"
 *   insn=0x00000000003261DC string=0x00000000003261E0 "("
 *   insn=0x00000000003261E4 string=0x00000000003261E8 "h"
 *   insn=0x00000000003261E8 string=0x00000000003261EC "X7"
 *   insn=0x00000000003261F0 string=0x00000000003261F4 "H 7"
 *   insn=0x00000000003261F4 string=0x00000000003262FC "\t"
 *   insn=0x00000000003261F8 string=0x00000000003261FC "H\nP7"
 *   insn=0x0000000000326210 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000326214 string=0x0000000000326218 ".="
 *   insn=0x0000000000326218 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000326228 string=0x0000000000000002 "LF"
 *   insn=0x000000000032622C string=0x0000000000326230 "(="
 *   insn=0x0000000000326234 string=0x0000000000326238 ""
 *   insn=0x0000000000326240 string=0x0000000000000003 "F"
 *   insn=0x0000000000326244 string=0x0000000000326248 ""="
 *   insn=0x000000000032624C string=0x0000000000326250 "h"
 *   insn=0x0000000000326274 string=0x0000000000326278 "ra"
 *   insn=0x000000000032627C string=0x0000000000326280 "("
 *   insn=0x000000000032628C string=0x0000000000326290 "la"
 *   insn=0x00000000003262A4 string=0x00000000003262A8 "fa"
 *   insn=0x00000000003262BC string=0x00000000003262C0 "`a"
 *   insn=0x00000000003262C4 string=0x00000000003262C8 "H"
 *   insn=0x00000000003262CC string=0x00000000003262D0 " "
 *   insn=0x00000000003262D4 string=0x00000000003262D8 "Za"
 *   insn=0x00000000003262E4 string=0x00000000003262E8 "@"
 *   insn=0x00000000003262EC string=0x00000000003262F0 "Ta"
 *   insn=0x00000000003262F4 string=0x00000000003262F8 ""
 *   insn=0x0000000000326300 string=0x0000000000326304 ")iE"
 *   insn=0x0000000000326304 string=0x0000000000326308 "`"
 *   insn=0x0000000000326310 string=0x0000000000326314 ")"
 *   insn=0x0000000000326314 string=0x0000000000326318 "("
 *   insn=0x0000000000326320 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000326334 string=0x0000000000326338 "Ba"
 *   insn=0x000000000032633C string=0x0000000000326340 ""
 *   insn=0x0000000000326354 string=0x0000000000326358 ":a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 72);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 72);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_17;
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
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_19;
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_7;
    goto LABEL_20;
  }
LABEL_19:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 40),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_8;
    goto LABEL_21;
  }
LABEL_20:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 44),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x100) == 0 )
      goto LABEL_9;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 48),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x100) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x800) == 0 )
      goto LABEL_10;
    goto LABEL_23;
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           a2,
           *(float *)(v4 + 52),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x800) == 0 )
  {
LABEL_10:
    if ( (v5 & 0x1000) == 0 )
      goto LABEL_11;
    goto LABEL_24;
  }
LABEL_23:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           a2,
           *(float *)(v4 + 64),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x1000) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_12;
    goto LABEL_25;
  }
LABEL_24:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           a2,
           *(float *)(v4 + 68),
           a3);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_12:
    if ( (v5 & 0x200) == 0 )
      goto LABEL_13;
    goto LABEL_29;
  }
LABEL_25:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::AttackComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[2],
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 72);
  if ( (v5 & 0x200) == 0 )
  {
LABEL_13:
    if ( (v5 & 0x400) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[4],
             a2,
             *(float *)(v4 + 60),
             a3);
  }
LABEL_29:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_9[3],
           a2,
           *(float *)(v4 + 56),
           a3);
  if ( (*(_DWORD *)(v4 + 72) & 0x400) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[4],
             a2,
             *(float *)(v4 + 60),
             a3);
  return this;
}

