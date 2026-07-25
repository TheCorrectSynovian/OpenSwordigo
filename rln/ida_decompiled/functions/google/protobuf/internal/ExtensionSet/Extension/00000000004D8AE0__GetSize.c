/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8AE0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9Extension7GetSizeEv
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *
 * Callers: 1
 *   0x00000000001F6510  google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000200D90  google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x00000000004D8AEC string=0x00000000004D8AF0 "S"
 *   insn=0x00000000004D8AF0 string=0x00000000004D8AF4 "h"
 *   insn=0x00000000004D8AF4 string=0x00000000004D8AF8 "i"
 *   insn=0x00000000004D8AFC string=0x00000000004D8B00 " @9)"
 *   insn=0x00000000004D8B00 string=0x00000000004D8B04 ")"
 *   insn=0x00000000004D8B04 string=0x00000000004D8B08 "(yh"
 *   insn=0x00000000004D8B08 string=0x00000000004D8B0C ""
 *   insn=0x00000000004D8B10 string=0x00000000004D8B14 ""
 *   insn=0x00000000004D8B14 string=0x00000000004D8B18 "\t"
 *   insn=0x00000000004D8B18 string=0x00000000004D8B20 "(y"
 *   insn=0x00000000004D8B20 string=0x00000000004D8B24 ""
 *   insn=0x00000000004D8B28 string=0x00000000004D8B2C ""
 *   insn=0x00000000004D8B30 string=0x00000000004D8B34 "h"
 *   insn=0x00000000004D8B54 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D8B60 string=0x00000000004D8B64 "#"
 *   insn=0x00000000004D8B64 string=0x00000000004D8B68 ""v"
 *   insn=0x00000000004D8B68 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D8B6C string=0x0000000000598C01 "Can't get here."
 *   insn=0x00000000004D8B78 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D8B80 string=0x00000000004D8B84 "_"
 *   insn=0x00000000004D8B84 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D8B8C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D8B98 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D8BA8 string=0x00000000004D8BAC "F"
 *   insn=0x00000000004D8BB0 string=0x00000000004D8BB4 "\n@"
 *   insn=0x00000000004D8BB4 string=0x00000000004D8BB8 " "
 *   insn=0x00000000004D8BBC string=0x00000000004D8BC0 "*"
 *   insn=0x00000000004D8BC0 string=0x00000000004D8BC4 "K!@"
 *   insn=0x00000000004D8BC0 string=0x00000000004D8BE4 "?"
 *   insn=0x00000000004D8BC4 string=0x00000000004D8BC8 "La"
 *   insn=0x00000000004D8BC8 string=0x00000000004D8BCC "MA"
 *   insn=0x00000000004D8BD4 string=0x00000000004D8BD8 ")"
 *   insn=0x00000000004D8BD8 string=0x00000000004D8BDC "j"
 *   insn=0x00000000004D8BDC string=0x00000000004D8BE0 "*"
 *   insn=0x00000000004D8BE8 string=0x00000000004D8BEC "*!@"
 *   insn=0x00000000004D8BEC string=0x00000000004D8BF0 "_"
 *   insn=0x00000000004D8BF0 string=0x00000000004D8BF4 "\t"
 *   insn=0x00000000004D8BF4 string=0x00000000004D8BF8 "?"
 *   insn=0x00000000004D8BF8 string=0x00000000004D8BFC "`"
 *   insn=0x00000000004D8BFC string=0x00000000004D8C00 " "
 *   insn=0x00000000004D8C00 string=0x00000000004D8C04 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::GetSize(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  __int64 result; // x0
  _BYTE v2[32]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v3; // [xsp+28h] [xbp-18h]

  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      result = *(unsigned int *)(*(_QWORD *)this + 8LL);
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage();
      google::protobuf::internal::LogMessage::operator<<((int)v2, "Can't get here.");
      google::protobuf::internal::LogFinisher::operator=();
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v2);
      result = 0;
      break;
  }
  return result;
}

