/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5E88
 * Mangled: _ZN6google8protobuf2io25CopyingInputStreamAdaptor10FreeBufferEv
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void)
 *
 * Callers: 1
 *   0x0000000000200120  google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void)
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 61
 *   insn=0x00000000004E5E94 string=0x00000000004E5E98 "T"
 *   insn=0x00000000004E5EA4 string=0x00000000004E5EA8 "h2@"
 *   insn=0x00000000004E5EA8 string=0x00000000004E5EAC ""
 *   insn=0x00000000004E5EAC string=0x00000000004E5EEC "`"
 *   insn=0x00000000004E5EB0 string=0x0000000000599304 "./../../../../Dependencies/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
 *   insn=0x00000000004E5EC0 string=0x00000000004E5EC4 "KA"
 *   insn=0x00000000004E5EC4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E5EC8 string=0x0000000000599546 "CHECK failed: (backup_bytes_) == (0): "
 *   insn=0x00000000004E5ED4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E5EE0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E5EE8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E5EF0 string=0x00000000004E5EF4 "`"
 *   insn=0x00000000004E5EF8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004E5F20 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E5F30 string=0x00000000004E5F34 "dn"
 *   insn=0x00000000004E5F4C string=0x00000000004E5F50 "U"
 *   insn=0x00000000004E5F60 string=0x00000000004E5F64 "h2@"
 *   insn=0x00000000004E5F68 string=0x00000000004E5FB8 "h"
 *   insn=0x00000000004E5F84 string=0x000000000059943D "CHECK failed: backup_bytes_ == 0 && buffer_.get() != NULL: "
 *   insn=0x00000000004E5F94 string=0x0000000000599479 " BackUp() can only be called after Next()."
 *   insn=0x00000000004E5FA4 string=0x00000000004E5FA8 "VQ"
 *   insn=0x00000000004E5FB4 string=0x00000000004E5FC0 "h.@"
 *   insn=0x00000000004E5FC4 string=0x00000000004E5FC8 "j"
 *   insn=0x00000000004E5FC8 string=0x00000000004E6014 "t"
 *   insn=0x00000000004E5FD8 string=0x00000000004E5FDC "C "
 *   insn=0x00000000004E5FE4 string=0x00000000005994A4 "CHECK failed: (count) <= (buffer_used_): "
 *   insn=0x00000000004E5FF4 string=0x00000000005994CE " Can't back up over more bytes than were returned by the last call to Next()."
 *   insn=0x00000000004E6004 string=0x00000000004E6008 ">Q"
 *   insn=0x00000000004E600C string=0x00000000004E6010 "xP"
 *   insn=0x00000000004E6014 string=0x00000000004E6060 "t2"
 *   insn=0x00000000004E6030 string=0x00000000005993F1 "CHECK failed: (count) >= (0): "
 *   insn=0x00000000004E6038 string=0x00000000004E603C "uX"
 *   insn=0x00000000004E6040 string=0x00000000004E6048 "rX"
 *   insn=0x00000000004E6040 string=0x000000000059951C " Parameter to BackUp() can't be negative."
 *   insn=0x00000000004E6050 string=0x00000000004E6054 "+Q"
 *   insn=0x00000000004E6058 string=0x00000000004E605C "eP"
 *   insn=0x00000000004E6090 string=0x00000000004E6094 "WP"
 *   insn=0x00000000004E6094 string=0x00000000004E6098 ""
 *   insn=0x00000000004E60A0 string=0x00000000004E60A4 "SP"
 *   insn=0x00000000004E60B0 string=0x00000000004E60B4 "OP"
 *   insn=0x00000000004E60D4 string=0x00000000004E60D8 "U"
 *   insn=0x00000000004E60EC string=0x00000000004E60F0 "hF@9"
 *   insn=0x00000000004E60F4 string=0x00000000004E6144 "h2@"
 *   insn=0x00000000004E60F8 string=0x00000000004E60FC "$"
 *   insn=0x00000000004E6120 string=0x00000000004E6124 ";X"
 *   insn=0x00000000004E6134 string=0x00000000004E6138 ".P"
 *   insn=0x00000000004E6138 string=0x00000000004E613C "hF@9"
 *   insn=0x00000000004E6144 string=0x00000000004E6148 "\t"
 *   insn=0x00000000004E614C string=0x00000000004E6150 "`"
 *   insn=0x00000000004E614C string=0x00000000004E6184 "i2"
 *   insn=0x00000000004E615C string=0x00000000004E6160 "\t"
 *   insn=0x00000000004E6160 string=0x00000000004E6164 ")@"
 *   insn=0x00000000004E6164 string=0x00000000004E6168 " "
 *   insn=0x00000000004E6168 string=0x00000000004E616C "h"
 *   insn=0x00000000004E6170 string=0x00000000004E6174 ""
 *   insn=0x00000000004E6178 string=0x00000000004E617C "h"
 *   insn=0x00000000004E6198 string=0x00000000004E61B0 "H@"
 *   insn=0x00000000004E61B8 string=0x00000000004E61BC "P"
 *   insn=0x00000000004E61C4 string=0x00000000004E61C8 "a"
 *   insn=0x00000000004E61C8 string=0x00000000004E61CC ""
 *   insn=0x00000000004E61CC string=0x00000000004E61D0 "\t0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(
        google::protobuf::io::CopyingInputStreamAdaptor *this)
{
  void *v2; // x0
  _BYTE v3[16]; // [xsp+110h] [xbp-38h] BYREF
  __int64 v4; // [xsp+130h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 12) )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v3, "CHECK failed: (backup_bytes_) == (0): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v3);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 11) = 0;
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 4) = 0;
  }
}

