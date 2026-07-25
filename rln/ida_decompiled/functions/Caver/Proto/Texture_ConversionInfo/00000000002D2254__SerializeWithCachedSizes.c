/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2254
 * Mangled: _ZNK5Caver5Proto22Texture_ConversionInfo24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D2270 string=0x00000000002D2274 "("
 *   insn=0x00000000002D228C string=0x0000000000000001 "ELF"
 *   insn=0x00000000002D2294 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002D22A4 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D22A8 string=0x00000000002D22AC "\t"
 *   insn=0x00000000002D22B0 string=0x00000000002D22B4 "("
 *   insn=0x00000000002D22BC string=0x0000000000000003 "F"
 *   insn=0x00000000002D22C0 string=0x00000000002D22C4 "O"
 *   insn=0x00000000002D22C4 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002D22E0 string=0x00000000002D22E4 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes(
        int *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = this;
  v5 = this[7];
  if ( (v5 & 1) != 0 )
  {
    this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
                    this[3],
                    a2,
                    a4);
    v5 = v4[7];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_8;
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
  v5 = v4[7];
  if ( (v5 & 8) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      return this;
    return (int *)google::protobuf::internal::WireFormatLite::WriteEnum(
                    (google::protobuf::internal::WireFormatLite *)&byte_4,
                    v4[5],
                    a2,
                    a4);
  }
LABEL_8:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteEnum(
                  (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
                  v4[6],
                  a2,
                  a4);
  if ( (v4[7] & 4) != 0 )
    return (int *)google::protobuf::internal::WireFormatLite::WriteEnum(
                    (google::protobuf::internal::WireFormatLite *)&byte_4,
                    v4[5],
                    a2,
                    a4);
  return this;
}

