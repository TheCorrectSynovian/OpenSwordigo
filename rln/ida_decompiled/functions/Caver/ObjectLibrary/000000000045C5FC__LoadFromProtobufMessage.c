/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045C5FC
 * Mangled: _ZN5Caver13ObjectLibrary23LoadFromProtobufMessageERKNS_5Proto13ObjectLibraryE
 * Demangled: Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callers: 2
 *   0x00000000001F9E60  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045C260  Caver::ObjectLibrary::~ObjectLibrary()
 *
 * Callees: 24
 *   0x00000000001F3780  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F4690  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *   0x00000000001F4780  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6100  Caver::Proto::ObjectTemplate::CopyFrom(Caver::Proto::ObjectTemplate const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F8D10  boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>(Caver::Proto::ObjectTemplate *)
 *   0x00000000001F90D0  Caver::Proto::ObjectTemplate::ObjectTemplate(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000200180  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *   0x0000000000200210  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *   0x0000000000202390  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000045CDB0  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 206
 *   insn=0x000000000045C618 string=0x000000000045C61C "Y"
 *   insn=0x000000000045C61C string=0x000000000045C620 "("
 *   insn=0x000000000045C62C string=0x000000000045C630 "h"
 *   insn=0x000000000045C634 string=0x000000000045C638 "a\n@"
 *   insn=0x000000000045C634 string=0x000000000045C644 "h"
 *   insn=0x000000000045C648 string=0x000000000045C64C "k"
 *   insn=0x000000000045C64C string=0x000000000045C650 "I"
 *   insn=0x000000000045C64C string=0x000000000045C758 "h"@"
 *   insn=0x000000000045C650 string=0x000000000045C654 ")"
 *   insn=0x000000000045C664 string=0x000000000045C668 ":a"
 *   insn=0x000000000045C670 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045C690 string=0x00000000001F38E0 "P'"
 *   insn=0x000000000045C6A0 string=0x000000000045C6A4 "hb@"
 *   insn=0x000000000045C6B4 string=0x000000000045C6B8 "?"
 *   insn=0x000000000045C6C0 string=0x000000000045C6C4 "("
 *   insn=0x000000000045C6C8 string=0x000000000045C6CC "("
 *   insn=0x000000000045C6D0 string=0x000000000045C6D4 "\t"
 *   insn=0x000000000045C6D0 string=0x000000000045C6E0 "(@"
 *   insn=0x000000000045C6D4 string=0x000000000045C6D8 ")"
 *   insn=0x000000000045C6D8 string=0x000000000045C6DC "\t"
 *   insn=0x000000000045C6F0 string=0x000000000045C748 "h"
 *   insn=0x000000000045C6FC string=0x00000000001F4690 "P'"
 *   insn=0x000000000045C700 string=0x000000000045C704 "7"
 *   insn=0x000000000045C708 string=0x000000000045C70C ""
 *   insn=0x000000000045C71C string=0x000000000045C720 "\t@"
 *   insn=0x000000000045C728 string=0x000000000045C72C ""
 *   insn=0x000000000045C73C string=0x000000000045C740 "@"
 *   insn=0x000000000045C75C string=0x000000000045C760 "K\n"
 *   insn=0x000000000045C760 string=0x000000000045C764 "["
 *   insn=0x000000000045C760 string=0x000000000045C8A8 "hZ@"
 *   insn=0x000000000045C764 string=0x000000000045C768 "{OE"
 *   insn=0x000000000045C770 string=0x000000000045C774 "h"
 *   insn=0x000000000045C78C string=0x000000000045C790 "|"
 *   insn=0x000000000045C798 string=0x000000000045C79C "]q"
 *   insn=0x000000000045C79C string=0x00000000001F8D10 "0'"
 *   insn=0x000000000045C7A8 string=0x000000000045C7AC "i"
 *   insn=0x000000000045C7B0 string=0x000000000045C7B4 "("
 *   insn=0x000000000045C7B4 string=0x000000000045C7B8 "\t@"
 *   insn=0x000000000045C7C8 string=0x00000000001F3780 "P'"
 *   insn=0x000000000045C7D4 string=0x000000000045C7D8 ""
 *   insn=0x000000000045C7E4 string=0x000000000045C7E8 "8"
 *   insn=0x000000000045C7E8 string=0x000000000045C7EC "@"
 *   insn=0x000000000045C7EC string=0x000000000045C7F0 ""
 *   insn=0x000000000045C7F0 string=0x000000000045C7F4 ""
 *   insn=0x000000000045C7F8 string=0x000000000045C7FC ""
 *   insn=0x000000000045C7FC string=0x000000000045C800 "\t@"
 *   insn=0x000000000045C808 string=0x000000000045C80C "@"
 *   insn=0x000000000045C80C string=0x000000000045C810 ""
 *   insn=0x000000000045C810 string=0x000000000045C814 ""
 *   insn=0x000000000045C818 string=0x000000000045C81C ""
 *   insn=0x000000000045C81C string=0x000000000045C820 "@"
 *   insn=0x000000000045C834 string=0x000000000045C838 "@"
 *   insn=0x000000000045C834 string=0x000000000045C854 "6"
 *   insn=0x000000000045C838 string=0x000000000045C83C ""
 *   insn=0x000000000045C83C string=0x000000000045C840 ""
 *   insn=0x000000000045C844 string=0x000000000045C848 ""
 *   insn=0x000000000045C848 string=0x000000000045C84C ""
 *   insn=0x000000000045C854 string=0x000000000045C898 "h""
 *   insn=0x000000000045C858 string=0x000000000045C85C ""
 *   insn=0x000000000045C86C string=0x000000000045C870 "\t@"
 *   insn=0x000000000045C878 string=0x000000000045C87C ""
 *   insn=0x000000000045C88C string=0x000000000045C890 "@"
 *   insn=0x000000000045C898 string=0x000000000045C89C "Z"
 *   insn=0x000000000045C89C string=0x000000000045C8A0 "_"
 *   insn=0x000000000045C8AC string=0x000000000045C8B0 ""
 *   insn=0x000000000045C8B0 string=0x000000000045C970 "("
 *   insn=0x000000000045C8B8 string=0x000000000045C8BC "h*@"
 *   insn=0x000000000045C8C8 string=0x00000000001F4780 "P'"
 *   insn=0x000000000045C8CC string=0x000000000045C8D0 "?"
 *   insn=0x000000000045C8D8 string=0x000000000045C8DC "("
 *   insn=0x000000000045C8E0 string=0x000000000045C8E4 "("
 *   insn=0x000000000045C8E8 string=0x000000000045C8EC "\t"
 *   insn=0x000000000045C8E8 string=0x000000000045C8F8 "(@"
 *   insn=0x000000000045C8EC string=0x000000000045C8F0 ")"
 *   insn=0x000000000045C8F0 string=0x000000000045C8F4 "\t"
 *   insn=0x000000000045C908 string=0x000000000045C960 "hZ"
 *   insn=0x000000000045C910 string=0x000000000045C914 "?"
 *   insn=0x000000000045C918 string=0x000000000045C91C "6"
 *   insn=0x000000000045C920 string=0x000000000045C924 ""
 *   insn=0x000000000045C934 string=0x000000000045C938 "\t@"
 *   insn=0x000000000045C940 string=0x000000000045C944 ""
 *   insn=0x000000000045C954 string=0x000000000045C958 "@"
 *   insn=0x000000000045C978 string=0x000000000045C97C "!"
 *   insn=0x000000000045C97C string=0x000000000045C9A0 "Lf"
 *   insn=0x000000000045C9A0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045C9B0 string=0x000000000045C9B4 ""
 *   insn=0x000000000045C9B8 string=0x000000000045C9BC "A"
 *   insn=0x000000000045C9C0 string=0x000000000045C9C4 "\t@"
 *   insn=0x000000000045C9D0 string=0x000000000045C9D4 ""
 *   insn=0x000000000045C9D8 string=0x000000000045C9DC "A"
 *   insn=0x000000000045C9E0 string=0x000000000045C9E4 "@"
 *   insn=0x000000000045C9EC string=0x000000000045C9F0 "-"
 *   insn=0x000000000045C9F8 string=0x000000000045C9FC "-j"
 *   insn=0x000000000045C9FC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045CA10 string=0x000000000045CA14 ""
 *   insn=0x000000000045CA18 string=0x000000000045CA1C "A"
 *   insn=0x000000000045CA20 string=0x000000000045CA24 "\t@"
 *   insn=0x000000000045CA30 string=0x000000000045CA34 ""
 *   insn=0x000000000045CA38 string=0x000000000045CA3C "A"
 *   insn=0x000000000045CA40 string=0x000000000045CA44 "@"
 *   insn=0x000000000045CA5C string=0x000000000045CA60 "4"
 *   insn=0x000000000045CA64 string=0x000000000045CA68 ""
 *   insn=0x000000000045CA74 string=0x000000000045CA78 "\t@"
 *   insn=0x000000000045CA84 string=0x000000000045CA88 ""
 *   insn=0x000000000045CA94 string=0x000000000045CA98 "@"
 *   insn=0x000000000045CAA8 string=0x000000000045CAAC "("
 *   insn=0x000000000045CAD0 string=0x000000000045CAD4 ""
 *   insn=0x000000000045CAD4 string=0x000000000045CAD8 "H"
 *   insn=0x000000000045CAD8 string=0x000000000045CADC "I"
 *   insn=0x000000000045CADC string=0x000000000045CAE0 "h"
 *   insn=0x000000000045CAE0 string=0x000000000045CAE4 "`\n@"
 *   insn=0x000000000045CAE4 string=0x000000000045CAE8 ")"
 *   insn=0x000000000045CAE8 string=0x000000000045CAEC ""
 *   insn=0x000000000045CAEC string=0x000000000045CAF0 "h"
 *   insn=0x000000000045CB00 string=0x000000000045CB04 "H"
 *   insn=0x000000000045CB04 string=0x000000000045CB08 ""
 *   insn=0x000000000045CB08 string=0x000000000045CB0C "a"
 *   insn=0x000000000045CB0C string=0x000000000045CB10 ""
 *   insn=0x000000000045CB10 string=0x000000000045CB14 "`\n"
 *   insn=0x000000000045CB28 string=0x000000000045CB2C "u"
 *   insn=0x000000000045CB2C string=0x000000000045CB30 "i"Y)"
 *   insn=0x000000000045CB34 string=0x000000000045CB38 ")}@"
 *   insn=0x000000000045CB38 string=0x000000000045CB3C "?"
 *   insn=0x000000000045CB40 string=0x000000000045CB44 "hb@"
 *   insn=0x000000000045CB40 string=0x000000000045CB58 "i"
 *   insn=0x000000000045CB44 string=0x000000000045CB48 "*"
 *   insn=0x000000000045CB48 string=0x000000000045CB4C "j"
 *   insn=0x000000000045CB60 string=0x000000000045CB74 ""
 *   insn=0x000000000045CB68 string=0x000000000045CB6C "mx"
 *   insn=0x000000000045CB6C string=0x000000000045CB70 "h"
 *   insn=0x000000000045CB6C string=0x00000000001FAD20 "0'"
 *   insn=0x000000000045CB78 string=0x000000000045CB7C "h"
 *   insn=0x000000000045CB88 string=0x000000000045CB8C "h"
 *   insn=0x000000000045CB88 string=0x00000000001F5000 "P'"
 *   insn=0x000000000045CB8C string=0x000000000045CB90 "ib@"
 *   insn=0x000000000045CB90 string=0x000000000045CB94 "\n"
 *   insn=0x000000000045CB94 string=0x000000000045CB98 "j"
 *   insn=0x000000000045CB98 string=0x000000000045CB9C "7y("
 *   insn=0x000000000045CBA8 string=0x00000000001F8790 "0'"
 *   insn=0x000000000045CBAC string=0x000000000045CBB0 "?"
 *   insn=0x000000000045CBC4 string=0x000000000045CBC8 "vb"
 *   insn=0x000000000045CBCC string=0x000000000045CBD0 "W"
 *   insn=0x000000000045CBD0 string=0x000000000045CBD4 "i"D))}@"
 *   insn=0x000000000045CBD0 string=0x000000000045CBF8 "i"D)"
 *   insn=0x000000000045CBD4 string=0x000000000045CBD8 ")}@"
 *   insn=0x000000000045CBD8 string=0x000000000045CBDC "?"
 *   insn=0x000000000045CBDC string=0x000000000045CBE0 "\n"
 *   insn=0x000000000045CBE0 string=0x000000000045CBE4 "h"
 *   insn=0x000000000045CBE0 string=0x000000000045CC20 "i*@"
 *   insn=0x000000000045CBE4 string=0x000000000045CBE8 "*"
 *   insn=0x000000000045CBE8 string=0x000000000045CBEC "j""
 *   insn=0x000000000045CBFC string=0x000000000045CC00 ")}@"
 *   insn=0x000000000045CC00 string=0x000000000045CC04 "?"
 *   insn=0x000000000045CC08 string=0x000000000045CC0C "h"
 *   insn=0x000000000045CC08 string=0x000000000045CC78 "i*@"
 *   insn=0x000000000045CC0C string=0x000000000045CC10 "*"
 *   insn=0x000000000045CC10 string=0x000000000045CC14 "j""
 *   insn=0x000000000045CC18 string=0x000000000045CC1C ")"
 *   insn=0x000000000045CC28 string=0x000000000045CC3C ""
 *   insn=0x000000000045CC30 string=0x000000000045CC34 ";x"
 *   insn=0x000000000045CC34 string=0x000000000045CC38 "h&@"
 *   insn=0x000000000045CC40 string=0x000000000045CC44 "h&"
 *   insn=0x000000000045CC44 string=0x000000000045CC48 "fb"
 *   insn=0x000000000045CC4C string=0x000000000045CC50 " q"
 *   insn=0x000000000045CC50 string=0x000000000045CC54 "h""
 *   insn=0x000000000045CC50 string=0x00000000001F90D0 "0'"
 *   insn=0x000000000045CC54 string=0x000000000045CC58 "i"
 *   insn=0x000000000045CC58 string=0x000000000045CC5C "\n"
 *   insn=0x000000000045CC5C string=0x000000000045CC60 "j""
 *   insn=0x000000000045CC60 string=0x000000000045CC64 "8y("
 *   insn=0x000000000045CC80 string=0x000000000045CC94 ""
 *   insn=0x000000000045CC88 string=0x000000000045CC8C "%x"
 *   insn=0x000000000045CC8C string=0x000000000045CC90 "h&@"
 *   insn=0x000000000045CC98 string=0x000000000045CC9C "h&"
 *   insn=0x000000000045CC9C string=0x000000000045CCA0 "Pb"
 *   insn=0x000000000045CCA4 string=0x000000000045CCA8 "\nq"
 *   insn=0x000000000045CCA8 string=0x000000000045CCAC "h""
 *   insn=0x000000000045CCAC string=0x000000000045CCB0 "i"
 *   insn=0x000000000045CCB0 string=0x000000000045CCB4 "\n"
 *   insn=0x000000000045CCB4 string=0x000000000045CCB8 "j""
 *   insn=0x000000000045CCB8 string=0x000000000045CCBC "8y("
 *   insn=0x000000000045CCC8 string=0x00000000001F6100 "0'"
 *   insn=0x000000000045CCCC string=0x000000000045CCD0 "t"
 *   insn=0x000000000045CCE4 string=0x000000000045CCE8 "`"
 *   insn=0x000000000045CCE8 string=0x000000000045CCEC "tB"
 *   insn=0x000000000045CCF4 string=0x000000000045CCF8 ""
 *   insn=0x000000000045CCF8 string=0x000000000045CCFC "h"
 *   insn=0x000000000045CCFC string=0x000000000045CD00 "i"K))}@"
 *   insn=0x000000000045CD00 string=0x000000000045CD04 ")}@"
 *   insn=0x000000000045CD04 string=0x000000000045CD08 "?"
 *   insn=0x000000000045CD0C string=0x000000000045CD10 "h*@"
 *   insn=0x000000000045CD0C string=0x000000000045CD24 "ib@"
 *   insn=0x000000000045CD10 string=0x000000000045CD14 "*"
 *   insn=0x000000000045CD14 string=0x000000000045CD18 "jZ"
 *   insn=0x000000000045CD2C string=0x000000000045CD40 ""
 *   insn=0x000000000045CD38 string=0x000000000045CD3C "h^@"
 *   insn=0x000000000045CD40 string=0x000000000045CD44 "h^"
 *   insn=0x000000000045CD44 string=0x000000000045CD48 "._"
 *   insn=0x000000000045CD48 string=0x000000000045CD4C "hZ"
 *   insn=0x000000000045CD48 string=0x00000000001F4A00 "P'"
 *   insn=0x000000000045CD4C string=0x000000000045CD50 "i*@"
 *   insn=0x000000000045CD50 string=0x000000000045CD54 "\n"
 *   insn=0x000000000045CD54 string=0x000000000045CD58 "jZ"
 *   insn=0x000000000045CD58 string=0x000000000045CD5C " y("
 *   insn=0x000000000045CD60 string=0x000000000045CD64 "Q6"
 *   insn=0x000000000045CD98 string=0x000000000045CDA4 "Ci"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLibrary::LoadFromProtobufMessage(
        Caver::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  __int64 v4; // x24
  Caver::Program *v5; // x0
  Caver::Program **v6; // x1
  _QWORD *v7; // x23
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x26
  const Caver::Proto::ObjectTemplate *v11; // x22
  Caver::Proto::ObjectTemplate *v12; // x0
  Caver::Program *v13; // x28
  _QWORD *v14; // x0
  _QWORD *v15; // x23
  _QWORD *v16; // x24
  __int64 v17; // x8
  __int64 v18; // x8
  _DWORD *v19; // x0
  int v20; // w8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x23
  Caver::Program **v24; // x1
  _QWORD *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x8
  Caver::Program *v28; // [xsp+58h] [xbp-68h]
  _QWORD *v29; // [xsp+60h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (*((_BYTE *)a2 + 248) & 1) != 0 )
    sub_56A6A8(this);
  if ( *((int *)a2 + 50) >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = (Caver::Program *)operator new(0x28u);
      *((_QWORD *)v5 + 3) = 0;
      *((_QWORD *)v5 + 4) = 0;
      *((_QWORD *)v5 + 1) = 0;
      *((_QWORD *)v5 + 2) = 0;
      *(_QWORD *)v5 = &byte_6FD2F8;
      v28 = v5;
      boost::detail::shared_count::shared_count<Caver::Program>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Program::LoadFromProtobufMessage(v28, *(const Caver::Proto::Program **)(*((_QWORD *)a2 + 24) + 8 * v4));
      v6 = (Caver::Program **)*((_QWORD *)this + 14);
      if ( v6 != *((Caver::Program ***)this + 15) )
        break;
      std::vector<boost::shared_ptr<Caver::Program>>::_M_insert_aux();
      v7 = v29;
      if ( v29 )
        goto LABEL_11;
LABEL_14:
      if ( ++v4 >= *((int *)a2 + 50) )
        goto LABEL_15;
    }
    *v6 = v28;
    v6[1] = (Caver::Program *)v29;
    if ( v29 )
      ++v29[1];
    *((_QWORD *)this + 14) = v6 + 2;
    v7 = v29;
    if ( !v29 )
      goto LABEL_14;
LABEL_11:
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( *((int *)a2 + 8) >= 1 )
  {
    v10 = 0;
    do
    {
      v11 = *(const Caver::Proto::ObjectTemplate **)(*((_QWORD *)a2 + 3) + 8 * v10);
      v12 = (Caver::Proto::ObjectTemplate *)operator new(0x20u);
      Caver::Proto::ObjectTemplate::ObjectTemplate(v12, v11);
      boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>();
      v13 = v28;
      v28 = 0;
      v14 = (_QWORD *)std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo>::operator[]();
      v15 = v14;
      if ( v29 )
        ++v29[1];
      v16 = (_QWORD *)v14[1];
      *v14 = v13;
      v14[1] = v29;
      if ( v16 )
      {
        v17 = v16[1] - 1LL;
        v16[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
      v19 = (_DWORD *)v15[2];
      v15[2] = 0;
      if ( v19 )
      {
        v20 = v19[2] - 1;
        v19[2] = v20;
        if ( !v20 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
      }
      if ( v29 )
      {
        v21 = v29[1] - 1LL;
        v29[1] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)())(*v29 + 16LL))();
          v22 = v29[2] - 1LL;
          v29[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)())(*v29 + 24LL))();
        }
      }
      ++v10;
    }
    while ( v10 < *((int *)a2 + 8) );
  }
  if ( *((int *)a2 + 22) >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Caver::ObjectLibrary::LibraryWithName();
      v24 = (Caver::Program **)*((_QWORD *)this + 8);
      if ( v24 != *((Caver::Program ***)this + 9) )
        break;
      std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_insert_aux();
      v25 = v29;
      if ( v29 )
        goto LABEL_39;
LABEL_42:
      if ( ++v23 >= *((int *)a2 + 22) )
        return;
    }
    *v24 = v28;
    v24[1] = (Caver::Program *)v29;
    if ( v29 )
      ++v29[1];
    *((_QWORD *)this + 8) = v24 + 2;
    v25 = v29;
    if ( !v29 )
      goto LABEL_42;
LABEL_39:
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
    goto LABEL_42;
  }
}

