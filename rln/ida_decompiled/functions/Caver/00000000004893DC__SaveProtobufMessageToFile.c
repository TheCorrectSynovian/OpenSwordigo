/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004893DC
 * Mangled: _ZN5Caver25SaveProtobufMessageToFileERKN6google8protobuf11MessageLiteERKSs
 * Demangled: Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *
 * Callers: 2
 *   0x00000000002008C0  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x000000000048933C  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F89B0  google::protobuf::MessageLite::SerializeToArray(void *,int)
 *   0x0000000000202230  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000004893F4 string=0x00000000004893F8 "%@"
 *   insn=0x0000000000489404 string=0x0000000000489408 "Z"
 *   insn=0x0000000000489408 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000489418 string=0x000000000048941C "e"
 *   insn=0x000000000048941C string=0x00000000001F89B0 "0'"
 *   insn=0x0000000000489438 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000489454 string=0x0000000000489458 "®"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite *a1)
{
  unsigned int v2; // w21
  void *v3; // x19
  char v4; // w20

  v2 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)a1 + 72LL))(a1);
  v3 = (void *)operator new[](v2);
  google::protobuf::MessageLite::SerializeToArray(a1, v3, v2);
  v4 = Caver::SaveByteBufferToFile();
  operator delete[](v3);
  return v4 & 1;
}

