/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048933C
 * Mangled: _ZN5Caver27LoadProtobufMessageFromFileEPN6google8protobuf11MessageLiteERKSs
 * Demangled: Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F6AC0  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8AC0  Caver::NewByteBufferFromFile(std::string const&,uint *)
 *   0x00000000001FD6A0  google::protobuf::MessageLite::ParseFromArray(void const*,int)
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000048934C string=0x0000000000489350 "U"
 *   insn=0x000000000048936C string=0x00000000001F8AC0 "0'"
 *   insn=0x0000000000489370 string=0x0000000000489374 "3"
 *   insn=0x0000000000489384 string=0x00000000001FD6A0 "0'"
 *   insn=0x0000000000489390 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004893C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004893D4 string=0x00000000004893D8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *a1)
{
  void *v2; // x0
  void *v3; // x19
  char v4; // w0
  char v5; // w20

  _ReadStatusReg(TPIDR_EL0);
  Caver::NewByteBufferFromFile();
  v3 = v2;
  if ( v2 )
  {
    google::protobuf::MessageLite::ParseFromArray(a1, v2);
    v5 = v4;
    operator delete[](v3);
  }
  else
  {
    v5 = 0;
  }
  return v5 & 1;
}

