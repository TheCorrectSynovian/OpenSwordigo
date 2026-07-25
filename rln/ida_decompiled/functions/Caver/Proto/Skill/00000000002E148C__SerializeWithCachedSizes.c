/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E148C
 * Mangled: _ZNK5Caver5Proto5Skill24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Skill::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002E14A0 string=0x00000000002E14A4 "("
 *   insn=0x00000000002E14A8 string=0x00000000002E14AC "h"
 *   insn=0x00000000002E14AC string=0x00000000002E14B0 ""
 *   insn=0x00000000002E14B4 string=0x00000000002E14B8 "H"
 *   insn=0x00000000002E14D4 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E1508 string=0x00000000002E150C "H"
 *   insn=0x00000000002E1518 string=0x00000000002E151C "mP"
 *   insn=0x00000000002E151C string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002E1530 string=0x00000000002E1534 "gP"
 *   insn=0x00000000002E1538 string=0x00000000002E153C ""
 *   insn=0x00000000002E1550 string=0x00000000002E1554 "_P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 52);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 52);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 52);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 32), a2);
  v5 = *(_DWORD *)(v4 + 52);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
LABEL_11:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 40),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 52);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(_DWORD *)(v4 + 48),
             a2,
             a4);
  }
LABEL_12:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 44),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 52) & 0x20) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(_DWORD *)(v4 + 48),
             a2,
             a4);
  return this;
}

