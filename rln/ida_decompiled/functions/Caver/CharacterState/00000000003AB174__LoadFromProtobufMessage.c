/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AB174
 * Mangled: _ZN5Caver14CharacterState23LoadFromProtobufMessageERKNS_5Proto14CharacterStateE
 * Demangled: Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *
 * Callers: 1
 *   0x00000000001FB4C0  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7730  Caver::GameData::ItemForName(std::string const&)
 *   0x00000000001FAA70  std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Skill>*,std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>>,boost::shared_ptr<Caver::Skill> const&)
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *   0x00000000001FFE10  Caver::GameData::SkillForName(std::string const&)
 *   0x00000000002002E0  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 240
 *   insn=0x00000000003AB198 string=0x00000000003AB19C "H"
 *   insn=0x00000000003AB1A0 string=0x00000000003AB1A4 ""
 *   insn=0x00000000003AB1B0 string=0x00000000003AB1B4 "h"
 *   insn=0x00000000003AB1B4 string=0x00000000003AB1B8 "h"
 *   insn=0x00000000003AB1B8 string=0x00000000003AB244 "h"
 *   insn=0x00000000003AB1BC string=0x00000000003AB1C0 "("
 *   insn=0x00000000003AB1BC string=0x00000000003AB254 "h"
 *   insn=0x00000000003AB1C0 string=0x00000000003AB264 "h"
 *   insn=0x00000000003AB1C4 string=0x00000000003AB274 "w"
 *   insn=0x00000000003AB1D8 string=0x00000000003AB1DC ""
 *   insn=0x00000000003AB1DC string=0x00000000003AB1E0 "\t"
 *   insn=0x00000000003AB1EC string=0x00000000003AB1F0 "hG"
 *   insn=0x00000000003AB1F0 string=0x00000000001FCF90 "0'"
 *   insn=0x00000000003AB1F4 string=0x00000000003AB1F8 ""
 *   insn=0x00000000003AB1FC string=0x00000000003AB200 "(}"
 *   insn=0x00000000003AB204 string=0x00000000003AB208 "\n"
 *   insn=0x00000000003AB208 string=0x00000000003AB20C "aG"
 *   insn=0x00000000003AB20C string=0x00000000003AB210 "@"
 *   insn=0x00000000003AB214 string=0x00000000003AB218 ""
 *   insn=0x00000000003AB218 string=0x00000000003AB21C " ("
 *   insn=0x00000000003AB228 string=0x00000000003AB22C ""
 *   insn=0x00000000003AB238 string=0x00000000003AB23C "L"
 *   insn=0x00000000003AB240 string=0x00000000003AB28C "w"
 *   insn=0x00000000003AB248 string=0x00000000003AB24C "h"
 *   insn=0x00000000003AB258 string=0x00000000003AB25C "h"
 *   insn=0x00000000003AB25C string=0x00000000003AB260 "("
 *   insn=0x00000000003AB268 string=0x00000000003AB26C "h"
 *   insn=0x00000000003AB290 string=0x00000000003AB294 ""
 *   insn=0x00000000003AB29C string=0x00000000003AB2A0 "l"
 *   insn=0x00000000003AB2A4 string=0x00000000003AB2A8 ""
 *   insn=0x00000000003AB2AC string=0x00000000003AB2B0 ""
 *   insn=0x00000000003AB2B0 string=0x00000000003AB2B4 "\t"
 *   insn=0x00000000003AB2C0 string=0x00000000003AB2C4 "3G"
 *   insn=0x00000000003AB2C8 string=0x00000000003AB2CC ""
 *   insn=0x00000000003AB2D0 string=0x00000000003AB2D4 "(}"
 *   insn=0x00000000003AB2D8 string=0x00000000003AB2DC "\n"
 *   insn=0x00000000003AB2DC string=0x00000000003AB2E0 ",G"
 *   insn=0x00000000003AB2E0 string=0x00000000003AB2E4 "@"
 *   insn=0x00000000003AB2E8 string=0x00000000003AB2EC ""
 *   insn=0x00000000003AB2EC string=0x00000000003AB2F0 " ("
 *   insn=0x00000000003AB2FC string=0x00000000003AB300 ""
 *   insn=0x00000000003AB30C string=0x00000000003AB310 "L"
 *   insn=0x00000000003AB314 string=0x00000000003AB318 "h*@"
 *   insn=0x00000000003AB31C string=0x00000000003AB320 "k"
 *   insn=0x00000000003AB320 string=0x00000000003AB4CC "hr@"
 *   insn=0x00000000003AB334 string=0x00000000003AB380 "h"
 *   insn=0x00000000003AB338 string=0x00000000003AB33C ")=G"
 *   insn=0x00000000003AB33C string=0x00000000003AB340 "!"
 *   insn=0x00000000003AB344 string=0x00000000003AB348 "\t"
 *   insn=0x00000000003AB344 string=0x00000000003AB35C "\t"
 *   insn=0x00000000003AB348 string=0x00000000003AB34C "*"
 *   insn=0x00000000003AB34C string=0x00000000003AB350 "\n"
 *   insn=0x00000000003AB358 string=0x00000000003AB368 "?"
 *   insn=0x00000000003AB35C string=0x00000000003AB360 "*"
 *   insn=0x00000000003AB360 string=0x00000000003AB364 "\n"
 *   insn=0x00000000003AB368 string=0x00000000003AB36C "l"
 *   insn=0x00000000003AB36C string=0x00000000003AB478 "5"
 *   insn=0x00000000003AB374 string=0x00000000003AB378 "5"
 *   insn=0x00000000003AB378 string=0x00000000003AB37C "P"
 *   insn=0x00000000003AB37C string=0x00000000003AB4BC "h*"
 *   insn=0x00000000003AB384 string=0x00000000003AB388 "y{"
 *   insn=0x00000000003AB398 string=0x00000000001F7730 "0'"
 *   insn=0x00000000003AB3AC string=0x00000000003AB3B0 "\t@"
 *   insn=0x00000000003AB3BC string=0x00000000003AB3C0 ""
 *   insn=0x00000000003AB3CC string=0x00000000003AB3D0 "@"
 *   insn=0x00000000003AB3DC string=0x00000000003AB3E0 "h"
 *   insn=0x00000000003AB3E0 string=0x00000000003AB3E4 "A#"
 *   insn=0x00000000003AB3E4 string=0x00000000003AB3E8 "y{"
 *   insn=0x00000000003AB3F0 string=0x00000000003AB3F4 "M"
 *   insn=0x00000000003AB40C string=0x00000000003AB410 ""
 *   insn=0x00000000003AB41C string=0x00000000003AB420 "8"
 *   insn=0x00000000003AB420 string=0x00000000003AB424 "@"
 *   insn=0x00000000003AB424 string=0x00000000003AB428 ""
 *   insn=0x00000000003AB428 string=0x00000000003AB42C ""
 *   insn=0x00000000003AB430 string=0x00000000003AB434 ""
 *   insn=0x00000000003AB434 string=0x00000000003AB438 "\t@"
 *   insn=0x00000000003AB440 string=0x00000000003AB444 "@"
 *   insn=0x00000000003AB444 string=0x00000000003AB448 ""
 *   insn=0x00000000003AB448 string=0x00000000003AB44C ""
 *   insn=0x00000000003AB450 string=0x00000000003AB454 ""
 *   insn=0x00000000003AB454 string=0x00000000003AB458 "@"
 *   insn=0x00000000003AB470 string=0x00000000003AB474 "!"
 *   insn=0x00000000003AB47C string=0x00000000003AB480 ""
 *   insn=0x00000000003AB490 string=0x00000000003AB494 "\t@"
 *   insn=0x00000000003AB49C string=0x00000000003AB4A0 ""
 *   insn=0x00000000003AB4B0 string=0x00000000003AB4B4 "@"
 *   insn=0x00000000003AB4BC string=0x00000000003AB4C0 "{"
 *   insn=0x00000000003AB4D0 string=0x00000000003AB4D4 "+"
 *   insn=0x00000000003AB4D4 string=0x00000000003AB598 "h6C9"
 *   insn=0x00000000003AB4DC string=0x00000000003AB4E0 "h6@"
 *   insn=0x00000000003AB4EC string=0x00000000003AB4F0 "HR"
 *   insn=0x00000000003AB4F4 string=0x00000000003AB4F8 "?"
 *   insn=0x00000000003AB500 string=0x00000000003AB504 "("
 *   insn=0x00000000003AB508 string=0x00000000003AB50C "("
 *   insn=0x00000000003AB510 string=0x00000000003AB514 "\t"
 *   insn=0x00000000003AB510 string=0x00000000003AB520 "(@"
 *   insn=0x00000000003AB514 string=0x00000000003AB518 ")"
 *   insn=0x00000000003AB518 string=0x00000000003AB51C "\t"
 *   insn=0x00000000003AB530 string=0x00000000003AB588 "hr"
 *   insn=0x00000000003AB538 string=0x00000000003AB53C "M="
 *   insn=0x00000000003AB53C string=0x00000000001FAA70 "0'"
 *   insn=0x00000000003AB540 string=0x00000000003AB544 "6"
 *   insn=0x00000000003AB548 string=0x00000000003AB54C ""
 *   insn=0x00000000003AB55C string=0x00000000003AB560 "\t@"
 *   insn=0x00000000003AB568 string=0x00000000003AB56C ""
 *   insn=0x00000000003AB57C string=0x00000000003AB580 "@"
 *   insn=0x00000000003AB590 string=0x00000000003AB594 "k"
 *   insn=0x00000000003AB5A0 string=0x00000000003AB5A4 "aR@"
 *   insn=0x00000000003AB5B4 string=0x00000000003AB5B8 "\n"
 *   insn=0x00000000003AB5B8 string=0x00000000003AB5BC "J"
 *   insn=0x00000000003AB5BC string=0x00000000003AB5C0 "\n"
 *   insn=0x00000000003AB5C8 string=0x00000000003AB5CC "5"
 *   insn=0x00000000003AB5D0 string=0x00000000003AB5D4 ""
 *   insn=0x00000000003AB5E0 string=0x00000000003AB5E4 "\t@"
 *   insn=0x00000000003AB5F0 string=0x00000000003AB5F4 ""
 *   insn=0x00000000003AB600 string=0x00000000003AB604 "@"
 *   insn=0x00000000003AB610 string=0x00000000003AB614 "5"
 *   insn=0x00000000003AB618 string=0x00000000003AB61C ""
 *   insn=0x00000000003AB62C string=0x00000000003AB630 "\t@"
 *   insn=0x00000000003AB638 string=0x00000000003AB63C ""
 *   insn=0x00000000003AB64C string=0x00000000003AB650 "@"
 *   insn=0x00000000003AB658 string=0x00000000003AB65C "aV@"
 *   insn=0x00000000003AB660 string=0x00000000003AB664 "30"
 *   insn=0x00000000003AB66C string=0x00000000003AB670 "\n"
 *   insn=0x00000000003AB670 string=0x00000000003AB674 "J"
 *   insn=0x00000000003AB674 string=0x00000000003AB678 "\n"
 *   insn=0x00000000003AB680 string=0x00000000003AB684 "5"
 *   insn=0x00000000003AB688 string=0x00000000003AB68C ""
 *   insn=0x00000000003AB698 string=0x00000000003AB69C "\t@"
 *   insn=0x00000000003AB6A8 string=0x00000000003AB6AC ""
 *   insn=0x00000000003AB6B8 string=0x00000000003AB6BC "@"
 *   insn=0x00000000003AB6C8 string=0x00000000003AB6CC "5"
 *   insn=0x00000000003AB6D0 string=0x00000000003AB6D4 ""
 *   insn=0x00000000003AB6E4 string=0x00000000003AB6E8 "\t@"
 *   insn=0x00000000003AB6F0 string=0x00000000003AB6F4 ""
 *   insn=0x00000000003AB704 string=0x00000000003AB708 "@"
 *   insn=0x00000000003AB710 string=0x00000000003AB714 "aZ@"
 *   insn=0x00000000003AB724 string=0x00000000003AB728 "\n"
 *   insn=0x00000000003AB728 string=0x00000000003AB72C "J"
 *   insn=0x00000000003AB72C string=0x00000000003AB730 "\n"
 *   insn=0x00000000003AB738 string=0x00000000003AB73C "5"
 *   insn=0x00000000003AB740 string=0x00000000003AB744 ""
 *   insn=0x00000000003AB750 string=0x00000000003AB754 "\t@"
 *   insn=0x00000000003AB760 string=0x00000000003AB764 ""
 *   insn=0x00000000003AB770 string=0x00000000003AB774 "@"
 *   insn=0x00000000003AB780 string=0x00000000003AB784 "5"
 *   insn=0x00000000003AB788 string=0x00000000003AB78C ""
 *   insn=0x00000000003AB79C string=0x00000000003AB7A0 "\t@"
 *   insn=0x00000000003AB7A8 string=0x00000000003AB7AC ""
 *   insn=0x00000000003AB7BC string=0x00000000003AB7C0 "@"
 *   insn=0x00000000003AB7C8 string=0x00000000003AB7CC "a^@"
 *   insn=0x00000000003AB7DC string=0x00000000003AB7E0 "\n"
 *   insn=0x00000000003AB7E0 string=0x00000000003AB7E4 "J"
 *   insn=0x00000000003AB7E4 string=0x00000000003AB7E8 "\n"
 *   insn=0x00000000003AB7F0 string=0x00000000003AB7F4 "5"
 *   insn=0x00000000003AB7F8 string=0x00000000003AB7FC ""
 *   insn=0x00000000003AB808 string=0x00000000003AB80C "\t@"
 *   insn=0x00000000003AB818 string=0x00000000003AB81C ""
 *   insn=0x00000000003AB828 string=0x00000000003AB82C "@"
 *   insn=0x00000000003AB838 string=0x00000000003AB83C "5"
 *   insn=0x00000000003AB83C string=0x00000000003AB880 "h"
 *   insn=0x00000000003AB840 string=0x00000000003AB844 ""
 *   insn=0x00000000003AB854 string=0x00000000003AB858 "\t@"
 *   insn=0x00000000003AB860 string=0x00000000003AB864 ""
 *   insn=0x00000000003AB874 string=0x00000000003AB878 "@"
 *   insn=0x00000000003AB884 string=0x00000000003AB8D4 "h"
 *   insn=0x00000000003AB888 string=0x00000000003AB88C "h"
 *   insn=0x00000000003AB888 string=0x00000000003AB8E4 "h"
 *   insn=0x00000000003AB88C string=0x00000000003AB890 "h"
 *   insn=0x00000000003AB898 string=0x00000000003AB89C ""
 *   insn=0x00000000003AB8A8 string=0x00000000003AB8F8 "v*"
 *   insn=0x00000000003AB8D8 string=0x00000000003AB8DC "h"
 *   insn=0x00000000003AB8DC string=0x00000000003AB8E0 "h"
 *   insn=0x00000000003AB8E8 string=0x00000000003AB8EC "h"
 *   insn=0x00000000003AB8EC string=0x00000000003AB8F0 ""
 *   insn=0x00000000003AB8F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AB908 string=0x00000000003AB90C ""
 *   insn=0x00000000003AB910 string=0x00000000003AB914 "a"
 *   insn=0x00000000003AB918 string=0x00000000003AB91C "\t@"
 *   insn=0x00000000003AB928 string=0x00000000003AB92C ""
 *   insn=0x00000000003AB930 string=0x00000000003AB934 "a"
 *   insn=0x00000000003AB938 string=0x00000000003AB93C "@"
 *   insn=0x00000000003AB944 string=0x00000000003AB948 "~"
 *   insn=0x00000000003AB950 string=0x00000000003AB954 "t"
 *   insn=0x00000000003AB958 string=0x00000000003AB95C ""
 *   insn=0x00000000003AB968 string=0x00000000003AB96C "\t@"
 *   insn=0x00000000003AB978 string=0x00000000003AB97C ""
 *   insn=0x00000000003AB988 string=0x00000000003AB98C "@"
 *   insn=0x00000000003AB994 string=0x00000000003AB998 "j"
 *   insn=0x00000000003AB9A8 string=0x00000000003AB9AC ""
 *   insn=0x00000000003AB9B0 string=0x00000000003AB9B4 "a"
 *   insn=0x00000000003AB9B8 string=0x00000000003AB9BC "\t@"
 *   insn=0x00000000003AB9C8 string=0x00000000003AB9CC ""
 *   insn=0x00000000003AB9D0 string=0x00000000003AB9D4 "a"
 *   insn=0x00000000003AB9D8 string=0x00000000003AB9DC "@"
 *   insn=0x00000000003AB9E4 string=0x00000000003AB9E8 "V"
 *   insn=0x00000000003AB9F0 string=0x00000000003AB9F4 "t\n"
 *   insn=0x00000000003AB9F8 string=0x00000000003AB9FC ""
 *   insn=0x00000000003ABA08 string=0x00000000003ABA0C "\t@"
 *   insn=0x00000000003ABA18 string=0x00000000003ABA1C ""
 *   insn=0x00000000003ABA28 string=0x00000000003ABA2C "@"
 *   insn=0x00000000003ABA34 string=0x00000000003ABA38 "B"
 *   insn=0x00000000003ABA48 string=0x00000000003ABA4C ""
 *   insn=0x00000000003ABA50 string=0x00000000003ABA54 "a"
 *   insn=0x00000000003ABA58 string=0x00000000003ABA5C "\t@"
 *   insn=0x00000000003ABA68 string=0x00000000003ABA6C ""
 *   insn=0x00000000003ABA70 string=0x00000000003ABA74 "a"
 *   insn=0x00000000003ABA78 string=0x00000000003ABA7C "@"
 *   insn=0x00000000003ABA84 string=0x00000000003ABA88 "."
 *   insn=0x00000000003ABA94 string=0x00000000003ABA98 "(a"
 *   insn=0x00000000003ABAA0 string=0x00000000003ABAFC "5"
 *   insn=0x00000000003ABAA4 string=0x00000000003ABAA8 "J=G"
 *   insn=0x00000000003ABAA8 string=0x00000000003ABAAC ")!"
 *   insn=0x00000000003ABAB0 string=0x00000000003ABAB4 "*"
 *   insn=0x00000000003ABAB0 string=0x00000000003ABAE0 "*"
 *   insn=0x00000000003ABAB4 string=0x00000000003ABAB8 "K"
 *   insn=0x00000000003ABAB8 string=0x00000000003ABABC "+"
 *   insn=0x00000000003ABAC0 string=0x00000000003ABAC4 "_"
 *   insn=0x00000000003ABAD0 string=0x00000000003ABAD4 "4"
 *   insn=0x00000000003ABAD4 string=0x00000000003ABAD8 "U"
 *   insn=0x00000000003ABAE0 string=0x00000000003ABAE4 "K"
 *   insn=0x00000000003ABAE4 string=0x00000000003ABAE8 "+"
 *   insn=0x00000000003ABAE8 string=0x00000000003ABAEC "_"
 *   insn=0x00000000003ABB00 string=0x00000000003ABB04 ""
 *   insn=0x00000000003ABB10 string=0x00000000003ABB14 "\t@"
 *   insn=0x00000000003ABB20 string=0x00000000003ABB24 ""
 *   insn=0x00000000003ABB30 string=0x00000000003ABB34 "@"
 *   insn=0x00000000003ABB40 string=0x00000000003ABB44 "`W"
 *   insn=0x00000000003ABB70 string=0x00000000003ABB74 "K"
 *   insn=0x00000000003ABB74 string=0x00000000003ABB78 ""
 *   insn=0x00000000003ABB78 string=0x00000000003ABB7C "\t"
 *   insn=0x00000000003ABB90 string=0x00000000003ABB94 ""
 *   insn=0x00000000003ABB98 string=0x00000000003ABB9C "(}"
 *   insn=0x00000000003ABBA0 string=0x00000000003ABBA4 "\n"
 *   insn=0x00000000003ABBA8 string=0x00000000003ABBAC "@"
 *   insn=0x00000000003ABBB0 string=0x00000000003ABBB4 ""
 *   insn=0x00000000003ABBB4 string=0x00000000003ABBB8 " ("
 *   insn=0x00000000003ABBC4 string=0x00000000003ABBC8 ""
 *   insn=0x00000000003ABBCC string=0x00000000003ABBD0 "s"
 *   insn=0x00000000003ABBD4 string=0x00000000003ABBD8 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::LoadFromProtobufMessage(
        Caver::CharacterState *this,
        const Caver::Proto::CharacterState *a2)
{
  int v4; // w8
  int *v5; // x22
  int v6; // w23
  int v7; // w24
  float v8; // s0
  float v9; // s10
  float v10; // s0
  bool v11; // cc
  int v12; // w23
  int v13; // w22
  float v14; // s0
  float v15; // s10
  float v16; // s0
  __int64 i; // x27
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD *v20; // x21
  __int64 v21; // x26
  __int64 v22; // x8
  int v23; // w25
  _QWORD *v24; // x0
  _QWORD *v25; // x23
  _QWORD *v26; // x24
  __int64 v27; // x8
  __int64 v28; // x8
  void *v29; // x0
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x23
  _QWORD *v33; // x1
  _QWORD *v34; // x8
  _QWORD *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x8
  _QWORD *v38; // x8
  __int64 v39; // x9
  _QWORD *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x8
  _QWORD *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x8
  _QWORD *v46; // x8
  __int64 v47; // x9
  _QWORD *v48; // x21
  __int64 v49; // x8
  __int64 v50; // x8
  _QWORD *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x8
  _QWORD *v54; // x8
  __int64 v55; // x9
  _QWORD *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x8
  _QWORD *v59; // x21
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 result; // x0
  _QWORD *v63; // x8
  __int64 v64; // x9
  _QWORD *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x8
  _QWORD *v68; // x21
  __int64 v69; // x8
  __int64 v70; // x8
  int v71; // w8
  __int64 v72; // [xsp+60h] [xbp-90h] BYREF
  _QWORD *v73; // [xsp+68h] [xbp-88h]
  __int64 v74; // [xsp+78h] [xbp-78h]

  v74 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)a2 + 51);
  if ( (v4 & 1) != 0 )
  {
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 3);
    v4 = *((_DWORD *)a2 + 51);
    if ( (v4 & 2) == 0 )
    {
LABEL_3:
      if ( (v4 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 4);
  v4 = *((_DWORD *)a2 + 51);
  if ( (v4 & 4) == 0 )
  {
LABEL_4:
    if ( (v4 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 5);
  if ( (*((_DWORD *)a2 + 51) & 0x10) == 0 )
  {
LABEL_5:
    v5 = (int *)((char *)this + 168);
    v6 = *((_DWORD *)this + 42);
    if ( v6 >= 2 )
      goto LABEL_6;
LABEL_14:
    v7 = 0;
    goto LABEL_15;
  }
LABEL_13:
  v6 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 42) = v6;
  v5 = (int *)((char *)this + 168);
  if ( v6 < 2 )
    goto LABEL_14;
LABEL_6:
  v7 = 0;
  do
  {
    Caver::GameData::EntityHealthMultiplierAtLevel(*(Caver::GameData **)this, v6 - 1);
    v9 = (float)((v6 + 2) * (int)v8);
    Caver::GameData::EntityHealthMultiplierAtLevel(*(Caver::GameData **)this, v6 - 1);
    v11 = v6 <= 2;
    v7 += llroundf((float)((float)((float)v6-- * 8.0) + 24.0) * (float)(int)llroundf(v9 / v10));
  }
  while ( !v11 );
LABEL_15:
  v12 = *((_DWORD *)a2 + 6);
  if ( v7 > v12 )
  {
    v13 = *v5;
    if ( v13 > 1 )
    {
      v12 = 0;
      do
      {
        Caver::GameData::EntityHealthMultiplierAtLevel(*(Caver::GameData **)this, v13 - 1);
        v15 = (float)((v13 + 2) * (int)v14);
        Caver::GameData::EntityHealthMultiplierAtLevel(*(Caver::GameData **)this, v13 - 1);
        v11 = v13 <= 2;
        v12 += llroundf((float)((float)((float)v13-- * 8.0) + 24.0) * (float)(int)llroundf(v15 / v16));
      }
      while ( !v11 );
    }
    else
    {
      v12 = 0;
    }
  }
  *((_DWORD *)this + 41) = v12;
  if ( *((int *)a2 + 10) >= 1 )
  {
    for ( i = 0; i < *((int *)a2 + 10); ++i )
    {
      Caver::GameData::ItemForName();
      v21 = v72;
      v20 = v73;
      if ( v73 )
      {
        if ( !v73[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v73 + 16LL))(v73);
          v22 = v20[2] - 1LL;
          v20[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
        }
      }
      if ( !v21 )
        goto LABEL_42;
      v23 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8 * i) + 24LL);
      sub_56A528(&v72, v21 + 8);
      v24 = (_QWORD *)std::map<std::string,Caver::CharacterState::ItemState>::operator[]();
      v25 = v24;
      if ( v20 )
        ++v20[1];
      v26 = (_QWORD *)v24[1];
      *v24 = v21;
      v24[1] = v20;
      if ( v26 )
      {
        v27 = v26[1] - 1LL;
        v26[1] = v27;
        if ( !v27 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          v28 = v26[2] - 1LL;
          v26[2] = v28;
          if ( !v28 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
        }
      }
      *((_DWORD *)v25 + 4) = v23;
      v29 = (void *)(v72 - 24);
      if ( (__int64 *)(v72 - 24) == &qword_6FD2E0 )
        goto LABEL_42;
      v18 = (unsigned int *)(v72 - 8);
      if ( &pthread_create )
      {
        do
          v19 = __ldaxr(v18);
        while ( __stlxr(v19 - 1, v18) );
      }
      else
      {
        v19 = (*v18)--;
      }
      if ( v19 > 0 )
      {
LABEL_42:
        if ( v20 )
        {
LABEL_43:
          v30 = v20[1] - 1LL;
          v20[1] = v30;
          if ( !v30 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
            v31 = v20[2] - 1LL;
            v20[2] = v31;
            if ( !v31 )
              (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
          }
        }
      }
      else
      {
        operator delete(v29);
        if ( v20 )
          goto LABEL_43;
      }
    }
  }
  if ( *((int *)a2 + 28) >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      Caver::GameData::SkillForName();
      v33 = (_QWORD *)*((_QWORD *)this + 9);
      if ( v33 != *((_QWORD **)this + 10) )
        break;
      std::vector<boost::shared_ptr<Caver::Skill>>::_M_insert_aux();
      v35 = v73;
      if ( v73 )
        goto LABEL_55;
LABEL_58:
      if ( ++v32 >= *((int *)a2 + 28) )
        goto LABEL_59;
    }
    *v33 = v72;
    v34 = v73;
    v33[1] = v73;
    if ( v34 )
      ++v34[1];
    *((_QWORD *)this + 9) = v33 + 2;
    v35 = v73;
    if ( !v73 )
      goto LABEL_58;
LABEL_55:
    v36 = v35[1] - 1LL;
    v35[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
    goto LABEL_58;
  }
LABEL_59:
  if ( (*((_BYTE *)a2 + 205) & 2) != 0 )
  {
    Caver::GameData::SkillForName();
    v39 = v72;
    v38 = v73;
    if ( v73 )
      ++v73[1];
    v40 = (_QWORD *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 11) = v39;
    *((_QWORD *)this + 12) = v38;
    if ( v40 )
    {
      v41 = v40[1] - 1LL;
      v40[1] = v41;
      if ( !v41 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
        v42 = v40[2] - 1LL;
        v40[2] = v42;
        if ( !v42 )
          (*(void (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
      }
    }
    v43 = v73;
    if ( v73 )
    {
      v44 = v73[1] - 1LL;
      v73[1] = v44;
      if ( !v44 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
        v45 = v43[2] - 1LL;
        v43[2] = v45;
        if ( !v45 )
          (*(void (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
      }
    }
  }
  Caver::GameData::ItemForName();
  v47 = v72;
  v46 = v73;
  if ( v73 )
    ++v73[1];
  v48 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 13) = v47;
  *((_QWORD *)this + 14) = v46;
  if ( v48 )
  {
    v49 = v48[1] - 1LL;
    v48[1] = v49;
    if ( !v49 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
      v50 = v48[2] - 1LL;
      v48[2] = v50;
      if ( !v50 )
        (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
    }
  }
  v51 = v73;
  if ( v73 )
  {
    v52 = v73[1] - 1LL;
    v73[1] = v52;
    if ( !v52 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
      v53 = v51[2] - 1LL;
      v51[2] = v53;
      if ( !v53 )
        (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
    }
  }
  Caver::GameData::ItemForName();
  v55 = v72;
  v54 = v73;
  if ( v73 )
    ++v73[1];
  v56 = (_QWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 15) = v55;
  *((_QWORD *)this + 16) = v54;
  if ( v56 )
  {
    v57 = v56[1] - 1LL;
    v56[1] = v57;
    if ( !v57 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v56 + 16LL))(v56);
      v58 = v56[2] - 1LL;
      v56[2] = v58;
      if ( !v58 )
        (*(void (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
    }
  }
  v59 = v73;
  if ( v73 )
  {
    v60 = v73[1] - 1LL;
    v73[1] = v60;
    if ( !v60 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
      v61 = v59[2] - 1LL;
      v59[2] = v61;
      if ( !v61 )
        (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
    }
  }
  result = Caver::GameData::ItemForName();
  v64 = v72;
  v63 = v73;
  if ( v73 )
    ++v73[1];
  v65 = (_QWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 17) = v64;
  *((_QWORD *)this + 18) = v63;
  if ( v65 )
  {
    v66 = v65[1] - 1LL;
    v65[1] = v66;
    if ( !v66 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
      v67 = v65[2] - 1LL;
      v65[2] = v67;
      if ( !v67 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 24LL))(v65);
    }
  }
  v68 = v73;
  if ( v73 )
  {
    v69 = v73[1] - 1LL;
    v73[1] = v69;
    if ( !v69 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v68 + 16LL))(v68);
      v70 = v68[2] - 1LL;
      v68[2] = v70;
      if ( !v70 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v68 + 24LL))(v68);
    }
  }
  v71 = *((_DWORD *)a2 + 51);
  if ( (v71 & 0x2000) != 0 )
  {
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 48);
    v71 = *((_DWORD *)a2 + 51);
    if ( (v71 & 0x4000) == 0 )
    {
LABEL_102:
      if ( (v71 & 0x8000) == 0 )
        return result;
      goto LABEL_103;
    }
  }
  else if ( (v71 & 0x4000) == 0 )
  {
    goto LABEL_102;
  }
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 49);
  if ( (*((_DWORD *)a2 + 51) & 0x8000) == 0 )
    return result;
LABEL_103:
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 50);
  return result;
}

