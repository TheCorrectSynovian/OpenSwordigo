/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E914
 * Mangled: _ZN5Caver22MainMenuViewController38ProfileSelectionViewControllerDidStartEPNS_20ProfileSelectionViewERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 1
 *   0x00000000001F89C0  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 18
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A60  Caver::PlayerProfile::LoadGameState(void)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FB8B0  boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>(Caver::GameViewController *)
 *   0x00000000001FC010  Caver::ProfileManager::ProfileWithIdentifier(std::string const&)
 *   0x00000000001FCD30  Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001FD150  Caver::GameViewController::GameViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036F1C8  `non-virtual thunk to'Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 222
 *   insn=0x000000000036E928 string=0x000000000036E92C "W"
 *   insn=0x000000000036E93C string=0x000000000036E940 "D1"
 *   insn=0x000000000036E940 string=0x00000000001FAE50 "0'"
 *   insn=0x000000000036E964 string=0x00000000001FC010 "0'"
 *   insn=0x000000000036E968 string=0x000000000036E96C "5"
 *   insn=0x000000000036E970 string=0x000000000036E974 ""
 *   insn=0x000000000036E980 string=0x000000000036E984 "\t@"
 *   insn=0x000000000036E990 string=0x000000000036E994 ""
 *   insn=0x000000000036E9A0 string=0x000000000036E9A4 "@"
 *   insn=0x000000000036E9C0 string=0x000000000036E9C4 "a"
 *   insn=0x000000000036E9C8 string=0x000000000036E9CC "!1"
 *   insn=0x000000000036E9D4 string=0x00000000001FCD30 "0'"
 *   insn=0x000000000036E9DC string=0x000000000036E9E0 "u"
 *   insn=0x000000000036E9E0 string=0x000000000036EA0C "v"
 *   insn=0x000000000036E9E4 string=0x000000000036E9E8 "("
 *   insn=0x000000000036E9F0 string=0x000000000036E9F4 "\t@"
 *   insn=0x000000000036E9FC string=0x000000000036EA00 ""
 *   insn=0x000000000036EA14 string=0x00000000001F8A60 "0'"
 *   insn=0x000000000036EA18 string=0x000000000036EA1C "UH"
 *   insn=0x000000000036EA24 string=0x000000000036EA28 ")"
 *   insn=0x000000000036EA3C string=0x000000000058FCC1 "theend"
 *   insn=0x000000000036EA5C string=0x000000000036EA60 "5"
 *   insn=0x000000000036EA64 string=0x000000000036EA68 ""
 *   insn=0x000000000036EA78 string=0x000000000036EA7C "\t@"
 *   insn=0x000000000036EA84 string=0x000000000036EA88 ""
 *   insn=0x000000000036EA98 string=0x000000000036EA9C "@"
 *   insn=0x000000000036EAAC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036EAB4 string=0x00000000001FD150 "0'"
 *   insn=0x000000000036EABC string=0x000000000036EAC0 "|3"
 *   insn=0x000000000036EAC0 string=0x00000000001FB8B0 "0'"
 *   insn=0x000000000036EACC string=0x000000000036EAD0 "+"
 *   insn=0x000000000036EACC string=0x000000000036EADC "TI@"
 *   insn=0x000000000036EAD0 string=0x000000000036EAD4 "k"
 *   insn=0x000000000036EAD4 string=0x000000000036EAD8 "+"
 *   insn=0x000000000036EADC string=0x000000000036EAE0 "H"
 *   insn=0x000000000036EAE0 string=0x000000000036EAE4 "4"
 *   insn=0x000000000036EAE4 string=0x000000000036EB28 "`"@"
 *   insn=0x000000000036EAE8 string=0x000000000036EAEC ""
 *   insn=0x000000000036EAF8 string=0x000000000036EAFC "\t@"
 *   insn=0x000000000036EB08 string=0x000000000036EB0C ""
 *   insn=0x000000000036EB18 string=0x000000000036EB1C "@"
 *   insn=0x000000000036EB2C string=0x000000000036EB30 ""
 *   insn=0x000000000036EB30 string=0x000000000036EB34 ""
 *   insn=0x000000000036EB3C string=0x000000000036EB40 "*"
 *   insn=0x000000000036EB40 string=0x000000000036EB44 "J"
 *   insn=0x000000000036EB44 string=0x000000000036EB48 "*"
 *   insn=0x000000000036EB4C string=0x000000000036EB50 " "
 *   insn=0x000000000036EB64 string=0x000000000036EB68 "3"
 *   insn=0x000000000036EB68 string=0x000000000036EB6C "h"
 *   insn=0x000000000036EB6C string=0x000000000036EB70 ""
 *   insn=0x000000000036EB70 string=0x000000000036EB74 "h"
 *   insn=0x000000000036EB78 string=0x000000000036EB7C "h"
 *   insn=0x000000000036EB7C string=0x000000000036EB80 "\t@"
 *   insn=0x000000000036EB88 string=0x000000000036EB8C "h\n@"
 *   insn=0x000000000036EB8C string=0x000000000036EB90 ""
 *   insn=0x000000000036EB90 string=0x000000000036EB94 "h\n"
 *   insn=0x000000000036EB98 string=0x000000000036EB9C "h"
 *   insn=0x000000000036EB9C string=0x000000000036EBA0 "@"
 *   insn=0x000000000036EBAC string=0x000000000036EBB0 "3"
 *   insn=0x000000000036EBB0 string=0x000000000036EBB4 "h"
 *   insn=0x000000000036EBB4 string=0x000000000036EBB8 ""
 *   insn=0x000000000036EBB8 string=0x000000000036EBBC "h"
 *   insn=0x000000000036EBC0 string=0x000000000036EBC4 "h"
 *   insn=0x000000000036EBC8 string=0x000000000036EBCC "\t@"
 *   insn=0x000000000036EBD0 string=0x000000000036EBD4 "h\n@"
 *   insn=0x000000000036EBD4 string=0x000000000036EBD8 ""
 *   insn=0x000000000036EBD8 string=0x000000000036EBDC "h\n"
 *   insn=0x000000000036EBE0 string=0x000000000036EBE4 "h"
 *   insn=0x000000000036EBE8 string=0x000000000036EBEC "@"
 *   insn=0x000000000036EC28 string=0x000000000036EC2C ""
 *   insn=0x000000000036EC34 string=0x000000000058EE8E "town_part1"
 *   insn=0x000000000036EC60 string=0x000000000036EC64 "5"
 *   insn=0x000000000036EC68 string=0x000000000036EC6C ""
 *   insn=0x000000000036EC7C string=0x000000000036EC80 "\t@"
 *   insn=0x000000000036EC88 string=0x000000000036EC8C ""
 *   insn=0x000000000036EC9C string=0x000000000036ECA0 "@"
 *   insn=0x000000000036ECB4 string=0x000000000036ECB8 ""
 *   insn=0x000000000036ECC0 string=0x000000000058EE99 "spawn_from_town_herohouse"
 *   insn=0x000000000036ECD8 string=0x000000000036ECDC "s"
 *   insn=0x000000000036ECF4 string=0x000000000036ECF8 ""
 *   insn=0x000000000036ECFC string=0x000000000036ED00 "A"
 *   insn=0x000000000036ED08 string=0x000000000036ED0C "\t@"
 *   insn=0x000000000036ED14 string=0x000000000036ED18 ""
 *   insn=0x000000000036ED1C string=0x000000000036ED20 "A"
 *   insn=0x000000000036ED28 string=0x000000000036ED2C "@"
 *   insn=0x000000000036ED30 string=0x000000000036ED34 "]"
 *   insn=0x000000000036ED3C string=0x000000000036ED40 "@"
 *   insn=0x000000000036ED48 string=0x000000000036ED4C "1"
 *   insn=0x000000000036ED50 string=0x000000000036ED54 ")=G"
 *   insn=0x000000000036ED54 string=0x000000000036ED58 "!"
 *   insn=0x000000000036ED5C string=0x000000000036ED60 "\t"
 *   insn=0x000000000036ED5C string=0x000000000036ED98 "\t"
 *   insn=0x000000000036ED60 string=0x000000000036ED64 "*"
 *   insn=0x000000000036ED64 string=0x000000000036ED68 "\n"
 *   insn=0x000000000036ED6C string=0x000000000036ED70 ""
 *   insn=0x000000000036ED70 string=0x000000000036EDA4 "?"
 *   insn=0x000000000036ED74 string=0x000000000036ED78 ")=G"
 *   insn=0x000000000036ED78 string=0x000000000036ED7C "!"
 *   insn=0x000000000036ED80 string=0x000000000036ED84 "\t"
 *   insn=0x000000000036ED80 string=0x000000000036EDBC "\t"
 *   insn=0x000000000036ED84 string=0x000000000036ED88 "*"
 *   insn=0x000000000036ED88 string=0x000000000036ED8C "\n"
 *   insn=0x000000000036ED90 string=0x000000000036ED94 ""
 *   insn=0x000000000036ED94 string=0x000000000036EDC8 "?"
 *   insn=0x000000000036ED98 string=0x000000000036ED9C "*"
 *   insn=0x000000000036ED9C string=0x000000000036EDA0 "\n"
 *   insn=0x000000000036EDAC string=0x000000000036EDB0 "}"
 *   insn=0x000000000036EDB0 string=0x000000000036EDB4 "6"
 *   insn=0x000000000036EDBC string=0x000000000036EDC0 "*"
 *   insn=0x000000000036EDC0 string=0x000000000036EDC4 "\n"
 *   insn=0x000000000036EDD0 string=0x000000000036EDD4 "t"
 *   insn=0x000000000036EDD4 string=0x000000000036EDD8 "u"
 *   insn=0x000000000036EDD8 string=0x000000000036EDDC "2"
 *   insn=0x000000000036EDE0 string=0x000000000036EDE4 ")=G"
 *   insn=0x000000000036EDE4 string=0x000000000036EDE8 "!"
 *   insn=0x000000000036EDEC string=0x000000000036EDF0 "\t"
 *   insn=0x000000000036EDEC string=0x000000000036EE28 "\t"
 *   insn=0x000000000036EDF0 string=0x000000000036EDF4 "*"
 *   insn=0x000000000036EDF4 string=0x000000000036EDF8 "\n"
 *   insn=0x000000000036EDFC string=0x000000000036EE00 ""
 *   insn=0x000000000036EE00 string=0x000000000036EE34 "?"
 *   insn=0x000000000036EE04 string=0x000000000036EE08 ")=G"
 *   insn=0x000000000036EE08 string=0x000000000036EE0C "!"
 *   insn=0x000000000036EE10 string=0x000000000036EE14 "\t"
 *   insn=0x000000000036EE10 string=0x000000000036EE4C "\t"
 *   insn=0x000000000036EE14 string=0x000000000036EE18 "*"
 *   insn=0x000000000036EE18 string=0x000000000036EE1C "\n"
 *   insn=0x000000000036EE20 string=0x000000000036EE24 ""
 *   insn=0x000000000036EE24 string=0x000000000036EE58 "?"
 *   insn=0x000000000036EE28 string=0x000000000036EE2C "*"
 *   insn=0x000000000036EE2C string=0x000000000036EE30 "\n"
 *   insn=0x000000000036EE34 string=0x000000000036EE38 "l"
 *   insn=0x000000000036EE3C string=0x000000000036EE40 "Y"
 *   insn=0x000000000036EE40 string=0x000000000036EE44 "5"
 *   insn=0x000000000036EE4C string=0x000000000036EE50 "*"
 *   insn=0x000000000036EE50 string=0x000000000036EE54 "\n"
 *   insn=0x000000000036EE60 string=0x000000000036EE64 "P"
 *   insn=0x000000000036EE64 string=0x000000000036EE68 "u"
 *   insn=0x000000000036EE70 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036EE7C string=0x000000000036EE80 "4"
 *   insn=0x000000000036EE8C string=0x000000000036EE90 "(a"
 *   insn=0x000000000036EE98 string=0x000000000036EEF4 "u"
 *   insn=0x000000000036EE9C string=0x000000000036EEA0 "J=G"
 *   insn=0x000000000036EEA0 string=0x000000000036EEA4 ")!"
 *   insn=0x000000000036EEA8 string=0x000000000036EEAC "*"
 *   insn=0x000000000036EEA8 string=0x000000000036EED8 "*"
 *   insn=0x000000000036EEAC string=0x000000000036EEB0 "K"
 *   insn=0x000000000036EEB0 string=0x000000000036EEB4 "+"
 *   insn=0x000000000036EEB8 string=0x000000000036EEBC "_"
 *   insn=0x000000000036EEC8 string=0x000000000036EECC "6"
 *   insn=0x000000000036EECC string=0x000000000036EED0 "U"
 *   insn=0x000000000036EED8 string=0x000000000036EEDC "K"
 *   insn=0x000000000036EEDC string=0x000000000036EEE0 "+"
 *   insn=0x000000000036EEE0 string=0x000000000036EEE4 "_"
 *   insn=0x000000000036EEF8 string=0x000000000036EEFC ""
 *   insn=0x000000000036EF08 string=0x000000000036EF0C "\t@"
 *   insn=0x000000000036EF18 string=0x000000000036EF1C ""
 *   insn=0x000000000036EF28 string=0x000000000036EF2C "@"
 *   insn=0x000000000036EF40 string=0x000000000036EF44 "(a"
 *   insn=0x000000000036EF50 string=0x000000000036EF54 "J=G"
 *   insn=0x000000000036EF54 string=0x000000000036EF58 ")!"
 *   insn=0x000000000036EF5C string=0x000000000036EF60 "*"
 *   insn=0x000000000036EF5C string=0x000000000036EF8C "*"
 *   insn=0x000000000036EF60 string=0x000000000036EF64 "K"
 *   insn=0x000000000036EF64 string=0x000000000036EF68 "+"
 *   insn=0x000000000036EF6C string=0x000000000036EF70 "_"
 *   insn=0x000000000036EF7C string=0x000000000036EF80 "\t"
 *   insn=0x000000000036EF80 string=0x000000000036EF84 "U"
 *   insn=0x000000000036EF8C string=0x000000000036EF90 "K"
 *   insn=0x000000000036EF90 string=0x000000000036EF94 "+"
 *   insn=0x000000000036EF94 string=0x000000000036EF98 "_"
 *   insn=0x000000000036EFAC string=0x000000000036EFB0 ""
 *   insn=0x000000000036EFB4 string=0x000000000036EFB8 "A"
 *   insn=0x000000000036EFBC string=0x000000000036EFC0 "\t@"
 *   insn=0x000000000036EFCC string=0x000000000036EFD0 ""
 *   insn=0x000000000036EFD4 string=0x000000000036EFD8 "A"
 *   insn=0x000000000036EFDC string=0x000000000036EFE0 "@"
 *   insn=0x000000000036EFE8 string=0x000000000036EFEC "u"
 *   insn=0x000000000036EFF4 string=0x000000000036EFF8 "4"
 *   insn=0x000000000036EFFC string=0x000000000036F000 ""
 *   insn=0x000000000036F00C string=0x000000000036F010 "\t@"
 *   insn=0x000000000036F01C string=0x000000000036F020 ""
 *   insn=0x000000000036F02C string=0x000000000036F030 "@"
 *   insn=0x000000000036F044 string=0x000000000036F048 ""
 *   insn=0x000000000036F054 string=0x000000000036F058 "\t@"
 *   insn=0x000000000036F064 string=0x000000000036F068 ""
 *   insn=0x000000000036F074 string=0x000000000036F078 "@"
 *   insn=0x000000000036F080 string=0x000000000036F084 "O"
 *   insn=0x000000000036F090 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036F094 string=0x000000000036F098 "J"
 *   insn=0x000000000036F0A0 string=0x000000000036F0A4 "(a"
 *   insn=0x000000000036F0B0 string=0x000000000036F0B4 "J=G"
 *   insn=0x000000000036F0B4 string=0x000000000036F0B8 ")!"
 *   insn=0x000000000036F0BC string=0x000000000036F0C0 "*"
 *   insn=0x000000000036F0BC string=0x000000000036F0EC "*"
 *   insn=0x000000000036F0C0 string=0x000000000036F0C4 "K"
 *   insn=0x000000000036F0C4 string=0x000000000036F0C8 "+"
 *   insn=0x000000000036F0CC string=0x000000000036F0D0 "_"
 *   insn=0x000000000036F0E0 string=0x000000000036F0E4 "U"
 *   insn=0x000000000036F0E4 string=0x000000000036F0E8 "6"
 *   insn=0x000000000036F0EC string=0x000000000036F0F0 "K"
 *   insn=0x000000000036F0F0 string=0x000000000036F0F4 "+"
 *   insn=0x000000000036F0F4 string=0x000000000036F0F8 "_"
 *   insn=0x000000000036F10C string=0x000000000036F110 ""
 *   insn=0x000000000036F114 string=0x000000000036F118 "A"
 *   insn=0x000000000036F11C string=0x000000000036F120 "\t@"
 *   insn=0x000000000036F12C string=0x000000000036F130 ""
 *   insn=0x000000000036F134 string=0x000000000036F138 "A"
 *   insn=0x000000000036F13C string=0x000000000036F140 "@"
 *   insn=0x000000000036F158 string=0x000000000036F15C "J"
 *   insn=0x000000000036F160 string=0x000000000036F164 "(a"
 *   insn=0x000000000036F170 string=0x000000000036F174 "J=G"
 *   insn=0x000000000036F174 string=0x000000000036F178 ")!"
 *   insn=0x000000000036F17C string=0x000000000036F180 "*"
 *   insn=0x000000000036F17C string=0x000000000036F1AC "*"
 *   insn=0x000000000036F180 string=0x000000000036F184 "K"
 *   insn=0x000000000036F184 string=0x000000000036F188 "+"
 *   insn=0x000000000036F18C string=0x000000000036F190 "_"
 *   insn=0x000000000036F190 string=0x000000000036F194 "l"
 *   insn=0x000000000036F1AC string=0x000000000036F1B0 "K"
 *   insn=0x000000000036F1B0 string=0x000000000036F1B4 "+"
 *   insn=0x000000000036F1B4 string=0x000000000036F1B8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(
        Caver::ProfileManager *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  _QWORD *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x21
  int v15; // w22
  void *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  Caver::GameViewController *v19; // x0
  long double v20; // q0
  Caver::PlayerProfile *v21; // x8
  __int64 v22; // x9
  __int64 v23; // x10
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 (__fastcall *v27)(float, long double); // x8
  __int64 result; // x0
  __int64 v29; // x8
  __int64 v30; // x8
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x8
  _QWORD *v34; // x21
  __int64 v35; // x22
  void *v36; // x0
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x21
  __int64 v40; // x22
  void *v41; // x0
  __int64 v42; // x8
  __int64 v43; // x8
  unsigned int *v44; // x8
  int v45; // w9
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  _QWORD *v52; // [xsp+8h] [xbp-68h]
  __int64 v53; // [xsp+10h] [xbp-60h] BYREF
  _QWORD *v54; // [xsp+18h] [xbp-58h]
  __int64 v55; // [xsp+28h] [xbp-48h]
  _QWORD *v56; // [xsp+30h] [xbp-40h]
  __int64 v57; // [xsp+38h] [xbp-38h]

  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::ProfileManager::sharedManager(a1);
  sub_56A528(&v53, *(_QWORD *)a3 + 24LL);
  Caver::ProfileManager::ProfileWithIdentifier();
  v6 = v55;
  v5 = v56;
  if ( v56 )
  {
    v7 = v56[1] - 1LL;
    v56[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v8 = v5[2] - 1LL;
      v5[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v9 = (void *)(v53 - 24);
  if ( (__int64 *)(v53 - 24) != &qword_6FD2E0 )
  {
    v44 = (unsigned int *)(v53 - 8);
    if ( &pthread_create )
    {
      do
        v45 = __ldaxr(v44);
      while ( __stlxr(v45 - 1, v44) );
    }
    else
    {
      v45 = (*v44)--;
    }
    if ( v45 <= 0 )
    {
      operator delete(v9);
      if ( v6 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  if ( !v6 )
  {
LABEL_7:
    Caver::ProfileManager::sharedManager((Caver::ProfileManager *)v9);
    Caver::ProfileManager::AddProfile();
  }
LABEL_8:
  v11 = *(_QWORD *)(*(_QWORD *)a3 + 128LL);
  v10 = *(_QWORD **)(*(_QWORD *)a3 + 136LL);
  if ( !v10
    || v10[1]
    || ((*(void (__fastcall **)(_QWORD))(*v10 + 16LL))(*(_QWORD *)(*(_QWORD *)a3 + 136LL)),
        v12 = v10[2] - 1LL,
        (v10[2] = v12) != 0) )
  {
    if ( v11 )
      goto LABEL_13;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
  if ( !v11 )
LABEL_12:
    Caver::PlayerProfile::LoadGameState(*(Caver::PlayerProfile **)a3);
LABEL_13:
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 128LL);
  v14 = *(_QWORD **)(*(_QWORD *)a3 + 136LL);
  if ( v14 )
    ++v14[1];
  sub_56A528(&v53, v13 + 344);
  v15 = sub_5689E0((int)&v53, "theend");
  v16 = (void *)(v53 - 24);
  if ( (__int64 *)(v53 - 24) == &qword_6FD2E0 )
    goto LABEL_16;
  v46 = (unsigned int *)(v53 - 8);
  if ( &pthread_create )
  {
    do
      v47 = __ldaxr(v46);
    while ( __stlxr(v47 - 1, v46) );
  }
  else
  {
    v47 = (*v46)--;
  }
  if ( v47 > 0 )
  {
LABEL_16:
    if ( !v14 )
      goto LABEL_20;
  }
  else
  {
    operator delete(v16);
    if ( !v14 )
      goto LABEL_20;
  }
  v17 = v14[1] - 1LL;
  v14[1] = v17;
  if ( !v17 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    v18 = v14[2] - 1LL;
    v14[2] = v18;
    if ( !v18 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
  }
LABEL_20:
  if ( v15 )
    goto LABEL_21;
  v35 = *(_QWORD *)(*(_QWORD *)a3 + 128LL);
  v34 = *(_QWORD **)(*(_QWORD *)a3 + 136LL);
  if ( v34 )
    ++v34[1];
  sub_566BB8((int)&v53, "town_part1");
  sub_56A6A8(v35 + 344);
  v36 = (void *)(v53 - 24);
  if ( (__int64 *)(v53 - 24) == &qword_6FD2E0 )
    goto LABEL_41;
  v48 = (unsigned int *)(v53 - 8);
  if ( &pthread_create )
  {
    do
      v49 = __ldaxr(v48);
    while ( __stlxr(v49 - 1, v48) );
  }
  else
  {
    v49 = (*v48)--;
  }
  if ( v49 > 0 )
  {
LABEL_41:
    if ( !v34 )
      goto LABEL_45;
  }
  else
  {
    operator delete(v36);
    if ( !v34 )
      goto LABEL_45;
  }
  v37 = v34[1] - 1LL;
  v34[1] = v37;
  if ( !v37 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
    v38 = v34[2] - 1LL;
    v34[2] = v38;
    if ( !v38 )
      (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
  }
LABEL_45:
  v40 = *(_QWORD *)(*(_QWORD *)a3 + 128LL);
  v39 = *(_QWORD **)(*(_QWORD *)a3 + 136LL);
  if ( v39 )
    ++v39[1];
  sub_566BB8((int)&v53, "spawn_from_town_herohouse");
  sub_56A6A8(v40 + 352);
  v41 = (void *)(v53 - 24);
  if ( (__int64 *)(v53 - 24) == &qword_6FD2E0 )
    goto LABEL_48;
  v50 = (unsigned int *)(v53 - 8);
  if ( &pthread_create )
  {
    do
      v51 = __ldaxr(v50);
    while ( __stlxr(v51 - 1, v50) );
  }
  else
  {
    v51 = (*v50)--;
  }
  if ( v51 > 0 )
  {
LABEL_48:
    if ( !v39 )
      goto LABEL_21;
  }
  else
  {
    operator delete(v41);
    if ( !v39 )
      goto LABEL_21;
  }
  v42 = v39[1] - 1LL;
  v39[1] = v42;
  if ( !v42 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
    v43 = v39[2] - 1LL;
    v39[2] = v43;
    if ( !v43 )
      (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
  }
LABEL_21:
  v19 = (Caver::GameViewController *)operator new(0x140u);
  Caver::GameViewController::GameViewController(v19);
  boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>();
  v21 = *(Caver::PlayerProfile **)a3;
  v22 = *(_QWORD *)(a3 + 8);
  v23 = v53;
  if ( v22 )
    ++*(_QWORD *)(v22 + 8);
  v24 = *(_QWORD **)(v23 + 144);
  *(_QWORD *)(v23 + 136) = v21;
  *(_QWORD *)(v23 + 144) = v22;
  if ( v24 )
  {
    v25 = v24[1] - 1LL;
    v24[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  v27 = *(__int64 (__fastcall **)(float, long double))(**((_QWORD **)a1 + 8) + 8LL);
  v52 = v54;
  if ( v54 )
    ++v54[1];
  LODWORD(v20) = 1053609165;
  result = v27(0.4, v20);
  if ( v52 )
  {
    v29 = v52[1] - 1LL;
    v52[1] = v29;
    if ( !v29 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
      v30 = v52[2] - 1LL;
      v52[2] = v30;
      if ( !v30 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v52 + 24LL))(v52);
    }
  }
  v31 = v54;
  if ( v54 )
  {
    v32 = v54[1] - 1LL;
    v54[1] = v32;
    if ( !v32 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  return result;
}

