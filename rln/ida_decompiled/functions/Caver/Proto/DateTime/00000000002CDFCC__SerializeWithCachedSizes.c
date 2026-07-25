/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDFCC
 * Mangled: _ZNK5Caver5Proto8DateTime24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::DateTime::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4260  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CDFCC string=0x00000000002CDFD0 "H"
 *   insn=0x00000000002CDFDC string=0x0000000000000001 "ELF"
 *   insn=0x00000000002CDFE0 string=0x00000000001F4260 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteDouble(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(double *)(this + 16),
             a3);
  return this;
}

