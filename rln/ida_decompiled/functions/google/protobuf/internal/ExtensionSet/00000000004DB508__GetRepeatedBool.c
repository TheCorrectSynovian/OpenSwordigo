/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DB508
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet15GetRepeatedBoolEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedBool(int,int)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 87
 *   insn=0x00000000004DB518 string=0x00000000004DB51C "T"
 *   insn=0x00000000004DB52C string=0x00000000004DB530 "\t@"
 *   insn=0x00000000004DB534 string=0x00000000004DB538 ")"
 *   insn=0x00000000004DB538 string=0x00000000004DB53C "*!@"
 *   insn=0x00000000004DB53C string=0x00000000004DB540 "+a"
 *   insn=0x00000000004DB540 string=0x00000000004DB544 ",A"
 *   insn=0x00000000004DB544 string=0x00000000004DB548 "_"
 *   insn=0x00000000004DB548 string=0x00000000004DB54C "j"
 *   insn=0x00000000004DB54C string=0x00000000004DB550 ""
 *   insn=0x00000000004DB550 string=0x00000000004DB554 "I"
 *   insn=0x00000000004DB554 string=0x00000000004DB558 ")"
 *   insn=0x00000000004DB560 string=0x00000000004DB564 "\t!@"
 *   insn=0x00000000004DB564 string=0x00000000004DB568 "?"
 *   insn=0x00000000004DB574 string=0x00000000004DB5C4 ""
 *   insn=0x00000000004DB578 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DB58C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DB590 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DB59C string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DB5A0 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DB5B4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DB5B8 string=0x00000000004DB5BC "{"
 *   insn=0x00000000004DB5BC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DB5C4 string=0x00000000004DB5C8 ""
 *   insn=0x00000000004DB5C8 string=0x00000000004DB5CC ""
 *   insn=0x00000000004DB5DC string=0x00000000004DB5E0 "?"
 *   insn=0x00000000004DB5E4 string=0x00000000004DB5FC "5k"
 *   insn=0x00000000004DB5FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DB610 string=0x00000000004DB614 "N"
 *   insn=0x00000000004DB628 string=0x00000000004DB62C "U"
 *   insn=0x00000000004DB640 string=0x00000000004DB644 "\t@"
 *   insn=0x00000000004DB648 string=0x00000000004DB64C ")"
 *   insn=0x00000000004DB64C string=0x00000000004DB650 "*!@"
 *   insn=0x00000000004DB650 string=0x00000000004DB654 "+a"
 *   insn=0x00000000004DB654 string=0x00000000004DB658 ",A"
 *   insn=0x00000000004DB658 string=0x00000000004DB65C "_"
 *   insn=0x00000000004DB65C string=0x00000000004DB660 "j"
 *   insn=0x00000000004DB660 string=0x00000000004DB664 ""
 *   insn=0x00000000004DB664 string=0x00000000004DB668 "I"
 *   insn=0x00000000004DB668 string=0x00000000004DB66C ")"
 *   insn=0x00000000004DB674 string=0x00000000004DB678 "\t!@"
 *   insn=0x00000000004DB678 string=0x00000000004DB67C "?"
 *   insn=0x00000000004DB688 string=0x00000000004DB6D8 ""
 *   insn=0x00000000004DB69C string=0x00000000004DB6A0 "Tk"
 *   insn=0x00000000004DB6D8 string=0x00000000004DB6DC "i"
 *   insn=0x00000000004DB6DC string=0x00000000004DB6E0 ""
 *   insn=0x00000000004DB6E0 string=0x00000000004DB6E4 "\t"
 *   insn=0x00000000004DB71C string=0x00000000004DB720 "i"
 *   insn=0x00000000004DB720 string=0x00000000004DB724 "\n"
 *   insn=0x00000000004DB744 string=0x00000000004DB748 "\"
 *   insn=0x00000000004DB784 string=0x00000000004DB788 "(#@"
 *   insn=0x00000000004DB788 string=0x00000000004DB78C ")c"
 *   insn=0x00000000004DB78C string=0x00000000004DB790 "*C"
 *   insn=0x00000000004DB794 string=0x00000000004DB798 "I"
 *   insn=0x00000000004DB798 string=0x00000000004DB79C ")"
 *   insn=0x00000000004DB79C string=0x00000000004DB7A0 ")"
 *   insn=0x00000000004DB7A8 string=0x00000000004DB7AC "l"
 *   insn=0x00000000004DB7AC string=0x00000000004DB7B0 ""
 *   insn=0x00000000004DB7B0 string=0x00000000004DB7CC " @"
 *   insn=0x00000000004DB7B8 string=0x00000000004DB7BC "?"
 *   insn=0x00000000004DB7D0 string=0x00000000004DB7D4 "J"
 *   insn=0x00000000004DB7E0 string=0x00000000004DB7E4 " "
 *   insn=0x00000000004DB7E4 string=0x00000000004DB7E8 "(#@"
 *   insn=0x00000000004DB800 string=0x00000000004DB804 "$"
 *   insn=0x00000000004DB80C string=0x00000000004DB810 "tg"
 *   insn=0x00000000004DB810 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DB830 string=0x00000000004DB834 "w#"
 *   insn=0x00000000004DB834 string=0x00000000004DB838 "`C"
 *   insn=0x00000000004DB838 string=0x00000000004DB83C "aC"
 *   insn=0x00000000004DB83C string=0x00000000004DB840 "hG"
 *   insn=0x00000000004DB850 string=0x00000000004DB854 "w"
 *   insn=0x00000000004DB854 string=0x00000000004DB858 ""
 *   insn=0x00000000004DB860 string=0x00000000004DB864 "s"
 *   insn=0x00000000004DB864 string=0x00000000004DB868 "t"
 *   insn=0x00000000004DB868 string=0x00000000004DB86C "h"
 *   insn=0x00000000004DB86C string=0x00000000004DB870 "i"
 *   insn=0x00000000004DB870 string=0x00000000004DB874 "[g"
 *   insn=0x00000000004DB880 string=0x00000000004DB884 "@"
 *   insn=0x00000000004DB884 string=0x00000000004DB888 ""
 *   insn=0x00000000004DB88C string=0x00000000004DB890 "`"
 *   insn=0x00000000004DB8A8 string=0x00000000004DB8AC "?"
 *   insn=0x00000000004DB8AC string=0x00000000004DB8B0 "("
 *   insn=0x00000000004DB8B8 string=0x00000000004DB8BC "}@"
 *   insn=0x00000000004DB8C8 string=0x00000000004DB8CC ")s"
 *   insn=0x00000000004DB8CC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DB8F4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DB914 string=0x00000000004DB918 "!"
 *   insn=0x00000000004DB918 string=0x00000000004DB93C "ej"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedBool(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int a3)
{
  char *v3; // x21
  char *v5; // x9
  char *v6; // x8
  int v7; // w10
  bool v8; // cc
  char **v9; // x10
  int v10; // w0
  _BYTE v12[32]; // [xsp+F8h] [xbp-48h] BYREF
  __int64 v13; // [xsp+118h] [xbp-28h]

  v3 = (char *)this + 8;
  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)*((_QWORD *)this + 2);
  v6 = (char *)this + 8;
  if ( v5 )
  {
    do
    {
      v7 = *((_DWORD *)v5 + 8);
      v8 = v7 < a2;
      if ( v7 >= a2 )
        v9 = (char **)(v5 + 16);
      else
        v9 = (char **)(v5 + 24);
      if ( !v8 )
        v6 = v5;
      v5 = *v9;
    }
    while ( *v9 );
  }
  if ( v6 == v3 )
    goto LABEL_12;
  if ( *((_DWORD *)v6 + 8) > a2 )
    v6 = (char *)this + 8;
  if ( v6 == v3 )
  {
LABEL_12:
    google::protobuf::internal::LogMessage::LogMessage();
    v10 = google::protobuf::internal::LogMessage::operator<<((int)v12, "CHECK failed: iter != extensions_.end(): ");
    google::protobuf::internal::LogMessage::operator<<(v10, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v12);
    v6 = v3;
  }
  return *(_BYTE *)(**((_QWORD **)v6 + 5) + a3) != 0;
}

