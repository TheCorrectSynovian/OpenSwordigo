/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000463780
 * Mangled: _ZN5Caver5Scene12LoadFromFileERKSs
 * Demangled: Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callers: 2
 *   0x00000000002011A0  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000463748  Caver::Scene::~Scene()
 *
 * Callees: 36
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F42A0  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F59B0  Caver::Proto::Scene::Scene(void)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6AC0  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7460  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F91F0  Caver::Proto::ObjectLibrary::ObjectLibrary(void)
 *   0x00000000001F9E60  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FB2B0  Caver::Scene::LoadFromProtobufMessage(Caver::Proto::Scene const&)
 *   0x00000000001FB940  Caver::SceneObject::LoadFromProtobufMessage(Caver::Proto::SceneObject const&)
 *   0x00000000001FBA40  Caver::Proto::SceneObject::SceneObject(void)
 *   0x00000000001FC6B0  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000001FC890  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000001FDFB0  Caver::Proto::Scene::~Scene()
 *   0x0000000000200470  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *   0x0000000000200500  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find(std::string const&)
 *   0x00000000002008C0  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000201AC0  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *   0x0000000000202170  Caver::SceneObject::SaveToProtobufMessage(Caver::Proto::SceneObject *)
 *   0x0000000000202200  Caver::ObjectLibrary::SaveToProtobufMessage(Caver::Proto::ObjectLibrary *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002039D0  Caver::Scene::SaveToProtobufMessage(Caver::Proto::Scene *)
 *   0x0000000000203B90  Caver::Proto::SceneObjectGroup::SceneObjectGroup(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 195
 *   insn=0x0000000000463790 string=0x0000000000463794 "U"
 *   insn=0x00000000004637AC string=0x00000000001F59B0 "P'"
 *   insn=0x00000000004637B8 string=0x00000000001F6AC0 "0'"
 *   insn=0x00000000004637C8 string=0x00000000001FB2B0 "0'"
 *   insn=0x00000000004637DC string=0x00000000001FDFB0 "0'"
 *   insn=0x0000000000463808 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000463818 string=0x000000000046381C "*x"
 *   insn=0x0000000000463840 string=0x0000000000463844 "Y"
 *   insn=0x0000000000463844 string=0x0000000000463848 "("
 *   insn=0x0000000000463858 string=0x000000000046385C "5"
 *   insn=0x0000000000463858 string=0x00000000001FC6B0 "0'"
 *   insn=0x000000000046385C string=0x0000000000463860 "hF@"
 *   insn=0x0000000000463874 string=0x0000000000463878 "("
 *   insn=0x0000000000463878 string=0x000000000046387C "E@"
 *   insn=0x0000000000463880 string=0x0000000000463884 "\n"
 *   insn=0x0000000000463884 string=0x0000000000463888 "AA"
 *   insn=0x0000000000463888 string=0x000000000046388C ")"
 *   insn=0x0000000000463890 string=0x0000000000463894 " "
 *   insn=0x0000000000463894 string=0x0000000000463898 "hB@"
 *   insn=0x00000000004638A4 string=0x00000000004638A8 "("
 *   insn=0x00000000004638AC string=0x00000000004638B0 "lY"
 *   insn=0x00000000004638B0 string=0x00000000004638B4 "h"
 *   insn=0x00000000004638B0 string=0x00000000001F9E60 "0'"
 *   insn=0x00000000004638BC string=0x0000000000463994 "hR@"
 *   insn=0x00000000004638C0 string=0x00000000004638C4 "h\n@"
 *   insn=0x00000000004638CC string=0x00000000004638D0 "DG"
 *   insn=0x00000000004638D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004638D8 string=0x00000000001FAB30 "0'"
 *   insn=0x00000000004638E0 string=0x00000000004638E4 ""
 *   insn=0x00000000004638F4 string=0x00000000001FB940 "0'"
 *   insn=0x0000000000463920 string=0x0000000000463924 "?H"
 *   insn=0x0000000000463924 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000046392C string=0x0000000000463930 "@"
 *   insn=0x0000000000463930 string=0x0000000000463934 ""
 *   insn=0x0000000000463934 string=0x0000000000463938 ""
 *   insn=0x000000000046393C string=0x0000000000463940 ""
 *   insn=0x0000000000463940 string=0x0000000000463944 ""
 *   insn=0x000000000046394C string=0x0000000000463950 ""
 *   insn=0x0000000000463964 string=0x0000000000463968 "@"
 *   insn=0x0000000000463964 string=0x0000000000463984 "h"
 *   insn=0x0000000000463968 string=0x000000000046396C ""
 *   insn=0x000000000046396C string=0x0000000000463970 ""
 *   insn=0x0000000000463974 string=0x0000000000463978 ""
 *   insn=0x0000000000463978 string=0x000000000046397C ""
 *   insn=0x000000000046399C string=0x0000000000463A94 "hbB9h"
 *   insn=0x00000000004639A8 string=0x00000000004639AC "h&@"
 *   insn=0x00000000004639B4 string=0x00000000004639B8 "\nG"
 *   insn=0x00000000004639BC string=0x00000000004639C0 "8B"
 *   insn=0x00000000004639C0 string=0x00000000001F42A0 "P'"
 *   insn=0x00000000004639C8 string=0x00000000004639CC ""
 *   insn=0x00000000004639DC string=0x00000000001FC890 "0'"
 *   insn=0x0000000000463A00 string=0x0000000000463A04 " "
 *   insn=0x0000000000463A0C string=0x0000000000463A10 "@"
 *   insn=0x0000000000463A10 string=0x0000000000463A14 ""
 *   insn=0x0000000000463A14 string=0x0000000000463A18 ""
 *   insn=0x0000000000463A24 string=0x0000000000463A28 "@"
 *   insn=0x0000000000463A28 string=0x0000000000463A2C ""
 *   insn=0x0000000000463A2C string=0x0000000000463A30 ""
 *   insn=0x0000000000463A34 string=0x0000000000463A38 ""
 *   insn=0x0000000000463A38 string=0x0000000000463A3C ""
 *   insn=0x0000000000463A48 string=0x0000000000463A4C "Z"
 *   insn=0x0000000000463A4C string=0x0000000000463A50 "_"
 *   insn=0x0000000000463A60 string=0x00000000001F7460 "0'"
 *   insn=0x0000000000463A64 string=0x0000000000463A68 ""
 *   insn=0x0000000000463A70 string=0x0000000000463A84 "hR"
 *   insn=0x0000000000463A78 string=0x0000000000463A7C ""
 *   insn=0x0000000000463A84 string=0x0000000000463A88 "{"
 *   insn=0x0000000000463A94 string=0x0000000000463A98 "h"
 *   insn=0x0000000000463A98 string=0x0000000000463B64 "("
 *   insn=0x0000000000463AA0 string=0x0000000000463AA4 ""
 *   insn=0x0000000000463AA4 string=0x0000000000463AA8 ""
 *   insn=0x0000000000463AB0 string=0x0000000000463AB4 " !"
 *   insn=0x0000000000463AB4 string=0x0000000000463AB8 "a"
 *   insn=0x0000000000463AD0 string=0x00000000001F38E0 "P'"
 *   insn=0x0000000000463AF8 string=0x0000000000463AFC "5"
 *   insn=0x0000000000463AFC string=0x0000000000463B40 ")"
 *   insn=0x0000000000463B00 string=0x0000000000463B04 ""
 *   insn=0x0000000000463B14 string=0x0000000000463B18 "\t@"
 *   insn=0x0000000000463B20 string=0x0000000000463B24 ""
 *   insn=0x0000000000463B34 string=0x0000000000463B38 "@"
 *   insn=0x0000000000463B40 string=0x0000000000463B44 "hJ@"
 *   insn=0x0000000000463B44 string=0x0000000000463B48 ")"
 *   insn=0x0000000000463B50 string=0x0000000000463B54 ")"
 *   insn=0x0000000000463B54 string=0x0000000000463B58 "("
 *   insn=0x0000000000463B5C string=0x0000000000463B60 "px"
 *   insn=0x0000000000463B6C string=0x0000000000463B70 "!"
 *   insn=0x0000000000463B9C string=0x0000000000463BA0 ""
 *   insn=0x0000000000463BB0 string=0x0000000000463BB4 "\t\t@"
 *   insn=0x0000000000463BB4 string=0x0000000000463BB8 ")"
 *   insn=0x0000000000463BB8 string=0x0000000000463BBC "\t\t"
 *   insn=0x0000000000463BBC string=0x0000000000463BC0 "!"
 *   insn=0x0000000000463BC0 string=0x0000000000463BC4 "\t"
 *   insn=0x0000000000463BC4 string=0x0000000000463BC8 ")"
 *   insn=0x0000000000463BCC string=0x0000000000463BD0 " "
 *   insn=0x0000000000463BDC string=0x0000000000463BE0 ""
 *   insn=0x0000000000463BE0 string=0x0000000000463BE4 ""
 *   insn=0x0000000000463BE8 string=0x0000000000463BEC ""
 *   insn=0x0000000000463BEC string=0x0000000000463BF0 ""
 *   insn=0x0000000000463BF8 string=0x0000000000463BFC ""
 *   insn=0x0000000000463C0C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000463C10 string=0x0000000000463C14 ",w"
 *   insn=0x0000000000463C1C string=0x0000000000463C20 ""
 *   insn=0x0000000000463C2C string=0x0000000000463C30 ""
 *   insn=0x0000000000463C38 string=0x0000000000463C3C ""
 *   insn=0x0000000000463C48 string=0x0000000000463C4C "@"
 *   insn=0x0000000000463C4C string=0x0000000000463C50 ""
 *   insn=0x0000000000463C50 string=0x0000000000463C54 ""
 *   insn=0x0000000000463C58 string=0x0000000000463C5C ""
 *   insn=0x0000000000463C5C string=0x0000000000463C60 ""
 *   insn=0x0000000000463C84 string=0x0000000000463C88 "U"
 *   insn=0x0000000000463C9C string=0x0000000000463CA0 "DG"
 *   insn=0x0000000000463CA8 string=0x0000000000463CAC "I"
 *   insn=0x0000000000463CD4 string=0x0000000000463CD8 "`"
 *   insn=0x0000000000463CD4 string=0x0000000000463CF0 "xI"
 *   insn=0x0000000000463D24 string=0x0000000000463D28 "h"
 *   insn=0x0000000000463D28 string=0x0000000000463D2C "uF@"
 *   insn=0x0000000000463D30 string=0x0000000000463D34 ""
 *   insn=0x0000000000463D34 string=0x0000000000463D38 "h"
 *   insn=0x0000000000463D40 string=0x0000000000463D44 "'F"
 *   insn=0x0000000000463D4C string=0x0000000000463D50 "uF"
 *   insn=0x0000000000463D4C string=0x00000000001FB070 "0'"
 *   insn=0x0000000000463D60 string=0x0000000000463D64 ")"
 *   insn=0x0000000000463D6C string=0x0000000000463D70 "h"
 *   insn=0x0000000000463D70 string=0x0000000000463D74 "vB@"
 *   insn=0x0000000000463D78 string=0x0000000000463D7C ""
 *   insn=0x0000000000463D7C string=0x0000000000463D80 "h"
 *   insn=0x0000000000463D94 string=0x0000000000463D98 "vB"
 *   insn=0x0000000000463D94 string=0x00000000001F91F0 "0'"
 *   insn=0x0000000000463DAC string=0x0000000000463DB0 "?"
 *   insn=0x0000000000463DB4 string=0x0000000000463DB8 "wB"
 *   insn=0x0000000000463DC4 string=0x0000000000463DC8 ""
 *   insn=0x0000000000463DD0 string=0x0000000000463DD4 ""
 *   insn=0x0000000000463DD4 string=0x0000000000463DD8 "i"C))}@"
 *   insn=0x0000000000463DD8 string=0x0000000000463DDC ")}@"
 *   insn=0x0000000000463DDC string=0x0000000000463DE0 "?"
 *   insn=0x0000000000463DE4 string=0x0000000000463DE8 "h\n@"
 *   insn=0x0000000000463DE4 string=0x0000000000463DFC "i"@"
 *   insn=0x0000000000463DE8 string=0x0000000000463DEC "*"
 *   insn=0x0000000000463DEC string=0x0000000000463DF0 "j"
 *   insn=0x0000000000463E04 string=0x0000000000463E18 ""
 *   insn=0x0000000000463E10 string=0x0000000000463E14 "h"
 *   insn=0x0000000000463E10 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000463E18 string=0x0000000000463E1C "h"
 *   insn=0x0000000000463E30 string=0x0000000000463E34 "h"
 *   insn=0x0000000000463E30 string=0x00000000001FBA40 "0'"
 *   insn=0x0000000000463E34 string=0x0000000000463E38 "i\n@"
 *   insn=0x0000000000463E38 string=0x0000000000463E3C "\n"
 *   insn=0x0000000000463E3C string=0x0000000000463E40 "j"
 *   insn=0x0000000000463E40 string=0x0000000000463E44 "8y("
 *   insn=0x0000000000463E54 string=0x0000000000463E58 ""
 *   insn=0x0000000000463E68 string=0x0000000000463E6C ""
 *   insn=0x0000000000463E74 string=0x0000000000463E78 "\n"
 *   insn=0x0000000000463E7C string=0x0000000000463E80 "?"
 *   insn=0x0000000000463E8C string=0x0000000000463E90 "?"
 *   insn=0x0000000000463E94 string=0x0000000000463E98 "w""
 *   insn=0x0000000000463EA4 string=0x0000000000463EA8 ""
 *   insn=0x0000000000463EB0 string=0x0000000000463EB4 ""
 *   insn=0x0000000000463EB4 string=0x0000000000463EB8 "i"J))}@"
 *   insn=0x0000000000463EB8 string=0x0000000000463EBC ")}@"
 *   insn=0x0000000000463EBC string=0x0000000000463EC0 "?"
 *   insn=0x0000000000463EC4 string=0x0000000000463EC8 "h&@"
 *   insn=0x0000000000463EC4 string=0x0000000000463EDC "iZ@"
 *   insn=0x0000000000463EC8 string=0x0000000000463ECC "*"
 *   insn=0x0000000000463ECC string=0x0000000000463ED0 "jR"
 *   insn=0x0000000000463EE4 string=0x0000000000463EF8 ""
 *   insn=0x0000000000463EF0 string=0x0000000000463EF4 "hV@"
 *   insn=0x0000000000463EF8 string=0x0000000000463EFC "hV"
 *   insn=0x0000000000463F0C string=0x0000000000463F10 " "
 *   insn=0x0000000000463F10 string=0x0000000000463F14 "hR"
 *   insn=0x0000000000463F14 string=0x0000000000463F18 "i&@"
 *   insn=0x0000000000463F18 string=0x0000000000463F1C "\n"
 *   insn=0x0000000000463F1C string=0x0000000000463F20 "jR"
 *   insn=0x0000000000463F20 string=0x0000000000463F24 "8y("
 *   insn=0x0000000000463F34 string=0x0000000000463F38 ""
 *   insn=0x0000000000463F48 string=0x0000000000463F4C ""
 *   insn=0x0000000000463F5C string=0x0000000000463F60 "?"
 *   insn=0x0000000000463F68 string=0x0000000000463F6C "t"
 *   insn=0x0000000000463F6C string=0x0000000000463F70 "h"
 *   insn=0x0000000000463F70 string=0x0000000000463F74 "uJ@"
 *   insn=0x0000000000463F74 string=0x0000000000463F78 ""
 *   insn=0x0000000000463F78 string=0x0000000000463F7C "h"
 *   insn=0x0000000000463F90 string=0x0000000000463F94 "uJ"
 *   insn=0x0000000000463F90 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000463FB4 string=0x00000000001F8790 "0'"
 *   insn=0x0000000000463FEC string=0x0000000000463FF0 "5v"
 *   insn=0x0000000000464018 string=0x000000000046401C ""
 *   insn=0x0000000000464028 string=0x000000000046402C ""
 *   insn=0x0000000000464034 string=0x0000000000464038 "\n"
 *   insn=0x0000000000464040 string=0x0000000000464044 ""
 *   insn=0x0000000000464050 string=0x0000000000464054 ""
 *   insn=0x0000000000464090 string=0x0000000000464094 ""
 *   insn=0x0000000000464094 string=0x0000000000464098 "h"
 *   insn=0x000000000046409C string=0x00000000004640A0 "\t\t@"
 *   insn=0x00000000004640A0 string=0x00000000004640A4 ")"
 *   insn=0x00000000004640A4 string=0x00000000004640A8 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::LoadFromFile(Caver::Scene *a1)
{
  unsigned int v2; // w19
  _BYTE v4[160]; // [xsp+1B8h] [xbp-C8h] BYREF
  __int64 v5; // [xsp+258h] [xbp-28h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Proto::Scene::Scene((Caver::Proto::Scene *)v4);
  if ( (Caver::LoadProtobufMessageFromFile() & 1) != 0 )
  {
    Caver::Scene::LoadFromProtobufMessage(a1, (const Caver::Proto::Scene *)v4);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  Caver::Proto::Scene::~Scene((Caver::Proto::Scene *)v4);
  return v2;
}

