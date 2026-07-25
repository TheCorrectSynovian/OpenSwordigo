/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D81CC
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet17RegisterExtensionEPKNS0_11MessageLiteEihbb
 * Demangled: google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F4C10  google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC570  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *   0x0000000000201FD0  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004E03C4  sub_4E03C4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 90
 *   insn=0x00000000004D81E0 string=0x00000000004D81E4 "X"
 *   insn=0x00000000004D81E4 string=0x00000000004D81E8 "\t"
 *   insn=0x00000000004D8208 string=0x00000000004D820C "`"
 *   insn=0x00000000004D8210 string=0x00000000004D8214 "@"
 *   insn=0x00000000004D8220 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D822C string=0x00000000004D8230 "c"
 *   insn=0x00000000004D8230 string=0x00000000004D8234 "ox"
 *   insn=0x00000000004D8234 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D8238 string=0x0000000000598A55 "CHECK failed: (type) != (WireFormatLite::TYPE_ENUM): "
 *   insn=0x00000000004D8244 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D8250 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D826C string=0x00000000004D8270 "`x"
 *   insn=0x00000000004D8274 string=0x0000000000598A8B "CHECK failed: (type) != (WireFormatLite::TYPE_MESSAGE): "
 *   insn=0x00000000004D82A8 string=0x00000000004D82AC "Qx"
 *   insn=0x00000000004D82B0 string=0x0000000000598AC4 "CHECK failed: (type) != (WireFormatLite::TYPE_GROUP): "
 *   insn=0x00000000004D82D0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D82F8 string=0x00000000004D82FC ""
 *   insn=0x00000000004D8324 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D8330 string=0x00000000004D8334 ""
 *   insn=0x00000000004D8354 string=0x00000000004D8358 "["
 *   insn=0x00000000004D8370 string=0x00000000004D8374 "V"
 *   insn=0x00000000004D8384 string=0x00000000004D8388 "A"
 *   insn=0x00000000004D838C string=0x00000000004D8390 "!"
 *   insn=0x00000000004D8398 string=0x00000000004D839C "Aw"
 *   insn=0x00000000004D839C string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D83BC string=0x00000000004D83C0 "J"
 *   insn=0x00000000004D83C0 string=0x00000000004D83C4 "C"
 *   insn=0x00000000004D83C8 string=0x00000000004D83CC ""
 *   insn=0x00000000004D83CC string=0x00000000004D83D0 "j"
 *   insn=0x00000000004D83D0 string=0x00000000004D83D4 "B"
 *   insn=0x00000000004D83D4 string=0x00000000004D83D8 "yb"
 *   insn=0x00000000004D83D8 string=0x00000000004D83DC "("
 *   insn=0x00000000004D83DC string=0x00000000004D83E0 "\t"
 *   insn=0x00000000004D83E0 string=0x00000000004D83E4 "?"
 *   insn=0x00000000004D83E8 string=0x00000000004D83EC "\t\t@"
 *   insn=0x00000000004D83E8 string=0x00000000004D83F8 ""
 *   insn=0x00000000004D83EC string=0x00000000004D83F0 "?"
 *   insn=0x00000000004D83F8 string=0x00000000004D83FC "("
 *   insn=0x00000000004D8400 string=0x00000000004D8404 "["
 *   insn=0x00000000004D8404 string=0x00000000001FC570 "0'"
 *   insn=0x00000000004D8414 string=0x00000000004D850C "qw"
 *   insn=0x00000000004D8444 string=0x0000000000598C11 "Multiple extension registrations for type ""
 *   insn=0x00000000004D844C string=0x00000000004D8450 "p"
 *   insn=0x00000000004D8458 string=0x00000000004D845C "\t\t@"
 *   insn=0x00000000004D8464 string=0x00000000004D8468 " "
 *   insn=0x00000000004D8474 string=0x00000000001F4C10 "P'"
 *   insn=0x00000000004D8478 string=0x00000000004D8480 "d"
 *   insn=0x00000000004D8478 string=0x0000000000598C3D "", field number "
 *   insn=0x00000000004D848C string=0x00000000004D8494 "_"
 *   insn=0x00000000004D848C string=0x00000000005993BE "."
 *   insn=0x00000000004D84A4 string=0x00000000004D84A8 "i"
 *   insn=0x00000000004D84A8 string=0x00000000004D84AC ")"
 *   insn=0x00000000004D84B8 string=0x00000000004D84C8 "i"
 *   insn=0x00000000004D84BC string=0x00000000004D84C0 "L"
 *   insn=0x00000000004D84C8 string=0x00000000004D84CC ")=G"
 *   insn=0x00000000004D84CC string=0x00000000004D84D0 "!"
 *   insn=0x00000000004D84D4 string=0x00000000004D84D8 "\t"
 *   insn=0x00000000004D84D4 string=0x00000000004D84EC "\t"
 *   insn=0x00000000004D84D8 string=0x00000000004D84DC "*"
 *   insn=0x00000000004D84DC string=0x00000000004D84E0 "\n"
 *   insn=0x00000000004D84E8 string=0x00000000004D84F8 "?"
 *   insn=0x00000000004D84EC string=0x00000000004D84F0 "*"
 *   insn=0x00000000004D84F0 string=0x00000000004D84F4 "\n"
 *   insn=0x00000000004D8520 string=0x00000000004D8524 "j"
 *   insn=0x00000000004D8524 string=0x00000000004D8528 "J"
 *   insn=0x00000000004D852C string=0x00000000004D8530 "(a"
 *   insn=0x00000000004D8538 string=0x00000000004D853C "j"
 *   insn=0x00000000004D853C string=0x00000000004D8540 "J=G"
 *   insn=0x00000000004D8540 string=0x00000000004D8544 ")!"
 *   insn=0x00000000004D8548 string=0x00000000004D854C "*"
 *   insn=0x00000000004D8548 string=0x00000000004D8580 "*"
 *   insn=0x00000000004D854C string=0x00000000004D8550 "K"
 *   insn=0x00000000004D8550 string=0x00000000004D8554 "+"
 *   insn=0x00000000004D8558 string=0x00000000004D855C "_"
 *   insn=0x00000000004D8580 string=0x00000000004D8584 "K"
 *   insn=0x00000000004D8584 string=0x00000000004D8588 "+"
 *   insn=0x00000000004D8588 string=0x00000000004D858C "_"
 *   insn=0x00000000004D85B4 string=0x00000000004D85B8 "Y"
 *   insn=0x00000000004D85B8 string=0x00000000004D85BC "("
 *   insn=0x00000000004D85D8 string=0x00000000004D85DC "?9"
 *   insn=0x00000000004D85E4 string=0x00000000004D8624 "\n"
 *   insn=0x00000000004D85F4 string=0x00000000004D85F8 "c"
 *   insn=0x00000000004D85F8 string=0x00000000004D85FC "}w"
 *   insn=0x00000000004D8600 string=0x0000000000598AFB "CHECK failed: (type) == (WireFormatLite::TYPE_ENUM): "
 *   insn=0x00000000004D8624 string=0x00000000004D8628 ""
 *   insn=0x00000000004D862C string=0x00000000004D8630 "J"
 *   insn=0x00000000004D8650 string=0x00000000004D8654 "C"
 *   insn=0x00000000004D8654 string=0x00000000004D8658 "("
 *   insn=0x00000000004D8698 string=0x00000000004D869C ","
 *   insn=0x00000000004D86A4 string=0x00000000004D86A8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::RegisterExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        char a3,
        char a4,
        char a5)
{
  unsigned int v8; // w19
  google::protobuf::internal::LogMessage *v10; // x0
  _BYTE v12[24]; // [xsp+140h] [xbp-D0h] BYREF
  __int64 v13; // [xsp+158h] [xbp-B8h]
  _BYTE v14[32]; // [xsp+168h] [xbp-A8h] BYREF
  _BYTE v15[32]; // [xsp+190h] [xbp-80h] BYREF
  _BYTE v16[32]; // [xsp+1B8h] [xbp-58h] BYREF
  __int64 v17; // [xsp+1D8h] [xbp-38h]

  v8 = (unsigned int)a2;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a3 )
  {
    case 10:
      google::protobuf::internal::LogMessage::LogMessage();
      google::protobuf::internal::LogMessage::operator<<(
        (int)v14,
        "CHECK failed: (type) != (WireFormatLite::TYPE_GROUP): ");
      google::protobuf::internal::LogFinisher::operator=();
      v10 = (google::protobuf::internal::LogMessage *)v14;
      goto LABEL_7;
    case 11:
      google::protobuf::internal::LogMessage::LogMessage();
      google::protobuf::internal::LogMessage::operator<<(
        (int)v15,
        "CHECK failed: (type) != (WireFormatLite::TYPE_MESSAGE): ");
      google::protobuf::internal::LogFinisher::operator=();
      v10 = (google::protobuf::internal::LogMessage *)v15;
      goto LABEL_7;
    case 14:
      google::protobuf::internal::LogMessage::LogMessage();
      google::protobuf::internal::LogMessage::operator<<(
        (int)v16,
        "CHECK failed: (type) != (WireFormatLite::TYPE_ENUM): ");
      google::protobuf::internal::LogFinisher::operator=();
      v10 = (google::protobuf::internal::LogMessage *)v16;
LABEL_7:
      google::protobuf::internal::LogMessage::~LogMessage(v10);
      break;
  }
  v12[0] = a3;
  v12[1] = a4 & 1;
  v12[2] = a5 & 1;
  v13 = 0;
  return ((__int64 (__fastcall *)(google::protobuf::internal::ExtensionSet *, _QWORD, _BYTE *))loc_4D8360)(
           this,
           v8,
           v12);
}

