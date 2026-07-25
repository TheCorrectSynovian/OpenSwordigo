/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D87B8
 * Mangled: _ZN6google8protobuf8internal12ExtensionSetD2Ev
 * Demangled: google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callers: 1
 *   0x0000000000203370  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F00  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *   0x00000000001FD340  google::protobuf::internal::ExtensionSet::Extension::Free(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004D8A18  google::protobuf::internal::ExtensionSet::Has(int)
 *   0x000000000054C640  sub_54C640
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x00000000004D87C8 string=0x00000000004D87CC "t"
 *   insn=0x00000000004D87CC string=0x00000000004D87D0 "u""
 *   insn=0x00000000004D87D8 string=0x00000000004D87DC "\t"
 *   insn=0x00000000004D87DC string=0x00000000004D8800 "a\n@"
 *   insn=0x00000000004D87F8 string=0x00000000001FD340 "0'"
 *   insn=0x00000000004D8814 string=0x00000000001F7F00 "0'"
 *   insn=0x00000000004D8828 string=0x00000000004D882C "&"
 *   insn=0x00000000004D8844 string=0x00000000004D8848 "T"
 *   insn=0x00000000004D884C string=0x00000000004D8850 "j"
 *   insn=0x00000000004D8854 string=0x00000000004D8858 " @9\t$@9J"
 *   insn=0x00000000004D8858 string=0x00000000004D885C "\t$@9J"
 *   insn=0x00000000004D885C string=0x00000000004D8860 "J"
 *   insn=0x00000000004D8860 string=0x00000000004D8864 "Hyh"
 *   insn=0x00000000004D8864 string=0x00000000004D8868 "I"
 *   insn=0x00000000004D8868 string=0x00000000004D886C ""
 *   insn=0x00000000004D8874 string=0x00000000004D8878 "\t"
 *   insn=0x00000000004D8878 string=0x00000000004D8880 "(y"
 *   insn=0x00000000004D8878 string=0x0000000000598630 "\"
 *   insn=0x00000000004D8880 string=0x00000000004D8884 ""
 *   insn=0x00000000004D88A8 string=0x00000000004D88AC ""
 *   insn=0x00000000004D88A8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D88B8 string=0x00000000004D88BC "a"
 *   insn=0x00000000004D88C0 string=0x00000000004D88C4 "3"
 *   insn=0x00000000004D88C4 string=0x00000000004D88C8 "h"
 *   insn=0x00000000004D88C8 string=0x00000000004D88CC "i"
 *   insn=0x00000000004D88CC string=0x00000000004D88D0 ")"
 *   insn=0x00000000004D88DC string=0x00000000004D89B8 "i"
 *   insn=0x00000000004D88E0 string=0x00000000004D88E4 "sz"
 *   insn=0x00000000004D88E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D88F0 string=0x00000000004D88F4 "A"
 *   insn=0x00000000004D88F4 string=0x00000000004D89FC "5v"
 *   insn=0x00000000004D8910 string=0x00000000004D8914 ""
 *   insn=0x00000000004D8914 string=0x00000000004D8918 ""
 *   insn=0x00000000004D8928 string=0x00000000004D892C "i"
 *   insn=0x00000000004D892C string=0x00000000004D8930 "`"
 *   insn=0x00000000004D8930 string=0x00000000004D8934 "?"
 *   insn=0x00000000004D8938 string=0x00000000004D89A8 "hb"
 *   insn=0x00000000004D893C string=0x00000000004D8940 "xu"
 *   insn=0x00000000004D8944 string=0x00000000004D8948 "\t"
 *   insn=0x00000000004D8948 string=0x00000000004D894C ")"
 *   insn=0x00000000004D8950 string=0x00000000004D8954 " "
 *   insn=0x00000000004D8954 string=0x00000000004D8958 "i"
 *   insn=0x00000000004D8958 string=0x00000000004D895C "`"
 *   insn=0x00000000004D8974 string=0x00000000004D8978 "h"
 *   insn=0x00000000004D8978 string=0x00000000004D897C "`"
 *   insn=0x00000000004D8980 string=0x00000000004D8984 "+"
 *   insn=0x00000000004D8990 string=0x00000000004D8994 "h"
 *   insn=0x00000000004D8990 string=0x00000000001F6CB0 "0'"
 *   insn=0x00000000004D8994 string=0x00000000004D8998 "`"
 *   insn=0x00000000004D89A0 string=0x00000000004D89A4 "K"
 *   insn=0x00000000004D89B8 string=0x00000000004D89BC ")=G"
 *   insn=0x00000000004D89BC string=0x00000000004D89C0 "!"
 *   insn=0x00000000004D89C4 string=0x00000000004D89C8 "\t"
 *   insn=0x00000000004D89C4 string=0x00000000004D89DC "\t"
 *   insn=0x00000000004D89C8 string=0x00000000004D89CC "*"
 *   insn=0x00000000004D89CC string=0x00000000004D89D0 "\n"
 *   insn=0x00000000004D89D8 string=0x00000000004D89E8 "?"
 *   insn=0x00000000004D89DC string=0x00000000004D89E0 "*"
 *   insn=0x00000000004D89E0 string=0x00000000004D89E4 "\n"
 *   insn=0x00000000004D89F0 string=0x00000000004D89F4 "lF"
 *   insn=0x00000000004D89FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D8A08 string=0x00000000004D8A0C ")z"
 *   insn=0x00000000004D8A14 string=0x00000000004D8A18 "\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::ExtensionSet::~ExtensionSet(google::protobuf::internal::ExtensionSet *this)
{
  __int64 v1; // x20
  char *v2; // x21

  v1 = *((_QWORD *)this + 3);
  v2 = (char *)this + 8;
  if ( (google::protobuf::internal::ExtensionSet *)v1 != (google::protobuf::internal::ExtensionSet *)((char *)this + 8) )
  {
    do
    {
      google::protobuf::internal::ExtensionSet::Extension::Free((google::protobuf::internal::ExtensionSet::Extension *)(v1 + 40));
      v1 = sub_54C640(v1);
    }
    while ( (char *)v1 != v2 );
  }
  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase();
}

