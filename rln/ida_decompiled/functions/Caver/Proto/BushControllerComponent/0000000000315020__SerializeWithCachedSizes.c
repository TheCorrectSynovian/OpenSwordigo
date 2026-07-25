/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315020
 * Mangled: _ZNK5Caver5Proto23BushControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::BushControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x0000000000315038 string=0x000000000031503C "h"
 *   insn=0x000000000031503C string=0x0000000000315040 ""
 *   insn=0x0000000000315054 string=0x0000000000000001 "ELF"
 *   insn=0x000000000031505C string=0x00000000001F56D0 "P'"
 *   insn=0x000000000031506C string=0x0000000000000002 "LF"
 *   insn=0x0000000000315078 string=0x000000000031507C "H"
 *   insn=0x0000000000315088 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Proto::BushControllerComponent::SerializeWithCachedSizes(
        int *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = this;
  v5 = this[6];
  if ( (v5 & 1) != 0 )
  {
    this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
                    this[3],
                    a2,
                    a4);
    v5 = v4[6];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return this;
      return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                      (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
                      v4[5],
                      a2,
                      a4);
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
                  v4[4],
                  a2,
                  a4);
  if ( (v4[6] & 4) != 0 )
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
                    v4[5],
                    a2,
                    a4);
  return this;
}

