/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003124B0
 * Mangled: _ZNK5Caver5Proto27CharAnimControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 14
 *   insn=0x00000000003124C4 string=0x00000000003124C8 "("
 *   insn=0x00000000003124CC string=0x00000000003124D0 "h"
 *   insn=0x00000000003124D0 string=0x00000000003124D4 ""
 *   insn=0x00000000003124D8 string=0x00000000003124DC "H"
 *   insn=0x00000000003124F4 string=0x00000000003124F8 "v"
 *   insn=0x00000000003124F8 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000031250C string=0x0000000000312510 "p"
 *   insn=0x0000000000312524 string=0x0000000000312528 "j"
 *   insn=0x000000000031252C string=0x0000000000312530 "H"
 *   insn=0x000000000031253C string=0x0000000000312540 "d"
 *   insn=0x0000000000312554 string=0x0000000000312558 "^"
 *   insn=0x000000000031255C string=0x0000000000312560 ""
 *   insn=0x0000000000312568 string=0x000000000031256C " "
 *   insn=0x0000000000312574 string=0x0000000000312578 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes(
        int *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = this;
  v5 = this[9];
  if ( (v5 & 1) != 0 )
  {
    this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)&byte_4,
                    this[3],
                    a2,
                    a4);
    v5 = v4[9];
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
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)&byte_5,
                  v4[4],
                  a2,
                  a4);
  v5 = v4[9];
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)&byte_6,
                  v4[5],
                  a2,
                  a4);
  v5 = v4[9];
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
LABEL_11:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)&byte_7,
                  v4[7],
                  a2,
                  a4);
  v5 = v4[9];
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 8) == 0 )
      return this;
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)byte_9,
                    v4[6],
                    a2,
                    a4);
  }
LABEL_12:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)&byte_8,
                  v4[8],
                  a2,
                  a4);
  if ( (v4[9] & 8) != 0 )
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)byte_9,
                    v4[6],
                    a2,
                    a4);
  return this;
}

