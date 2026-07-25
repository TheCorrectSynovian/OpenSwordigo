/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5AA0
 * Mangled: _ZN6google8protobuf2io18StringOutputStream6BackUpEi
 * Demangled: google::protobuf::io::StringOutputStream::BackUp(int)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000569650  sub_569650
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000004E5AB0 string=0x00000000004E5AB4 "U"
 *   insn=0x00000000004E5AC8 string=0x00000000004E5B08 "`"
 *   insn=0x00000000004E5ACC string=0x0000000000599304 "./../../../../Dependencies/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
 *   insn=0x00000000004E5ADC string=0x00000000004E5AE0 "DB"
 *   insn=0x00000000004E5AE0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E5AE4 string=0x00000000005993F1 "CHECK failed: (count) >= (0): "
 *   insn=0x00000000004E5AF0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E5AFC string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E5B04 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E5B0C string=0x00000000004E5B10 ""
 *   insn=0x00000000004E5B10 string=0x00000000004E5B14 ""
 *   insn=0x00000000004E5B18 string=0x00000000004E5B1C "b"
 *   insn=0x00000000004E5B2C string=0x00000000004E5B30 "#"
 *   insn=0x00000000004E5B30 string=0x00000000004E5B34 "/B"
 *   insn=0x00000000004E5B38 string=0x0000000000599410 "CHECK failed: (count) <= (target_->size()): "
 *   insn=0x00000000004E5B4C string=0x00000000004E5B50 "lR"
 *   insn=0x00000000004E5B58 string=0x00000000004E5B5C "`"
 *   insn=0x00000000004E5B5C string=0x00000000004E5B60 ""
 *   insn=0x00000000004E5B60 string=0x00000000004E5B64 ""
 *   insn=0x00000000004E5B98 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E5BB8 string=0x00000000004E5BBC "Bo"
 *   insn=0x00000000004E5BC0 string=0x00000000004E5BC4 ""
 *   insn=0x00000000004E5BC4 string=0x00000000004E5BC8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::StringOutputStream::BackUp(
        google::protobuf::io::StringOutputStream *this,
        int a2)
{
  _QWORD *v4; // x0
  unsigned __int64 v5; // x8
  _BYTE v7[32]; // [xsp+10h] [xbp-70h] BYREF
  _BYTE v8[32]; // [xsp+38h] [xbp-48h] BYREF
  __int64 v9; // [xsp+58h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v8, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 1);
  v5 = *(_QWORD *)(*v4 - 24LL);
  if ( v5 < a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v7, "CHECK failed: (count) <= (target_->size()): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
    v4 = (_QWORD *)*((_QWORD *)this + 1);
    v5 = *(_QWORD *)(*v4 - 24LL);
  }
  return sub_569650(v4, v5 - a2, 0);
}

