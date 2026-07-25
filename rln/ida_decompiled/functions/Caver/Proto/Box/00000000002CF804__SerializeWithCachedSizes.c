/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF804
 * Mangled: _ZNK5Caver5Proto3Box24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Box::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 9
 *   insn=0x00000000002CF818 string=0x00000000002CF81C "("
 *   insn=0x00000000002CF820 string=0x00000000002CF824 "h"
 *   insn=0x00000000002CF824 string=0x00000000002CF828 ""
 *   insn=0x00000000002CF82C string=0x00000000002CF830 "H"
 *   insn=0x00000000002CF844 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002CF85C string=0x0000000000000002 "LF"
 *   insn=0x00000000002CF874 string=0x0000000000000003 "F"
 *   insn=0x00000000002CF880 string=0x00000000002CF884 "H"
 *   insn=0x00000000002CF8B0 string=0x00000000002CF8B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  int v4; // w8

  v3 = this;
  v4 = *(_DWORD *)(this + 36);
  if ( (v4 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v4 = *(_DWORD *)(v3 + 36);
    if ( (v4 & 2) == 0 )
    {
LABEL_3:
      if ( (v4 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v3 + 16),
           a3);
  v4 = *(_DWORD *)(v3 + 36);
  if ( (v4 & 4) == 0 )
  {
LABEL_4:
    if ( (v4 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v3 + 20),
           a3);
  v4 = *(_DWORD *)(v3 + 36);
  if ( (v4 & 8) == 0 )
  {
LABEL_5:
    if ( (v4 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
LABEL_11:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v3 + 24),
           a3);
  v4 = *(_DWORD *)(v3 + 36);
  if ( (v4 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v4 & 0x20) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             a2,
             *(float *)(v3 + 32),
             a3);
  }
LABEL_12:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v3 + 28),
           a3);
  if ( (*(_DWORD *)(v3 + 36) & 0x20) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             a2,
             *(float *)(v3 + 32),
             a3);
  return this;
}

