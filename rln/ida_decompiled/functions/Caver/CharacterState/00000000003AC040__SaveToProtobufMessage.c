/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AC040
 * Mangled: _ZNK5Caver14CharacterState21SaveToProtobufMessageEPNS_5Proto14CharacterStateE
 * Demangled: Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Callers: 1
 *   0x0000000000203A60  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Callees: 13
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6710  Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000003AC800  Caver::CharacterState::BaseExperienceForKillingMonster(int,int,int)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 257
 *   insn=0x00000000003AC05C string=0x00000000003AC060 "X"
 *   insn=0x00000000003AC060 string=0x00000000003AC064 ""
 *   insn=0x00000000003AC074 string=0x00000000003AC078 "h"
 *   insn=0x00000000003AC07C string=0x00000000003AC080 "\n"
 *   insn=0x00000000003AC080 string=0x00000000003AC084 "j"
 *   insn=0x00000000003AC084 string=0x00000000003AC088 "i"
 *   insn=0x00000000003AC08C string=0x00000000003AC090 "\n"
 *   insn=0x00000000003AC090 string=0x00000000003AC094 "j"
 *   insn=0x00000000003AC094 string=0x00000000003AC098 "\n\t"
 *   insn=0x00000000003AC098 string=0x00000000003AC09C "i"
 *   insn=0x00000000003AC0A0 string=0x00000000003AC0A4 "j"
 *   insn=0x00000000003AC0A4 string=0x00000000003AC0A8 "\n"
 *   insn=0x00000000003AC0A8 string=0x00000000003AC0AC ""
 *   insn=0x00000000003AC0AC string=0x00000000003AC0B0 "i"
 *   insn=0x00000000003AC0B4 string=0x00000000003AC0B8 "j"
 *   insn=0x00000000003AC0B8 string=0x00000000003AC0BC "i"
 *   insn=0x00000000003AC0C0 string=0x00000000003AC0C4 "h"
 *   insn=0x00000000003AC0C4 string=0x00000000003AC0C8 "i"
 *   insn=0x00000000003AC0D0 string=0x00000000003AC0D4 " \n"
 *   insn=0x00000000003AC0E0 string=0x00000000003AC0E4 "{"
 *   insn=0x00000000003AC0E4 string=0x00000000003AC0E8 "v"
 *   insn=0x00000000003AC0E8 string=0x00000000003AC0EC "zc"
 *   insn=0x00000000003AC0F0 string=0x00000000003AC138 "i"E))}@"
 *   insn=0x00000000003AC0F4 string=0x00000000003AC0F8 ")=G"
 *   insn=0x00000000003AC0F8 string=0x00000000003AC0FC "!"
 *   insn=0x00000000003AC100 string=0x00000000003AC104 "\t"
 *   insn=0x00000000003AC100 string=0x00000000003AC118 "\t"
 *   insn=0x00000000003AC104 string=0x00000000003AC108 "*"
 *   insn=0x00000000003AC108 string=0x00000000003AC10C "\n"
 *   insn=0x00000000003AC114 string=0x00000000003AC124 "?"
 *   insn=0x00000000003AC118 string=0x00000000003AC11C "*"
 *   insn=0x00000000003AC11C string=0x00000000003AC120 "\n"
 *   insn=0x00000000003AC124 string=0x00000000003AC128 "l"
 *   insn=0x00000000003AC130 string=0x00000000003AC134 "0"
 *   insn=0x00000000003AC138 string=0x00000000003AC13C ")}@"
 *   insn=0x00000000003AC13C string=0x00000000003AC140 "?"
 *   insn=0x00000000003AC144 string=0x00000000003AC148 "h"
 *   insn=0x00000000003AC144 string=0x00000000003AC15C "i2@"
 *   insn=0x00000000003AC148 string=0x00000000003AC14C "*"
 *   insn=0x00000000003AC14C string=0x00000000003AC150 "j*"
 *   insn=0x00000000003AC164 string=0x00000000003AC178 ""
 *   insn=0x00000000003AC170 string=0x00000000003AC174 "h.@"
 *   insn=0x00000000003AC170 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003AC17C string=0x00000000003AC180 "h."
 *   insn=0x00000000003AC184 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AC188 string=0x00000000003AC18C "a)"
 *   insn=0x00000000003AC18C string=0x00000000003AC190 "h*"
 *   insn=0x00000000003AC18C string=0x00000000001F6710 "0'"
 *   insn=0x00000000003AC190 string=0x00000000003AC194 "i"
 *   insn=0x00000000003AC194 string=0x00000000003AC198 "\n"
 *   insn=0x00000000003AC198 string=0x00000000003AC19C "j*"
 *   insn=0x00000000003AC19C string=0x00000000003AC1A0 "7y("
 *   insn=0x00000000003AC1B8 string=0x00000000003AC1BC ""
 *   insn=0x00000000003AC1DC string=0x00000000003AC1E0 "2"
 *   insn=0x00000000003AC1EC string=0x00000000003AC1F0 "!"
 *   insn=0x00000000003AC1FC string=0x00000000003AC200 ""
 *   insn=0x00000000003AC204 string=0x00000000003AC208 "&"
 *   insn=0x00000000003AC210 string=0x00000000003AC214 "!"
 *   insn=0x00000000003AC21C string=0x00000000003AC220 "@"
 *   insn=0x00000000003AC228 string=0x00000000003AC22C "Z"
 *   insn=0x00000000003AC230 string=0x00000000003AC234 "u"
 *   insn=0x00000000003AC240 string=0x00000000003AC244 "\t"
 *   insn=0x00000000003AC240 string=0x00000000003AC258 "\t"
 *   insn=0x00000000003AC244 string=0x00000000003AC248 "*"
 *   insn=0x00000000003AC248 string=0x00000000003AC24C "\n"
 *   insn=0x00000000003AC254 string=0x00000000003AC264 "?"
 *   insn=0x00000000003AC258 string=0x00000000003AC25C "*"
 *   insn=0x00000000003AC25C string=0x00000000003AC260 "\n"
 *   insn=0x00000000003AC26C string=0x00000000003AC270 "M"
 *   insn=0x00000000003AC270 string=0x00000000003AC274 """
 *   insn=0x00000000003AC280 string=0x00000000003AC284 "i"N))}@"
 *   insn=0x00000000003AC284 string=0x00000000003AC288 ")}@"
 *   insn=0x00000000003AC288 string=0x00000000003AC28C "?"
 *   insn=0x00000000003AC290 string=0x00000000003AC294 "h6@"
 *   insn=0x00000000003AC290 string=0x00000000003AC2A8 "iz@"
 *   insn=0x00000000003AC294 string=0x00000000003AC298 "*"
 *   insn=0x00000000003AC298 string=0x00000000003AC29C "jr"
 *   insn=0x00000000003AC2B0 string=0x00000000003AC2C4 ""
 *   insn=0x00000000003AC2BC string=0x00000000003AC2C0 "hv@"
 *   insn=0x00000000003AC2C4 string=0x00000000003AC2C8 "hv"
 *   insn=0x00000000003AC2CC string=0x00000000003AC2D0 "hr"
 *   insn=0x00000000003AC2CC string=0x00000000001F4A00 "P'"
 *   insn=0x00000000003AC2D0 string=0x00000000003AC2D4 "i6@"
 *   insn=0x00000000003AC2D4 string=0x00000000003AC2D8 "\n"
 *   insn=0x00000000003AC2D8 string=0x00000000003AC2DC "jr"
 *   insn=0x00000000003AC2DC string=0x00000000003AC2E0 " y("
 *   insn=0x00000000003AC2F4 string=0x00000000003AC2F8 "!"
 *   insn=0x00000000003AC2F8 string=0x00000000003AC23C "!"
 *   insn=0x00000000003AC308 string=0x00000000003AC30C "A"
 *   insn=0x00000000003AC318 string=0x00000000003AC31C "h"
 *   insn=0x00000000003AC31C string=0x00000000003AC320 "`R@"
 *   insn=0x00000000003AC320 string=0x00000000003AC324 ")u@"
 *   insn=0x00000000003AC324 string=0x00000000003AC328 ""
 *   insn=0x00000000003AC328 string=0x00000000003AC32C "h"
 *   insn=0x00000000003AC340 string=0x00000000003AC344 ""
 *   insn=0x00000000003AC344 string=0x00000000003AC348 "a"
 *   insn=0x00000000003AC348 string=0x00000000003AC34C ""
 *   insn=0x00000000003AC34C string=0x00000000003AC350 "`R"
 *   insn=0x00000000003AC360 string=0x00000000003AC364 ")"
 *   insn=0x00000000003AC374 string=0x00000000003AC378 "h"
 *   insn=0x00000000003AC380 string=0x00000000003AC384 "i"
 *   insn=0x00000000003AC388 string=0x00000000003AC38C "h"
 *   insn=0x00000000003AC38C string=0x00000000003AC390 "`V@"
 *   insn=0x00000000003AC390 string=0x00000000003AC394 ")"
 *   insn=0x00000000003AC394 string=0x00000000003AC398 ""
 *   insn=0x00000000003AC398 string=0x00000000003AC39C "h"
 *   insn=0x00000000003AC3B0 string=0x00000000003AC3B4 ""
 *   insn=0x00000000003AC3B4 string=0x00000000003AC3B8 "a"
 *   insn=0x00000000003AC3B8 string=0x00000000003AC3BC ""
 *   insn=0x00000000003AC3BC string=0x00000000003AC3C0 "`V"
 *   insn=0x00000000003AC3D0 string=0x00000000003AC3D4 ")"
 *   insn=0x00000000003AC3DC string=0x00000000003AC3E0 "A"
 *   insn=0x00000000003AC3E4 string=0x00000000003AC3E8 "h"
 *   insn=0x00000000003AC3F0 string=0x00000000003AC3F4 "M"
 *   insn=0x00000000003AC3F8 string=0x00000000003AC3FC "h"
 *   insn=0x00000000003AC3FC string=0x00000000003AC400 "`Z@"
 *   insn=0x00000000003AC400 string=0x00000000003AC404 ")"
 *   insn=0x00000000003AC404 string=0x00000000003AC408 ""
 *   insn=0x00000000003AC408 string=0x00000000003AC40C "h"
 *   insn=0x00000000003AC418 string=0x00000000003AC41C "q$"
 *   insn=0x00000000003AC420 string=0x00000000003AC424 ""
 *   insn=0x00000000003AC424 string=0x00000000003AC428 "a"
 *   insn=0x00000000003AC428 string=0x00000000003AC42C ""
 *   insn=0x00000000003AC42C string=0x00000000003AC430 "`Z"
 *   insn=0x00000000003AC440 string=0x00000000003AC444 ")"
 *   insn=0x00000000003AC454 string=0x00000000003AC458 "h"
 *   insn=0x00000000003AC458 string=0x00000000003AC4C4 "h"
 *   insn=0x00000000003AC460 string=0x00000000003AC464 "1"
 *   insn=0x00000000003AC468 string=0x00000000003AC46C "h"
 *   insn=0x00000000003AC46C string=0x00000000003AC470 "`^@"
 *   insn=0x00000000003AC470 string=0x00000000003AC474 ")"
 *   insn=0x00000000003AC474 string=0x00000000003AC478 ""
 *   insn=0x00000000003AC478 string=0x00000000003AC47C "h"
 *   insn=0x00000000003AC488 string=0x00000000003AC48C "U$"
 *   insn=0x00000000003AC490 string=0x00000000003AC494 ""
 *   insn=0x00000000003AC494 string=0x00000000003AC498 "a"
 *   insn=0x00000000003AC498 string=0x00000000003AC49C ""
 *   insn=0x00000000003AC49C string=0x00000000003AC4A0 "`^"
 *   insn=0x00000000003AC4B0 string=0x00000000003AC4B4 ")"
 *   insn=0x00000000003AC4C8 string=0x00000000003AC4CC "\n"
 *   insn=0x00000000003AC4CC string=0x00000000003AC4D0 "i"
 *   insn=0x00000000003AC4D0 string=0x00000000003AC4D4 "j"
 *   insn=0x00000000003AC4D8 string=0x00000000003AC4DC "\n"
 *   insn=0x00000000003AC4DC string=0x00000000003AC4E0 "j"
 *   insn=0x00000000003AC4E0 string=0x00000000003AC4E4 "\t"
 *   insn=0x00000000003AC4E4 string=0x00000000003AC4E8 "i"
 *   insn=0x00000000003AC4EC string=0x00000000003AC4F0 "i""
 *   insn=0x00000000003AC4F0 string=0x00000000003AC4F4 ""
 *   insn=0x00000000003AC4FC string=0x00000000003AC500 "a\n"
 *   insn=0x00000000003AC500 string=0x00000000003AC64C "!'"
 *   insn=0x00000000003AC524 string=0x00000000003AC528 ")=G"
 *   insn=0x00000000003AC528 string=0x00000000003AC52C "!"
 *   insn=0x00000000003AC52C string=0x00000000003AC530 ")"
 *   insn=0x00000000003AC530 string=0x00000000003AC534 "\t"
 *   insn=0x00000000003AC530 string=0x00000000003AC5B4 "\t"
 *   insn=0x00000000003AC534 string=0x00000000003AC538 "*"
 *   insn=0x00000000003AC538 string=0x00000000003AC53C "\n"
 *   insn=0x00000000003AC544 string=0x00000000003AC5C0 "?"
 *   insn=0x00000000003AC548 string=0x00000000003AC54C ")=G"
 *   insn=0x00000000003AC54C string=0x00000000003AC550 "!"
 *   insn=0x00000000003AC550 string=0x00000000003AC554 "I"
 *   insn=0x00000000003AC554 string=0x00000000003AC558 "\t"
 *   insn=0x00000000003AC554 string=0x00000000003AC5DC "\t"
 *   insn=0x00000000003AC558 string=0x00000000003AC55C "*"
 *   insn=0x00000000003AC55C string=0x00000000003AC560 "\n"
 *   insn=0x00000000003AC564 string=0x00000000003AC568 " "
 *   insn=0x00000000003AC568 string=0x00000000003AC5E8 "?"
 *   insn=0x00000000003AC56C string=0x00000000003AC570 ")=G"
 *   insn=0x00000000003AC570 string=0x00000000003AC574 "!"
 *   insn=0x00000000003AC574 string=0x00000000003AC578 "i"
 *   insn=0x00000000003AC578 string=0x00000000003AC57C "\t"
 *   insn=0x00000000003AC578 string=0x00000000003AC604 "\t"
 *   insn=0x00000000003AC57C string=0x00000000003AC580 "*"
 *   insn=0x00000000003AC580 string=0x00000000003AC584 "\n"
 *   insn=0x00000000003AC588 string=0x00000000003AC58C "!"
 *   insn=0x00000000003AC58C string=0x00000000003AC610 "?"
 *   insn=0x00000000003AC590 string=0x00000000003AC594 ")=G"
 *   insn=0x00000000003AC594 string=0x00000000003AC598 "!"
 *   insn=0x00000000003AC59C string=0x00000000003AC5A0 "\t"
 *   insn=0x00000000003AC59C string=0x00000000003AC62C "\t"
 *   insn=0x00000000003AC5A0 string=0x00000000003AC5A4 "*"
 *   insn=0x00000000003AC5A4 string=0x00000000003AC5A8 "\n"
 *   insn=0x00000000003AC5AC string=0x00000000003AC5B0 """
 *   insn=0x00000000003AC5B0 string=0x00000000003AC638 "?"
 *   insn=0x00000000003AC5B4 string=0x00000000003AC5B8 "*"
 *   insn=0x00000000003AC5B8 string=0x00000000003AC5BC "\n"
 *   insn=0x00000000003AC5C8 string=0x00000000003AC5CC "v"
 *   insn=0x00000000003AC5D0 string=0x00000000003AC5D4 "H"
 *   insn=0x00000000003AC5DC string=0x00000000003AC5E0 "*"
 *   insn=0x00000000003AC5E0 string=0x00000000003AC5E4 "\n"
 *   insn=0x00000000003AC5F0 string=0x00000000003AC5F4 "l"
 *   insn=0x00000000003AC604 string=0x00000000003AC608 "*"
 *   insn=0x00000000003AC608 string=0x00000000003AC60C "\n"
 *   insn=0x00000000003AC618 string=0x00000000003AC61C "b"
 *   insn=0x00000000003AC62C string=0x00000000003AC630 "*"
 *   insn=0x00000000003AC630 string=0x00000000003AC634 "\n"
 *   insn=0x00000000003AC638 string=0x00000000003AC63C "L"
 *   insn=0x00000000003AC640 string=0x00000000003AC644 "X"
 *   insn=0x00000000003AC64C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AC654 string=0x00000000003AC658 "J"
 *   insn=0x00000000003AC65C string=0x00000000003AC660 "(a"
 *   insn=0x00000000003AC66C string=0x00000000003AC670 "J=G"
 *   insn=0x00000000003AC670 string=0x00000000003AC674 ")!"
 *   insn=0x00000000003AC674 string=0x00000000003AC678 "j"
 *   insn=0x00000000003AC678 string=0x00000000003AC67C "*"
 *   insn=0x00000000003AC678 string=0x00000000003AC7E4 "*"
 *   insn=0x00000000003AC67C string=0x00000000003AC680 "K"
 *   insn=0x00000000003AC680 string=0x00000000003AC684 "+"
 *   insn=0x00000000003AC688 string=0x00000000003AC68C "O"
 *   insn=0x00000000003AC68C string=0x00000000003AC7C8 "_"
 *   insn=0x00000000003AC694 string=0x00000000003AC698 "J"
 *   insn=0x00000000003AC69C string=0x00000000003AC6A0 "(a"
 *   insn=0x00000000003AC6AC string=0x00000000003AC6B0 "J=G"
 *   insn=0x00000000003AC6B0 string=0x00000000003AC6B4 ")!"
 *   insn=0x00000000003AC6B4 string=0x00000000003AC6B8 "j\t"
 *   insn=0x00000000003AC6B8 string=0x00000000003AC6BC "*"
 *   insn=0x00000000003AC6BC string=0x00000000003AC6C0 "K"
 *   insn=0x00000000003AC6C0 string=0x00000000003AC6C4 "+"
 *   insn=0x00000000003AC6C8 string=0x00000000003AC6CC "?"
 *   insn=0x00000000003AC6D4 string=0x00000000003AC6D8 "J"
 *   insn=0x00000000003AC6DC string=0x00000000003AC6E0 "(a"
 *   insn=0x00000000003AC6EC string=0x00000000003AC6F0 "J=G"
 *   insn=0x00000000003AC6F0 string=0x00000000003AC6F4 ")!"
 *   insn=0x00000000003AC6F4 string=0x00000000003AC6F8 "j"
 *   insn=0x00000000003AC6F8 string=0x00000000003AC6FC "*"
 *   insn=0x00000000003AC6FC string=0x00000000003AC700 "K"
 *   insn=0x00000000003AC700 string=0x00000000003AC704 "+"
 *   insn=0x00000000003AC708 string=0x00000000003AC70C "/"
 *   insn=0x00000000003AC714 string=0x00000000003AC718 "J"
 *   insn=0x00000000003AC71C string=0x00000000003AC720 "(a"
 *   insn=0x00000000003AC72C string=0x00000000003AC730 "J=G"
 *   insn=0x00000000003AC730 string=0x00000000003AC734 ")!"
 *   insn=0x00000000003AC734 string=0x00000000003AC738 "j"
 *   insn=0x00000000003AC738 string=0x00000000003AC73C "*"
 *   insn=0x00000000003AC73C string=0x00000000003AC740 "K"
 *   insn=0x00000000003AC740 string=0x00000000003AC744 "+"
 *   insn=0x00000000003AC758 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003AC75C string=0x00000000003AC760 "YT"
 *   insn=0x00000000003AC768 string=0x00000000003AC76C "(a"
 *   insn=0x00000000003AC770 string=0x00000000003AC774 " "
 *   insn=0x00000000003AC774 string=0x00000000003AC778 ")!"
 *   insn=0x00000000003AC778 string=0x00000000003AC77C "V"
 *   insn=0x00000000003AC77C string=0x00000000003AC780 "*"
 *   insn=0x00000000003AC780 string=0x00000000003AC784 "K"
 *   insn=0x00000000003AC784 string=0x00000000003AC788 "+"
 *   insn=0x00000000003AC798 string=0x00000000003AC79C "(a"
 *   insn=0x00000000003AC7A8 string=0x00000000003AC7AC "J=G"
 *   insn=0x00000000003AC7AC string=0x00000000003AC7B0 ")!"
 *   insn=0x00000000003AC7B4 string=0x00000000003AC7B8 "*"
 *   insn=0x00000000003AC7B8 string=0x00000000003AC7BC "K"
 *   insn=0x00000000003AC7BC string=0x00000000003AC7C0 "+"
 *   insn=0x00000000003AC7C8 string=0x00000000003AC7CC "l"
 *   insn=0x00000000003AC7DC string=0x00000000003AC7E0 "9T"
 *   insn=0x00000000003AC7E4 string=0x00000000003AC7E8 "K"
 *   insn=0x00000000003AC7E8 string=0x00000000003AC7EC "+"
 *   insn=0x00000000003AC7EC string=0x00000000003AC7F0 "_"
 *   insn=0x00000000003AC7F8 string=0x00000000003AC7FC "2T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharacterState::SaveToProtobufMessage(
        Caver::CharacterState *this,
        Caver::Proto::CharacterState *a2)
{
  char *v4; // x25
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w9
  int v10; // w9
  __int64 v11; // x21
  unsigned int *v12; // x8
  int v13; // w9
  int v14; // w8
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x23
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 *v20; // x0
  void *v21; // x0
  int v22; // w8
  _QWORD *v23; // x23
  _QWORD *i; // x25
  unsigned int *v25; // x8
  int v26; // w9
  google::protobuf::internal::StringTypeHandlerBase *v27; // x0
  int v28; // w8
  __int64 v29; // x9
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  void *v34; // x0
  __int64 v35; // x1
  __int64 *v36; // x0
  void *v37; // x0
  __int64 v38; // x8
  __int64 *v39; // x0
  void *v40; // x0
  __int64 v41; // x8
  __int64 *v42; // x0
  void *v43; // x0
  __int64 v44; // x8
  __int64 *v45; // x0
  void *v46; // x0
  int v47; // w8
  int v48; // w9
  unsigned int *v49; // x8
  int v50; // w9
  unsigned int *v51; // x8
  int v52; // w9
  unsigned int *v53; // x8
  int v54; // w9
  unsigned int *v55; // x8
  int v56; // w9
  _QWORD v57[3]; // [xsp+8h] [xbp-68h] BYREF

  v4 = (char *)this + 24;
  v57[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_DWORD *)a2 + 51);
  v6 = *((_DWORD *)this + 38);
  *((_DWORD *)a2 + 51) = v5 | 1;
  *((_DWORD *)a2 + 3) = v6;
  v7 = *((_DWORD *)this + 39);
  *((_DWORD *)a2 + 51) = v5 | 3;
  *((_DWORD *)a2 + 4) = v7;
  v8 = *((_DWORD *)this + 40);
  *((_DWORD *)a2 + 51) = v5 | 7;
  *((_DWORD *)a2 + 5) = v8;
  v9 = *((_DWORD *)this + 41);
  *((_DWORD *)a2 + 51) = v5 | 0xF;
  *((_DWORD *)a2 + 6) = v9;
  v10 = *((_DWORD *)this + 42);
  *((_DWORD *)a2 + 51) = v5 | 0x1F;
  *((_DWORD *)a2 + 7) = v10;
  v11 = *((_QWORD *)this + 5);
  if ( (Caver::CharacterState *)v11 != (Caver::CharacterState *)((char *)this + 24) )
  {
    do
    {
      v14 = *((_DWORD *)a2 + 11);
      v15 = *((int *)a2 + 10);
      if ( (int)v15 >= v14 )
      {
        if ( v14 == *((_DWORD *)a2 + 12) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (Caver::Proto::CharacterState *)((char *)a2 + 32),
            v14 + 1);
          v14 = *((_DWORD *)a2 + 11);
        }
        *((_DWORD *)a2 + 11) = v14 + 1;
        v17 = operator new(0x20u);
        Caver::Proto::CharacterState_ItemState::CharacterState_ItemState((Caver::Proto::CharacterState_ItemState *)v17);
        v18 = *((int *)a2 + 10);
        v19 = *((_QWORD *)a2 + 4);
        *((_DWORD *)a2 + 10) = v18 + 1;
        *(_QWORD *)(v19 + 8 * v18) = v17;
      }
      else
      {
        v16 = *((_QWORD *)a2 + 4);
        *((_DWORD *)a2 + 10) = v15 + 1;
        v17 = *(_QWORD *)(v16 + 8 * v15);
      }
      sub_56A528(v57, *(_QWORD *)(v11 + 40) + 8LL);
      v20 = *(__int64 **)(v17 + 16);
      *(_DWORD *)(v17 + 28) |= 1u;
      if ( v20 == &Caver::Proto::CharacterState_ItemState::_default_name_ )
      {
        v20 = (__int64 *)operator new(8u);
        *v20 = (__int64)&byte_6FD2F8;
        *(_QWORD *)(v17 + 16) = v20;
      }
      sub_56A6A8(v20);
      v21 = (void *)(v57[0] - 24LL);
      if ( (__int64 *)(v57[0] - 24LL) != &qword_6FD2E0 )
      {
        v12 = (unsigned int *)(v57[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v13 = __ldaxr(v12);
          while ( __stlxr(v13 - 1, v12) );
        }
        else
        {
          v13 = (*v12)--;
        }
        if ( v13 <= 0 )
          operator delete(v21);
      }
      v22 = *(_DWORD *)(v17 + 28) | 2;
      *(_DWORD *)(v17 + 24) = *(_DWORD *)(v11 + 56);
      *(_DWORD *)(v17 + 28) = v22;
      v11 = sub_54C6A0(v11);
    }
    while ( (char *)v11 != v4 );
  }
  v23 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*((_QWORD *)this + 9); v23 != i; v23 += 2 )
  {
    v27 = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A528(v57, *v23);
    v28 = *((_DWORD *)a2 + 29);
    v29 = *((int *)a2 + 28);
    if ( (int)v29 >= v28 )
    {
      if ( v28 == *((_DWORD *)a2 + 30) )
      {
        v27 = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                     (Caver::Proto::CharacterState *)((char *)a2 + 104),
                                                                     v28 + 1);
        v28 = *((_DWORD *)a2 + 29);
      }
      *((_DWORD *)a2 + 29) = v28 + 1;
      v31 = google::protobuf::internal::StringTypeHandlerBase::New(v27);
      v32 = *((int *)a2 + 28);
      v33 = *((_QWORD *)a2 + 13);
      *((_DWORD *)a2 + 28) = v32 + 1;
      *(_QWORD *)(v33 + 8 * v32) = v31;
    }
    else
    {
      v30 = *((_QWORD *)a2 + 13);
      *((_DWORD *)a2 + 28) = v29 + 1;
      v31 = *(_QWORD *)(v30 + 8 * v29);
    }
    sub_56A6A8(v31);
    v34 = (void *)(v57[0] - 24LL);
    if ( (__int64 *)(v57[0] - 24LL) != &qword_6FD2E0 )
    {
      v25 = (unsigned int *)(v57[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v26 = __ldaxr(v25);
        while ( __stlxr(v26 - 1, v25) );
      }
      else
      {
        v26 = (*v25)--;
      }
      if ( v26 <= 0 )
        operator delete(v34);
    }
  }
  v35 = *((_QWORD *)this + 11);
  if ( !v35 )
    goto LABEL_37;
  sub_56A528(v57, v35);
  v36 = (__int64 *)*((_QWORD *)a2 + 20);
  *((_DWORD *)a2 + 51) |= 0x200u;
  if ( v36 == &Caver::Proto::CharacterState::_default_current_skill_ )
  {
    v36 = (__int64 *)operator new(8u);
    *v36 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 20) = v36;
  }
  sub_56A6A8(v36);
  v37 = (void *)(v57[0] - 24LL);
  if ( (__int64 *)(v57[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_37;
  v49 = (unsigned int *)(v57[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v50 = __ldaxr(v49);
    while ( __stlxr(v50 - 1, v49) );
  }
  else
  {
    v50 = (*v49)--;
  }
  if ( v50 > 0 )
  {
LABEL_37:
    v38 = *((_QWORD *)this + 13);
    if ( !v38 )
      goto LABEL_41;
  }
  else
  {
    operator delete(v37);
    v38 = *((_QWORD *)this + 13);
    if ( !v38 )
      goto LABEL_41;
  }
  sub_56A528(v57, v38 + 8);
  v39 = (__int64 *)*((_QWORD *)a2 + 21);
  *((_DWORD *)a2 + 51) |= 0x400u;
  if ( v39 == &Caver::Proto::CharacterState::_default_weapon_trinket_ )
  {
    v39 = (__int64 *)operator new(8u);
    *v39 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 21) = v39;
  }
  sub_56A6A8(v39);
  v40 = (void *)(v57[0] - 24LL);
  if ( (__int64 *)(v57[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_41;
  v51 = (unsigned int *)(v57[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v52 = __ldaxr(v51);
    while ( __stlxr(v52 - 1, v51) );
  }
  else
  {
    v52 = (*v51)--;
  }
  if ( v52 > 0 )
  {
LABEL_41:
    v41 = *((_QWORD *)this + 15);
    if ( !v41 )
      goto LABEL_45;
    goto LABEL_42;
  }
  operator delete(v40);
  v41 = *((_QWORD *)this + 15);
  if ( !v41 )
    goto LABEL_45;
LABEL_42:
  sub_56A528(v57, v41 + 8);
  v42 = (__int64 *)*((_QWORD *)a2 + 22);
  *((_DWORD *)a2 + 51) |= 0x800u;
  if ( v42 == &Caver::Proto::CharacterState::_default_armor_trinket_ )
  {
    v42 = (__int64 *)operator new(8u);
    *v42 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 22) = v42;
  }
  sub_56A6A8(v42);
  v43 = (void *)(v57[0] - 24LL);
  if ( (__int64 *)(v57[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_45;
  v53 = (unsigned int *)(v57[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v54 = __ldaxr(v53);
    while ( __stlxr(v54 - 1, v53) );
  }
  else
  {
    v54 = (*v53)--;
  }
  if ( v54 > 0 )
  {
LABEL_45:
    v44 = *((_QWORD *)this + 17);
    if ( !v44 )
      goto LABEL_49;
    goto LABEL_46;
  }
  operator delete(v43);
  v44 = *((_QWORD *)this + 17);
  if ( !v44 )
    goto LABEL_49;
LABEL_46:
  sub_56A528(v57, v44 + 8);
  v45 = (__int64 *)*((_QWORD *)a2 + 23);
  *((_DWORD *)a2 + 51) |= 0x1000u;
  if ( v45 == &Caver::Proto::CharacterState::_default_skill_trinket_ )
  {
    v45 = (__int64 *)operator new(8u);
    *v45 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 23) = v45;
  }
  sub_56A6A8(v45);
  v46 = (void *)(v57[0] - 24LL);
  if ( (__int64 *)(v57[0] - 24LL) != &qword_6FD2E0 )
  {
    v55 = (unsigned int *)(v57[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v56 = __ldaxr(v55);
      while ( __stlxr(v56 - 1, v55) );
    }
    else
    {
      v56 = (*v55)--;
    }
    if ( v56 <= 0 )
      operator delete(v46);
  }
LABEL_49:
  v47 = *((_DWORD *)a2 + 51);
  *((_DWORD *)a2 + 48) = *((_DWORD *)this + 43);
  *((_DWORD *)a2 + 51) = v47 | 0x2000;
  v48 = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 51) = v47 | 0x6000;
  *((_DWORD *)a2 + 49) = v48;
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 45);
  *((_DWORD *)a2 + 51) = v47 | 0xE000;
}

