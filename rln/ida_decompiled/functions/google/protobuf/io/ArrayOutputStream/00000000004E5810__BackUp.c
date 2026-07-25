/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5810
 * Mangled: _ZN6google8protobuf2io17ArrayOutputStream6BackUpEi
 * Demangled: google::protobuf::io::ArrayOutputStream::BackUp(int)
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
 * Referenced strings: 32
 *   insn=0x00000000004E5820 string=0x00000000004E5824 "U"
 *   insn=0x00000000004E5834 string=0x00000000004E5838 "h"
 *   insn=0x00000000004E5844 string=0x00000000004E5848 ""
 *   insn=0x00000000004E584C string=0x00000000004E5850 "&"
 *   insn=0x00000000004E584C string=0x00000000004E5924 "h"
 *   insn=0x00000000004E5854 string=0x0000000000599304 "./../../../../Dependencies/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
 *   insn=0x00000000004E5868 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E586C string=0x000000000059935D "CHECK failed: (last_returned_size_) > (0): "
 *   insn=0x00000000004E5874 string=0x00000000004E5878 "fZ"
 *   insn=0x00000000004E5878 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E587C string=0x00000000004E5884 "cZ"
 *   insn=0x00000000004E587C string=0x0000000000599389 "BackUp() can only be called after a successful Next()."
 *   insn=0x00000000004E5890 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E5894 string=0x00000000004E5898 "VR"
 *   insn=0x00000000004E5898 string=0x00000000004E589C "h"
 *   insn=0x00000000004E5898 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E58A0 string=0x00000000004E58A4 "J"
 *   insn=0x00000000004E58C0 string=0x00000000005993C0 "CHECK failed: (count) <= (last_returned_size_): "
 *   insn=0x00000000004E58C8 string=0x00000000004E58CC "QZ"
 *   insn=0x00000000004E58D4 string=0x00000000004E58D8 "\nS"
 *   insn=0x00000000004E58DC string=0x00000000004E58E0 "DR"
 *   insn=0x00000000004E5900 string=0x00000000005993F1 "CHECK failed: (count) >= (0): "
 *   insn=0x00000000004E5908 string=0x00000000004E590C "AZ"
 *   insn=0x00000000004E591C string=0x00000000004E5920 "4R"
 *   insn=0x00000000004E5924 string=0x00000000004E5928 ""
 *   insn=0x00000000004E5928 string=0x00000000004E592C "h~"
 *   insn=0x00000000004E593C string=0x00000000004E5954 "_B"
 *   insn=0x00000000004E5954 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E595C string=0x00000000004E5960 "$R"
 *   insn=0x00000000004E5960 string=0x00000000004E5964 ""
 *   insn=0x00000000004E596C string=0x00000000004E5970 " R"
 *   insn=0x00000000004E5988 string=0x00000000004E598C "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ArrayOutputStream::BackUp(google::protobuf::io::ArrayOutputStream *this, int a2)
{
  int v4; // w8
  int v5; // w0
  _BYTE v6[32]; // [xsp+8h] [xbp-98h] BYREF
  _BYTE v7[32]; // [xsp+30h] [xbp-70h] BYREF
  _BYTE v8[32]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v9; // [xsp+78h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)this + 7);
  if ( v4 <= 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    v5 = google::protobuf::internal::LogMessage::operator<<((int)v8, "CHECK failed: (last_returned_size_) > (0): ");
    google::protobuf::internal::LogMessage::operator<<(v5, "BackUp() can only be called after a successful Next().");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
    if ( *((_DWORD *)this + 7) >= a2 )
    {
LABEL_3:
      if ( a2 < 0 )
        goto LABEL_7;
      goto LABEL_8;
    }
  }
  else if ( v4 >= a2 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::LogMessage::LogMessage();
  google::protobuf::internal::LogMessage::operator<<((int)v7, "CHECK failed: (count) <= (last_returned_size_): ");
  google::protobuf::internal::LogFinisher::operator=();
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
  if ( a2 < 0 )
  {
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v6, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v6);
  }
LABEL_8:
  *((_DWORD *)this + 6) -= a2;
  *((_DWORD *)this + 7) = 0;
}

