/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D41D8
 * Mangled: _ZN5Caver15GameOverlayView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000001F9400  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 22
 *   0x00000000001F4B10  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001F4C60  Caver::GUIButton::SetImage(std::string const&)
 *   0x00000000001F5790  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x00000000001F5C90  Caver::ManaBar::SetMaxMana(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6800  Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001F6B60  Caver::ConsumableItemView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001FA110  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *   0x00000000001FAC80  Caver::HealthBar::SetCurrentHealth(int)
 *   0x00000000001FB180  Caver::GameOverlayView::SetCurrentSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x00000000001FBCE0  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FCB50  Caver::CurrentDeviceType(void)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x00000000001FF640  Caver::HealthBar::SetMaxHealth(int)
 *   0x0000000000201D10  Caver::ManaBar::SetCurrentMana(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 241
 *   insn=0x00000000003D41EC string=0x00000000003D41F0 "V"
 *   insn=0x00000000003D4200 string=0x00000000003D4204 "i"@"
 *   insn=0x00000000003D4208 string=0x00000000003D420C "\n"
 *   insn=0x00000000003D420C string=0x00000000003D4210 "J"
 *   insn=0x00000000003D4210 string=0x00000000003D4214 "\n"
 *   insn=0x00000000003D421C string=0x00000000003D4220 "5"
 *   insn=0x00000000003D4220 string=0x00000000003D4264 "h"
 *   insn=0x00000000003D4224 string=0x00000000003D4228 ""
 *   insn=0x00000000003D4238 string=0x00000000003D423C "\t@"
 *   insn=0x00000000003D4244 string=0x00000000003D4248 ""
 *   insn=0x00000000003D4258 string=0x00000000003D425C "@"
 *   insn=0x00000000003D4268 string=0x00000000003D426C "u"
 *   insn=0x00000000003D426C string=0x00000000003D4298 "W"
 *   insn=0x00000000003D4270 string=0x00000000003D4274 "("
 *   insn=0x00000000003D427C string=0x00000000003D4280 "\t@"
 *   insn=0x00000000003D4288 string=0x00000000003D428C ""
 *   insn=0x00000000003D4298 string=0x00000000003D429C "h"
 *   insn=0x00000000003D429C string=0x00000000003D42A0 "\t"
 *   insn=0x00000000003D42AC string=0x00000000003D42B0 ""
 *   insn=0x00000000003D42C0 string=0x00000000001FB180 "0'"
 *   insn=0x00000000003D42C8 string=0x00000000003D42CC ""
 *   insn=0x00000000003D42D0 string=0x00000000003D42D4 "a"
 *   insn=0x00000000003D42DC string=0x00000000003D42E0 "\t@"
 *   insn=0x00000000003D42E8 string=0x00000000003D42EC ""
 *   insn=0x00000000003D42F0 string=0x00000000003D42F4 "a"
 *   insn=0x00000000003D42FC string=0x00000000003D4300 "@"
 *   insn=0x00000000003D4310 string=0x00000000003D4314 "@"
 *   insn=0x00000000003D4324 string=0x00000000003D4328 ""
 *   insn=0x00000000003D432C string=0x00000000003D4330 "("
 *   insn=0x00000000003D4334 string=0x00000000003D4338 "("
 *   insn=0x00000000003D433C string=0x00000000003D4340 "("
 *   insn=0x00000000003D4348 string=0x00000000003D434C "\n-E"
 *   insn=0x00000000003D434C string=0x00000000003D4350 "j"
 *   insn=0x00000000003D4350 string=0x00000000003D4354 "J"
 *   insn=0x00000000003D4354 string=0x00000000003D4358 "_"
 *   insn=0x00000000003D435C string=0x00000000003D4360 "*"
 *   insn=0x00000000003D4368 string=0x00000000003D436C "+"
 *   insn=0x00000000003D436C string=0x00000000003D4370 "K"
 *   insn=0x00000000003D4384 string=0x00000000003D4388 "n"
 *   insn=0x00000000003D4388 string=0x00000000001FD940 "0'"
 *   insn=0x00000000003D4390 string=0x00000000001FCB50 "0'"
 *   insn=0x00000000003D439C string=0x00000000003D43A0 ""
 *   insn=0x00000000003D43A8 string=0x00000000003D43E4 "7"
 *   insn=0x00000000003D43B4 string=0x00000000003D43B8 "\t@"
 *   insn=0x00000000003D43C4 string=0x00000000003D43C8 ""
 *   insn=0x00000000003D43D4 string=0x00000000003D43D8 "@"
 *   insn=0x00000000003D43F8 string=0x00000000003D43FC ""
 *   insn=0x00000000003D43FC string=0x00000000003D4400 "\tU@"
 *   insn=0x00000000003D440C string=0x00000000003D4410 ""
 *   insn=0x00000000003D441C string=0x00000000003D4420 "0"
 *   insn=0x00000000003D4420 string=0x00000000003D4424 "5"
 *   insn=0x00000000003D4420 string=0x00000000001FBCE0 "0'"
 *   insn=0x00000000003D4428 string=0x00000000003D442C ""
 *   insn=0x00000000003D4438 string=0x00000000003D443C "\t@"
 *   insn=0x00000000003D4448 string=0x00000000003D444C ""
 *   insn=0x00000000003D4458 string=0x00000000003D445C "@"
 *   insn=0x00000000003D4470 string=0x00000000003D4474 "h"
 *   insn=0x00000000003D4470 string=0x00000000001F6B60 "0'"
 *   insn=0x00000000003D4480 string=0x00000000003D4484 ")X"
 *   insn=0x00000000003D4490 string=0x00000000001F5790 "P'"
 *   insn=0x00000000003D4498 string=0x00000000003D449C ")"
 *   insn=0x00000000003D44A4 string=0x00000000003D44A8 "a"
 *   insn=0x00000000003D44A8 string=0x00000000003D44AC "h"
 *   insn=0x00000000003D44B0 string=0x00000000003D44B4 "\naF9+aG9_"
 *   insn=0x00000000003D44B4 string=0x00000000003D44B8 "+aG9_"
 *   insn=0x00000000003D44B8 string=0x00000000003D44BC "_"
 *   insn=0x00000000003D44C0 string=0x00000000003D44C4 "*a9J"
 *   insn=0x00000000003D44C4 string=0x00000000003D44C8 "J"
 *   insn=0x00000000003D44C8 string=0x00000000003D44CC "?"
 *   insn=0x00000000003D44D0 string=0x00000000003D44D4 "\neF9+aG9_"
 *   insn=0x00000000003D44D4 string=0x00000000003D44D8 "+aG9_"
 *   insn=0x00000000003D44D8 string=0x00000000003D44DC "_"
 *   insn=0x00000000003D44E0 string=0x00000000003D44E4 "*a9J"
 *   insn=0x00000000003D44E0 string=0x00000000003D44F0 ""
 *   insn=0x00000000003D44E4 string=0x00000000003D44E8 "J"
 *   insn=0x00000000003D44E8 string=0x00000000003D44EC "?"
 *   insn=0x00000000003D44F4 string=0x00000000003D44F8 "y"
 *   insn=0x00000000003D44FC string=0x00000000003D4500 "P"
 *   insn=0x00000000003D4500 string=0x00000000003D4504 "h"
 *   insn=0x00000000003D4510 string=0x00000000003D4514 "h"
 *   insn=0x00000000003D4510 string=0x00000000001FAC80 "0'"
 *   insn=0x00000000003D451C string=0x00000000003D4520 ""
 *   insn=0x00000000003D4520 string=0x00000000003D4524 "}\t"
 *   insn=0x00000000003D452C string=0x00000000003D4530 "h"
 *   insn=0x00000000003D452C string=0x00000000001F5C90 "P'"
 *   insn=0x00000000003D4548 string=0x00000000001F6800 "0'"
 *   insn=0x00000000003D4550 string=0x00000000003D4554 "o"
 *   insn=0x00000000003D4554 string=0x00000000001F4B10 "P'"
 *   insn=0x00000000003D4558 string=0x00000000003D455C "3"
 *   insn=0x00000000003D455C string=0x00000000003D4560 "h"
 *   insn=0x00000000003D4560 string=0x00000000003D4564 ""
 *   insn=0x00000000003D4564 string=0x00000000003D4568 "h"
 *   insn=0x00000000003D456C string=0x00000000003D4570 "h"
 *   insn=0x00000000003D4574 string=0x00000000003D4578 "\t@"
 *   insn=0x00000000003D457C string=0x00000000003D4580 "h\n@"
 *   insn=0x00000000003D4580 string=0x00000000003D4584 ""
 *   insn=0x00000000003D4584 string=0x00000000003D4588 "h\n"
 *   insn=0x00000000003D458C string=0x00000000003D4590 "h"
 *   insn=0x00000000003D4594 string=0x00000000003D4598 "@"
 *   insn=0x00000000003D45A8 string=0x00000000003D45AC "a"
 *   insn=0x00000000003D45D4 string=0x00000000001FA110 "0'"
 *   insn=0x00000000003D45F0 string=0x00000000003D45F4 ""
 *   insn=0x00000000003D45F8 string=0x00000000003D45FC "A"
 *   insn=0x00000000003D4604 string=0x00000000003D4608 "\t@"
 *   insn=0x00000000003D4610 string=0x00000000003D4614 ""
 *   insn=0x00000000003D4618 string=0x00000000003D461C "A"
 *   insn=0x00000000003D4624 string=0x00000000003D4628 "@"
 *   insn=0x00000000003D462C string=0x00000000003D4630 "U"
 *   insn=0x00000000003D4634 string=0x00000000003D4638 ")=G"
 *   insn=0x00000000003D4638 string=0x00000000003D463C "!"
 *   insn=0x00000000003D4640 string=0x00000000003D4644 "\t"
 *   insn=0x00000000003D4640 string=0x00000000003D4658 "\t"
 *   insn=0x00000000003D4644 string=0x00000000003D4648 "*"
 *   insn=0x00000000003D4648 string=0x00000000003D464C "\n"
 *   insn=0x00000000003D4654 string=0x00000000003D4664 "?"
 *   insn=0x00000000003D4658 string=0x00000000003D465C "*"
 *   insn=0x00000000003D465C string=0x00000000003D4660 "\n"
 *   insn=0x00000000003D4664 string=0x00000000003D4668 ","
 *   insn=0x00000000003D466C string=0x00000000003D4670 "MW"
 *   insn=0x00000000003D4678 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D4684 string=0x00000000003D4688 ""
 *   insn=0x00000000003D4694 string=0x00000000003D4698 "\t@"
 *   insn=0x00000000003D46A4 string=0x00000000003D46A8 ""
 *   insn=0x00000000003D46B4 string=0x00000000003D46B8 "@"
 *   insn=0x00000000003D46C0 string=0x00000000003D46C4 "7"
 *   insn=0x00000000003D46D0 string=0x00000000003D46D4 ""
 *   insn=0x00000000003D46D8 string=0x00000000003D46DC "a"
 *   insn=0x00000000003D46E0 string=0x00000000003D46E4 "\t@"
 *   insn=0x00000000003D46F0 string=0x00000000003D46F4 ""
 *   insn=0x00000000003D46F8 string=0x00000000003D46FC "a"
 *   insn=0x00000000003D4700 string=0x00000000003D4704 "@"
 *   insn=0x00000000003D470C string=0x00000000003D4710 "6"
 *   insn=0x00000000003D471C string=0x00000000003D4720 "J"
 *   insn=0x00000000003D4724 string=0x00000000003D4728 "(a"
 *   insn=0x00000000003D4734 string=0x00000000003D4738 "J=G"
 *   insn=0x00000000003D4738 string=0x00000000003D473C ")!"
 *   insn=0x00000000003D4740 string=0x00000000003D4744 "*"
 *   insn=0x00000000003D4740 string=0x00000000003D4774 "*"
 *   insn=0x00000000003D4744 string=0x00000000003D4748 "K"
 *   insn=0x00000000003D4748 string=0x00000000003D474C "+"
 *   insn=0x00000000003D4750 string=0x00000000003D4754 "_"
 *   insn=0x00000000003D4754 string=0x00000000003D4758 "L"
 *   insn=0x00000000003D4774 string=0x00000000003D4778 "K"
 *   insn=0x00000000003D4778 string=0x00000000003D477C "+"
 *   insn=0x00000000003D477C string=0x00000000003D4780 "_"
 *   insn=0x00000000003D47A0 string=0x00000000003D47A4 "4"
 *   insn=0x00000000003D47A8 string=0x00000000003D47AC ""
 *   insn=0x00000000003D47B8 string=0x00000000003D47BC "\t@"
 *   insn=0x00000000003D47C8 string=0x00000000003D47CC ""
 *   insn=0x00000000003D47D8 string=0x00000000003D47DC "@"
 *   insn=0x00000000003D47E8 string=0x00000000003D47EC "6"
 *   insn=0x00000000003D4804 string=0x00000000003D4808 "U"
 *   insn=0x00000000003D4814 string=0x00000000003D4818 ") @"
 *   insn=0x00000000003D481C string=0x00000000003D4820 "\n"
 *   insn=0x00000000003D481C string=0x00000000003D482C "t"
 *   insn=0x00000000003D4820 string=0x00000000003D4824 "J"
 *   insn=0x00000000003D4824 string=0x00000000003D4828 "\n"
 *   insn=0x00000000003D482C string=0x00000000003D4830 "i"
 *   insn=0x00000000003D4830 string=0x00000000003D4834 "4"
 *   insn=0x00000000003D4834 string=0x00000000003D4878 "a"
 *   insn=0x00000000003D4838 string=0x00000000003D483C ""
 *   insn=0x00000000003D484C string=0x00000000003D4850 "\t@"
 *   insn=0x00000000003D4858 string=0x00000000003D485C ""
 *   insn=0x00000000003D486C string=0x00000000003D4870 "@"
 *   insn=0x00000000003D4878 string=0x00000000003D487C "t"
 *   insn=0x00000000003D487C string=0x00000000003D4880 "A"
 *   insn=0x00000000003D4884 string=0x00000000003D4888 "(W"
 *   insn=0x00000000003D488C string=0x0000000000592623 "ui_skill_"
 *   insn=0x00000000003D48A8 string=0x00000000001F4C60 "P'"
 *   insn=0x00000000003D48CC string=0x00000000003D48D0 "A"
 *   insn=0x00000000003D48D0 string=0x00000000003D48D4 "i"
 *   insn=0x00000000003D48D4 string=0x00000000003D48D8 "h"
 *   insn=0x00000000003D48D8 string=0x00000000003D48DC ")"
 *   insn=0x00000000003D48DC string=0x00000000003D4920 "i"
 *   insn=0x00000000003D48E4 string=0x00000000003D492C "\t"
 *   insn=0x00000000003D48F4 string=0x00000000001FC750 "0'"
 *   insn=0x00000000003D48FC string=0x00000000003D4900 "@"
 *   insn=0x00000000003D4900 string=0x00000000003D4904 ""
 *   insn=0x00000000003D4904 string=0x00000000003D4908 ""
 *   insn=0x00000000003D4908 string=0x00000000003D490C "A"
 *   insn=0x00000000003D490C string=0x00000000003D4910 ""
 *   insn=0x00000000003D4910 string=0x00000000003D4914 ""
 *   insn=0x00000000003D4920 string=0x00000000003D4924 "?"
 *   insn=0x00000000003D493C string=0x00000000003D49DC "="
 *   insn=0x00000000003D4954 string=0x00000000003D4958 ")=G"
 *   insn=0x00000000003D4958 string=0x00000000003D495C "!"
 *   insn=0x00000000003D4960 string=0x00000000003D4964 "\t"
 *   insn=0x00000000003D4960 string=0x00000000003D499C "\t"
 *   insn=0x00000000003D4964 string=0x00000000003D4968 "*"
 *   insn=0x00000000003D4968 string=0x00000000003D496C "\n"
 *   insn=0x00000000003D4970 string=0x00000000003D4974 ""
 *   insn=0x00000000003D4974 string=0x00000000003D49A8 "?"
 *   insn=0x00000000003D4978 string=0x00000000003D497C ")=G"
 *   insn=0x00000000003D497C string=0x00000000003D4980 "!"
 *   insn=0x00000000003D4984 string=0x00000000003D4988 "\t"
 *   insn=0x00000000003D4984 string=0x00000000003D49BC "\t"
 *   insn=0x00000000003D4988 string=0x00000000003D498C "*"
 *   insn=0x00000000003D498C string=0x00000000003D4990 "\n"
 *   insn=0x00000000003D4998 string=0x00000000003D49C8 "?"
 *   insn=0x00000000003D499C string=0x00000000003D49A0 "*"
 *   insn=0x00000000003D49A0 string=0x00000000003D49A4 "\n"
 *   insn=0x00000000003D49B0 string=0x00000000003D49B4 "|V"
 *   insn=0x00000000003D49BC string=0x00000000003D49C0 "*"
 *   insn=0x00000000003D49C0 string=0x00000000003D49C4 "\n"
 *   insn=0x00000000003D49C8 string=0x00000000003D49CC "L"
 *   insn=0x00000000003D49D0 string=0x00000000003D49D4 "tV"
 *   insn=0x00000000003D49E8 string=0x00000000003D49EC "\t\t@"
 *   insn=0x00000000003D49EC string=0x00000000003D49F0 ")"
 *   insn=0x00000000003D49F0 string=0x00000000003D49F4 "\t\t"
 *   insn=0x00000000003D49F4 string=0x00000000003D49F8 "a"
 *   insn=0x00000000003D49F8 string=0x00000000003D49FC "\t"
 *   insn=0x00000000003D49FC string=0x00000000003D4A00 ")"
 *   insn=0x00000000003D4A04 string=0x00000000003D4A08 " "
 *   insn=0x00000000003D4A08 string=0x00000000003D4A0C "."
 *   insn=0x00000000003D4A18 string=0x00000000003D4A1C "J"
 *   insn=0x00000000003D4A20 string=0x00000000003D4A24 "(a"
 *   insn=0x00000000003D4A30 string=0x00000000003D4A34 "J=G"
 *   insn=0x00000000003D4A34 string=0x00000000003D4A38 ")!"
 *   insn=0x00000000003D4A3C string=0x00000000003D4A40 "*"
 *   insn=0x00000000003D4A3C string=0x00000000003D4A54 "*"
 *   insn=0x00000000003D4A40 string=0x00000000003D4A44 "K"
 *   insn=0x00000000003D4A44 string=0x00000000003D4A48 "+"
 *   insn=0x00000000003D4A50 string=0x00000000003D4A60 "_"
 *   insn=0x00000000003D4A54 string=0x00000000003D4A58 "K"
 *   insn=0x00000000003D4A58 string=0x00000000003D4A5C "+"
 *   insn=0x00000000003D4A6C string=0x00000000003D4A70 "MV"
 *   insn=0x00000000003D4A80 string=0x00000000003D4A84 ")"
 *   insn=0x00000000003D4A94 string=0x00000000003D4A98 ")=G"
 *   insn=0x00000000003D4A98 string=0x00000000003D4A9C "!"
 *   insn=0x00000000003D4A9C string=0x00000000003D4AA0 "i"
 *   insn=0x00000000003D4AA0 string=0x00000000003D4AA4 "\t"
 *   insn=0x00000000003D4AA0 string=0x00000000003D4ACC "\t"
 *   insn=0x00000000003D4AA4 string=0x00000000003D4AA8 "*"
 *   insn=0x00000000003D4AA8 string=0x00000000003D4AAC "\n"
 *   insn=0x00000000003D4AB0 string=0x00000000003D4AB4 "?"
 *   insn=0x00000000003D4AB4 string=0x00000000003D4AB8 "l"
 *   insn=0x00000000003D4ABC string=0x00000000003D4AC0 "9V"
 *   insn=0x00000000003D4ACC string=0x00000000003D4AD0 "*"
 *   insn=0x00000000003D4AD0 string=0x00000000003D4AD4 "\n"
 *   insn=0x00000000003D4AD4 string=0x00000000003D4AD8 "?"
 *   insn=0x00000000003D4AD8 string=0x00000000003D4ADC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::InitWithGameState(Caver::GameOptions *a1, _QWORD *a2)
{
  Caver::GameOptions *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x21
  __int64 v10; // x23
  __int64 v11; // x8
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x9
  int v16; // w9
  __int64 v17; // x21
  Caver *v18; // x0
  __int64 v19; // x21
  Caver *v20; // x0
  __int64 *v21; // x8
  _QWORD *v22; // x21
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 v25; // x21
  int v26; // w0
  _QWORD *v27; // x8
  _QWORD *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x8
  void *v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int v34; // w10
  __int64 v35; // x9
  int v36; // w10
  __int64 result; // x0
  _QWORD *v38; // x19
  __int64 v39; // x8
  __int64 v40; // x8
  _QWORD *v41; // x21
  __int64 v42; // x8
  __int64 v43; // x8
  unsigned int *v44; // x8
  int v45; // w9
  _QWORD v46[2]; // [xsp+50h] [xbp-60h] BYREF
  __int64 v47; // [xsp+60h] [xbp-50h] BYREF
  _QWORD *v48; // [xsp+68h] [xbp-48h]
  __int64 v49; // [xsp+78h] [xbp-38h]

  v3 = a1;
  v49 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)a1 + 32);
  *((_QWORD *)a1 + 31) = v5;
  *((_QWORD *)a1 + 32) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v10 = *(_QWORD *)(*a2 + 104LL);
  v9 = *(_QWORD **)(*a2 + 112LL);
  if ( !v9
    || v9[1]
    || (a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD))(*v9 + 16LL))(*(_QWORD *)(*a2 + 112LL)),
        v11 = v9[2] - 1LL,
        (v9[2] = v11) != 0) )
  {
    if ( !v10 )
      goto LABEL_18;
  }
  else
  {
    a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    if ( !v10 )
      goto LABEL_18;
  }
  v12 = *(_QWORD **)(*a2 + 112LL);
  v47 = *(_QWORD *)(*a2 + 104LL);
  v48 = v12;
  if ( v12 )
    ++v12[1];
  Caver::GameOverlayView::SetCurrentSkill();
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
LABEL_18:
  v15 = *((_QWORD *)v3 + 55);
  if ( *((_BYTE *)v3 + 416) )
  {
    *(_BYTE *)(v15 + 228) = 1;
    *(_BYTE *)(*((_QWORD *)v3 + 48) + 228LL) = 1;
    *(_BYTE *)(*((_QWORD *)v3 + 46) + 228LL) = 1;
  }
  else
  {
    *(_BYTE *)(v15 + 228) = (unsigned int)((*(_QWORD *)(*((_QWORD *)v3 + 31) + 88LL)
                                          - *(_QWORD *)(*((_QWORD *)v3 + 31) + 80LL)) >> 4) == 0;
    v16 = *((unsigned __int8 *)v3 + 417);
    *(_BYTE *)(*((_QWORD *)v3 + 48) + 228LL) = v16 ^ 1;
    v17 = *((_QWORD *)v3 + 46);
    if ( v16 )
    {
      *(_BYTE *)(v17 + 228) = 1;
    }
    else
    {
      a1 = (Caver::GameOptions *)Caver::CharacterState::AnyItemOfType();
      *(_BYTE *)(v17 + 228) = v47 == 0;
      v41 = v48;
      if ( v48 )
      {
        v42 = v48[1] - 1LL;
        v48[1] = v42;
        if ( !v42 )
        {
          a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
          v43 = v41[2] - 1LL;
          v41[2] = v43;
          if ( !v43 )
            a1 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
        }
      }
    }
  }
  v18 = (Caver *)Caver::GameOptions::sharedOptions(&v47, a1);
  v19 = v47;
  v20 = (Caver *)Caver::CurrentDeviceType(v18);
  v21 = (__int64 *)(v19 + 64);
  if ( (_DWORD)v20 != 1 )
    v21 = (__int64 *)(v19 + 48);
  v23 = *v21;
  v22 = (_QWORD *)v21[1];
  if ( v22 )
  {
    if ( !v22[1] )
    {
      v20 = (Caver *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        v20 = (Caver *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  if ( v23 )
  {
    v25 = v47;
    v26 = Caver::CurrentDeviceType(v20);
    v27 = (_QWORD *)(v25 + 64);
    if ( v26 != 1 )
      v27 = (_QWORD *)(v25 + 48);
    v28 = (_QWORD *)v27[1];
    v46[0] = *v27;
    v46[1] = v28;
    if ( v28 )
      ++v28[1];
    Caver::GameOverlayView::SetLayout();
    if ( v28 )
    {
      v29 = v28[1] - 1LL;
      v28[1] = v29;
      if ( !v29 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
        v30 = v28[2] - 1LL;
        v28[2] = v30;
        if ( !v30 )
          (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
      }
    }
  }
  Caver::ConsumableItemView::InitWithGameState();
  sub_56A528(v46, *a2 + 400LL);
  Caver::OverlayMenuButton::SetMenuTab();
  v31 = (void *)(v46[0] - 24LL);
  if ( (__int64 *)(v46[0] - 24LL) != &qword_6FD2E0 )
  {
    v44 = (unsigned int *)(v46[0] - 8LL);
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
      operator delete(v31);
  }
  v32 = *a2;
  v33 = *((_QWORD *)v3 + 57);
  v34 = *(unsigned __int8 *)(*a2 + 408LL);
  if ( v34 != *(unsigned __int8 *)(v33 + 472) )
  {
    *(_BYTE *)(v33 + 472) = v34;
    if ( v34 )
      *(_QWORD *)(v33 + 464) = 0;
  }
  v35 = *((_QWORD *)v3 + 55);
  v36 = *(unsigned __int8 *)(v32 + 409);
  if ( v36 != *(unsigned __int8 *)(v35 + 472) )
  {
    *(_BYTE *)(v35 + 472) = v36;
    if ( v36 )
      *(_QWORD *)(v35 + 464) = 0;
  }
  Caver::HealthBar::SetMaxHealth(*((Caver::HealthBar **)v3 + 61), 2 * *(_DWORD *)(v32 + 188) + 4);
  Caver::HealthBar::SetCurrentHealth(*((Caver::HealthBar **)v3 + 61), *(_DWORD *)(*a2 + 168LL));
  Caver::ManaBar::SetMaxMana(*((Caver::ManaBar **)v3 + 63), 20 * *(_DWORD *)(*a2 + 196LL) + 10);
  Caver::ManaBar::SetCurrentMana(*((Caver::ManaBar **)v3 + 63), *(_DWORD *)(*a2 + 172LL));
  Caver::ExperienceBar::InitWithGameState(*((Caver::ExperienceBar **)v3 + 67));
  result = Caver::ItemOverlay::InitWithGameState();
  v38 = v48;
  if ( v48 )
  {
    v39 = v48[1] - 1LL;
    v48[1] = v39;
    if ( !v39 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  return result;
}

