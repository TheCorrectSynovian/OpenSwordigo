/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B7610
 * Mangled: _ZNK5Caver9GameState21SaveToProtobufMessageEPNS_5Proto9GameStateE
 * Demangled: Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callers: 1
 *   0x00000000001FD080  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 21
 *   0x00000000001F41D0  Caver::Proto::LevelState::LevelState(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6AE0  Caver::Proto::CharacterState::CharacterState(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73F0  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC950  Caver::Proto::QuestText::QuestText(void)
 *   0x00000000001FCB20  Caver::Proto::QuestState::QuestState(void)
 *   0x00000000001FDCF0  Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *   0x00000000001FF0A0  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *   0x0000000000201580  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *   0x0000000000202E20  Caver::Proto::StateProperties::StateProperties(void)
 *   0x0000000000203A60  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 231
 *   insn=0x00000000003B7628 string=0x00000000003B762C "Y"
 *   insn=0x00000000003B762C string=0x00000000003B7630 "("
 *   insn=0x00000000003B763C string=0x00000000003B7640 "h"
 *   insn=0x00000000003B7640 string=0x00000000003B7644 "u\n@"
 *   insn=0x00000000003B7644 string=0x00000000003B7648 ""
 *   insn=0x00000000003B7648 string=0x00000000003B764C "h"
 *   insn=0x00000000003B7658 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B765C string=0x00000000003B7660 " "
 *   insn=0x00000000003B7660 string=0x00000000003B7664 "u\n"
 *   insn=0x00000000003B7660 string=0x00000000001F6AE0 "0'"
 *   insn=0x00000000003B7678 string=0x00000000003B767C "_"
 *   insn=0x00000000003B7680 string=0x00000000003B7684 "vb"
 *   insn=0x00000000003B7684 string=0x00000000003B7688 "i"D)"
 *   insn=0x00000000003B768C string=0x00000000003B7690 ")}@"
 *   insn=0x00000000003B7690 string=0x00000000003B7694 "?"
 *   insn=0x00000000003B7698 string=0x00000000003B769C "h"
 *   insn=0x00000000003B7698 string=0x00000000003B76B0 "i*@"
 *   insn=0x00000000003B769C string=0x00000000003B76A0 "*"
 *   insn=0x00000000003B76A0 string=0x00000000003B76A4 "j""
 *   insn=0x00000000003B76B8 string=0x00000000003B76CC ""
 *   insn=0x00000000003B76C4 string=0x00000000003B76C8 "h&@"
 *   insn=0x00000000003B76C4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003B76D0 string=0x00000000003B76D4 "h&"
 *   insn=0x00000000003B76E0 string=0x00000000003B76E4 "h""
 *   insn=0x00000000003B76E0 string=0x00000000001F41D0 "P'"
 *   insn=0x00000000003B76E4 string=0x00000000003B76E8 "i"
 *   insn=0x00000000003B76E8 string=0x00000000003B76EC "\n"
 *   insn=0x00000000003B76EC string=0x00000000003B76F0 "j""
 *   insn=0x00000000003B76F0 string=0x00000000003B76F4 "8y("
 *   insn=0x00000000003B76FC string=0x00000000003B7700 "h"
 *   insn=0x00000000003B770C string=0x00000000003B7710 "_"
 *   insn=0x00000000003B771C string=0x00000000003B7720 "_"
 *   insn=0x00000000003B7724 string=0x00000000003B7728 "v"
 *   insn=0x00000000003B7724 string=0x00000000003B77BC "h"
 *   insn=0x00000000003B7728 string=0x00000000003B772C "i"Q)"
 *   insn=0x00000000003B7730 string=0x00000000003B7734 ")}@"
 *   insn=0x00000000003B7734 string=0x00000000003B7738 "?"
 *   insn=0x00000000003B773C string=0x00000000003B7740 "hB@"
 *   insn=0x00000000003B773C string=0x00000000003B7754 "i"
 *   insn=0x00000000003B7740 string=0x00000000003B7744 "*"
 *   insn=0x00000000003B7744 string=0x00000000003B7748 "j"
 *   insn=0x00000000003B775C string=0x00000000003B7770 ""
 *   insn=0x00000000003B7764 string=0x00000000003B7768 "n"
 *   insn=0x00000000003B7768 string=0x00000000003B776C "h"
 *   insn=0x00000000003B7774 string=0x00000000003B7778 "h"
 *   insn=0x00000000003B7784 string=0x00000000003B7788 "h"
 *   insn=0x00000000003B7784 string=0x00000000001FCB20 "0'"
 *   insn=0x00000000003B7788 string=0x00000000003B778C "iB@"
 *   insn=0x00000000003B778C string=0x00000000003B7790 "\n"
 *   insn=0x00000000003B7790 string=0x00000000003B7794 "j"
 *   insn=0x00000000003B7794 string=0x00000000003B7798 "8y("
 *   insn=0x00000000003B77A0 string=0x00000000003B77A4 "S"
 *   insn=0x00000000003B77A4 string=0x00000000001FDCF0 "0'"
 *   insn=0x00000000003B77B0 string=0x00000000003B77B4 "_"
 *   insn=0x00000000003B77BC string=0x00000000003B77C0 "u^@"
 *   insn=0x00000000003B77C0 string=0x00000000003B77C4 ""
 *   insn=0x00000000003B77C4 string=0x00000000003B77C8 "h"
 *   insn=0x00000000003B77DC string=0x00000000003B77E0 "u^"
 *   insn=0x00000000003B77EC string=0x00000000003B77F0 "i"
 *   insn=0x00000000003B77EC string=0x00000000001F73F0 "0'"
 *   insn=0x00000000003B77F0 string=0x00000000003B77F4 "h"
 *   insn=0x00000000003B77F4 string=0x00000000003B77F8 "`*@"
 *   insn=0x00000000003B77F8 string=0x00000000003B77FC ")"
 *   insn=0x00000000003B7800 string=0x00000000003B7804 ""
 *   insn=0x00000000003B7804 string=0x00000000003B7808 "h"
 *   insn=0x00000000003B7814 string=0x00000000003B7818 "r"
 *   insn=0x00000000003B7818 string=0x00000000003B781C "h"
 *   insn=0x00000000003B781C string=0x00000000003B7820 ""
 *   insn=0x00000000003B7820 string=0x00000000003B7824 "a"
 *   insn=0x00000000003B7824 string=0x00000000003B7828 ""
 *   insn=0x00000000003B7828 string=0x00000000003B782C "`*"
 *   insn=0x00000000003B7834 string=0x00000000003B7838 "i"
 *   insn=0x00000000003B7838 string=0x00000000003B783C "h"
 *   insn=0x00000000003B783C string=0x00000000003B7840 "`.@"
 *   insn=0x00000000003B7840 string=0x00000000003B7844 ")"
 *   insn=0x00000000003B7848 string=0x00000000003B784C ""
 *   insn=0x00000000003B784C string=0x00000000003B7850 "h"
 *   insn=0x00000000003B785C string=0x00000000003B7860 "`"
 *   insn=0x00000000003B7860 string=0x00000000003B7864 "h"
 *   insn=0x00000000003B7864 string=0x00000000003B7868 ""
 *   insn=0x00000000003B7868 string=0x00000000003B786C "a"
 *   insn=0x00000000003B786C string=0x00000000003B7870 ""
 *   insn=0x00000000003B7870 string=0x00000000003B7874 "`."
 *   insn=0x00000000003B7880 string=0x00000000003B7884 "h"
 *   insn=0x00000000003B7884 string=0x00000000003B7888 "`2@"
 *   insn=0x00000000003B7888 string=0x00000000003B788C ")9C"
 *   insn=0x00000000003B7890 string=0x00000000003B7894 ""
 *   insn=0x00000000003B7894 string=0x00000000003B7898 "h"
 *   insn=0x00000000003B78A4 string=0x00000000003B78A8 "N"
 *   insn=0x00000000003B78A8 string=0x00000000003B78AC "h"
 *   insn=0x00000000003B78AC string=0x00000000003B78B0 ""
 *   insn=0x00000000003B78B0 string=0x00000000003B78B4 "a"
 *   insn=0x00000000003B78B4 string=0x00000000003B78B8 ""
 *   insn=0x00000000003B78B8 string=0x00000000003B78BC "`2"
 *   insn=0x00000000003B78C0 string=0x00000000003B78C4 "y"
 *   insn=0x00000000003B78C8 string=0x00000000003B78CC "h"
 *   insn=0x00000000003B78CC string=0x00000000003B7938 "i"
 *   insn=0x00000000003B78D8 string=0x00000000003B78DC "i"
 *   insn=0x00000000003B78DC string=0x00000000003B78E0 "h"
 *   insn=0x00000000003B78E0 string=0x00000000003B78E4 "`6@"
 *   insn=0x00000000003B78E4 string=0x00000000003B78E8 ")"
 *   insn=0x00000000003B78E8 string=0x00000000003B78EC ""
 *   insn=0x00000000003B78EC string=0x00000000003B78F0 "h"
 *   insn=0x00000000003B78FC string=0x00000000003B7900 "8"
 *   insn=0x00000000003B7900 string=0x00000000003B7904 "h"
 *   insn=0x00000000003B7904 string=0x00000000003B7908 ""
 *   insn=0x00000000003B7908 string=0x00000000003B790C "a"
 *   insn=0x00000000003B790C string=0x00000000003B7910 ""
 *   insn=0x00000000003B7910 string=0x00000000003B7914 "`6"
 *   insn=0x00000000003B7918 string=0x00000000003B791C "c"
 *   insn=0x00000000003B7920 string=0x00000000003B7924 "i"
 *   insn=0x00000000003B7924 string=0x00000000003B7928 ")"
 *   insn=0x00000000003B7930 string=0x00000000003B7934 "a"
 *   insn=0x00000000003B7934 string=0x00000000003B7BA0 "i"
 *   insn=0x00000000003B7938 string=0x00000000003B793C "h"
 *   insn=0x00000000003B793C string=0x00000000003B7940 "`:@"
 *   insn=0x00000000003B7940 string=0x00000000003B7944 ")UC"
 *   insn=0x00000000003B7948 string=0x00000000003B794C ""
 *   insn=0x00000000003B794C string=0x00000000003B7950 "h"
 *   insn=0x00000000003B795C string=0x00000000003B7960 " "
 *   insn=0x00000000003B7960 string=0x00000000003B7964 "h"
 *   insn=0x00000000003B7964 string=0x00000000003B7968 ""
 *   insn=0x00000000003B7968 string=0x00000000003B796C "a"
 *   insn=0x00000000003B796C string=0x00000000003B7970 ""
 *   insn=0x00000000003B7970 string=0x00000000003B7974 "`:"
 *   insn=0x00000000003B7978 string=0x00000000003B797C "K"
 *   insn=0x00000000003B797C string=0x00000000003B7980 "i"
 *   insn=0x00000000003B7980 string=0x00000000003B7984 "h"
 *   insn=0x00000000003B7984 string=0x00000000003B7988 "`>@"
 *   insn=0x00000000003B7988 string=0x00000000003B798C ")"
 *   insn=0x00000000003B7990 string=0x00000000003B7994 ""
 *   insn=0x00000000003B7994 string=0x00000000003B7998 "h"
 *   insn=0x00000000003B79A8 string=0x00000000003B79AC "h"
 *   insn=0x00000000003B79AC string=0x00000000003B79B0 ""
 *   insn=0x00000000003B79B0 string=0x00000000003B79B4 "a"
 *   insn=0x00000000003B79B4 string=0x00000000003B79B8 ""
 *   insn=0x00000000003B79B8 string=0x00000000003B79BC "`>"
 *   insn=0x00000000003B79C0 string=0x00000000003B79C4 "9"
 *   insn=0x00000000003B79C4 string=0x00000000003B79C8 "i"
 *   insn=0x00000000003B79C8 string=0x00000000003B79CC "h"
 *   insn=0x00000000003B79CC string=0x00000000003B79D0 "`b@"
 *   insn=0x00000000003B79D0 string=0x00000000003B79D4 ")aG"
 *   insn=0x00000000003B79D8 string=0x00000000003B79DC ""
 *   insn=0x00000000003B79DC string=0x00000000003B79E0 "h"
 *   insn=0x00000000003B79F0 string=0x00000000003B79F4 "h"
 *   insn=0x00000000003B79F4 string=0x00000000003B79F8 ""
 *   insn=0x00000000003B79F8 string=0x00000000003B79FC "a"
 *   insn=0x00000000003B79FC string=0x00000000003B7A00 ""
 *   insn=0x00000000003B7A00 string=0x00000000003B7A04 "`b"
 *   insn=0x00000000003B7A08 string=0x00000000003B7A0C "'"
 *   insn=0x00000000003B7A10 string=0x00000000003B7A14 "j"
 *   insn=0x00000000003B7A14 string=0x00000000003B7A18 "i"
 *   insn=0x00000000003B7A18 string=0x00000000003B7A1C "`j@"
 *   insn=0x00000000003B7A1C string=0x00000000003B7A20 "h""
 *   insn=0x00000000003B7A24 string=0x00000000003B7A28 "J"
 *   insn=0x00000000003B7A2C string=0x00000000003B7A30 ")\t"
 *   insn=0x00000000003B7A30 string=0x00000000003B7A34 "h&"
 *   insn=0x00000000003B7A38 string=0x00000000003B7A3C "i"
 *   insn=0x00000000003B7A48 string=0x00000000003B7A4C "h"
 *   insn=0x00000000003B7A4C string=0x00000000003B7A50 ""
 *   insn=0x00000000003B7A50 string=0x00000000003B7A54 "a"
 *   insn=0x00000000003B7A54 string=0x00000000003B7A58 ""
 *   insn=0x00000000003B7A58 string=0x00000000003B7A5C "`j"
 *   insn=0x00000000003B7A64 string=0x00000000003B7A68 "i"
 *   insn=0x00000000003B7A68 string=0x00000000003B7A6C "h"
 *   insn=0x00000000003B7A6C string=0x00000000003B7A70 "`n@"
 *   insn=0x00000000003B7A70 string=0x00000000003B7A74 ")"
 *   insn=0x00000000003B7A78 string=0x00000000003B7A7C ""
 *   insn=0x00000000003B7A7C string=0x00000000003B7A80 "h"
 *   insn=0x00000000003B7A90 string=0x00000000003B7A94 "h"
 *   insn=0x00000000003B7A94 string=0x00000000003B7A98 ""
 *   insn=0x00000000003B7A98 string=0x00000000003B7A9C "a"
 *   insn=0x00000000003B7A9C string=0x00000000003B7AA0 ""
 *   insn=0x00000000003B7AA0 string=0x00000000003B7AA4 "`n"
 *   insn=0x00000000003B7AB8 string=0x00000000003B7ABC "u"
 *   insn=0x00000000003B7ABC string=0x00000000003B7AC0 "i"])"
 *   insn=0x00000000003B7AC4 string=0x00000000003B7AC8 ")}@"
 *   insn=0x00000000003B7AC8 string=0x00000000003B7ACC "?"
 *   insn=0x00000000003B7AD0 string=0x00000000003B7AD4 "hr@"
 *   insn=0x00000000003B7AD0 string=0x00000000003B7AE8 "i"
 *   insn=0x00000000003B7AD4 string=0x00000000003B7AD8 "*"
 *   insn=0x00000000003B7AD8 string=0x00000000003B7ADC "j"
 *   insn=0x00000000003B7AF0 string=0x00000000003B7B04 ""
 *   insn=0x00000000003B7AFC string=0x00000000003B7B00 "h"
 *   insn=0x00000000003B7B08 string=0x00000000003B7B0C "h"
 *   insn=0x00000000003B7B18 string=0x00000000003B7B1C "h"
 *   insn=0x00000000003B7B18 string=0x00000000001FC950 "0'"
 *   insn=0x00000000003B7B1C string=0x00000000003B7B20 "ir@"
 *   insn=0x00000000003B7B20 string=0x00000000003B7B24 "\n"
 *   insn=0x00000000003B7B24 string=0x00000000003B7B28 "j"
 *   insn=0x00000000003B7B28 string=0x00000000003B7B2C "7y("
 *   insn=0x00000000003B7B3C string=0x00000000003B7B40 "_"
 *   insn=0x00000000003B7B48 string=0x00000000003B7B4C "i"
 *   insn=0x00000000003B7B4C string=0x00000000003B7B50 "hb"
 *   insn=0x00000000003B7B54 string=0x00000000003B7B58 ")"
 *   insn=0x00000000003B7B58 string=0x00000000003B7B5C "hf"
 *   insn=0x00000000003B7B60 string=0x00000000003B7B64 "hj"
 *   insn=0x00000000003B7B68 string=0x00000000003B7B6C "i"
 *   insn=0x00000000003B7B6C string=0x00000000003B7B70 "hn"
 *   insn=0x00000000003B7B70 string=0x00000000003B7B74 "("
 *   insn=0x00000000003B7B7C string=0x00000000003B7B80 "!"
 *   insn=0x00000000003B7BA0 string=0x00000000003B7BA4 ")=G"
 *   insn=0x00000000003B7BA4 string=0x00000000003B7BA8 "!"
 *   insn=0x00000000003B7BAC string=0x00000000003B7BB0 "\t"
 *   insn=0x00000000003B7BAC string=0x00000000003B7BC4 "\t"
 *   insn=0x00000000003B7BB0 string=0x00000000003B7BB4 "*"
 *   insn=0x00000000003B7BB4 string=0x00000000003B7BB8 "\n"
 *   insn=0x00000000003B7BC0 string=0x00000000003B7BD0 "?"
 *   insn=0x00000000003B7BC4 string=0x00000000003B7BC8 "*"
 *   insn=0x00000000003B7BC8 string=0x00000000003B7BCC "\n"
 *   insn=0x00000000003B7BD0 string=0x00000000003B7BD4 ","
 *   insn=0x00000000003B7BDC string=0x00000000003B7BE0 "V"
 *   insn=0x00000000003B7BE4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B7BF0 string=0x00000000003B7BF4 "#"
 *   insn=0x00000000003B7BF8 string=0x00000000003B7BFC "j"
 *   insn=0x00000000003B7BFC string=0x00000000003B7C00 "J"
 *   insn=0x00000000003B7C04 string=0x00000000003B7C08 "(a"
 *   insn=0x00000000003B7C10 string=0x00000000003B7C14 "j"
 *   insn=0x00000000003B7C14 string=0x00000000003B7C18 "J=G"
 *   insn=0x00000000003B7C18 string=0x00000000003B7C1C ")!"
 *   insn=0x00000000003B7C20 string=0x00000000003B7C24 "*"
 *   insn=0x00000000003B7C20 string=0x00000000003B7C50 "*"
 *   insn=0x00000000003B7C24 string=0x00000000003B7C28 "K"
 *   insn=0x00000000003B7C28 string=0x00000000003B7C2C "+"
 *   insn=0x00000000003B7C30 string=0x00000000003B7C34 "_"
 *   insn=0x00000000003B7C34 string=0x00000000003B7C38 "l"
 *   insn=0x00000000003B7C50 string=0x00000000003B7C54 "K"
 *   insn=0x00000000003B7C54 string=0x00000000003B7C58 "+"
 *   insn=0x00000000003B7C58 string=0x00000000003B7C5C "_"
 *   insn=0x00000000003B7C60 string=0x00000000003B7C64 ""
 *   insn=0x00000000003B7C80 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::SaveToProtobufMessage(Caver::GameState *this, Caver::Proto::GameState *a2)
{
  Caver::Proto::CharacterState *v4; // x21
  _QWORD *i; // x21
  int v6; // w8
  Caver::LevelState *v7; // x23
  __int64 v8; // x9
  __int64 v9; // x8
  Caver::Proto::LevelState *v10; // x24
  __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *j; // x21
  int v14; // w8
  Caver::QuestState *v15; // x23
  __int64 v16; // x9
  __int64 v17; // x8
  Caver::Proto::QuestState *v18; // x24
  __int64 v19; // x8
  __int64 v20; // x9
  Caver::Proto::StateProperties *v21; // x21
  __int64 *v22; // x0
  __int64 *v23; // x0
  __int64 *v24; // x0
  __int64 v25; // x8
  __int64 *v26; // x0
  void *v27; // x0
  __int64 *v28; // x0
  __int64 *v29; // x0
  __int64 *v30; // x0
  int v31; // w9
  __int64 *v32; // x0
  __int64 *v33; // x0
  __int64 result; // x0
  Caver::QuestText **v35; // x24
  Caver::QuestText **k; // x26
  int v37; // w8
  Caver::QuestText *v38; // x22
  __int64 v39; // x9
  __int64 v40; // x8
  Caver::Proto::QuestText *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x9
  int v44; // w9
  char v45; // w8
  unsigned int *v46; // x8
  int v47; // w9
  _QWORD v48[3]; // [xsp+8h] [xbp-58h] BYREF

  v48[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::Proto::CharacterState *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 71) |= 1u;
  if ( !v4 )
  {
    v4 = (Caver::Proto::CharacterState *)operator new(0xD0u);
    Caver::Proto::CharacterState::CharacterState(v4);
    *((_QWORD *)a2 + 2) = v4;
  }
  Caver::CharacterState::SaveToProtobufMessage((Caver::GameState *)((char *)this + 16), v4);
  for ( i = (_QWORD *)*((_QWORD *)this + 28); (_QWORD *)((char *)this + 208) != i; i = (_QWORD *)sub_54C6A0(i) )
  {
    v6 = *((_DWORD *)a2 + 9);
    v7 = (Caver::LevelState *)i[5];
    v8 = *((int *)a2 + 8);
    if ( (int)v8 >= v6 )
    {
      if ( v6 == *((_DWORD *)a2 + 10) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameState *)((char *)a2 + 24), v6 + 1);
        v6 = *((_DWORD *)a2 + 9);
      }
      *((_DWORD *)a2 + 9) = v6 + 1;
      v10 = (Caver::Proto::LevelState *)operator new(0x38u);
      Caver::Proto::LevelState::LevelState(v10);
      v11 = *((int *)a2 + 8);
      v12 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v11 + 1;
      *(_QWORD *)(v12 + 8 * v11) = v10;
    }
    else
    {
      v9 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v8 + 1;
      v10 = *(Caver::Proto::LevelState **)(v9 + 8 * v8);
    }
    Caver::LevelState::SaveToProtobufMessage(v7, v10);
  }
  for ( j = (_QWORD *)*((_QWORD *)this + 34); (_QWORD *)((char *)this + 256) != j; j = (_QWORD *)sub_54C6A0(j) )
  {
    v14 = *((_DWORD *)a2 + 35);
    v15 = (Caver::QuestState *)j[5];
    v16 = *((int *)a2 + 34);
    if ( (int)v16 >= v14 )
    {
      if ( v14 == *((_DWORD *)a2 + 36) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
          (Caver::Proto::GameState *)((char *)a2 + 128),
          v14 + 1);
        v14 = *((_DWORD *)a2 + 35);
      }
      *((_DWORD *)a2 + 35) = v14 + 1;
      v18 = (Caver::Proto::QuestState *)operator new(0x20u);
      Caver::Proto::QuestState::QuestState(v18);
      v19 = *((int *)a2 + 34);
      v20 = *((_QWORD *)a2 + 16);
      *((_DWORD *)a2 + 34) = v19 + 1;
      *(_QWORD *)(v20 + 8 * v19) = v18;
    }
    else
    {
      v17 = *((_QWORD *)a2 + 16);
      *((_DWORD *)a2 + 34) = v16 + 1;
      v18 = *(Caver::Proto::QuestState **)(v17 + 8 * v16);
    }
    Caver::QuestState::SaveToProtobufMessage(v15, v18);
  }
  v21 = (Caver::Proto::StateProperties *)*((_QWORD *)a2 + 23);
  *((_DWORD *)a2 + 71) |= 0x200u;
  if ( !v21 )
  {
    v21 = (Caver::Proto::StateProperties *)operator new(0x50u);
    Caver::Proto::StateProperties::StateProperties(v21);
    *((_QWORD *)a2 + 23) = v21;
  }
  Caver::StateProperties::SaveToProtobufMessage((Caver::GameState *)((char *)this + 296), v21);
  v22 = (__int64 *)*((_QWORD *)a2 + 10);
  *((_DWORD *)a2 + 71) |= 4u;
  if ( v22 == &Caver::Proto::GameState::_default_current_level_ )
  {
    v22 = (__int64 *)operator new(8u);
    *v22 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 10) = v22;
  }
  sub_56A6A8(v22);
  v23 = (__int64 *)*((_QWORD *)a2 + 11);
  *((_DWORD *)a2 + 71) |= 8u;
  if ( v23 == &Caver::Proto::GameState::_default_current_spawn_point_ )
  {
    v23 = (__int64 *)operator new(8u);
    *v23 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 11) = v23;
  }
  sub_56A6A8(v23);
  v24 = (__int64 *)*((_QWORD *)a2 + 12);
  *((_DWORD *)a2 + 71) |= 0x10u;
  if ( v24 == &Caver::Proto::GameState::_default_previous_portal_level_ )
  {
    v24 = (__int64 *)operator new(8u);
    *v24 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 12) = v24;
  }
  sub_56A6A8(v24);
  v25 = *((_QWORD *)this + 46);
  if ( v25 )
  {
    sub_56A528(v48, v25 + 16);
    v26 = (__int64 *)*((_QWORD *)a2 + 13);
    *((_DWORD *)a2 + 71) |= 0x20u;
    if ( v26 == &Caver::Proto::GameState::_default_current_map_node_name_ )
    {
      v26 = (__int64 *)operator new(8u);
      *v26 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 13) = v26;
    }
    sub_56A6A8(v26);
    v27 = (void *)(v48[0] - 24LL);
    if ( (__int64 *)(v48[0] - 24LL) != &qword_6FD2E0 )
    {
      v46 = (unsigned int *)(v48[0] - 8LL);
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
      if ( v47 <= 0 )
        operator delete(v27);
    }
  }
  v28 = (__int64 *)*((_QWORD *)a2 + 14);
  *((_DWORD *)a2 + 71) |= 0x40u;
  if ( v28 == &Caver::Proto::GameState::_default_carried_object_template_ )
  {
    v28 = (__int64 *)operator new(8u);
    *v28 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 14) = v28;
  }
  sub_56A6A8(v28);
  v29 = (__int64 *)*((_QWORD *)a2 + 15);
  *((_DWORD *)a2 + 71) |= 0x80u;
  if ( v29 == &Caver::Proto::GameState::_default_carried_object_identifier_ )
  {
    v29 = (__int64 *)operator new(8u);
    *v29 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 15) = v29;
  }
  sub_56A6A8(v29);
  v30 = (__int64 *)*((_QWORD *)a2 + 24);
  *((_DWORD *)a2 + 71) |= 0x400u;
  if ( v30 == &Caver::Proto::GameState::_default_selected_menu_tab_ )
  {
    v30 = (__int64 *)operator new(8u);
    *v30 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 24) = v30;
  }
  sub_56A6A8(v30);
  v31 = *((_DWORD *)a2 + 71);
  v32 = (__int64 *)*((_QWORD *)a2 + 26);
  *((_BYTE *)a2 + 200) = *((_BYTE *)this + 408);
  *((_BYTE *)a2 + 201) = *((_BYTE *)this + 409);
  *((_DWORD *)a2 + 71) = v31 | 0x3800;
  if ( v32 == &Caver::Proto::GameState::_default_flashing_item_name_ )
  {
    v32 = (__int64 *)operator new(8u);
    *v32 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 26) = v32;
  }
  sub_56A6A8(v32);
  v33 = (__int64 *)*((_QWORD *)a2 + 27);
  *((_DWORD *)a2 + 71) |= 0x4000u;
  if ( v33 == &Caver::Proto::GameState::_default_flashing_skill_name_ )
  {
    v33 = (__int64 *)operator new(8u);
    *v33 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 27) = v33;
  }
  result = sub_56A6A8(v33);
  v35 = (Caver::QuestText **)*((_QWORD *)this + 54);
  for ( k = (Caver::QuestText **)*((_QWORD *)this + 55); k != v35; v35 += 2 )
  {
    v37 = *((_DWORD *)a2 + 59);
    v38 = *v35;
    v39 = *((int *)a2 + 58);
    if ( (int)v39 >= v37 )
    {
      if ( v37 == *((_DWORD *)a2 + 60) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
          (Caver::Proto::GameState *)((char *)a2 + 224),
          v37 + 1);
        v37 = *((_DWORD *)a2 + 59);
      }
      *((_DWORD *)a2 + 59) = v37 + 1;
      v41 = (Caver::Proto::QuestText *)operator new(0x58u);
      Caver::Proto::QuestText::QuestText(v41);
      v42 = *((int *)a2 + 58);
      v43 = *((_QWORD *)a2 + 28);
      *((_DWORD *)a2 + 58) = v42 + 1;
      *(_QWORD *)(v43 + 8 * v42) = v41;
    }
    else
    {
      v40 = *((_QWORD *)a2 + 28);
      *((_DWORD *)a2 + 58) = v39 + 1;
      v41 = *(Caver::Proto::QuestText **)(v40 + 8 * v39);
    }
    result = Caver::QuestText::SaveToProtobufMessage(v38, v41);
  }
  v44 = *((_DWORD *)a2 + 71);
  *((_BYTE *)a2 + 280) = *((_BYTE *)this + 456);
  *((_BYTE *)a2 + 281) = *((_BYTE *)this + 457);
  *((_BYTE *)a2 + 282) = *((_BYTE *)this + 458);
  v45 = *((_BYTE *)this + 459);
  *((_DWORD *)a2 + 71) = v44 | 0xF0000;
  *((_BYTE *)a2 + 283) = v45;
  return result;
}

