/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E305C
 * Mangled: _ZNK5Caver5Proto11EntityClass24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::EntityClass::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x00000000002E3070 string=0x00000000002E3074 "h"
 *   insn=0x00000000002E3074 string=0x00000000002E3078 ""
 *   insn=0x00000000002E307C string=0x00000000002E3080 "H"
 *   insn=0x00000000002E3088 string=0x00000000002E308C "("
 *   insn=0x00000000002E30AC string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E30B0 string=0x00000000002E30B4 "H"
 *   insn=0x00000000002E30D4 string=0x0000000000000003 "F"
 *   insn=0x00000000002E30E0 string=0x00000000002E30E4 ""
 *   insn=0x00000000002E30F8 string=0x00000000002E30FC "h"
 *   insn=0x00000000002E3128 string=0x00000000002E312C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityClass::SerializeWithCachedSizes(
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
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 44);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(unsigned __int8 *)(v4 + 33),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(unsigned __int8 *)(v4 + 34),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(unsigned __int8 *)(v4 + 35),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             a2,
             *(float *)(v4 + 40),
             a3);
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 36),
           a3);
  if ( (*(_DWORD *)(v4 + 44) & 0x80) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             a2,
             *(float *)(v4 + 40),
             a3);
  return this;
}

