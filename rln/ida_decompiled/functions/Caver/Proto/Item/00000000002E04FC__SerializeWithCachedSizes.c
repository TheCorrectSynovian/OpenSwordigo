/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E04FC
 * Mangled: _ZNK5Caver5Proto4Item24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 20
 *   insn=0x00000000002E0514 string=0x00000000002E0518 "("
 *   insn=0x00000000002E051C string=0x00000000002E0520 "h"
 *   insn=0x00000000002E0520 string=0x00000000002E0524 ""
 *   insn=0x00000000002E0528 string=0x00000000002E052C "H"
 *   insn=0x00000000002E0548 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002E0550 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002E0554 string=0x00000000002E0558 "("
 *   insn=0x00000000002E0564 string=0x00000000002E0568 "z\"
 *   insn=0x00000000002E0568 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E057C string=0x00000000002E0580 "t\"
 *   insn=0x00000000002E0594 string=0x00000000002E0598 "n\"
 *   insn=0x00000000002E059C string=0x00000000002E05A0 "H"
 *   insn=0x00000000002E05AC string=0x00000000002E05B0 "h\"
 *   insn=0x00000000002E05CC string=0x00000000002E05D0 ""
 *   insn=0x00000000002E05DC string=0x00000000002E05E0 "<T"
 *   insn=0x00000000002E05E0 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002E05E4 string=0x00000000002E05E8 "h"
 *   insn=0x00000000002E05F4 string=0x00000000002E05F8 "6T"
 *   insn=0x00000000002E0608 string=0x00000000002E060C " "
 *   insn=0x00000000002E0614 string=0x00000000002E0618 ".T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 64);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 64);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 16), a2);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v4 + 32), a2);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 40), a2);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(unsigned __int8 *)(v4 + 48),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_DWORD *)(v4 + 52),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x100) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(_DWORD *)(v4 + 60),
             a2,
             a4);
  }
LABEL_18:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_DWORD *)(v4 + 56),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 64) & 0x100) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(_DWORD *)(v4 + 60),
             a2,
             a4);
  return this;
}

