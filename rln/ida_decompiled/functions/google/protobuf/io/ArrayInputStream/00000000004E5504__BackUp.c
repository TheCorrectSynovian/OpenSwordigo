/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5504
 * Mangled: _ZN6google8protobuf2io16ArrayInputStream6BackUpEi
 * Demangled: google::protobuf::io::ArrayInputStream::BackUp(int)
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
 * Referenced strings: 37
 *   insn=0x00000000004E5514 string=0x00000000004E5518 "U"
 *   insn=0x00000000004E5528 string=0x00000000004E552C "h"
 *   insn=0x00000000004E5538 string=0x00000000004E553C ""
 *   insn=0x00000000004E5540 string=0x00000000004E5544 "&"
 *   insn=0x00000000004E5540 string=0x00000000004E5618 "h"
 *   insn=0x00000000004E5548 string=0x0000000000599304 "./../../../../Dependencies/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
 *   insn=0x00000000004E555C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E5560 string=0x000000000059935D "CHECK failed: (last_returned_size_) > (0): "
 *   insn=0x00000000004E5568 string=0x00000000004E556C ")["
 *   insn=0x00000000004E556C string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E5570 string=0x00000000004E5578 "&["
 *   insn=0x00000000004E5570 string=0x0000000000599389 "BackUp() can only be called after a successful Next()."
 *   insn=0x00000000004E5584 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E558C string=0x00000000004E5590 "h"
 *   insn=0x00000000004E558C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E5594 string=0x00000000004E5598 "J"
 *   insn=0x00000000004E55A8 string=0x00000000004E55AC "#\n"
 *   insn=0x00000000004E55B4 string=0x00000000005993C0 "CHECK failed: (count) <= (last_returned_size_): "
 *   insn=0x00000000004E55D0 string=0x00000000004E55D4 "S"
 *   insn=0x00000000004E55E8 string=0x00000000004E55EC "C\n"
 *   insn=0x00000000004E55F4 string=0x00000000005993F1 "CHECK failed: (count) >= (0): "
 *   insn=0x00000000004E5618 string=0x00000000004E561C ""
 *   insn=0x00000000004E561C string=0x00000000004E5620 "h~"
 *   insn=0x00000000004E5630 string=0x00000000004E5648 ""C"
 *   insn=0x00000000004E5648 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E5654 string=0x00000000004E5658 ""
 *   insn=0x00000000004E567C string=0x00000000004E5680 "3"
 *   insn=0x00000000004E5694 string=0x00000000004E5698 "U"
 *   insn=0x00000000004E56AC string=0x00000000004E56EC "h"
 *   insn=0x00000000004E56C0 string=0x00000000004E56C4 "KC"
 *   insn=0x00000000004E56EC string=0x00000000004E56F0 "i"
 *   insn=0x00000000004E56F0 string=0x00000000004E56F4 "\n"
 *   insn=0x00000000004E56F4 string=0x00000000004E56F8 ")"
 *   insn=0x00000000004E56F8 string=0x00000000004E56FC "_"
 *   insn=0x00000000004E56FC string=0x00000000004E5700 ""
 *   insn=0x00000000004E5700 string=0x00000000004E5704 "h~"
 *   insn=0x00000000004E5740 string=0x00000000004E5744 "`p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ArrayInputStream::BackUp(google::protobuf::io::ArrayInputStream *this, int a2)
{
  int v4; // w8
  int v5; // w0
  _BYTE v6[32]; // [xsp+60h] [xbp-98h] BYREF
  _BYTE v7[32]; // [xsp+88h] [xbp-70h] BYREF
  _BYTE v8[32]; // [xsp+B0h] [xbp-48h] BYREF
  __int64 v9; // [xsp+D0h] [xbp-28h]

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

