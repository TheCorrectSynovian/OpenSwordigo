/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6574
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptor6BackUpEi
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(int)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004E6584 string=0x00000000004E6588 "U"
 *   insn=0x00000000004E659C string=0x00000000004E65DC "i"E)"
 *   insn=0x00000000004E65A0 string=0x0000000000599304 "./../../../../Dependencies/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
 *   insn=0x00000000004E65AC string=0x00000000004E65B0 "#+"
 *   insn=0x00000000004E65B4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E65B8 string=0x00000000005993F1 "CHECK failed: (count) >= (0): "
 *   insn=0x00000000004E65C4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E65D0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E65D8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E65F4 string=0x00000000004E65F8 "C+"
 *   insn=0x00000000004E65F8 string=0x00000000004E65FC "}?"
 *   insn=0x00000000004E6600 string=0x000000000059956D "CHECK failed: (buffer_used_) == (buffer_size_): "
 *   insn=0x00000000004E6610 string=0x0000000000599479 " BackUp() can only be called after Next()."
 *   insn=0x00000000004E662C string=0x00000000004E6630 "h.@"
 *   insn=0x00000000004E6638 string=0x00000000004E6688 ""
 *   insn=0x00000000004E664C string=0x00000000004E6650 "h?"
 *   insn=0x00000000004E6654 string=0x00000000005994A4 "CHECK failed: (count) <= (buffer_used_): "
 *   insn=0x00000000004E6664 string=0x00000000005994CE " Can't back up over more bytes than were returned by the last call to Next()."
 *   insn=0x00000000004E6680 string=0x00000000004E6684 "h.@"
 *   insn=0x00000000004E6688 string=0x00000000004E668C "h."
 *   insn=0x00000000004E669C string=0x00000000004E66B4 "?"
 *   insn=0x00000000004E66B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E66C0 string=0x00000000004E66C4 ""
 *   insn=0x00000000004E66E4 string=0x00000000004E66E8 "wl"
 *   insn=0x00000000004E66EC string=0x00000000004E66F0 ""
 *   insn=0x00000000004E66F0 string=0x00000000004E66F4 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(
        google::protobuf::io::CopyingOutputStreamAdaptor *this,
        int a2)
{
  int v4; // w8
  int v5; // w0
  int v6; // w0
  _BYTE v7[32]; // [xsp+8h] [xbp-98h] BYREF
  _BYTE v8[32]; // [xsp+30h] [xbp-70h] BYREF
  _BYTE v9[32]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v10; // [xsp+78h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v9, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v9);
  }
  v4 = *((_DWORD *)this + 11);
  if ( v4 != *((_DWORD *)this + 10) )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    v5 = google::protobuf::internal::LogMessage::operator<<((int)v8, "CHECK failed: (buffer_used_) == (buffer_size_): ");
    google::protobuf::internal::LogMessage::operator<<(v5, " BackUp() can only be called after Next().");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
    v4 = *((_DWORD *)this + 11);
  }
  if ( v4 < a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    v6 = google::protobuf::internal::LogMessage::operator<<((int)v7, "CHECK failed: (count) <= (buffer_used_): ");
    google::protobuf::internal::LogMessage::operator<<(
      v6,
      " Can't back up over more bytes than were returned by the last call to Next().");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
    v4 = *((_DWORD *)this + 11);
  }
  *((_DWORD *)this + 11) = v4 - a2;
}

