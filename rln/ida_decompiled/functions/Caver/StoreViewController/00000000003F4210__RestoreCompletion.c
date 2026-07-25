/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F4210
 * Mangled: _ZN5Caver19StoreViewController17RestoreCompletionERKSt6vectorISsSaISsEERKSs
 * Demangled: Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 12
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F56F0  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 231
 *   insn=0x00000000003F422C string=0x00000000003F4230 "H"
 *   insn=0x00000000003F4234 string=0x00000000003F4238 ""
 *   insn=0x00000000003F4244 string=0x00000000003F4248 "H"
 *   insn=0x00000000003F424C string=0x00000000003F4250 "zfG"
 *   insn=0x00000000003F4250 string=0x00000000003F4254 ""
 *   insn=0x00000000003F4254 string=0x00000000003F4258 "_"
 *   insn=0x00000000003F4268 string=0x00000000003F426C ""
 *   insn=0x00000000003F4284 string=0x00000000003F4288 "@{t"
 *   insn=0x00000000003F4288 string=0x00000000003F428C ""
 *   insn=0x00000000003F42A0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003F42A4 string=0x00000000003F42BC "h.@"
 *   insn=0x00000000003F42AC string=0x00000000003F42B0 "{C"
 *   insn=0x00000000003F42BC string=0x00000000003F42C0 ""
 *   insn=0x00000000003F42C0 string=0x00000000003F42C4 "i{"
 *   insn=0x00000000003F42C4 string=0x00000000003F42C8 ""
 *   insn=0x00000000003F42D0 string=0x00000000003F42D4 ""
 *   insn=0x00000000003F42D4 string=0x00000000001F56F0 "P'"
 *   insn=0x00000000003F42DC string=0x00000000003F42E0 ""
 *   insn=0x00000000003F42EC string=0x00000000003F42F0 "a"
 *   insn=0x00000000003F42F0 string=0x00000000003F42DC "z"G"
 *   insn=0x00000000003F4300 string=0x00000000003F4304 " "
 *   insn=0x00000000003F4304 string=0x00000000003F4308 "|fG"
 *   insn=0x00000000003F4308 string=0x00000000003F430C "?"
 *   insn=0x00000000003F430C string=0x00000000003F4310 "a"
 *   insn=0x00000000003F4314 string=0x00000000003F4318 "("
 *   insn=0x00000000003F4320 string=0x00000000003F4358 "("
 *   insn=0x00000000003F4324 string=0x00000000003F4328 ""
 *   insn=0x00000000003F4328 string=0x00000000003F432C "it"
 *   insn=0x00000000003F4330 string=0x00000000003F4334 "`*@"
 *   insn=0x00000000003F4330 string=0x00000000003F43A4 "("
 *   insn=0x00000000003F4334 string=0x00000000003F4338 "`"
 *   insn=0x00000000003F4338 string=0x00000000003F433C ""
 *   insn=0x00000000003F4344 string=0x00000000003F4348 ""
 *   insn=0x00000000003F434C string=0x00000000003F4350 "|fG"
 *   insn=0x00000000003F4358 string=0x00000000003F435C "@"
 *   insn=0x00000000003F4368 string=0x00000000003F436C ""
 *   insn=0x00000000003F4374 string=0x00000000003F4378 ""
 *   insn=0x00000000003F4390 string=0x00000000003F4324 "h.@"
 *   insn=0x00000000003F43A4 string=0x00000000003F43A8 "Z"
 *   insn=0x00000000003F43A8 string=0x00000000003F43AC ""
 *   insn=0x00000000003F43B0 string=0x00000000003F43B4 "("
 *   insn=0x00000000003F43C0 string=0x00000000003F43C4 "A"
 *   insn=0x00000000003F43C8 string=0x00000000003F43CC "h"
 *   insn=0x00000000003F43D4 string=0x00000000003F43D8 ""
 *   insn=0x00000000003F43E0 string=0x000000000058F6BA "Ok"
 *   insn=0x00000000003F43F4 string=0x0000000000593507 "OOPS"
 *   insn=0x00000000003F4420 string=0x00000000001F4080 "P'"
 *   insn=0x00000000003F4438 string=0x00000000003F443C "a"
 *   insn=0x00000000003F4444 string=0x00000000003F4448 "h"
 *   insn=0x00000000003F4444 string=0x00000000003F445C "t"
 *   insn=0x00000000003F4448 string=0x00000000003F444C "@"
 *   insn=0x00000000003F4454 string=0x00000000003F4458 "a"
 *   insn=0x00000000003F4464 string=0x00000000003F4468 ""
 *   insn=0x00000000003F4470 string=0x00000000003F4474 "_&"
 *   insn=0x00000000003F4474 string=0x00000000003F4478 "4"
 *   insn=0x00000000003F4474 string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003F447C string=0x00000000003F4480 ""
 *   insn=0x00000000003F448C string=0x00000000003F4490 "\t@"
 *   insn=0x00000000003F449C string=0x00000000003F44A0 ""
 *   insn=0x00000000003F44AC string=0x00000000003F44B0 "@"
 *   insn=0x00000000003F44BC string=0x00000000003F44C0 "3"
 *   insn=0x00000000003F44C0 string=0x00000000003F44C4 "h"
 *   insn=0x00000000003F44C4 string=0x00000000003F44C8 ""
 *   insn=0x00000000003F44C8 string=0x00000000003F44CC "h"
 *   insn=0x00000000003F44D0 string=0x00000000003F44D4 "h"
 *   insn=0x00000000003F44D4 string=0x00000000003F44D8 "\t@"
 *   insn=0x00000000003F44E0 string=0x00000000003F44E4 "h\n@"
 *   insn=0x00000000003F44E4 string=0x00000000003F44E8 ""
 *   insn=0x00000000003F44E8 string=0x00000000003F44EC "h\n"
 *   insn=0x00000000003F44F0 string=0x00000000003F44F4 "h"
 *   insn=0x00000000003F44F4 string=0x00000000003F44F8 "@"
 *   insn=0x00000000003F450C string=0x00000000003F4510 "@"
 *   insn=0x00000000003F4514 string=0x00000000003F4518 ")=G"
 *   insn=0x00000000003F4518 string=0x00000000003F451C "!"
 *   insn=0x00000000003F4520 string=0x00000000003F4524 "\t"
 *   insn=0x00000000003F4520 string=0x00000000003F4758 "\t"
 *   insn=0x00000000003F4524 string=0x00000000003F4528 "*"
 *   insn=0x00000000003F4528 string=0x00000000003F452C "\n"
 *   insn=0x00000000003F4534 string=0x00000000003F4764 "?"
 *   insn=0x00000000003F454C string=0x00000000003F4550 "I)@"
 *   insn=0x00000000003F4550 string=0x00000000003F4554 "_"
 *   insn=0x00000000003F4558 string=0x00000000003F4588 ""
 *   insn=0x00000000003F455C string=0x000000000059350C "SUCCESS"
 *   insn=0x00000000003F4568 string=0x00000000003F456C ""
 *   insn=0x00000000003F4570 string=0x0000000000593514 "Your purchases have been restored."
 *   insn=0x00000000003F4578 string=0x00000000003F457C "B"
 *   insn=0x00000000003F4588 string=0x00000000003F458C "h"
 *   insn=0x00000000003F45BC string=0x00000000003F45C0 "a"
 *   insn=0x00000000003F45C8 string=0x00000000003F45CC "h"
 *   insn=0x00000000003F45C8 string=0x00000000003F45E0 "t"
 *   insn=0x00000000003F45CC string=0x00000000003F45D0 "@"
 *   insn=0x00000000003F45D8 string=0x00000000003F45DC "a"
 *   insn=0x00000000003F45E8 string=0x00000000003F45EC ""
 *   insn=0x00000000003F45F8 string=0x00000000003F45FC "4"
 *   insn=0x00000000003F4600 string=0x00000000003F4604 ""
 *   insn=0x00000000003F4610 string=0x00000000003F4614 "\t@"
 *   insn=0x00000000003F4620 string=0x00000000003F4624 ""
 *   insn=0x00000000003F4630 string=0x00000000003F4634 "@"
 *   insn=0x00000000003F4640 string=0x00000000003F4644 "3"
 *   insn=0x00000000003F4644 string=0x00000000003F4648 "h"
 *   insn=0x00000000003F4648 string=0x00000000003F464C ""
 *   insn=0x00000000003F464C string=0x00000000003F4650 "h"
 *   insn=0x00000000003F4654 string=0x00000000003F4658 "h"
 *   insn=0x00000000003F4658 string=0x00000000003F465C "\t@"
 *   insn=0x00000000003F4664 string=0x00000000003F4668 "h\n@"
 *   insn=0x00000000003F4668 string=0x00000000003F466C ""
 *   insn=0x00000000003F466C string=0x00000000003F4670 "h\n"
 *   insn=0x00000000003F4674 string=0x00000000003F4678 "h"
 *   insn=0x00000000003F4678 string=0x00000000003F467C "@"
 *   insn=0x00000000003F4690 string=0x00000000003F4694 "!"
 *   insn=0x00000000003F46A0 string=0x00000000003F46A4 "a"
 *   insn=0x00000000003F46B8 string=0x00000000003F46BC ""
 *   insn=0x00000000003F46EC string=0x00000000003F46F0 ")=G"
 *   insn=0x00000000003F46F0 string=0x00000000003F46F4 "!"
 *   insn=0x00000000003F46F4 string=0x00000000003F46F8 ")"
 *   insn=0x00000000003F46F8 string=0x00000000003F46FC "\t"
 *   insn=0x00000000003F46F8 string=0x00000000003F479C "\t"
 *   insn=0x00000000003F46FC string=0x00000000003F4700 "*"
 *   insn=0x00000000003F4700 string=0x00000000003F4704 "\n"
 *   insn=0x00000000003F4708 string=0x00000000003F470C "'"
 *   insn=0x00000000003F470C string=0x00000000003F47A8 "?"
 *   insn=0x00000000003F4710 string=0x00000000003F4714 ")=G"
 *   insn=0x00000000003F4714 string=0x00000000003F4718 "!"
 *   insn=0x00000000003F4718 string=0x00000000003F471C "\t"
 *   insn=0x00000000003F471C string=0x00000000003F4720 "\t"
 *   insn=0x00000000003F471C string=0x00000000003F47BC "\t"
 *   insn=0x00000000003F4720 string=0x00000000003F4724 "*"
 *   insn=0x00000000003F4724 string=0x00000000003F4728 "\n"
 *   insn=0x00000000003F472C string=0x00000000003F4730 "&"
 *   insn=0x00000000003F4730 string=0x00000000003F47C8 "?"
 *   insn=0x00000000003F4734 string=0x00000000003F4738 ")=G"
 *   insn=0x00000000003F4738 string=0x00000000003F473C "!"
 *   insn=0x00000000003F4740 string=0x00000000003F4744 "\t"
 *   insn=0x00000000003F4744 string=0x00000000003F4748 "*"
 *   insn=0x00000000003F4748 string=0x00000000003F474C "\n"
 *   insn=0x00000000003F4758 string=0x00000000003F475C "*"
 *   insn=0x00000000003F475C string=0x00000000003F4760 "\n"
 *   insn=0x00000000003F476C string=0x00000000003F4770 ""
 *   insn=0x00000000003F4778 string=0x00000000003F477C ")=G"
 *   insn=0x00000000003F477C string=0x00000000003F4780 "!"
 *   insn=0x00000000003F4784 string=0x00000000003F4788 "\t"
 *   insn=0x00000000003F4784 string=0x00000000003F47DC "\t"
 *   insn=0x00000000003F4788 string=0x00000000003F478C "*"
 *   insn=0x00000000003F478C string=0x00000000003F4790 "\n"
 *   insn=0x00000000003F4798 string=0x00000000003F47E8 "?"
 *   insn=0x00000000003F479C string=0x00000000003F47A0 "*"
 *   insn=0x00000000003F47A0 string=0x00000000003F47A4 "\n"
 *   insn=0x00000000003F47B4 string=0x00000000003F47B8 "!"
 *   insn=0x00000000003F47BC string=0x00000000003F47C0 "*"
 *   insn=0x00000000003F47C0 string=0x00000000003F47C4 "\n"
 *   insn=0x00000000003F47DC string=0x00000000003F47E0 "*"
 *   insn=0x00000000003F47E0 string=0x00000000003F47E4 "\n"
 *   insn=0x00000000003F47E8 string=0x00000000003F47EC "l"
 *   insn=0x00000000003F47FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F480C string=0x00000000003F4810 ","
 *   insn=0x00000000003F4814 string=0x00000000003F4818 "4"
 *   insn=0x00000000003F481C string=0x00000000003F4820 ""
 *   insn=0x00000000003F482C string=0x00000000003F4830 "\t@"
 *   insn=0x00000000003F483C string=0x00000000003F4840 ""
 *   insn=0x00000000003F484C string=0x00000000003F4850 "@"
 *   insn=0x00000000003F4864 string=0x00000000003F4868 ""
 *   insn=0x00000000003F4874 string=0x00000000003F4878 "\t@"
 *   insn=0x00000000003F4884 string=0x00000000003F4888 ""
 *   insn=0x00000000003F4894 string=0x00000000003F4898 "@"
 *   insn=0x00000000003F48A0 string=0x00000000003F48A4 ""
 *   insn=0x00000000003F48B4 string=0x00000000003F48B8 "z"
 *   insn=0x00000000003F48C8 string=0x00000000003F48CC "`"
 *   insn=0x00000000003F48D0 string=0x00000000003F48D4 ")=G"
 *   insn=0x00000000003F48D4 string=0x00000000003F48D8 "!"
 *   insn=0x00000000003F48DC string=0x00000000003F48E0 "\t"
 *   insn=0x00000000003F48DC string=0x00000000003F48F4 "\t"
 *   insn=0x00000000003F48E0 string=0x00000000003F48E4 "*"
 *   insn=0x00000000003F48E4 string=0x00000000003F48E8 "\n"
 *   insn=0x00000000003F48F0 string=0x00000000003F4900 "?"
 *   insn=0x00000000003F48F4 string=0x00000000003F48F8 "*"
 *   insn=0x00000000003F48F8 string=0x00000000003F48FC "\n"
 *   insn=0x00000000003F4938 string=0x00000000003F493C ")=G"
 *   insn=0x00000000003F493C string=0x00000000003F4940 "!"
 *   insn=0x00000000003F4940 string=0x00000000003F4944 "i"
 *   insn=0x00000000003F4944 string=0x00000000003F4948 "\t"
 *   insn=0x00000000003F4944 string=0x00000000003F4AF0 "\t"
 *   insn=0x00000000003F4948 string=0x00000000003F494C "*"
 *   insn=0x00000000003F494C string=0x00000000003F4950 "\n"
 *   insn=0x00000000003F4954 string=0x00000000003F4958 "`"
 *   insn=0x00000000003F4958 string=0x00000000003F4AD8 "?"
 *   insn=0x00000000003F495C string=0x00000000003F4960 ")=G"
 *   insn=0x00000000003F4960 string=0x00000000003F4964 "!"
 *   insn=0x00000000003F4968 string=0x00000000003F496C "\t"
 *   insn=0x00000000003F4968 string=0x00000000003F4980 "\t"
 *   insn=0x00000000003F496C string=0x00000000003F4970 "*"
 *   insn=0x00000000003F4970 string=0x00000000003F4974 "\n"
 *   insn=0x00000000003F497C string=0x00000000003F498C "?"
 *   insn=0x00000000003F4980 string=0x00000000003F4984 "*"
 *   insn=0x00000000003F4984 string=0x00000000003F4988 "\n"
 *   insn=0x00000000003F49A0 string=0x00000000003F49A4 "4"
 *   insn=0x00000000003F49A8 string=0x00000000003F49AC ""
 *   insn=0x00000000003F49B8 string=0x00000000003F49BC "\t@"
 *   insn=0x00000000003F49C8 string=0x00000000003F49CC ""
 *   insn=0x00000000003F49D8 string=0x00000000003F49DC "@"
 *   insn=0x00000000003F49F0 string=0x00000000003F49F4 ""
 *   insn=0x00000000003F49F8 string=0x00000000003F49FC "!"
 *   insn=0x00000000003F4A00 string=0x00000000003F4A04 "\t@"
 *   insn=0x00000000003F4A10 string=0x00000000003F4A14 ""
 *   insn=0x00000000003F4A18 string=0x00000000003F4A1C "!"
 *   insn=0x00000000003F4A20 string=0x00000000003F4A24 "@"
 *   insn=0x00000000003F4A3C string=0x00000000003F4A40 "J"
 *   insn=0x00000000003F4A44 string=0x00000000003F4A48 "(a"
 *   insn=0x00000000003F4A54 string=0x00000000003F4A58 "J=G"
 *   insn=0x00000000003F4A58 string=0x00000000003F4A5C ")!"
 *   insn=0x00000000003F4A60 string=0x00000000003F4A64 "*"
 *   insn=0x00000000003F4A60 string=0x00000000003F4A78 "*"
 *   insn=0x00000000003F4A64 string=0x00000000003F4A68 "K"
 *   insn=0x00000000003F4A68 string=0x00000000003F4A6C "+"
 *   insn=0x00000000003F4A74 string=0x00000000003F4A84 "_"
 *   insn=0x00000000003F4A78 string=0x00000000003F4A7C "K"
 *   insn=0x00000000003F4A7C string=0x00000000003F4A80 "+"
 *   insn=0x00000000003F4A90 string=0x00000000003F4A94 "D"
 *   insn=0x00000000003F4AA4 string=0x00000000003F4AA8 ")"
 *   insn=0x00000000003F4AB8 string=0x00000000003F4ABC ")=G"
 *   insn=0x00000000003F4ABC string=0x00000000003F4AC0 "!"
 *   insn=0x00000000003F4AC0 string=0x00000000003F4AC4 "i"
 *   insn=0x00000000003F4AC4 string=0x00000000003F4AC8 "\t"
 *   insn=0x00000000003F4AC8 string=0x00000000003F4ACC "*"
 *   insn=0x00000000003F4ACC string=0x00000000003F4AD0 "\n"
 *   insn=0x00000000003F4AE0 string=0x00000000003F4AE4 "0"
 *   insn=0x00000000003F4AE8 string=0x00000000003F4AEC "v3"
 *   insn=0x00000000003F4AF0 string=0x00000000003F4AF4 "*"
 *   insn=0x00000000003F4AF4 string=0x00000000003F4AF8 "\n"
 *   insn=0x00000000003F4AF8 string=0x00000000003F4AFC "?"
 *   insn=0x00000000003F4AFC string=0x00000000003F4B00 ""
 *   insn=0x00000000003F4B0C string=0x00000000003F4B10 "m3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreViewController::RestoreCompletion(_QWORD *a1, const void ***a2, _QWORD *a3)
{
  const void **v5; // x25
  const void **v6; // x26
  const void **v7; // x22
  __int64 v8; // x8
  const void *v9; // x23
  __int64 v10; // x27
  unsigned __int64 v11; // x20
  unsigned __int64 v12; // x21
  size_t v13; // x24
  _QWORD *v14; // x0
  const void **v15; // x22
  __int64 v16; // x25
  __int64 v17; // x28
  unsigned __int64 v18; // x26
  __int64 v19; // x0
  const void *v20; // x23
  __int64 v21; // x20
  unsigned __int64 v22; // x21
  size_t v23; // x24
  _QWORD *v24; // x0
  char *v25; // x0
  Caver::GUIView *v26; // x1
  Caver::GUIAlertView *v27; // x21
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x8
  void *v34; // x0
  unsigned int *v35; // x8
  int v36; // w9
  char *v37; // x8
  Caver::GUIView *v38; // x1
  Caver::GUIAlertView *v39; // x21
  _QWORD *v40; // x20
  __int64 v41; // x8
  __int64 v42; // x8
  _QWORD *v43; // x19
  __int64 v44; // x8
  __int64 v45; // x8
  void *v46; // x0
  char *v47; // x0
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  const void ***v54; // [xsp+0h] [xbp-B0h]
  __int64 v56; // [xsp+18h] [xbp-98h]
  const void **v57; // [xsp+20h] [xbp-90h]
  char *v58; // [xsp+30h] [xbp-80h] BYREF
  Caver::GUIAlertView *v59; // [xsp+38h] [xbp-78h]
  _QWORD *v60; // [xsp+40h] [xbp-70h]
  __int64 v61; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v62[2]; // [xsp+50h] [xbp-60h] BYREF

  v62[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (const void **)a1[14];
  v5 = (const void **)a1[15];
  v56 = *(_QWORD *)(*a3 - 24LL);
  if ( v6 != v5 )
  {
    v7 = (const void **)a1[14];
    v8 = (char *)v5 - (char *)v6;
LABEL_3:
    v9 = *v7;
    v10 = 0;
    v11 = 0;
    v12 = v8 >> 3;
    v13 = *((_QWORD *)*v7 - 3);
    while ( 1 )
    {
      v14 = v6[v11];
      if ( *(v14 - 3) == v13 && !memcmp(v14, v9, v13) )
        break;
      ++v11;
      v10 += 16;
      if ( v12 <= v11 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1[11] + 320LL) + v10) )
      Caver::StoreViewController::UpdateProductBuyButton();
LABEL_11:
    while ( ++v7 != v5 )
    {
      v6 = (const void **)a1[14];
      v8 = a1[15] - (_QWORD)v6;
      if ( v8 )
        goto LABEL_3;
    }
  }
  v15 = *a2;
  v54 = a2;
  v57 = a2[1];
  if ( *a2 != v57 )
  {
    v17 = a1[14];
    v16 = a1[15];
    do
    {
      if ( v16 == v17 )
      {
        v16 = v17;
      }
      else
      {
        v18 = 0;
        do
        {
          if ( v16 != v17 )
          {
            v20 = *v15;
            v21 = 0;
            v22 = 0;
            v23 = *((_QWORD *)*v15 - 3);
            while ( 1 )
            {
              v24 = *(_QWORD **)(v17 + 8 * v22);
              if ( *(v24 - 3) == v23 && !memcmp(v24, v20, v23) )
                break;
              ++v22;
              v21 += 16;
              if ( (v16 - v17) >> 3 <= v22 )
                goto LABEL_25;
            }
            if ( *(_QWORD *)(*(_QWORD *)(a1[11] + 320LL) + v21) )
            {
              v19 = a1[10];
              if ( v19 )
              {
                (*(void (__fastcall **)(__int64, _QWORD *, const void **))(*(_QWORD *)v19 + 8LL))(v19, a1, v15);
                v17 = a1[14];
                v16 = a1[15];
              }
            }
          }
LABEL_25:
          ++v18;
        }
        while ( (v16 - v17) >> 3 > v18 );
      }
      ++v15;
    }
    while ( v15 != v57 );
  }
  if ( v56 )
  {
    if ( *(_QWORD *)(*a3 - 24LL) )
    {
      sub_566BB8((int)v62, "Ok");
      sub_566BB8((int)&v58, "OOPS");
      Caver::GameInterfaceBuilder::AlertView();
      v25 = v58 - 24;
      if ( v58 - 24 != (char *)&qword_6FD2E0 )
      {
        v48 = (unsigned int *)(v58 - 8);
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
        if ( v49 <= 0 )
          operator delete(v25);
      }
      v26 = (Caver::GUIView *)a1[3];
      v27 = v59;
      if ( !v26 )
      {
        (*(void (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
        v26 = (Caver::GUIView *)a1[3];
      }
      v28 = (_QWORD *)a1[4];
      if ( v28 )
        ++v28[1];
      Caver::GUIAlertView::PresentFromView(v27, v26);
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
      v31 = v60;
      if ( v60 )
      {
        v32 = v60[1] - 1LL;
        v60[1] = v32;
        if ( !v32 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
          v33 = v31[2] - 1LL;
          v31[2] = v33;
          if ( !v33 )
            (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
        }
      }
      v34 = (void *)(v62[0] - 24LL);
      if ( (__int64 *)(v62[0] - 24LL) != &qword_6FD2E0 )
      {
        v35 = (unsigned int *)(v62[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v36 = __ldaxr(v35);
          while ( __stlxr(v36 - 1, v35) );
          goto LABEL_75;
        }
LABEL_74:
        v36 = (*v35)--;
LABEL_75:
        if ( v36 <= 0 )
          operator delete(v34);
      }
    }
  }
  else
  {
    v37 = &byte_6FD2F8;
    v62[0] = &byte_6FD2F8;
    v58 = &byte_6FD2F8;
    if ( v54[1] != *v54 )
    {
      sub_56918C(v62, "SUCCESS", 7);
      sub_56918C(&v58, "Your purchases have been restored.", 34);
      v37 = (char *)v62[0];
    }
    if ( *((_QWORD *)v37 - 3) )
    {
      sub_566BB8((int)&v61, "Ok");
      Caver::GameInterfaceBuilder::AlertView();
      v38 = (Caver::GUIView *)a1[3];
      v39 = v59;
      if ( !v38 )
      {
        (*(void (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
        v38 = (Caver::GUIView *)a1[3];
      }
      v40 = (_QWORD *)a1[4];
      if ( v40 )
        ++v40[1];
      Caver::GUIAlertView::PresentFromView(v39, v38);
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
      v43 = v60;
      if ( v60 )
      {
        v44 = v60[1] - 1LL;
        v60[1] = v44;
        if ( !v44 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
          v45 = v43[2] - 1LL;
          v43[2] = v45;
          if ( !v45 )
            (*(void (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
        }
      }
      v46 = (void *)(v61 - 24);
      if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
      {
        v52 = (unsigned int *)(v61 - 8);
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
          operator delete(v46);
      }
    }
    v47 = v58 - 24;
    if ( v58 - 24 != (char *)&qword_6FD2E0 )
    {
      v50 = (unsigned int *)(v58 - 8);
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
        operator delete(v47);
    }
    v34 = (void *)(v62[0] - 24LL);
    if ( (__int64 *)(v62[0] - 24LL) != &qword_6FD2E0 )
    {
      v35 = (unsigned int *)(v62[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v36 = __ldaxr(v35);
        while ( __stlxr(v36 - 1, v35) );
        goto LABEL_75;
      }
      goto LABEL_74;
    }
  }
}

