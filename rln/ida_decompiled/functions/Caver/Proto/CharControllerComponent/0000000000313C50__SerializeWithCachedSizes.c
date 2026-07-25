/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000313C50
 * Mangled: _ZNK5Caver5Proto23CharControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::CharControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 42
 *   insn=0x0000000000313C68 string=0x0000000000313C6C "("
 *   insn=0x0000000000313C70 string=0x0000000000313C74 "h"
 *   insn=0x0000000000313C74 string=0x0000000000313C78 ""
 *   insn=0x0000000000313C7C string=0x0000000000313C80 "Hh7"
 *   insn=0x0000000000313C94 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000313C9C string=0x0000000000313CA0 "k"
 *   insn=0x0000000000313CC4 string=0x0000000000313CC8 ""
 *   insn=0x0000000000313CD0 string=0x0000000000313CD4 "H"
 *   insn=0x0000000000313CDC string=0x0000000000313CE0 "(\t87"
 *   insn=0x0000000000313CE4 string=0x0000000000313CE8 "h\n07"
 *   insn=0x0000000000313CE8 string=0x0000000000313CEC ""
 *   insn=0x0000000000313CF0 string=0x0000000000313CF4 "H"
 *   insn=0x0000000000313D14 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000313D18 string=0x0000000000313D1C "m"
 *   insn=0x0000000000313D2C string=0x0000000000000002 "LF"
 *   insn=0x0000000000313D30 string=0x0000000000313D34 "g"
 *   insn=0x0000000000313D44 string=0x0000000000000003 "F"
 *   insn=0x0000000000313D50 string=0x0000000000313D54 "H"
 *   insn=0x0000000000313D80 string=0x0000000000313D84 ""
 *   insn=0x0000000000313D90 string=0x0000000000313D94 "O"
 *   insn=0x0000000000313D98 string=0x0000000000313D9C "h"
 *   insn=0x0000000000313DA4 string=0x0000000000313DA8 " "
 *   insn=0x0000000000313DAC string=0x0000000000313DB0 "H"
 *   insn=0x0000000000313DB4 string=0x0000000000313DB8 ""
 *   insn=0x0000000000313DBC string=0x0000000000313DC0 "@"
 *   insn=0x0000000000313DC4 string=0x0000000000313DC8 "B"
 *   insn=0x0000000000313DCC string=0x0000000000313DD0 "h"
 *   insn=0x0000000000313DD4 string=0x0000000000313DD8 "`"
 *   insn=0x0000000000313DDC string=0x0000000000313DE0 "<"
 *   insn=0x0000000000313DF4 string=0x0000000000313DF8 "6"
 *   insn=0x0000000000313DFC string=0x0000000000313E00 "("
 *   insn=0x0000000000313E0C string=0x0000000000313E10 "0"
 *   insn=0x0000000000313E24 string=0x0000000000313E28 "*"
 *   insn=0x0000000000313E3C string=0x0000000000313E40 "$"
 *   insn=0x0000000000313E44 string=0x0000000000313E48 "H"
 *   insn=0x0000000000313E54 string=0x0000000000313E58 "z"
 *   insn=0x0000000000313E64 string=0x0000000000313E68 " "
 *   insn=0x0000000000313E6C string=0x0000000000313E70 "t"
 *   insn=0x0000000000313E74 string=0x0000000000313E78 ""
 *   insn=0x0000000000313E7C string=0x0000000000313E80 "@"
 *   insn=0x0000000000313E8C string=0x0000000000313E90 "h"
 *   insn=0x0000000000313E94 string=0x0000000000313E98 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  int v8; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 124);
  if ( (v5 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 124);
    if ( (v5 & 0x1000) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x8000) == 0 )
        goto LABEL_4;
      goto LABEL_27;
    }
  }
  else if ( (v5 & 0x1000) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 60),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 124);
  if ( (v5 & 0x8000) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10000) == 0 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_27:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v4 + 104),
           a3);
  v5 = *(_DWORD *)(v4 + 124);
  if ( (v5 & 0x10000) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20000) == 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
LABEL_28:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 108),
           a3);
  v5 = *(_DWORD *)(v4 + 124);
  if ( (v5 & 0x20000) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x2000) == 0 )
      goto LABEL_7;
    goto LABEL_30;
  }
LABEL_29:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 112),
           a3);
  v5 = *(_DWORD *)(v4 + 124);
  if ( (v5 & 0x2000) == 0 )
  {
LABEL_7:
    if ( (v5 & 1) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_30:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_DWORD *)(v4 + 64),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 124) & 1) != 0 )
LABEL_8:
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(_DWORD *)(v4 + 12),
             a2,
             a4);
LABEL_9:
  if ( *(int *)(v4 + 80) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteInt32(
               (google::protobuf::internal::WireFormatLite *)&byte_8,
               *(_DWORD *)(*(_QWORD *)(v4 + 72) + 4 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 80) );
  }
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 4) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(_DWORD *)(v4 + 20),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 124);
    if ( (v8 & 8) == 0 )
    {
LABEL_14:
      if ( (v8 & 0x10) == 0 )
        goto LABEL_15;
      goto LABEL_34;
    }
  }
  else if ( (v8 & 8) == 0 )
  {
    goto LABEL_14;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x10) == 0 )
  {
LABEL_15:
    if ( (v8 & 0x20) == 0 )
      goto LABEL_16;
    goto LABEL_35;
  }
LABEL_34:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[2],
           *(_DWORD *)(v4 + 28),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x20) == 0 )
  {
LABEL_16:
    if ( (v8 & 0x80) == 0 )
      goto LABEL_17;
    goto LABEL_36;
  }
LABEL_35:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[3],
           *(_DWORD *)(v4 + 32),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x80) == 0 )
  {
LABEL_17:
    if ( (v8 & 0x100) == 0 )
      goto LABEL_18;
    goto LABEL_37;
  }
LABEL_36:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[4],
           *(_DWORD *)(v4 + 40),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x100) == 0 )
  {
LABEL_18:
    if ( (v8 & 0x40) == 0 )
      goto LABEL_19;
    goto LABEL_38;
  }
LABEL_37:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[5],
           *(_DWORD *)(v4 + 44),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x40) == 0 )
  {
LABEL_19:
    if ( (v8 & 0x40000) == 0 )
      goto LABEL_20;
    goto LABEL_39;
  }
LABEL_38:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_9[6],
           *(_DWORD *)(v4 + 36),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x40000) == 0 )
  {
LABEL_20:
    if ( (v8 & 0x80000) == 0 )
      goto LABEL_21;
    goto LABEL_40;
  }
LABEL_39:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&word_10,
           a2,
           *(float *)(v4 + 116),
           a3);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x80000) == 0 )
  {
LABEL_21:
    if ( (v8 & 0x200) == 0 )
      goto LABEL_22;
    goto LABEL_41;
  }
LABEL_40:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&word_10 + 1),
           a2,
           *(float *)(v4 + 120),
           a3);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x200) == 0 )
  {
LABEL_22:
    if ( (v8 & 0x400) == 0 )
      goto LABEL_23;
    goto LABEL_42;
  }
LABEL_41:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&word_12,
           *(_DWORD *)(v4 + 48),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 124);
  if ( (v8 & 0x400) == 0 )
  {
LABEL_23:
    if ( (v8 & 0x800) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&dword_14,
             *(_DWORD *)(v4 + 56),
             a2,
             a4);
  }
LABEL_42:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&word_12 + 1),
           *(_DWORD *)(v4 + 52),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 124) & 0x800) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&dword_14,
             *(_DWORD *)(v4 + 56),
             a2,
             a4);
  return this;
}

