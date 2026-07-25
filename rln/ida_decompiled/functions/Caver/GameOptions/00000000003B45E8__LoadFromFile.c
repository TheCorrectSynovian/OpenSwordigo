/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B45E8
 * Mangled: _ZN5Caver11GameOptions12LoadFromFileERKSs
 * Demangled: Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F6B20  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 24
 *   0x00000000001F4E40  Caver::Proto::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5EB0  Caver::GameOptions::LoadFromProtobufMessage(Caver::Proto::GameOptions const&)
 *   0x00000000001F5FC0  Caver::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6440  Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *   0x00000000001F6AC0  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB570  Caver::MusicPlaylist::MusicPlaylist(void)
 *   0x00000000001FD840  Caver::GameOptions::SaveToProtobufMessage(Caver::Proto::GameOptions *)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FE470  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>(Caver::GUIViewLayout *)
 *   0x00000000001FE810  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x00000000001FFEE0  Caver::Proto::GameOptions::GameOptions(void)
 *   0x00000000002008C0  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x0000000000200CC0  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *   0x0000000000201C30  std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x0000000000202370  Caver::Proto::GameOptions::~GameOptions()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203A40  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 113
 *   insn=0x00000000003B45F8 string=0x00000000003B45FC "U"
 *   insn=0x00000000003B460C string=0x00000000003B4610 "&"
 *   insn=0x00000000003B4618 string=0x00000000003B461C "`"
 *   insn=0x00000000003B4618 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000003B4620 string=0x00000000003B4624 "/."
 *   insn=0x00000000003B462C string=0x00000000003B4630 "$\t"
 *   insn=0x00000000003B4630 string=0x00000000001F6AC0 "0'"
 *   insn=0x00000000003B463C string=0x00000000001F5EB0 "P'"
 *   insn=0x00000000003B4640 string=0x00000000003B4644 "K7"
 *   insn=0x00000000003B466C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B4674 string=0x00000000003B4678 ">7"
 *   insn=0x00000000003B4680 string=0x00000000003B4684 "2g"
 *   insn=0x00000000003B469C string=0x00000000003B46A0 "W"
 *   insn=0x00000000003B46B0 string=0x00000000003B46B4 "h"
 *   insn=0x00000000003B46BC string=0x00000000003B4798 "hn@"
 *   insn=0x00000000003B46CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B46D4 string=0x00000000001FB570 "0'"
 *   insn=0x00000000003B46DC string=0x00000000003B46E0 "L("
 *   insn=0x00000000003B46E0 string=0x00000000003B46E4 "h\n@"
 *   insn=0x00000000003B46EC string=0x00000000003B46F0 "T"
 *   insn=0x00000000003B46F0 string=0x00000000001F6440 "0'"
 *   insn=0x00000000003B46F4 string=0x00000000003B46F8 "?"
 *   insn=0x00000000003B4700 string=0x00000000003B4704 "("
 *   insn=0x00000000003B4708 string=0x00000000003B470C "("
 *   insn=0x00000000003B4710 string=0x00000000003B4714 "\t"
 *   insn=0x00000000003B4710 string=0x00000000003B4720 "(@"
 *   insn=0x00000000003B4714 string=0x00000000003B4718 ")"
 *   insn=0x00000000003B4718 string=0x00000000003B471C "\t"
 *   insn=0x00000000003B4730 string=0x00000000003B4788 "h"
 *   insn=0x00000000003B4738 string=0x00000000003B473C "=5"
 *   insn=0x00000000003B4740 string=0x00000000003B4744 "6"
 *   insn=0x00000000003B4748 string=0x00000000003B474C ""
 *   insn=0x00000000003B475C string=0x00000000003B4760 "\t@"
 *   insn=0x00000000003B4768 string=0x00000000003B476C ""
 *   insn=0x00000000003B477C string=0x00000000003B4780 "@"
 *   insn=0x00000000003B479C string=0x00000000003B47A0 "("
 *   insn=0x00000000003B479C string=0x00000000003B47B8 "i"A9"
 *   insn=0x00000000003B47A0 string=0x00000000003B47A4 "h"
 *   insn=0x00000000003B47A0 string=0x00000000003B47C4 "i&A9"
 *   insn=0x00000000003B47A4 string=0x00000000003B47D0 "iN@"
 *   insn=0x00000000003B47A8 string=0x00000000003B47DC "iR@"
 *   insn=0x00000000003B47B0 string=0x00000000003B47B4 "i"
 *   insn=0x00000000003B47B4 string=0x00000000003B4958 "h"
 *   insn=0x00000000003B47BC string=0x00000000003B47C0 "("
 *   insn=0x00000000003B47E0 string=0x00000000003B47E4 "h"
 *   insn=0x00000000003B47E8 string=0x00000000003B47EC "}"
 *   insn=0x00000000003B47F4 string=0x00000000001F5FC0 "P'"
 *   insn=0x00000000003B4814 string=0x00000000003B4818 "N8"
 *   insn=0x00000000003B4830 string=0x00000000003B4834 "5"
 *   insn=0x00000000003B4838 string=0x00000000003B483C ""
 *   insn=0x00000000003B484C string=0x00000000003B4850 "\t@"
 *   insn=0x00000000003B4858 string=0x00000000003B485C ""
 *   insn=0x00000000003B486C string=0x00000000003B4870 "@"
 *   insn=0x00000000003B4878 string=0x00000000003B487C "h.@"
 *   insn=0x00000000003B487C string=0x00000000003B4880 ")"
 *   insn=0x00000000003B4888 string=0x00000000003B488C ")"
 *   insn=0x00000000003B488C string=0x00000000003B4890 "("
 *   insn=0x00000000003B4894 string=0x00000000003B4898 "j<"
 *   insn=0x00000000003B4898 string=0x00000000003B489C "hn@"
 *   insn=0x00000000003B48A4 string=0x00000000003B48A8 "N"
 *   insn=0x00000000003B48EC string=0x00000000003B48F0 "5"
 *   insn=0x00000000003B48F4 string=0x00000000003B48F8 ""
 *   insn=0x00000000003B4908 string=0x00000000003B490C "\t@"
 *   insn=0x00000000003B4914 string=0x00000000003B4918 ""
 *   insn=0x00000000003B4928 string=0x00000000003B492C "@"
 *   insn=0x00000000003B4934 string=0x00000000003B4938 "h2@"
 *   insn=0x00000000003B4938 string=0x00000000003B493C ")"
 *   insn=0x00000000003B4944 string=0x00000000003B4948 ")"
 *   insn=0x00000000003B4948 string=0x00000000003B494C "("
 *   insn=0x00000000003B4950 string=0x00000000003B4954 ";<"
 *   insn=0x00000000003B495C string=0x00000000003B4960 "h"
 *   insn=0x00000000003B4964 string=0x00000000003B4968 "h"
 *   insn=0x00000000003B497C string=0x00000000003B4998 "N"
 *   insn=0x00000000003B49A8 string=0x00000000003B49B4 "?\n"
 *   insn=0x00000000003B49B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B49C4 string=0x00000000003B49C8 "4"
 *   insn=0x00000000003B49CC string=0x00000000003B49D0 ""
 *   insn=0x00000000003B49DC string=0x00000000003B49E0 "\t@"
 *   insn=0x00000000003B49EC string=0x00000000003B49F0 ""
 *   insn=0x00000000003B49FC string=0x00000000003B4A00 "@"
 *   insn=0x00000000003B4A10 string=0x00000000003B4A14 "Nf"
 *   insn=0x00000000003B4A24 string=0x00000000003B4A28 "T"
 *   insn=0x00000000003B4A38 string=0x00000000003B4A3C ")-"
 *   insn=0x00000000003B4A44 string=0x00000000003B4A48 "~#"
 *   insn=0x00000000003B4A48 string=0x00000000001FD840 "0'"
 *   insn=0x00000000003B4A58 string=0x00000000003B4A5C "E6"
 *   insn=0x00000000003B4A88 string=0x00000000003B4A8C "96"
 *   insn=0x00000000003B4A94 string=0x00000000003B4A98 "-f"
 *   insn=0x00000000003B4AB4 string=0x00000000003B4AB8 "h""
 *   insn=0x00000000003B4ABC string=0x00000000003B4AC0 "hn@"
 *   insn=0x00000000003B4AC0 string=0x00000000003B4AC4 "i&"
 *   insn=0x00000000003B4AC8 string=0x00000000003B4ACC "\n"
 *   insn=0x00000000003B4ACC string=0x00000000003B4AD0 "jn"
 *   insn=0x00000000003B4AD0 string=0x00000000003B4AD4 "i"
 *   insn=0x00000000003B4ADC string=0x00000000003B4AE0 "v.@"
 *   insn=0x00000000003B4AE0 string=0x00000000003B4AE4 ""
 *   insn=0x00000000003B4AE4 string=0x00000000003B4AE8 "hn"
 *   insn=0x00000000003B4AFC string=0x00000000003B4B00 "v."
 *   insn=0x00000000003B4AFC string=0x00000000001F4E40 "P'"
 *   insn=0x00000000003B4B08 string=0x00000000003B4B0C "m0"
 *   insn=0x00000000003B4B14 string=0x00000000003B4B18 "hn@"
 *   insn=0x00000000003B4B18 string=0x00000000003B4B1C "v2@"
 *   insn=0x00000000003B4B1C string=0x00000000003B4B20 ""
 *   insn=0x00000000003B4B20 string=0x00000000003B4B24 "hn"
 *   insn=0x00000000003B4B38 string=0x00000000003B4B3C "v2"
 *   insn=0x00000000003B4B44 string=0x00000000003B4B48 "^0"
 *   insn=0x00000000003B4B4C string=0x00000000003B4B50 "in@"
 *   insn=0x00000000003B4B50 string=0x00000000003B4B54 "h"
 *   insn=0x00000000003B4B58 string=0x00000000003B4B5C ")\t"
 *   insn=0x00000000003B4B5C string=0x00000000003B4B60 "h"
 *   insn=0x00000000003B4B64 string=0x00000000003B4B68 "in"
 *   insn=0x00000000003B4B68 string=0x00000000003B4B6C "h"
 *   insn=0x00000000003B4B90 string=0x00000000003B4B94 "L3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOptions::LoadFromFile(__int64 a1)
{
  _BYTE v1[112]; // [xsp+138h] [xbp-98h] BYREF
  __int64 v2; // [xsp+1A8h] [xbp-28h]

  v2 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A6A8(a1);
  if ( (Caver::FileExistsAtPath() & 1) != 0 )
  {
    Caver::Proto::GameOptions::GameOptions((Caver::Proto::GameOptions *)v1);
    Caver::LoadProtobufMessageFromFile();
    Caver::GameOptions::LoadFromProtobufMessage();
    Caver::Proto::GameOptions::~GameOptions((Caver::Proto::GameOptions *)v1);
  }
}

