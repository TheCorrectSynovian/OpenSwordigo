/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3F80
 * Mangled: _ZN5Caver7CoinBarC2Ev
 * Demangled: Caver::CoinBar::CoinBar(void)
 *
 * Callers: 1
 *   0x00000000001FD650  Caver::CoinBar::CoinBar(void)
 *
 * Callees: 26
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F5540  Caver::FontLibrary::LargeDefaultFont(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x0000000000200270  Caver::CoinBar::CreateIconSprite(void)
 *   0x0000000000200CB0  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *   0x0000000000200ED0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 227
 *   insn=0x00000000003C3F9C string=0x00000000003C3FA0 "W"
 *   insn=0x00000000003C3FB0 string=0x00000000003C3FB4 ""
 *   insn=0x00000000003C3FB4 string=0x00000000003C3FB8 ""
 *   insn=0x00000000003C3FBC string=0x00000000003C3FC0 "\t"
 *   insn=0x00000000003C3FC4 string=0x00000000003C3FC8 "A"
 *   insn=0x00000000003C3FC8 string=0x00000000003C3FCC "i"
 *   insn=0x00000000003C3FD4 string=0x00000000003C3FD8 "h"
 *   insn=0x00000000003C3FDC string=0x00000000003C3FE0 "`"
 *   insn=0x00000000003C3FFC string=0x00000000003C4000 "hb"
 *   insn=0x00000000003C4008 string=0x00000000003C400C "u"
 *   insn=0x00000000003C400C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C4018 string=0x00000000001F53C0 "P'"
 *   insn=0x00000000003C4024 string=0x00000000003C4028 "hRU"
 *   insn=0x00000000003C4034 string=0x00000000003C4038 "i""
 *   insn=0x00000000003C403C string=0x00000000003C4040 "4"
 *   insn=0x00000000003C4040 string=0x00000000003C4084 "xB"
 *   insn=0x00000000003C4044 string=0x00000000003C4048 ""
 *   insn=0x00000000003C4054 string=0x00000000003C4058 "\t@"
 *   insn=0x00000000003C4064 string=0x00000000003C4068 ""
 *   insn=0x00000000003C4074 string=0x00000000003C4078 "@"
 *   insn=0x00000000003C4090 string=0x00000000003C4094 "+"
 *   insn=0x00000000003C4094 string=0x00000000001F5540 "P'"
 *   insn=0x00000000003C40A0 string=0x00000000003C40A4 "`"
 *   insn=0x00000000003C40AC string=0x00000000003C40B0 "*"
 *   insn=0x00000000003C40B0 string=0x00000000003C40B4 "J"
 *   insn=0x00000000003C40B4 string=0x00000000003C40B8 "*"
 *   insn=0x00000000003C40C0 string=0x00000000003C40C4 "5"
 *   insn=0x00000000003C40C8 string=0x00000000003C40CC ""
 *   insn=0x00000000003C40D8 string=0x00000000003C40DC "\t@"
 *   insn=0x00000000003C40E8 string=0x00000000003C40EC ""
 *   insn=0x00000000003C40F8 string=0x00000000003C40FC "@"
 *   insn=0x00000000003C410C string=0x00000000001F8510 "0'"
 *   insn=0x00000000003C4110 string=0x00000000003C4114 "4"
 *   insn=0x00000000003C4118 string=0x00000000003C411C ""
 *   insn=0x00000000003C4128 string=0x00000000003C412C "\t@"
 *   insn=0x00000000003C4138 string=0x00000000003C413C ""
 *   insn=0x00000000003C4148 string=0x00000000003C414C "@"
 *   insn=0x00000000003C4160 string=0x00000000003C4164 "A"
 *   insn=0x00000000003C4184 string=0x00000000003C4188 " "
 *   insn=0x00000000003C418C string=0x00000000003C4190 ""
 *   insn=0x00000000003C4198 string=0x00000000003C419C "5"
 *   insn=0x00000000003C41A0 string=0x00000000003C41A4 ""
 *   insn=0x00000000003C41B0 string=0x00000000003C41B4 "\t@"
 *   insn=0x00000000003C41C0 string=0x00000000003C41C4 ""
 *   insn=0x00000000003C41D0 string=0x00000000003C41D4 "@"
 *   insn=0x00000000003C41EC string=0x00000000003C41F0 " "
 *   insn=0x00000000003C4200 string=0x00000000003C4204 "\t"
 *   insn=0x00000000003C4210 string=0x00000000003C4214 "h"
 *   insn=0x00000000003C4214 string=0x00000000003C4218 "i"
 *   insn=0x00000000003C4218 string=0x00000000003C421C "1@"
 *   insn=0x00000000003C4220 string=0x00000000003C4224 "i"
 *   insn=0x00000000003C422C string=0x00000000003C4230 "*"
 *   insn=0x00000000003C4230 string=0x00000000003C4234 "J"
 *   insn=0x00000000003C4234 string=0x00000000003C4238 "*"
 *   insn=0x00000000003C4248 string=0x00000000003C424C "4"
 *   insn=0x00000000003C424C string=0x00000000003C4290 "("
 *   insn=0x00000000003C4250 string=0x00000000003C4254 ""
 *   insn=0x00000000003C4260 string=0x00000000003C4264 "\t@"
 *   insn=0x00000000003C4270 string=0x00000000003C4274 ""
 *   insn=0x00000000003C4280 string=0x00000000003C4284 "@"
 *   insn=0x00000000003C429C string=0x00000000003C42A0 "h"
 *   insn=0x00000000003C42A0 string=0x00000000003C42A4 "\t"
 *   insn=0x00000000003C42A4 string=0x00000000003C42A8 "q@"
 *   insn=0x00000000003C42A8 string=0x00000000003C42AC """
 *   insn=0x00000000003C42B8 string=0x00000000003C42BC "#"
 *   insn=0x00000000003C42C0 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000003C42C8 string=0x00000000003C42CC "1"
 *   insn=0x00000000003C42CC string=0x00000000003C42D0 ""
 *   insn=0x00000000003C42D0 string=0x00000000003C42D4 "i"
 *   insn=0x00000000003C42D4 string=0x00000000003C42D8 "\n"
 *   insn=0x00000000003C42D8 string=0x0000000000587828 "33s?"
 *   insn=0x00000000003C42DC string=0x00000000003C42E0 "!u@"
 *   insn=0x00000000003C42E0 string=0x00000000003C42E4 "B)H"
 *   insn=0x00000000003C42F4 string=0x00000000003C42F8 ""
 *   insn=0x00000000003C42FC string=0x00000000003C4300 "$"
 *   insn=0x00000000003C4300 string=0x00000000003C4304 "h"
 *   insn=0x00000000003C4304 string=0x00000000003C4308 "\t"
 *   insn=0x00000000003C4308 string=0x00000000005846C8 "ff&?"
 *   insn=0x00000000003C430C string=0x00000000003C4310 """
 *   insn=0x00000000003C4324 string=0x00000000003C4328 "!"
 *   insn=0x00000000003C4330 string=0x00000000003C4334 "h"
 *   insn=0x00000000003C4334 string=0x00000000003C4338 "i"
 *   insn=0x00000000003C4334 string=0x000000000059207C ")\"
 *   insn=0x00000000003C433C string=0x00000000003C4340 "!"
 *   insn=0x00000000003C4348 string=0x00000000003C434C "C"
 *   insn=0x00000000003C4354 string=0x00000000003C4358 "1"
 *   insn=0x00000000003C4390 string=0x00000000003C4394 "G"
 *   insn=0x00000000003C43A0 string=0x00000000003C43A4 "k"
 *   insn=0x00000000003C43B0 string=0x00000000003C43B4 "\n"
 *   insn=0x00000000003C43B4 string=0x00000000003C43B8 "J"
 *   insn=0x00000000003C43B8 string=0x00000000003C43BC "\n"
 *   insn=0x00000000003C43C4 string=0x00000000003C43C8 "5"
 *   insn=0x00000000003C43CC string=0x00000000003C43D0 ""
 *   insn=0x00000000003C43DC string=0x00000000003C43E0 "\t@"
 *   insn=0x00000000003C43EC string=0x00000000003C43F0 ""
 *   insn=0x00000000003C43FC string=0x00000000003C4400 "@"
 *   insn=0x00000000003C440C string=0x00000000003C4410 "@"
 *   insn=0x00000000003C4410 string=0x00000000003C4414 "h"
 *   insn=0x00000000003C4414 string=0x00000000003C4418 "\tI"
 *   insn=0x00000000003C4418 string=0x00000000003C441C "y@"
 *   insn=0x00000000003C441C string=0x00000000003C4420 "I@"
 *   insn=0x00000000003C4430 string=0x00000000003C4434 "O"
 *   insn=0x00000000003C4434 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003C4438 string=0x00000000003C443C "i"
 *   insn=0x00000000003C4448 string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003C445C string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003C4468 string=0x00000000003C446C "9"
 *   insn=0x00000000003C446C string=0x00000000003C4470 "h"
 *   insn=0x00000000003C447C string=0x00000000003C4480 "i"
 *   insn=0x00000000003C4484 string=0x00000000003C4488 "4"
 *   insn=0x00000000003C4488 string=0x00000000003C44CC "t"
 *   insn=0x00000000003C448C string=0x00000000003C4490 ""
 *   insn=0x00000000003C449C string=0x00000000003C44A0 "\t@"
 *   insn=0x00000000003C44AC string=0x00000000003C44B0 ""
 *   insn=0x00000000003C44BC string=0x00000000003C44C0 "@"
 *   insn=0x00000000003C44D4 string=0x00000000003C44D8 "(3"
 *   insn=0x00000000003C44E4 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003C44E8 string=0x00000000003C44EC "(s"
 *   insn=0x00000000003C44F4 string=0x00000000003C44F8 "\n"
 *   insn=0x00000000003C44F4 string=0x00000000003C4504 "5C@"
 *   insn=0x00000000003C44F8 string=0x00000000003C44FC "J"
 *   insn=0x00000000003C44FC string=0x00000000003C4500 "\n"
 *   insn=0x00000000003C4504 string=0x00000000003C4508 ")"
 *   insn=0x00000000003C4508 string=0x00000000003C450C "5"
 *   insn=0x00000000003C4510 string=0x00000000003C4514 ""
 *   insn=0x00000000003C4520 string=0x00000000003C4524 "\t@"
 *   insn=0x00000000003C4530 string=0x00000000003C4534 ""
 *   insn=0x00000000003C4540 string=0x00000000003C4544 "@"
 *   insn=0x00000000003C4550 string=0x00000000003C4554 "5"
 *   insn=0x00000000003C4558 string=0x00000000003C455C ""
 *   insn=0x00000000003C4568 string=0x00000000003C456C "\t@"
 *   insn=0x00000000003C4578 string=0x00000000003C457C ""
 *   insn=0x00000000003C4588 string=0x00000000003C458C "@"
 *   insn=0x00000000003C45A8 string=0x00000000003C45AC "("
 *   insn=0x00000000003C45B4 string=0x00000000003C45B8 "\n"
 *   insn=0x00000000003C45B4 string=0x00000000003C45C4 "5O@"
 *   insn=0x00000000003C45B8 string=0x00000000003C45BC "J"
 *   insn=0x00000000003C45BC string=0x00000000003C45C0 "\n"
 *   insn=0x00000000003C45C4 string=0x00000000003C45C8 ")#\t"
 *   insn=0x00000000003C45C8 string=0x00000000003C45CC "5"
 *   insn=0x00000000003C45D0 string=0x00000000003C45D4 ""
 *   insn=0x00000000003C45E0 string=0x00000000003C45E4 "\t@"
 *   insn=0x00000000003C45F0 string=0x00000000003C45F4 ""
 *   insn=0x00000000003C4600 string=0x00000000003C4604 "@"
 *   insn=0x00000000003C4610 string=0x00000000003C4614 "5"
 *   insn=0x00000000003C4614 string=0x00000000003C4658 "h"
 *   insn=0x00000000003C4618 string=0x00000000003C461C ""
 *   insn=0x00000000003C4628 string=0x00000000003C462C "\t@"
 *   insn=0x00000000003C4638 string=0x00000000003C463C ""
 *   insn=0x00000000003C4648 string=0x00000000003C464C "@"
 *   insn=0x00000000003C4658 string=0x00000000003C465C "i"
 *   insn=0x00000000003C465C string=0x0000000000592060 "333?"
 *   insn=0x00000000003C4660 string=0x00000000003C4664 "!1@"
 *   insn=0x00000000003C4680 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000003C4684 string=0x00000000003C4688 "i"
 *   insn=0x00000000003C4698 string=0x00000000003C469C " 5@"
 *   insn=0x00000000003C46A0 string=0x00000000003C46A8 "\t]"
 *   insn=0x00000000003C46BC string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003C46C8 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003C46CC string=0x00000000003C46D0 "4"
 *   insn=0x00000000003C46D4 string=0x00000000003C46D8 ""
 *   insn=0x00000000003C46E4 string=0x00000000003C46E8 "\t@"
 *   insn=0x00000000003C46F4 string=0x00000000003C46F8 ""
 *   insn=0x00000000003C4704 string=0x00000000003C4708 "@"
 *   insn=0x00000000003C471C string=0x00000000003C4720 "!"
 *   insn=0x00000000003C4744 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C4754 string=0x00000000003C4758 ""
 *   insn=0x00000000003C4764 string=0x00000000003C4768 "\t@"
 *   insn=0x00000000003C4774 string=0x00000000003C4778 ""
 *   insn=0x00000000003C4784 string=0x00000000003C4788 "@"
 *   insn=0x00000000003C4790 string=0x00000000003C4794 "_"
 *   insn=0x00000000003C47A4 string=0x00000000003C47A8 ""
 *   insn=0x00000000003C47B4 string=0x00000000003C47B8 "\t@"
 *   insn=0x00000000003C47C4 string=0x00000000003C47C8 ""
 *   insn=0x00000000003C47D4 string=0x00000000003C47D8 "@"
 *   insn=0x00000000003C47E0 string=0x00000000003C47E4 "K"
 *   insn=0x00000000003C47F0 string=0x00000000003C47F4 "5"
 *   insn=0x00000000003C47F4 string=0x00000000003C4958 "u"
 *   insn=0x00000000003C47F8 string=0x00000000003C47FC ""
 *   insn=0x00000000003C4808 string=0x00000000003C480C "\t@"
 *   insn=0x00000000003C4818 string=0x00000000003C481C ""
 *   insn=0x00000000003C4828 string=0x00000000003C482C "@"
 *   insn=0x00000000003C4834 string=0x00000000003C4838 "H"
 *   insn=0x00000000003C484C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C4850 string=0x00000000003C4854 "5"
 *   insn=0x00000000003C4854 string=0x00000000003C4858 "@"
 *   insn=0x00000000003C486C string=0x00000000003C48CC "y"
 *   insn=0x00000000003C487C string=0x00000000003C4880 ""
 *   insn=0x00000000003C488C string=0x00000000003C4890 "\t@"
 *   insn=0x00000000003C489C string=0x00000000003C48A0 ""
 *   insn=0x00000000003C48AC string=0x00000000003C48B0 "@"
 *   insn=0x00000000003C48B8 string=0x00000000003C48BC "'"
 *   insn=0x00000000003C48CC string=0x00000000003C48D0 "u"
 *   insn=0x00000000003C48D0 string=0x00000000003C48D4 "u"
 *   insn=0x00000000003C48D4 string=0x00000000003C48D8 "2"
 *   insn=0x00000000003C48D8 string=0x00000000003C49A0 "u"
 *   insn=0x00000000003C48FC string=0x00000000003C4900 "u"
 *   insn=0x00000000003C4904 string=0x00000000003C4908 "&"
 *   insn=0x00000000003C4910 string=0x00000000003C4914 "5"
 *   insn=0x00000000003C4918 string=0x00000000003C491C ""
 *   insn=0x00000000003C4928 string=0x00000000003C492C "\t@"
 *   insn=0x00000000003C4938 string=0x00000000003C493C ""
 *   insn=0x00000000003C4948 string=0x00000000003C494C "@"
 *   insn=0x00000000003C4958 string=0x00000000003C495C "5"
 *   insn=0x00000000003C4960 string=0x00000000003C4964 ""
 *   insn=0x00000000003C4970 string=0x00000000003C4974 "\t@"
 *   insn=0x00000000003C4980 string=0x00000000003C4984 ""
 *   insn=0x00000000003C4990 string=0x00000000003C4994 "@"
 *   insn=0x00000000003C49A0 string=0x00000000003C49A4 "5"
 *   insn=0x00000000003C49A4 string=0x00000000003C49E8 "h"
 *   insn=0x00000000003C49A8 string=0x00000000003C49AC ""
 *   insn=0x00000000003C49B8 string=0x00000000003C49BC "\t@"
 *   insn=0x00000000003C49C8 string=0x00000000003C49CC ""
 *   insn=0x00000000003C49D8 string=0x00000000003C49DC "@"
 *   insn=0x00000000003C49F0 string=0x00000000003C49F4 "`"
 *   insn=0x00000000003C49F0 string=0x00000000003C4A08 "V"
 *   insn=0x00000000003C49F8 string=0x00000000003C4A14 "S"
 *   insn=0x00000000003C4A00 string=0x00000000003C4A20 "@"
 *   insn=0x00000000003C4A08 string=0x00000000003C4A0C "`"
 *   insn=0x00000000003C4A08 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003C4A0C string=0x00000000003C4A10 "`"
 *   insn=0x00000000003C4A20 string=0x00000000003C4A24 ""
 *   insn=0x00000000003C4A24 string=0x00000000003C4A28 ""
 *   insn=0x00000000003C4A2C string=0x00000000003C4A30 ""
 *   insn=0x00000000003C4A30 string=0x00000000003C4A34 ""
 *   insn=0x00000000003C4A48 string=0x00000000003C4A4C "@&"
 *   insn=0x00000000003C4A4C string=0x00000000003C4A50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CoinBar::CoinBar(Caver::CoinBar *this)
{
  Caver::GUILabel *v2; // x0
  Caver::FontLibrary *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIView **v9; // x24
  Caver::GUILabel *v10; // x20
  Caver::FontLibrary *v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  Caver::GUIView *v20; // x20
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 (__fastcall *v24)(Caver::CoinBar *, __int128 *); // x8
  __int64 v25; // x9
  Caver::FloatColor *v26; // x0
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::FloatColor *v30; // x0
  Caver::FloatColor *v31; // x0
  Caver::FloatColor *v32; // x0
  Caver::GradientColor *v33; // x20
  Caver::GUILabel *v34; // x20
  _QWORD *v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x21
  __int64 v38; // x8
  __int64 v39; // x8
  int v40; // w8
  Caver::GUIAnimation *v41; // x20
  Caver::GUIPropertyValue *v42; // x0
  _QWORD *v43; // x20
  __int64 v44; // x9
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 *v48; // x20
  __int64 v49; // x25
  Caver::GUIPropertyValue *v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  _QWORD *v53; // x21
  __int64 v54; // x8
  __int64 v55; // x8
  _QWORD *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x8
  __int64 v59; // x25
  __int64 v60; // x8
  __int64 v61; // x9
  _QWORD *v62; // x21
  __int64 v63; // x8
  __int64 v64; // x8
  _QWORD *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x8
  __int64 v68; // x21
  __int64 v69; // x8
  __int64 result; // x0
  _QWORD *v71; // x20
  __int64 v72; // x8
  __int64 v73; // x8
  __int128 v74; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v75; // [xsp+10h] [xbp-B0h]
  __int64 v76[2]; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v77[2]; // [xsp+30h] [xbp-90h] BYREF
  Caver::GradientColor *v78; // [xsp+40h] [xbp-80h] BYREF
  _QWORD *v79; // [xsp+48h] [xbp-78h]
  char v80[16]; // [xsp+50h] [xbp-70h] BYREF
  __int128 v81; // [xsp+60h] [xbp-60h] BYREF
  __int64 v82; // [xsp+78h] [xbp-48h]

  v82 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_DWORD *)this + 61) = 2139095039;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *(_QWORD *)this = off_6CF220;
  *(_QWORD *)((char *)this + 236) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_BYTE *)this + 328) = 0;
  *((_QWORD *)this + 42) = 0;
  *((_QWORD *)this + 43) = 0;
  *((_DWORD *)this + 88) = 1065353216;
  *((_QWORD *)this + 45) = 0;
  *((_QWORD *)this + 46) = 0;
  v2 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v2);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v4 = (_QWORD *)*((_QWORD *)this + 43);
  v5 = v74;
  *(_QWORD *)&v74 = *((_QWORD *)this + 42);
  v6 = *((_QWORD *)&v74 + 1);
  *((_QWORD *)this + 42) = v5;
  *((_QWORD *)this + 43) = v6;
  *((_QWORD *)&v74 + 1) = v4;
  if ( v4 )
  {
    v7 = v4[1] - 1LL;
    v4[1] = v7;
    if ( !v7 )
    {
      v3 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v8 = v4[2] - 1LL;
      v4[2] = v8;
      if ( !v8 )
        v3 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v9 = (Caver::GUIView **)((char *)this + 336);
  v10 = (Caver::GUILabel *)*((_QWORD *)this + 42);
  v11 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v3);
  Caver::FontLibrary::LargeDefaultFont(v11);
  v12 = v74;
  if ( (_QWORD)v74 != *((_QWORD *)v10 + 30) )
  {
    v13 = *((_QWORD *)&v74 + 1);
    if ( *((_QWORD *)&v74 + 1) )
      ++*(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL);
    v14 = (_QWORD *)*((_QWORD *)v10 + 31);
    *((_QWORD *)v10 + 30) = v12;
    *((_QWORD *)v10 + 31) = v13;
    if ( v14 )
    {
      v15 = v14[1] - 1LL;
      v14[1] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v16 = v14[2] - 1LL;
        v14[2] = v16;
        if ( !v16 )
          (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
      }
    }
    Caver::GUILabel::UpdateText(v10);
  }
  v17 = (_QWORD *)*((_QWORD *)&v74 + 1);
  if ( *((_QWORD *)&v74 + 1) )
  {
    v18 = *(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL) = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = *v9;
  if ( *((unsigned __int8 *)*v9 + 264) != 255
    || *((unsigned __int8 *)v20 + 265) != 255
    || *((unsigned __int8 *)v20 + 266) != 255
    || *((unsigned __int8 *)v20 + 267) != 255 )
  {
    v21 = (_QWORD *)*((_QWORD *)v20 + 35);
    *((_DWORD *)v20 + 66) = -1;
    *((_QWORD *)v20 + 34) = 0;
    *((_QWORD *)v20 + 35) = 0;
    if ( v21 )
    {
      v22 = v21[1] - 1LL;
      v21[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
    Caver::GUILabel::UpdateText(v20);
    v20 = *v9;
  }
  *((_BYTE *)v20 + 320) = 1;
  *(_DWORD *)((char *)v20 + 321) = -16777216;
  *((_QWORD *)v20 + 41) = 0xBF8000003F800000LL;
  Caver::GUILabel::UpdateText(v20);
  v24 = *(__int64 (__fastcall **)(Caver::CoinBar *, __int128 *))(*(_QWORD *)this + 96LL);
  *(_QWORD *)&v74 = *((_QWORD *)this + 42);
  v25 = *((_QWORD *)this + 43);
  *((_QWORD *)&v74 + 1) = v25;
  if ( v25 )
    ++*(_QWORD *)(v25 + 8);
  v26 = (Caver::FloatColor *)v24(this, &v74);
  v27 = (_QWORD *)*((_QWORD *)&v74 + 1);
  if ( *((_QWORD *)&v74 + 1) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL) = v28;
    if ( !v28 )
    {
      v26 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        v26 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v81 = xmmword_5886BC;
  Caver::FloatColor::FromHSLA((__int64 *)&v74, v26, 0.13, 1.0, 0.6, 1.0);
  Caver::Color::FromFloatColor();
  Caver::FloatColor::FromHSLA((__int64 *)&v78, v30, 0.15, 0.88, 0.95, 1.0);
  Caver::Color::FromFloatColor();
  Caver::FloatColor::FromHSLA(v77, v31, 0.13, 0.94, 0.65, 1.0);
  Caver::Color::FromFloatColor();
  Caver::FloatColor::FromHSLA(v76, v32, 0.14, 0.97, 1.0, 1.0);
  Caver::Color::FromFloatColor();
  v33 = (Caver::GradientColor *)operator new(0x18u);
  Caver::GradientColor::GradientColor(v33, 4, (float *)&v81, (Caver::Color *)v80);
  v78 = v33;
  boost::detail::shared_count::shared_count<Caver::GradientColor>();
  boost::detail::sp_enable_shared_from_this();
  v34 = *v9;
  v36 = (__int64)v78;
  v35 = v79;
  if ( v79 )
    ++v79[1];
  v37 = (_QWORD *)*((_QWORD *)v34 + 35);
  *((_QWORD *)v34 + 34) = v36;
  *((_QWORD *)v34 + 35) = v35;
  if ( v37 )
  {
    v38 = v37[1] - 1LL;
    v37[1] = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
      v39 = v37[2] - 1LL;
      v37[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
    }
  }
  Caver::GUILabel::UpdateText(v34);
  v40 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 42) + 240LL) + 72LL);
  *(_QWORD *)&v74 = 0;
  DWORD2(v74) = 1112014848;
  HIDWORD(v74) = v40;
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v74);
  v41 = (Caver::GUIAnimation *)operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation(v41);
  *(_QWORD *)&v74 = v41;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v43 = (_QWORD *)*((_QWORD *)this + 46);
  v44 = v74;
  *(_QWORD *)&v74 = *((_QWORD *)this + 45);
  v45 = *((_QWORD *)&v74 + 1);
  *((_QWORD *)this + 45) = v44;
  *((_QWORD *)this + 46) = v45;
  *((_QWORD *)&v74 + 1) = v43;
  if ( v43 )
  {
    v46 = v43[1] - 1LL;
    v43[1] = v46;
    if ( !v46 )
    {
      v42 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
      v47 = v43[2] - 1LL;
      v43[2] = v47;
      if ( !v47 )
        v42 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
    }
  }
  v48 = (__int64 *)((char *)this + 360);
  v49 = *((_QWORD *)this + 45);
  *(_DWORD *)(v49 + 48) = 1;
  v50 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v74, v42, 0.0);
  *(_DWORD *)(v49 + 112) = v74;
  v52 = *((_QWORD *)&v74 + 1);
  v51 = v75;
  if ( (_QWORD)v75 )
    ++*(_QWORD *)(v75 + 8);
  v53 = *(_QWORD **)(v49 + 128);
  *(_QWORD *)(v49 + 120) = v52;
  *(_QWORD *)(v49 + 128) = v51;
  if ( v53 )
  {
    v54 = v53[1] - 1LL;
    v53[1] = v54;
    if ( !v54 )
    {
      v50 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v53 + 16LL))(v53);
      v55 = v53[2] - 1LL;
      v53[2] = v55;
      if ( !v55 )
        v50 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v53 + 24LL))(v53);
    }
  }
  v56 = (_QWORD *)v75;
  if ( (_QWORD)v75 )
  {
    v57 = *(_QWORD *)(v75 + 8) - 1LL;
    *(_QWORD *)(v75 + 8) = v57;
    if ( !v57 )
    {
      v50 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v56 + 16LL))(v56);
      v58 = v56[2] - 1LL;
      v56[2] = v58;
      if ( !v58 )
        v50 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
    }
  }
  v59 = *v48;
  Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v74, v50, 1.0);
  *(_DWORD *)(v59 + 136) = v74;
  v61 = *((_QWORD *)&v74 + 1);
  v60 = v75;
  if ( (_QWORD)v75 )
    ++*(_QWORD *)(v75 + 8);
  v62 = *(_QWORD **)(v59 + 152);
  *(_QWORD *)(v59 + 144) = v61;
  *(_QWORD *)(v59 + 152) = v60;
  if ( v62 )
  {
    v63 = v62[1] - 1LL;
    v62[1] = v63;
    if ( !v63 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v62 + 16LL))(v62);
      v64 = v62[2] - 1LL;
      v62[2] = v64;
      if ( !v64 )
        (*(void (__fastcall **)(_QWORD *))(*v62 + 24LL))(v62);
    }
  }
  v65 = (_QWORD *)v75;
  if ( (_QWORD)v75 )
  {
    v66 = *(_QWORD *)(v75 + 8) - 1LL;
    *(_QWORD *)(v75 + 8) = v66;
    if ( !v66 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
      v67 = v65[2] - 1LL;
      v65[2] = v67;
      if ( !v67 )
        (*(void (__fastcall **)(_QWORD *))(*v65 + 24LL))(v65);
    }
  }
  v68 = *v48;
  v77[0] = 0x400CCCCD3EE147AELL;
  v76[0] = 0x3F8000003F333333LL;
  Caver::GUIAnimationCurve::GUIAnimationCurve(
    (Caver::GUIAnimationCurve *)&v74,
    (const Caver::Vector2 *)v77,
    (const Caver::Vector2 *)v76);
  *(_OWORD *)(v68 + 52) = v74;
  *(_OWORD *)(v68 + 68) = v75;
  v69 = *v48;
  *(_DWORD *)(v69 + 92) = 1045220557;
  *(_BYTE *)(v69 + 184) = 0;
  *(_QWORD *)(v69 + 104) = 0x3F0000003E19999ALL;
  Caver::GUIView::RemoveAllAnimations(*v9);
  result = Caver::GUIView::AddAnimation();
  v71 = v79;
  if ( v79 )
  {
    v72 = v79[1] - 1LL;
    v79[1] = v72;
    if ( !v72 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v71 + 16LL))(v71);
      v73 = v71[2] - 1LL;
      v71[2] = v73;
      if ( !v73 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v71 + 24LL))(v71);
    }
  }
  return result;
}

