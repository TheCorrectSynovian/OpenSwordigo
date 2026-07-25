/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4B54
 * Mangled: _ZNK5Caver5Proto11GuideTarget24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 29
 *   insn=0x00000000002E4B64 string=0x00000000002E4B68 "hr@"
 *   insn=0x00000000002E4B6C string=0x00000000002E4B70 "h"
 *   insn=0x00000000002E4B70 string=0x00000000002E4B74 ""
 *   insn=0x00000000002E4B70 string=0x00000000002E4BDC "a"
 *   insn=0x00000000002E4B74 string=0x00000000002E4BF4 "a\n@"
 *   insn=0x00000000002E4B78 string=0x00000000002E4B7C "H"
 *   insn=0x00000000002E4B78 string=0x00000000002E4C0C "a"
 *   insn=0x00000000002E4B7C string=0x00000000002E4C24 "a"
 *   insn=0x00000000002E4B80 string=0x00000000002E4C3C "a"
 *   insn=0x00000000002E4B84 string=0x00000000002E4B88 "a"
 *   insn=0x00000000002E4B84 string=0x00000000002E4B98 "hB@"
 *   insn=0x00000000002E4B90 string=0x00000000002E4B94 "G|"
 *   insn=0x00000000002E4B9C string=0x00000000002E4BA0 "k"
 *   insn=0x00000000002E4BA4 string=0x00000000002E4BA8 "h"
 *   insn=0x00000000002E4BB4 string=0x00000000002E4BB8 "fS"
 *   insn=0x00000000002E4BB8 string=0x00000000002E4BBC "hB"
 *   insn=0x00000000002E4BB8 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002E4BC4 string=0x00000000002E4BC8 ""
 *   insn=0x00000000002E4BE0 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002E4BE8 string=0x00000000002E4BEC "hr@"
 *   insn=0x00000000002E4BE8 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002E4BEC string=0x00000000002E4BF0 "H"
 *   insn=0x00000000002E4C00 string=0x00000000002E4C04 "hr@"
 *   insn=0x00000000002E4C00 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E4C18 string=0x00000000002E4C1C "hr@"
 *   insn=0x00000000002E4C1C string=0x00000000002E4C20 ""
 *   insn=0x00000000002E4C30 string=0x00000000002E4C34 "hr@"
 *   insn=0x00000000002E4C34 string=0x00000000002E4C38 "h"
 *   insn=0x00000000002E4C48 string=0x00000000002E4C4C "hr@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x19
  int v5; // w8
  __int64 v7; // x21

  v4 = this;
  v5 = *(_DWORD *)(this + 112);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 112);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_14;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 16), a2);
  v5 = *(_DWORD *)(v4 + 112);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 112);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v4 + 32), a2);
  v5 = *(_DWORD *)(v4 + 112);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 40), a2);
  if ( (*(_DWORD *)(v4 + 112) & 0x20) != 0 )
LABEL_7:
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 48),
             a2,
             a4);
LABEL_8:
  if ( *(int *)(v4 + 64) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_7,
               *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 64) );
  }
  return this;
}

