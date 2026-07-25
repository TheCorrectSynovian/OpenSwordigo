/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D86AC
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet24RegisterMessageExtensionEPKNS0_11MessageLiteEihbbS5_
 * Demangled: google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool,google::protobuf::MessageLite const*)
 *
 * Callers: 1
 *   0x00000000001FEE90  google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool,google::protobuf::MessageLite const*)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004D81CC  google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000004D86C4 string=0x00000000004D86C8 "Y"
 *   insn=0x00000000004D86C8 string=0x00000000004D86CC "("
 *   insn=0x00000000004D86E8 string=0x00000000004D86EC "?)"
 *   insn=0x00000000004D86F4 string=0x00000000004D8734 ""
 *   insn=0x00000000004D86F8 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D8708 string=0x00000000004D870C "9w"
 *   insn=0x00000000004D870C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D8710 string=0x0000000000598B31 "CHECK failed: type == WireFormatLite::TYPE_MESSAGE || type == WireFormatLite::TYPE_GROUP: "
 *   insn=0x00000000004D871C string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D8724 string=0x00000000004D8728 "v"
 *   insn=0x00000000004D8728 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D8730 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D875C string=0x00000000004D8760 "("
 *   insn=0x00000000004D878C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D879C string=0x00000000004D87A0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        const google::protobuf::MessageLite *a7)
{
  unsigned int v11; // w19
  _BYTE v14[8]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v15; // [xsp+8h] [xbp-88h]
  __int64 v16; // [xsp+18h] [xbp-78h]
  _BYTE v17[32]; // [xsp+28h] [xbp-68h] BYREF
  __int64 v18; // [xsp+48h] [xbp-48h]

  v11 = (unsigned int)a2;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a3 & 0xFE) != 0xA )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<(
      (int)v17,
      "CHECK failed: type == WireFormatLite::TYPE_MESSAGE || type == WireFormatLite::TYPE_GROUP: ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v17);
  }
  v14[0] = a3;
  v14[1] = a4 & 1;
  v14[2] = a5 & 1;
  v15 = a6;
  v16 = 0;
  return ((__int64 (__fastcall *)(google::protobuf::internal::ExtensionSet *, _QWORD, _BYTE *))loc_4D8360)(
           this,
           v11,
           v14);
}

