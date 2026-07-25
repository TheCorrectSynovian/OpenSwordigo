/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025D078
 * Mangled: _ZN5Caver23CharControllerComponent5SwingEv
 * Demangled: Caver::CharControllerComponent::Swing(void)
 *
 * Callers: 1
 *   0x00000000001FCF30  Caver::CharControllerComponent::Swing(void)
 *
 * Callees: 19
 *   0x00000000001F3810  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *   0x00000000001F4A10  Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC630  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDEE0  Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 340
 *   insn=0x000000000025D094 string=0x000000000025D098 "W"
 *   insn=0x000000000025D0A4 string=0x000000000025D0A8 "h"
 *   insn=0x000000000025D0A8 string=0x000000000025D0AC "h"
 *   insn=0x000000000025D0AC string=0x000000000025D0B0 "hN@"
 *   insn=0x000000000025D0AC string=0x000000000025D0F8 "\t"
 *   insn=0x000000000025D0B4 string=0x000000000025D0B8 "`""
 *   insn=0x000000000025D0B4 string=0x000000000025D0CC "\t\t@"
 *   insn=0x000000000025D0C0 string=0x000000000025D0C4 "hN@"
 *   insn=0x000000000025D0C0 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025D0C8 string=0x000000000025D0D8 "`"
 *   insn=0x000000000025D0CC string=0x000000000025D0D0 ")"
 *   insn=0x000000000025D0D0 string=0x000000000025D0D4 "\t\t"
 *   insn=0x000000000025D0D8 string=0x000000000025D0DC "h"
 *   insn=0x000000000025D0E0 string=0x000000000025D0E4 "\t@"
 *   insn=0x000000000025D0E0 string=0x000000000025D0F4 "5"
 *   insn=0x000000000025D0E4 string=0x000000000025D0E8 ")"
 *   insn=0x000000000025D0E8 string=0x000000000025D0EC "\t"
 *   insn=0x000000000025D0F0 string=0x000000000025D640 ""
 *   insn=0x000000000025D0FC string=0x000000000025D100 "*"
 *   insn=0x000000000025D0FC string=0x000000000025D16C "h"
 *   insn=0x000000000025D100 string=0x000000000025D104 " )@"
 *   insn=0x000000000025D100 string=0x000000000058493C "fff?"
 *   insn=0x000000000025D104 string=0x000000000025D108 "I=I"
 *   insn=0x000000000025D108 string=0x000000000025D10C "!@"
 *   insn=0x000000000025D10C string=0x000000000025D110 ""F-)"
 *   insn=0x000000000025D110 string=0x000000000025D114 ")"
 *   insn=0x000000000025D114 string=0x000000000025D118 "(EI"
 *   insn=0x000000000025D114 string=0x0000000000583944 "\n"
 *   insn=0x000000000025D120 string=0x000000000025D124 "A#"
 *   insn=0x000000000025D134 string=0x000000000025D138 ""
 *   insn=0x000000000025D134 string=0x000000000025D5CC "hN@"
 *   insn=0x000000000025D138 string=0x000000000025D13C "h'"
 *   insn=0x000000000025D14C string=0x000000000025D150 "!""
 *   insn=0x000000000025D160 string=0x000000000025D164 "D&"
 *   insn=0x000000000025D16C string=0x000000000025D170 "(1"
 *   insn=0x000000000025D170 string=0x000000000025D174 "h"
 *   insn=0x000000000025D174 string=0x000000000025D178 "H"
 *   insn=0x000000000025D178 string=0x000000000025D180 "("
 *   insn=0x000000000025D180 string=0x000000000025D184 "`"B"
 *   insn=0x000000000025D18C string=0x000000000025D190 "M"
 *   insn=0x000000000025D190 string=0x000000000025D198 "hB@"
 *   insn=0x000000000025D19C string=0x000000000025D1A0 "`"
 *   insn=0x000000000025D19C string=0x000000000025D1B0 ")"
 *   insn=0x000000000025D1A4 string=0x000000000025D1A8 "Nj"
 *   insn=0x000000000025D1A8 string=0x000000000025D1AC "hB@"
 *   insn=0x000000000025D1B4 string=0x000000000025D1B8 ")5D"
 *   insn=0x000000000025D1C4 string=0x000000000025D1C8 "  "
 *   insn=0x000000000025D1CC string=0x000000000025D1E8 ")"
 *   insn=0x000000000025D1D0 string=0x000000000025D20C "h"
 *   insn=0x000000000025D1D4 string=0x000000000025D1D8 "`"
 *   insn=0x000000000025D1DC string=0x000000000025D1E0 "@j"
 *   insn=0x000000000025D1E0 string=0x000000000025D1E4 "hB@"
 *   insn=0x000000000025D1E8 string=0x000000000025D1EC "`nB"
 *   insn=0x000000000025D1EC string=0x000000000025D1F0 "!"
 *   insn=0x000000000025D1F8 string=0x000000000025D1FC "@  "
 *   insn=0x000000000025D1FC string=0x000000000025D200 "e"
 *   insn=0x000000000025D204 string=0x000000000025D208 "h"
 *   insn=0x000000000025D210 string=0x000000000025D214 "a"
 *   insn=0x000000000025D214 string=0x000000000025D218 "F"
 *   insn=0x000000000025D218 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000025D220 string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000025D228 string=0x000000000025D22C "X$"
 *   insn=0x000000000025D228 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000025D234 string=0x000000000025D238 "\t"
 *   insn=0x000000000025D238 string=0x000000000025D23C ")y"
 *   insn=0x000000000025D240 string=0x000000000025D244 "\t"
 *   insn=0x000000000025D248 string=0x000000000025D24C "c"
 *   insn=0x000000000025D24C string=0x000000000025D250 " "
 *   insn=0x000000000025D258 string=0x000000000025D25C "E"
 *   insn=0x000000000025D278 string=0x000000000025D27C "@"
 *   insn=0x000000000025D27C string=0x0000000000587AF2 "hiro_attack"
 *   insn=0x000000000025D288 string=0x000000000025D28C "i"
 *   insn=0x000000000025D298 string=0x000000000025D29C "A"
 *   insn=0x000000000025D29C string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000025D2B0 string=0x00000000001FDEE0 "0'"
 *   insn=0x000000000025D2B8 string=0x000000000025D2BC "@"
 *   insn=0x000000000025D2BC string=0x000000000025D2C0 ""
 *   insn=0x000000000025D2C0 string=0x000000000025D2C4 ""
 *   insn=0x000000000025D2C8 string=0x000000000025D2CC ""
 *   insn=0x000000000025D2CC string=0x000000000025D2D0 ""
 *   insn=0x000000000025D2DC string=0x000000000025D2E0 "@"
 *   insn=0x000000000025D2E0 string=0x000000000025D2E4 ""
 *   insn=0x000000000025D2E4 string=0x000000000025D2E8 ""
 *   insn=0x000000000025D2EC string=0x000000000025D2F0 ""
 *   insn=0x000000000025D2F0 string=0x000000000025D2F4 ""
 *   insn=0x000000000025D308 string=0x000000000025D7C4 ")$"
 *   insn=0x000000000025D318 string=0x000000000025D31C "h"
 *   insn=0x000000000025D318 string=0x000000000025D7E8 ")$"
 *   insn=0x000000000025D320 string=0x000000000025D324 "M)"
 *   insn=0x000000000025D324 string=0x000000000025D328 "\t"
 *   insn=0x000000000025D330 string=0x000000000025D334 ")@"
 *   insn=0x000000000025D334 string=0x000000000025D338 " "
 *   insn=0x000000000025D338 string=0x000000000025D33C "h"
 *   insn=0x000000000025D33C string=0x000000000025D340 "i"
 *   insn=0x000000000025D348 string=0x000000000025D34C "\n"
 *   insn=0x000000000025D34C string=0x000000000025D350 "_"
 *   insn=0x000000000025D354 string=0x000000000025D358 "h"
 *   insn=0x000000000025D360 string=0x000000000025D378 "t"
 *   insn=0x000000000025D370 string=0x000000000025D374 "!"
 *   insn=0x000000000025D37C string=0x000000000025D43C "tN@"
 *   insn=0x000000000025D384 string=0x000000000025D398 ""
 *   insn=0x000000000025D398 string=0x000000000025D39C ""
 *   insn=0x000000000025D3A8 string=0x000000000025D3AC "@"
 *   insn=0x000000000025D3AC string=0x000000000025D3B0 ""
 *   insn=0x000000000025D3B0 string=0x000000000025D3B4 ""
 *   insn=0x000000000025D3C0 string=0x00000000001FC630 "0'"
 *   insn=0x000000000025D3C8 string=0x000000000025D3CC "@"
 *   insn=0x000000000025D3CC string=0x000000000025D3D0 ""
 *   insn=0x000000000025D3D0 string=0x000000000025D3D4 ""
 *   insn=0x000000000025D3D8 string=0x000000000025D74C ""
 *   insn=0x000000000025D3E0 string=0x000000000025D3F4 ""
 *   insn=0x000000000025D3F4 string=0x000000000025D3F8 ""
 *   insn=0x000000000025D408 string=0x000000000025D40C ""
 *   insn=0x000000000025D420 string=0x000000000025D424 "B#"
 *   insn=0x000000000025D42C string=0x000000000025D430 "\t@"
 *   insn=0x000000000025D438 string=0x000000000025D4A0 "!"
 *   insn=0x000000000025D440 string=0x000000000025D444 "`""
 *   insn=0x000000000025D44C string=0x000000000025D450 "tN@"
 *   insn=0x000000000025D454 string=0x000000000025D464 "`"
 *   insn=0x000000000025D458 string=0x000000000025D45C ""
 *   insn=0x000000000025D464 string=0x000000000025D468 "t"
 *   insn=0x000000000025D46C string=0x000000000025D470 "@"
 *   insn=0x000000000025D470 string=0x000000000025D474 ""
 *   insn=0x000000000025D474 string=0x000000000025D478 ""
 *   insn=0x000000000025D478 string=0x000000000025D47C "!"
 *   insn=0x000000000025D47C string=0x000000000025D480 ""
 *   insn=0x000000000025D480 string=0x000000000025D484 ""
 *   insn=0x000000000025D488 string=0x000000000025D48C "t"
 *   insn=0x000000000025D490 string=0x000000000025D494 " "
 *   insn=0x000000000025D4A4 string=0x000000000025D4A8 "v"
 *   insn=0x000000000025D4A8 string=0x000000000025D4AC "!"
 *   insn=0x000000000025D4B0 string=0x000000000025D4B4 "A"
 *   insn=0x000000000025D4B4 string=0x000000000025D4B8 "\n!"
 *   insn=0x000000000025D4BC string=0x000000000025D4C0 "`b"
 *   insn=0x000000000025D4C8 string=0x000000000025D4CC "v"
 *   insn=0x000000000025D4D0 string=0x000000000025D508 "v"
 *   insn=0x000000000025D4D8 string=0x000000000025D4DC "hB@"
 *   insn=0x000000000025D4E0 string=0x000000000025D4E4 "`"
 *   insn=0x000000000025D4E8 string=0x000000000025D4EC "}i"
 *   insn=0x000000000025D4EC string=0x000000000025D4F0 "hB@"
 *   insn=0x000000000025D4F4 string=0x000000000025D4F8 "A9("
 *   insn=0x000000000025D500 string=0x000000000025D504 "C]"
 *   insn=0x000000000025D504 string=0x00000000001F4A10 "P'"
 *   insn=0x000000000025D50C string=0x000000000025D510 "`"
 *   insn=0x000000000025D514 string=0x000000000025D518 "ri"
 *   insn=0x000000000025D518 string=0x000000000025D51C "v"
 *   insn=0x000000000025D520 string=0x000000000025D558 "i"
 *   insn=0x000000000025D528 string=0x000000000025D52C "hB@"
 *   insn=0x000000000025D530 string=0x000000000025D534 "`"
 *   insn=0x000000000025D538 string=0x000000000025D53C "ii"
 *   insn=0x000000000025D53C string=0x000000000025D540 "hB@"
 *   insn=0x000000000025D544 string=0x000000000025D548 "A9("
 *   insn=0x000000000025D550 string=0x000000000025D554 "/]"
 *   insn=0x000000000025D55C string=0x000000000025D560 "hB@"
 *   insn=0x000000000025D560 string=0x000000000025D564 "6UM)"
 *   insn=0x000000000025D568 string=0x000000000025D56C "`"
 *   insn=0x000000000025D570 string=0x000000000025D574 "[i"
 *   insn=0x000000000025D574 string=0x000000000025D578 "hB@"
 *   insn=0x000000000025D580 string=0x000000000025D584 "%"
 *   insn=0x000000000025D584 string=0x000000000025D5A8 ""
 *   insn=0x000000000025D588 string=0x000000000025D58C "  "
 *   insn=0x000000000025D58C string=0x000000000025D590 "M"
 *   insn=0x000000000025D590 string=0x000000000025D594 "I"
 *   insn=0x000000000025D590 string=0x000000000025D658 ""
 *   insn=0x000000000025D594 string=0x000000000025D598 "("
 *   insn=0x000000000025D598 string=0x000000000025D59C "\tq@"
 *   insn=0x000000000025D59C string=0x000000000025D5A0 "I\t"
 *   insn=0x000000000025D5A0 string=0x000000000025D5A4 "0"
 *   insn=0x000000000025D5AC string=0x000000000025D5B0 "`"
 *   insn=0x000000000025D5AC string=0x000000000025D5C0 "\tq@"
 *   insn=0x000000000025D5B4 string=0x000000000025D5B8 "Ji"
 *   insn=0x000000000025D5B8 string=0x000000000025D5BC "hB@"
 *   insn=0x000000000025D5C0 string=0x000000000025D5C4 ")"
 *   insn=0x000000000025D5C4 string=0x000000000025D5C8 "'"
 *   insn=0x000000000025D5D0 string=0x000000000025D5D4 "`""
 *   insn=0x000000000025D5D0 string=0x000000000025D5E8 "\t\t@"
 *   insn=0x000000000025D5D8 string=0x000000000025D5DC "Ai"
 *   insn=0x000000000025D5DC string=0x000000000025D5E0 "hN@"
 *   insn=0x000000000025D5E4 string=0x000000000025D5F4 "`"
 *   insn=0x000000000025D5E8 string=0x000000000025D5EC ")"
 *   insn=0x000000000025D5EC string=0x000000000025D5F0 "\t\t"
 *   insn=0x000000000025D5F4 string=0x000000000025D5F8 "h"
 *   insn=0x000000000025D5FC string=0x000000000025D600 "\t@"
 *   insn=0x000000000025D600 string=0x000000000025D604 ")"
 *   insn=0x000000000025D604 string=0x000000000025D608 "\t"
 *   insn=0x000000000025D608 string=0x000000000025D60C "a"
 *   insn=0x000000000025D60C string=0x000000000025D610 ""
 *   insn=0x000000000025D610 string=0x000000000025D614 ""
 *   insn=0x000000000025D618 string=0x000000000025D61C "h"
 *   insn=0x000000000025D61C string=0x000000000025D620 ""
 *   insn=0x000000000025D630 string=0x000000000025D634 "h"
 *   insn=0x000000000025D634 string=0x000000000025D638 "`*"
 *   insn=0x000000000025D638 string=0x000000000025D63C "V"
 *   insn=0x000000000025D640 string=0x000000000025D644 ""
 *   insn=0x000000000025D648 string=0x000000000025D64C "h"
 *   insn=0x000000000025D64C string=0x000000000025D650 "H"
 *   insn=0x000000000025D650 string=0x000000000025D654 "P"
 *   insn=0x000000000025D658 string=0x000000000025D65C "\tq@"
 *   insn=0x000000000025D65C string=0x000000000025D660 "I"
 *   insn=0x000000000025D664 string=0x000000000025D668 "\nA!"
 *   insn=0x000000000025D668 string=0x000000000025D66C " !*"
 *   insn=0x000000000025D674 string=0x000000000025D678 "`"
 *   insn=0x000000000025D680 string=0x000000000025D684 "hB@"
 *   insn=0x000000000025D68C string=0x000000000025D690 " 9 "
 *   insn=0x000000000025D694 string=0x000000000025D698 "M"
 *   insn=0x000000000025D698 string=0x000000000025D69C "\n"
 *   insn=0x000000000025D698 string=0x000000000025D6C0 "V"
 *   insn=0x000000000025D69C string=0x000000000025D6A0 ""
 *   insn=0x000000000025D6A0 string=0x000000000025D6A4 "`"
 *   insn=0x000000000025D6A8 string=0x000000000025D6AC "i"
 *   insn=0x000000000025D6AC string=0x000000000025D6B0 "hB@"
 *   insn=0x000000000025D6B8 string=0x000000000025D6BC "*9 "
 *   insn=0x000000000025D6C0 string=0x000000000025D6C4 "*"
 *   insn=0x000000000025D6C4 string=0x000000000025D76C "h"
 *   insn=0x000000000025D6C8 string=0x000000000025D6CC "?"
 *   insn=0x000000000025D6C8 string=0x000000000025D6D8 "`"
 *   insn=0x000000000025D6CC string=0x000000000025D6D0 "*"
 *   insn=0x000000000025D6D0 string=0x000000000025D6D4 "&"
 *   insn=0x000000000025D6E0 string=0x000000000025D6E4 "hB@"
 *   insn=0x000000000025D6E4 string=0x000000000025D6E8 "\tq@"
 *   insn=0x000000000025D6E8 string=0x000000000025D6EC "?"
 *   insn=0x000000000025D700 string=0x000000000025D704 "`"
 *   insn=0x000000000025D70C string=0x000000000025D710 "hB@"
 *   insn=0x000000000025D724 string=0x000000000025D728 ""
 *   insn=0x000000000025D728 string=0x000000000025D72C "`"
 *   insn=0x000000000025D734 string=0x000000000025D738 "hB@"
 *   insn=0x000000000025D744 string=0x000000000025D748 ""
 *   insn=0x000000000025D74C string=0x000000000025D750 ""
 *   insn=0x000000000025D75C string=0x000000000025D760 "!"
 *   insn=0x000000000025D774 string=0x000000000025D778 ""
 *   insn=0x000000000025D788 string=0x000000000025D78C ""
 *   insn=0x000000000025D79C string=0x000000000025D7A0 "a"
 *   insn=0x000000000025D7C4 string=0x000000000025D7C8 ")=G"
 *   insn=0x000000000025D7C8 string=0x000000000025D7CC "!"
 *   insn=0x000000000025D7D0 string=0x000000000025D7D4 "\t"
 *   insn=0x000000000025D7D0 string=0x000000000025D80C "\t"
 *   insn=0x000000000025D7D4 string=0x000000000025D7D8 "*"
 *   insn=0x000000000025D7D8 string=0x000000000025D7DC "\n"
 *   insn=0x000000000025D7E0 string=0x000000000025D7E4 ""
 *   insn=0x000000000025D7E4 string=0x000000000025D818 "?"
 *   insn=0x000000000025D7E8 string=0x000000000025D7EC ")=G"
 *   insn=0x000000000025D7EC string=0x000000000025D7F0 "!"
 *   insn=0x000000000025D7F4 string=0x000000000025D7F8 "\t"
 *   insn=0x000000000025D7F4 string=0x000000000025D82C "\t"
 *   insn=0x000000000025D7F8 string=0x000000000025D7FC "*"
 *   insn=0x000000000025D7FC string=0x000000000025D800 "\n"
 *   insn=0x000000000025D808 string=0x000000000025D838 "?"
 *   insn=0x000000000025D80C string=0x000000000025D810 "*"
 *   insn=0x000000000025D810 string=0x000000000025D814 "\n"
 *   insn=0x000000000025D82C string=0x000000000025D830 "*"
 *   insn=0x000000000025D830 string=0x000000000025D834 "\n"
 *   insn=0x000000000025D84C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000025D85C string=0x000000000025D860 "h"
 *   insn=0x000000000025D860 string=0x000000000025D864 "\t\t@"
 *   insn=0x000000000025D864 string=0x000000000025D868 ")"
 *   insn=0x000000000025D868 string=0x000000000025D86C "\t\t"
 *   insn=0x000000000025D870 string=0x000000000025D874 "\t"
 *   insn=0x000000000025D874 string=0x000000000025D878 ")"
 *   insn=0x000000000025D87C string=0x000000000025D880 " "
 *   insn=0x000000000025D894 string=0x000000000025D898 "a"
 *   insn=0x000000000025D898 string=0x000000000025D8E4 ")$"
 *   insn=0x000000000025D8A8 string=0x000000000025D8AC ")$"
 *   insn=0x000000000025D8AC string=0x000000000025D8B0 ")=G"
 *   insn=0x000000000025D8B0 string=0x000000000025D8B4 "!"
 *   insn=0x000000000025D8B8 string=0x000000000025D8BC "\t"
 *   insn=0x000000000025D8B8 string=0x000000000025D928 "\t"
 *   insn=0x000000000025D8BC string=0x000000000025D8C0 "*"
 *   insn=0x000000000025D8C0 string=0x000000000025D8C4 "\n"
 *   insn=0x000000000025D8C8 string=0x000000000025D8CC "?"
 *   insn=0x000000000025D8E4 string=0x000000000025D8E8 ")=G"
 *   insn=0x000000000025D8E8 string=0x000000000025D8EC "!"
 *   insn=0x000000000025D8F0 string=0x000000000025D8F4 "\t"
 *   insn=0x000000000025D8F0 string=0x000000000025D908 "\t"
 *   insn=0x000000000025D8F4 string=0x000000000025D8F8 "*"
 *   insn=0x000000000025D8F8 string=0x000000000025D8FC "\n"
 *   insn=0x000000000025D904 string=0x000000000025D914 "?"
 *   insn=0x000000000025D908 string=0x000000000025D90C "*"
 *   insn=0x000000000025D90C string=0x000000000025D910 "\n"
 *   insn=0x000000000025D914 string=0x000000000025D918 ","
 *   insn=0x000000000025D928 string=0x000000000025D92C "*"
 *   insn=0x000000000025D92C string=0x000000000025D930 "\n"
 *   insn=0x000000000025D930 string=0x000000000025D934 "?"
 *   insn=0x000000000025D938 string=0x000000000025D93C "1"
 *   insn=0x000000000025D948 string=0x000000000025D94C "\t\t@"
 *   insn=0x000000000025D94C string=0x000000000025D950 ")"
 *   insn=0x000000000025D950 string=0x000000000025D954 "\t\t"
 *   insn=0x000000000025D954 string=0x000000000025D958 "A"
 *   insn=0x000000000025D958 string=0x000000000025D95C "\t"
 *   insn=0x000000000025D95C string=0x000000000025D960 ")"
 *   insn=0x000000000025D964 string=0x000000000025D968 " "
 *   insn=0x000000000025D968 string=0x000000000025D96C "%"
 *   insn=0x000000000025D978 string=0x000000000025D97C "(a"
 *   insn=0x000000000025D984 string=0x000000000025D988 "*$"
 *   insn=0x000000000025D988 string=0x000000000025D98C "J=G"
 *   insn=0x000000000025D98C string=0x000000000025D990 ")!"
 *   insn=0x000000000025D994 string=0x000000000025D998 "*"
 *   insn=0x000000000025D994 string=0x000000000025D9C4 "*"
 *   insn=0x000000000025D998 string=0x000000000025D99C "K"
 *   insn=0x000000000025D99C string=0x000000000025D9A0 "+"
 *   insn=0x000000000025D9A4 string=0x000000000025D9A8 "_"
 *   insn=0x000000000025D9B4 string=0x000000000025D9B8 "{2"
 *   insn=0x000000000025D9C4 string=0x000000000025D9C8 "K"
 *   insn=0x000000000025D9C8 string=0x000000000025D9CC "+"
 *   insn=0x000000000025D9CC string=0x000000000025D9D0 "_"
 *   insn=0x000000000025D9D4 string=0x000000000025D9D8 "\n"
 *   insn=0x000000000025D9E0 string=0x000000000025D9E4 ""
 *   insn=0x000000000025D9F0 string=0x000000000025D9F4 ""
 *   insn=0x000000000025DA04 string=0x000000000025DA08 "Q"
 *   insn=0x000000000025DA18 string=0x000000000025DA1C "h"
 *   insn=0x000000000025DA20 string=0x000000000025DA24 "`NA"
 *   insn=0x000000000025DA20 string=0x000000000025DA74 "hN@"
 *   insn=0x000000000025DA24 string=0x000000000025DA28 "!"
 *   insn=0x000000000025DA30 string=0x000000000025DA34 "`"
 *   insn=0x000000000025DA34 string=0x000000000025DA38 "aNA"
 *   insn=0x000000000025DA3C string=0x000000000025DA40 "h"
 *   insn=0x000000000025DA40 string=0x000000000025DA44 "`NA"
 *   insn=0x000000000025DA40 string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000025DA4C string=0x000000000025DA50 "@"
 *   insn=0x000000000025DA50 string=0x000000000025DA54 ""
 *   insn=0x000000000025DA54 string=0x000000000025DA58 ""
 *   insn=0x000000000025DA5C string=0x000000000025DA60 ""
 *   insn=0x000000000025DA60 string=0x000000000025DA64 ""
 *   insn=0x000000000025DA74 string=0x000000000025DA78 "h"
 *   insn=0x000000000025DA78 string=0x000000000025DA7C "iB"
 *   insn=0x000000000025DA78 string=0x000000000025DA84 "`""
 *   insn=0x000000000025DA7C string=0x000000000025DA80 ""
 *   insn=0x000000000025DA80 string=0x000000000025DA9C "\n\t@"
 *   insn=0x000000000025DA8C string=0x000000000025DA90 "hN@"
 *   insn=0x000000000025DA90 string=0x000000000025DA94 "iB"
 *   insn=0x000000000025DA98 string=0x000000000025DAA8 " "
 *   insn=0x000000000025DA9C string=0x000000000025DAA0 "J"
 *   insn=0x000000000025DAA0 string=0x000000000025DAA4 "\n\t"
 *   insn=0x000000000025DAA8 string=0x000000000025DAAC "("
 *   insn=0x000000000025DAB0 string=0x000000000025DAB4 "@"
 *   insn=0x000000000025DAB4 string=0x000000000025DAB8 ""
 *   insn=0x000000000025DAB8 string=0x000000000025DABC ""
 *   insn=0x000000000025DAC0 string=0x000000000025DAC4 ""
 *   insn=0x000000000025DAC4 string=0x000000000025DAC8 ""
 *   insn=0x000000000025DAD8 string=0x000000000025DADC "MW"
 *   insn=0x000000000025DADC string=0x00000000001F3810 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::Swing(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  int v3; // w9
  float *v4; // x9
  float *v5; // x8
  float v6; // s0
  float *v7; // x8
  int v8; // w8
  Caver::SoundLibrary *v9; // x0
  Caver *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  int v13; // w8
  __int64 v14; // x0
  int v15; // w8
  void *v16; // x0
  char *v17; // x0
  float *v18; // x0
  int v19; // w8
  int v20; // w9
  float *v21; // x21
  int v22; // w8
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  int v26; // w8
  __int64 v27; // x0
  _DWORD *v28; // x20
  __int64 v29; // x8
  float v30; // s0
  float v31; // s2
  __int64 v32; // x20
  _DWORD *v33; // x0
  int v34; // w8
  Caver::SwingableWeaponControllerComponent *v35; // x22
  float v36; // s8
  float v37; // s10
  __int64 v38; // x8
  Caver::SwingableWeaponControllerComponent *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  int v43; // w21
  float v44; // w22
  float v45; // s8
  int v46; // w9
  float v47; // s10
  float v48; // s0
  __int64 v49; // x8
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  char *v54; // [xsp+28h] [xbp-98h] BYREF
  __int64 v55; // [xsp+30h] [xbp-90h] BYREF
  __int64 v56; // [xsp+38h] [xbp-88h]
  __int64 v57; // [xsp+40h] [xbp-80h]
  __int64 v58; // [xsp+50h] [xbp-70h]
  _BYTE v59[12]; // [xsp+64h] [xbp-5Ch] BYREF

  v1 = this;
  *(_QWORD *)&v59[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(this + 400);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(this + 152);
    if ( v2
      || (Caver::ComponentOutletBase::Connect(
            (Caver::ComponentOutletBase *)(this + 136),
            (const Caver::Component *)this),
          (v2 = *(_QWORD *)(v1 + 152)) != 0) )
    {
      ++*(_DWORD *)(v2 + 8);
    }
    this = *(_QWORD *)(v1 + 400);
    *(_QWORD *)(v1 + 400) = v2;
    if ( this && (v3 = *(_DWORD *)(this + 8) - 1, (*(_DWORD *)(this + 8) = v3) == 0) )
    {
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
      v2 = *(_QWORD *)(v1 + 400);
      if ( !v2 )
        return this;
    }
    else if ( !v2 )
    {
      return this;
    }
  }
  v4 = *(float **)(v2 + 368);
  if ( v4 && (float)((float)((float)(v4[10] * 0.9) - v4[3]) * (float)(v4[12] * v4[13])) > 0.01 )
  {
    v5 = *(float **)(v2 + 368);
    if ( v5 )
    {
      v6 = (float)((float)(v5[10] * 0.9) - v5[3]) * (float)(v5[12] * v5[13]);
      if ( v6 >= 0.25 )
        return this;
    }
    else
    {
      v6 = 0.0;
    }
    *(_BYTE *)(v1 + 548) = 1;
    *(float *)(v1 + 552) = v6 + 0.01;
    return this;
  }
  if ( !*(_DWORD *)(v1 + 536) )
    return this;
  if ( *(_BYTE *)(v1 + 580) )
    *(_BYTE *)(v1 + 580) = 0;
  if ( *(float *)(v1 + 544) > 0.8 )
    *(_DWORD *)(v1 + 540) = 0;
  v7 = *(float **)(v1 + 128);
  if ( !v7 )
  {
    this = Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 112), (const Caver::Component *)v1);
    v7 = *(float **)(v1 + 128);
  }
  if ( v7[32] >= 0.1 )
  {
    if ( !v7 )
    {
      this = Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 112), (const Caver::Component *)v1);
      v7 = *(float **)(v1 + 128);
    }
  }
  else if ( v7[35] > 0.0 )
  {
    goto LABEL_27;
  }
  if ( v7[54] < (float)(*(float *)(v1 + 620) * 0.6) )
    *(_DWORD *)(v1 + 540) = 2;
LABEL_27:
  v8 = *(_DWORD *)(v1 + 540);
  if ( v8 == 2 )
  {
    v9 = (Caver::SoundLibrary *)Caver::AudioSystem::sharedSystem((Caver::AudioSystem *)this);
    Caver::SoundLibrary::sharedLibrary(v9);
    Caver::fastrandom(v10);
    v54 = &byte_6FD2F8;
    v11 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    sub_569E1C(&v54, 0, qword_6FD2E0, v11, &v59[-v11]);
    ((void (__fastcall *)(__int64 *__return_ptr, const char *, char **))loc_25A030)(&v55, "hiro_attack", &v54);
    Caver::SoundLibrary::EffectForName();
    Caver::AudioSystem::PlaySoundEffect();
    v12 = v57;
    if ( v57 )
    {
      v13 = *(_DWORD *)(v57 + 8) - 1;
      *(_DWORD *)(v57 + 8) = v13;
      if ( !v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v14 = v56;
    if ( v56 )
    {
      v15 = *(_DWORD *)(v56 + 8) - 1;
      *(_DWORD *)(v56 + 8) = v15;
      if ( !v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v16 = (void *)(v55 - 24);
    if ( (__int64 *)(v55 - 24) != &qword_6FD2E0 )
    {
      v50 = (unsigned int *)(v55 - 8);
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
      if ( v51 <= 0 )
        operator delete(v16);
    }
    v17 = v54 - 24;
    if ( v54 - 24 != (char *)&qword_6FD2E0 )
    {
      v52 = (unsigned int *)(v54 - 8);
      if ( &pthread_create )
      {
        do
          v53 = __ldaxr(v52);
        while ( __stlxr(v53 - 1, v52) );
      }
      else
      {
        v53 = (*v52)--;
      }
      if ( v53 <= 0 )
        operator delete(v17);
    }
    v8 = *(_DWORD *)(v1 + 540);
  }
  v18 = (float *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 24LL * v8 + 464) + 24LL))(
                   v1 + 24LL * v8 + 464,
                   v1);
  v19 = *(_DWORD *)(v1 + 540);
  v20 = *(_DWORD *)(v1 + 536);
  v21 = v18;
  *(_DWORD *)(v1 + 544) = 0;
  if ( v19 + 1 < v20 )
    v22 = v19 + 1;
  else
    v22 = 0;
  *(_DWORD *)(v1 + 540) = v22;
  if ( *((_QWORD *)v18 + 16)
    || (this = Caver::ComponentOutletBase::Connect(
                 (Caver::ComponentOutletBase *)(v18 + 28),
                 (const Caver::Component *)v18),
        *((_QWORD *)v21 + 16)) )
  {
    if ( *(_QWORD *)(v1 + 400) )
      goto LABEL_43;
    v32 = *(_QWORD *)(v1 + 152);
    if ( v32
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 136), (const Caver::Component *)v1),
          (v32 = *(_QWORD *)(v1 + 152)) != 0) )
    {
      ++*(_DWORD *)(v32 + 8);
    }
    v33 = *(_DWORD **)(v1 + 400);
    *(_QWORD *)(v1 + 400) = v32;
    if ( !v33 || (v34 = v33[2] - 1, (v33[2] = v34) != 0) )
    {
LABEL_43:
      v23 = *((_QWORD *)v21 + 16);
      if ( v23 )
        goto LABEL_45;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 8LL))(v33);
      v23 = *((_QWORD *)v21 + 16);
      if ( v23 )
      {
LABEL_45:
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 264LL))(v23);
        v58 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        Caver::CharAnimControllerComponent::SwingWithAnimation();
        v25 = v58;
        if ( v58 && (v26 = *(_DWORD *)(v58 + 8) - 1, (*(_DWORD *)(v58 + 8) = v26) == 0) )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
          v27 = *((_QWORD *)v21 + 16);
          if ( v27 )
          {
LABEL_51:
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 264LL))(v27);
            v28 = (_DWORD *)this;
            if ( this )
              ++*(_DWORD *)(this + 8);
            v29 = *(_QWORD *)(this + 24);
            v30 = *(float *)(this + 40) / (float)(*(float *)(this + 48) * *(float *)(this + 52));
            if ( v29 )
            {
              LODWORD(v29) = *(_DWORD *)(v29 + 8);
              v31 = (float)(int)v29;
            }
            else
            {
              v31 = 0.0;
            }
            v35 = *(Caver::SwingableWeaponControllerComponent **)(v1 + 424);
            v36 = v30 * (float)(v21[34] / v31);
            v37 = v30 * (float)(v21[35] / (float)(int)v29);
            if ( v35
              || (this = Caver::ComponentOutletBase::Connect(
                           (Caver::ComponentOutletBase *)(v1 + 408),
                           (const Caver::Component *)v1),
                  (v35 = *(Caver::SwingableWeaponControllerComponent **)(v1 + 424)) != 0) )
            {
              if ( *((_BYTE *)v21 + 145) )
              {
                v38 = *(_QWORD *)(v1 + 128);
                if ( !v38 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v1 + 112),
                    (const Caver::Component *)v1);
                  v38 = *(_QWORD *)(v1 + 128);
                }
                this = Caver::SwingableWeaponControllerComponent::StartSwing(
                         v35,
                         *(_DWORD *)(v38 + 112),
                         v36,
                         v37 - v36);
              }
            }
            v39 = *(Caver::SwingableWeaponControllerComponent **)(v1 + 448);
            if ( v39
              || (this = Caver::ComponentOutletBase::Connect(
                           (Caver::ComponentOutletBase *)(v1 + 432),
                           (const Caver::Component *)v1),
                  (v39 = *(Caver::SwingableWeaponControllerComponent **)(v1 + 448)) != 0) )
            {
              if ( *((_BYTE *)v21 + 144) )
              {
                v40 = *(_QWORD *)(v1 + 128);
                if ( !v40 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v1 + 112),
                    (const Caver::Component *)v1);
                  v40 = *(_QWORD *)(v1 + 128);
                }
                this = Caver::SwingableWeaponControllerComponent::StartSwing(
                         v39,
                         *(_DWORD *)(v40 + 112),
                         v36,
                         v37 - v36);
              }
            }
            v41 = *(_QWORD *)(v1 + 40);
            *(_DWORD *)(v1 + 556) = 0;
            v42 = *(_QWORD *)(v1 + 128);
            v44 = *(float *)(v41 + 104);
            v43 = *(_DWORD *)(v41 + 108);
            if ( !v42 )
            {
              this = Caver::ComponentOutletBase::Connect(
                       (Caver::ComponentOutletBase *)(v1 + 112),
                       (const Caver::Component *)v1);
              v42 = *(_QWORD *)(v1 + 128);
            }
            if ( *(float *)(v42 + 128) >= 0.1 )
            {
              v45 = 10.0;
              if ( !v42 )
              {
                this = Caver::ComponentOutletBase::Connect(
                         (Caver::ComponentOutletBase *)(v1 + 112),
                         (const Caver::Component *)v1);
                v42 = *(_QWORD *)(v1 + 128);
              }
              v46 = *(_DWORD *)(v42 + 112);
              if ( (v46 & 0x80000000) == 0 )
                goto LABEL_97;
            }
            else if ( *(float *)(v42 + 140) <= 0.0 )
            {
              v45 = 10.0;
              v46 = *(_DWORD *)(v42 + 112);
              if ( (v46 & 0x80000000) == 0 )
                goto LABEL_97;
            }
            else
            {
              v45 = 150.0;
              v46 = *(_DWORD *)(v42 + 112);
              if ( (v46 & 0x80000000) == 0 )
                goto LABEL_97;
            }
            v47 = -v45;
            if ( v44 > (float)-v45 )
            {
              if ( !v42 )
              {
                this = Caver::ComponentOutletBase::Connect(
                         (Caver::ComponentOutletBase *)(v1 + 112),
                         (const Caver::Component *)v1);
                v42 = *(_QWORD *)(v1 + 128);
              }
              if ( (float)(v44 - (float)(v45 * *(float *)(v42 + 168))) > v47 )
              {
                v47 = v44 - (float)(v45 * *(float *)(v42 + 168));
                if ( !v42 )
                {
                  this = Caver::ComponentOutletBase::Connect(
                           (Caver::ComponentOutletBase *)(v1 + 112),
                           (const Caver::Component *)v1);
                  v47 = v44 - (float)(v45 * *(float *)(*(_QWORD *)(v1 + 128) + 168LL));
                }
              }
              v44 = v47;
              goto LABEL_111;
            }
LABEL_97:
            if ( v42 )
            {
              if ( v46 < 1 )
              {
LABEL_111:
                v49 = *(_QWORD *)(v1 + 40);
                *(float *)(v49 + 104) = v44;
                *(_DWORD *)(v49 + 108) = v43;
                LODWORD(v49) = v28[2] - 1;
                v28[2] = v49;
                if ( !(_DWORD)v49 )
                  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 8LL))(v28);
                return this;
              }
            }
            else
            {
              this = Caver::ComponentOutletBase::Connect(
                       (Caver::ComponentOutletBase *)(v1 + 112),
                       (const Caver::Component *)v1);
              v42 = *(_QWORD *)(v1 + 128);
              if ( *(int *)(v42 + 112) < 1 )
                goto LABEL_111;
            }
            if ( v45 > v44 )
            {
              if ( !v42 )
              {
                this = Caver::ComponentOutletBase::Connect(
                         (Caver::ComponentOutletBase *)(v1 + 112),
                         (const Caver::Component *)v1);
                v42 = *(_QWORD *)(v1 + 128);
              }
              v48 = (float)(v45 * *(float *)(v42 + 168)) + v44;
              if ( v48 >= v45 )
              {
                v48 = v45;
              }
              else if ( !v42 )
              {
                this = Caver::ComponentOutletBase::Connect(
                         (Caver::ComponentOutletBase *)(v1 + 112),
                         (const Caver::Component *)v1);
                v48 = (float)(v45 * *(float *)(*(_QWORD *)(v1 + 128) + 168LL)) + v44;
              }
              v44 = v48;
            }
            goto LABEL_111;
          }
        }
        else
        {
          v27 = *((_QWORD *)v21 + 16);
          if ( v27 )
            goto LABEL_51;
        }
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v21 + 28), (const Caver::Component *)v21);
        v27 = *((_QWORD *)v21 + 16);
        goto LABEL_51;
      }
    }
    Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v21 + 28), (const Caver::Component *)v21);
    v23 = *((_QWORD *)v21 + 16);
    goto LABEL_45;
  }
  return this;
}

