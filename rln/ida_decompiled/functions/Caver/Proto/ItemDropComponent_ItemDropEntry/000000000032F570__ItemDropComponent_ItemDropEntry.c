/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F570
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntryC2ERKS1_
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FCBF0  Caver::Proto::ItemDropComponent_ItemDropEntry::SharedDtor(void)
 *   0x00000000001FE410  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 91
 *   insn=0x000000000032F580 string=0x000000000032F584 ""
 *   insn=0x000000000032F58C string=0x000000000032F590 ")B"
 *   insn=0x000000000032F594 string=0x000000000032F598 "J"
 *   insn=0x000000000032F598 string=0x000000000032F59C "A"
 *   insn=0x000000000032F59C string=0x000000000032F5A0 " "
 *   insn=0x000000000032F5A0 string=0x000000000032F5A4 "h"
 *   insn=0x000000000032F5A4 string=0x000000000032F5A8 "@"
 *   insn=0x000000000032F5A8 string=0x000000000032F5AC "`"
 *   insn=0x000000000032F5C8 string=0x000000000032F5CC " "
 *   insn=0x000000000032F5CC string=0x00000000001F7600 "0'"
 *   insn=0x000000000032F5D4 string=0x000000000032F5D8 "]{"
 *   insn=0x000000000032F5EC string=0x000000000032F5F0 "V"
 *   insn=0x000000000032F608 string=0x000000000032F648 "h"
 *   insn=0x000000000032F60C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032F61C string=0x000000000032F620 "t"
 *   insn=0x000000000032F620 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032F624 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032F630 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032F63C string=0x00000000001FA500 "0'"
 *   insn=0x000000000032F644 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032F648 string=0x000000000032F64C "H"
 *   insn=0x000000000032F64C string=0x000000000032F650 "H"
 *   insn=0x000000000032F654 string=0x000000000032F658 ""
 *   insn=0x000000000032F664 string=0x000000000032F668 "i*@"
 *   insn=0x000000000032F668 string=0x000000000032F66C ""
 *   insn=0x000000000032F6A0 string=0x000000000032F6A4 "u\n@"
 *   insn=0x000000000032F6A4 string=0x000000000032F6A8 ")B"
 *   insn=0x000000000032F6A8 string=0x000000000032F6AC ""
 *   insn=0x000000000032F6C0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032F6C4 string=0x000000000032F6C8 ""
 *   insn=0x000000000032F6C8 string=0x000000000032F6CC "a"
 *   insn=0x000000000032F6CC string=0x000000000032F6D0 ""
 *   insn=0x000000000032F6DC string=0x000000000032F6E0 "h.@"
 *   insn=0x000000000032F6F0 string=0x000000000032F6F4 "u"
 *   insn=0x000000000032F6F4 string=0x000000000032F6F8 ")"
 *   insn=0x000000000032F6F8 string=0x000000000032F6FC ""
 *   insn=0x000000000032F714 string=0x000000000032F718 ""
 *   insn=0x000000000032F718 string=0x000000000032F71C "a"
 *   insn=0x000000000032F71C string=0x000000000032F720 ""
 *   insn=0x000000000032F72C string=0x000000000032F730 "h.@"
 *   insn=0x000000000032F730 string=0x000000000032F734 "H"
 *   insn=0x000000000032F738 string=0x000000000032F73C "i"@"
 *   insn=0x000000000032F73C string=0x000000000032F740 ""
 *   insn=0x000000000032F748 string=0x000000000032F74C "h.@"
 *   insn=0x000000000032F754 string=0x000000000032F758 "i&@"
 *   insn=0x000000000032F758 string=0x000000000032F75C ""
 *   insn=0x000000000032F764 string=0x000000000032F768 "h.@"
 *   insn=0x000000000032F774 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032F784 string=0x000000000032F788 "OH\t"
 *   insn=0x000000000032F79C string=0x000000000032F7A0 ""
 *   insn=0x000000000032F7A4 string=0x000000000032F7A8 "A"
 *   insn=0x000000000032F7A8 string=0x000000000032F7AC "h"
 *   insn=0x000000000032F7B0 string=0x00000000001FCBF0 "0'"
 *   insn=0x000000000032F7D0 string=0x000000000032F7D4 "<H\t"
 *   insn=0x000000000032F7E8 string=0x000000000032F7EC "T"
 *   insn=0x000000000032F7FC string=0x000000000032F800 "`\n@"
 *   insn=0x000000000032F800 string=0x000000000032F804 "B"
 *   insn=0x000000000032F808 string=0x000000000032F80C " "
 *   insn=0x000000000032F810 string=0x000000000032F814 "\t"
 *   insn=0x000000000032F818 string=0x000000000032F81C "J"
 *   insn=0x000000000032F81C string=0x000000000032F820 "(a"
 *   insn=0x000000000032F82C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032F830 string=0x000000000032F834 "s"
 *   insn=0x000000000032F834 string=0x000000000032F838 ""
 *   insn=0x000000000032F83C string=0x000000000032F840 "@"
 *   insn=0x000000000032F840 string=0x000000000032F844 "3"
 *   insn=0x000000000032F844 string=0x000000000032F848 "h"
 *   insn=0x000000000032F84C string=0x000000000032F850 ")"
 *   insn=0x000000000032F870 string=0x000000000032F874 "A"
 *   insn=0x000000000032F874 string=0x000000000032F91C "m"
 *   insn=0x000000000032F888 string=0x000000000032F88C "J=G"
 *   insn=0x000000000032F88C string=0x000000000032F890 ")!"
 *   insn=0x000000000032F894 string=0x000000000032F898 "*"
 *   insn=0x000000000032F894 string=0x000000000032F8D0 "*"
 *   insn=0x000000000032F898 string=0x000000000032F89C "K"
 *   insn=0x000000000032F89C string=0x000000000032F8A0 "+"
 *   insn=0x000000000032F8A4 string=0x000000000032F8A8 ""
 *   insn=0x000000000032F8A8 string=0x000000000032F8DC "_"
 *   insn=0x000000000032F8AC string=0x000000000032F8B0 ")=G"
 *   insn=0x000000000032F8B0 string=0x000000000032F8B4 "!"
 *   insn=0x000000000032F8B4 string=0x000000000032F8B8 ")"
 *   insn=0x000000000032F8B8 string=0x000000000032F8BC "\t"
 *   insn=0x000000000032F8B8 string=0x000000000032F8FC "\t"
 *   insn=0x000000000032F8BC string=0x000000000032F8C0 "*"
 *   insn=0x000000000032F8C0 string=0x000000000032F8C4 "\n"
 *   insn=0x000000000032F8CC string=0x000000000032F908 "?"
 *   insn=0x000000000032F8D0 string=0x000000000032F8D4 "K"
 *   insn=0x000000000032F8D4 string=0x000000000032F8D8 "+"
 *   insn=0x000000000032F8DC string=0x000000000032F8E0 "l"
 *   insn=0x000000000032F8FC string=0x000000000032F900 "*"
 *   insn=0x000000000032F900 string=0x000000000032F904 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        const Caver::Proto::ItemDropComponent_ItemDropEntry *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_;
  *(_QWORD *)this = off_6C9540;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(this, a2);
  return result;
}

