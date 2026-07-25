/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C4414
 * Mangled: _ZN5Caver24SwingableWeaponComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FF960  Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FF960  Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 301
 *   insn=0x00000000002C442C string=0x00000000002C4430 "W"
 *   insn=0x00000000002C4440 string=0x00000000002C4444 "!"
 *   insn=0x00000000002C4440 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002C4444 string=0x000000000058A0C5 "baseLength"
 *   insn=0x00000000002C446C string=0x00000000002C4470 "."
 *   insn=0x00000000002C4474 string=0x00000000002C4478 ""
 *   insn=0x00000000002C4480 string=0x00000000002C4484 "t"
 *   insn=0x00000000002C4494 string=0x00000000002C4498 ""
 *   insn=0x00000000002C449C string=0x00000000002C44A0 """
 *   insn=0x00000000002C44A4 string=0x00000000002C44A8 "\t\t@"
 *   insn=0x00000000002C44AC string=0x00000000002C44B0 ""
 *   insn=0x00000000002C44B4 string=0x00000000002C44B8 "h"
 *   insn=0x00000000002C44B8 string=0x00000000002C44BC ""
 *   insn=0x00000000002C44BC string=0x00000000002C44C0 "h"
 *   insn=0x00000000002C44D4 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002C44EC string=0x00000000002C47E4 "\t!"
 *   insn=0x00000000002C44F8 string=0x00000000002C44FC "a"
 *   insn=0x00000000002C44FC string=0x00000000002C4500 "!"
 *   insn=0x00000000002C44FC string=0x00000000002C4808 "\t!"
 *   insn=0x00000000002C4500 string=0x000000000058A0D0 "glowLength"
 *   insn=0x00000000002C4534 string=0x00000000002C4538 "t"
 *   insn=0x00000000002C4548 string=0x00000000002C454C ""
 *   insn=0x00000000002C4554 string=0x00000000002C4558 "C"
 *   insn=0x00000000002C4558 string=0x00000000002C455C "\t\t@"
 *   insn=0x00000000002C4560 string=0x00000000002C4564 ""
 *   insn=0x00000000002C4568 string=0x00000000002C456C "h"
 *   insn=0x00000000002C456C string=0x00000000002C4570 ""
 *   insn=0x00000000002C4570 string=0x00000000002C4574 "h"
 *   insn=0x00000000002C4598 string=0x00000000002C482C "\t!"
 *   insn=0x00000000002C45A4 string=0x00000000002C45A8 "A"
 *   insn=0x00000000002C45A8 string=0x00000000002C45AC "!"
 *   insn=0x00000000002C45A8 string=0x00000000002C4850 "\t!"
 *   insn=0x00000000002C45AC string=0x000000000058A0DB "glowIntensity"
 *   insn=0x00000000002C45E0 string=0x00000000002C45E4 "t"
 *   insn=0x00000000002C45F4 string=0x00000000002C45F8 ""
 *   insn=0x00000000002C4600 string=0x00000000002C4604 "C"
 *   insn=0x00000000002C4604 string=0x00000000002C4608 "\t\t@"
 *   insn=0x00000000002C460C string=0x00000000002C4610 ""
 *   insn=0x00000000002C4614 string=0x00000000002C4618 "h"
 *   insn=0x00000000002C4618 string=0x00000000002C461C ""
 *   insn=0x00000000002C461C string=0x00000000002C4620 "h"
 *   insn=0x00000000002C4644 string=0x00000000002C4874 "\t!"
 *   insn=0x00000000002C4650 string=0x00000000002C4654 "!"
 *   insn=0x00000000002C4654 string=0x00000000002C4658 "!"
 *   insn=0x00000000002C4654 string=0x00000000002C4898 "\t!"
 *   insn=0x00000000002C4658 string=0x000000000058A0E9 "glowColor"
 *   insn=0x00000000002C4664 string=0x00000000002C4668 "T"
 *   insn=0x00000000002C4694 string=0x00000000002C4698 "t"
 *   insn=0x00000000002C46A8 string=0x00000000002C46AC ""
 *   insn=0x00000000002C46B4 string=0x00000000002C46B8 "C"
 *   insn=0x00000000002C46B8 string=0x00000000002C46BC "\t\t@"
 *   insn=0x00000000002C46C0 string=0x00000000002C46C4 ""
 *   insn=0x00000000002C46C8 string=0x00000000002C46CC "h"
 *   insn=0x00000000002C46CC string=0x00000000002C46D0 ""
 *   insn=0x00000000002C46D0 string=0x00000000002C46D4 "h"
 *   insn=0x00000000002C46E4 string=0x00000000002C46E8 "~"
 *   insn=0x00000000002C46F4 string=0x00000000002C46F8 "!"
 *   insn=0x00000000002C46F8 string=0x00000000002C48BC "\t!"
 *   insn=0x00000000002C4708 string=0x00000000002C470C "!"
 *   insn=0x00000000002C4708 string=0x00000000002C48E0 "\t!"
 *   insn=0x00000000002C470C string=0x000000000058A0F3 "width"
 *   insn=0x00000000002C4718 string=0x00000000002C471C "'"
 *   insn=0x00000000002C4734 string=0x00000000002C4738 "|"
 *   insn=0x00000000002C4740 string=0x00000000002C4744 "t"
 *   insn=0x00000000002C4754 string=0x00000000002C4758 ""
 *   insn=0x00000000002C475C string=0x00000000002C4760 "r"
 *   insn=0x00000000002C4760 string=0x00000000002C4764 "C"
 *   insn=0x00000000002C4764 string=0x00000000002C4768 "\t\t@"
 *   insn=0x00000000002C476C string=0x00000000002C4770 ""
 *   insn=0x00000000002C4774 string=0x00000000002C4778 "h"
 *   insn=0x00000000002C4778 string=0x00000000002C477C ""
 *   insn=0x00000000002C477C string=0x00000000002C4780 "h"
 *   insn=0x00000000002C4790 string=0x00000000002C4794 "S"
 *   insn=0x00000000002C47A4 string=0x00000000002C4904 "\t!"
 *   insn=0x00000000002C47B4 string=0x00000000002C4928 "\t!"
 *   insn=0x00000000002C47C0 string=0x00000000002C47C4 "A"
 *   insn=0x00000000002C47E4 string=0x00000000002C47E8 ")=G"
 *   insn=0x00000000002C47E8 string=0x00000000002C47EC "!"
 *   insn=0x00000000002C47F0 string=0x00000000002C47F4 "\t"
 *   insn=0x00000000002C47F0 string=0x00000000002C494C "\t"
 *   insn=0x00000000002C47F4 string=0x00000000002C47F8 "*"
 *   insn=0x00000000002C47F8 string=0x00000000002C47FC "\n"
 *   insn=0x00000000002C4800 string=0x00000000002C4804 "U"
 *   insn=0x00000000002C4804 string=0x00000000002C4958 "?"
 *   insn=0x00000000002C4808 string=0x00000000002C480C ")=G"
 *   insn=0x00000000002C480C string=0x00000000002C4810 "!"
 *   insn=0x00000000002C4814 string=0x00000000002C4818 "\t"
 *   insn=0x00000000002C4814 string=0x00000000002C496C "\t"
 *   insn=0x00000000002C4818 string=0x00000000002C481C "*"
 *   insn=0x00000000002C481C string=0x00000000002C4820 "\n"
 *   insn=0x00000000002C4824 string=0x00000000002C4828 "T"
 *   insn=0x00000000002C4828 string=0x00000000002C4978 "?"
 *   insn=0x00000000002C482C string=0x00000000002C4830 ")=G"
 *   insn=0x00000000002C4830 string=0x00000000002C4834 "!"
 *   insn=0x00000000002C4838 string=0x00000000002C483C "\t"
 *   insn=0x00000000002C4838 string=0x00000000002C498C "\t"
 *   insn=0x00000000002C483C string=0x00000000002C4840 "*"
 *   insn=0x00000000002C4840 string=0x00000000002C4844 "\n"
 *   insn=0x00000000002C4848 string=0x00000000002C484C "S"
 *   insn=0x00000000002C484C string=0x00000000002C4998 "?"
 *   insn=0x00000000002C4850 string=0x00000000002C4854 ")=G"
 *   insn=0x00000000002C4854 string=0x00000000002C4858 "!"
 *   insn=0x00000000002C485C string=0x00000000002C4860 "\t"
 *   insn=0x00000000002C485C string=0x00000000002C49AC "\t"
 *   insn=0x00000000002C4860 string=0x00000000002C4864 "*"
 *   insn=0x00000000002C4864 string=0x00000000002C4868 "\n"
 *   insn=0x00000000002C486C string=0x00000000002C4870 "R"
 *   insn=0x00000000002C4870 string=0x00000000002C49B8 "?"
 *   insn=0x00000000002C4874 string=0x00000000002C4878 ")=G"
 *   insn=0x00000000002C4878 string=0x00000000002C487C "!"
 *   insn=0x00000000002C487C string=0x00000000002C4880 "i\n"
 *   insn=0x00000000002C4880 string=0x00000000002C4884 "\t"
 *   insn=0x00000000002C4880 string=0x00000000002C49CC "\t"
 *   insn=0x00000000002C4884 string=0x00000000002C4888 "*"
 *   insn=0x00000000002C4888 string=0x00000000002C488C "\n"
 *   insn=0x00000000002C4890 string=0x00000000002C4894 "Q"
 *   insn=0x00000000002C4894 string=0x00000000002C49D8 "?"
 *   insn=0x00000000002C4898 string=0x00000000002C489C ")=G"
 *   insn=0x00000000002C489C string=0x00000000002C48A0 "!"
 *   insn=0x00000000002C48A0 string=0x00000000002C48A4 "I\n"
 *   insn=0x00000000002C48A4 string=0x00000000002C48A8 "\t"
 *   insn=0x00000000002C48A4 string=0x00000000002C49EC "\t"
 *   insn=0x00000000002C48A8 string=0x00000000002C48AC "*"
 *   insn=0x00000000002C48AC string=0x00000000002C48B0 "\n"
 *   insn=0x00000000002C48B4 string=0x00000000002C48B8 "P"
 *   insn=0x00000000002C48B8 string=0x00000000002C49F8 "?"
 *   insn=0x00000000002C48BC string=0x00000000002C48C0 ")=G"
 *   insn=0x00000000002C48C0 string=0x00000000002C48C4 "!"
 *   insn=0x00000000002C48C4 string=0x00000000002C48C8 ")\n"
 *   insn=0x00000000002C48C8 string=0x00000000002C48CC "\t"
 *   insn=0x00000000002C48C8 string=0x00000000002C4A0C "\t"
 *   insn=0x00000000002C48CC string=0x00000000002C48D0 "*"
 *   insn=0x00000000002C48D0 string=0x00000000002C48D4 "\n"
 *   insn=0x00000000002C48D8 string=0x00000000002C48DC "O"
 *   insn=0x00000000002C48DC string=0x00000000002C4A18 "?"
 *   insn=0x00000000002C48E0 string=0x00000000002C48E4 ")=G"
 *   insn=0x00000000002C48E4 string=0x00000000002C48E8 "!"
 *   insn=0x00000000002C48E8 string=0x00000000002C48EC "\t\n"
 *   insn=0x00000000002C48EC string=0x00000000002C48F0 "\t"
 *   insn=0x00000000002C48EC string=0x00000000002C4A2C "\t"
 *   insn=0x00000000002C48F0 string=0x00000000002C48F4 "*"
 *   insn=0x00000000002C48F4 string=0x00000000002C48F8 "\n"
 *   insn=0x00000000002C48FC string=0x00000000002C4900 "N"
 *   insn=0x00000000002C4900 string=0x00000000002C4A38 "?"
 *   insn=0x00000000002C4904 string=0x00000000002C4908 ")=G"
 *   insn=0x00000000002C4908 string=0x00000000002C490C "!"
 *   insn=0x00000000002C4910 string=0x00000000002C4914 "\t"
 *   insn=0x00000000002C4910 string=0x00000000002C4A4C "\t"
 *   insn=0x00000000002C4914 string=0x00000000002C4918 "*"
 *   insn=0x00000000002C4918 string=0x00000000002C491C "\n"
 *   insn=0x00000000002C4920 string=0x00000000002C4924 "M"
 *   insn=0x00000000002C4924 string=0x00000000002C4A58 "?"
 *   insn=0x00000000002C4928 string=0x00000000002C492C ")=G"
 *   insn=0x00000000002C492C string=0x00000000002C4930 "!"
 *   insn=0x00000000002C4934 string=0x00000000002C4938 "\t"
 *   insn=0x00000000002C4934 string=0x00000000002C4A6C "\t"
 *   insn=0x00000000002C4938 string=0x00000000002C493C "*"
 *   insn=0x00000000002C493C string=0x00000000002C4940 "\n"
 *   insn=0x00000000002C4944 string=0x00000000002C4948 "L"
 *   insn=0x00000000002C4948 string=0x00000000002C4A78 "?"
 *   insn=0x00000000002C494C string=0x00000000002C4950 "*"
 *   insn=0x00000000002C4950 string=0x00000000002C4954 "\n"
 *   insn=0x00000000002C496C string=0x00000000002C4970 "*"
 *   insn=0x00000000002C4970 string=0x00000000002C4974 "\n"
 *   insn=0x00000000002C4978 string=0x00000000002C497C ","
 *   insn=0x00000000002C498C string=0x00000000002C4990 "*"
 *   insn=0x00000000002C4990 string=0x00000000002C4994 "\n"
 *   insn=0x00000000002C49AC string=0x00000000002C49B0 "*"
 *   insn=0x00000000002C49B0 string=0x00000000002C49B4 "\n"
 *   insn=0x00000000002C49C0 string=0x00000000002C49C4 "x"
 *   insn=0x00000000002C49CC string=0x00000000002C49D0 "*"
 *   insn=0x00000000002C49D0 string=0x00000000002C49D4 "\n"
 *   insn=0x00000000002C49D8 string=0x00000000002C49DC "l"
 *   insn=0x00000000002C49E0 string=0x00000000002C49E4 "p"
 *   insn=0x00000000002C49EC string=0x00000000002C49F0 "*"
 *   insn=0x00000000002C49F0 string=0x00000000002C49F4 "\n"
 *   insn=0x00000000002C4A00 string=0x00000000002C4A04 "h"
 *   insn=0x00000000002C4A0C string=0x00000000002C4A10 "*"
 *   insn=0x00000000002C4A10 string=0x00000000002C4A14 "\n"
 *   insn=0x00000000002C4A20 string=0x00000000002C4A24 "`"
 *   insn=0x00000000002C4A24 string=0x00000000002C4A28 "5"
 *   insn=0x00000000002C4A2C string=0x00000000002C4A30 "*"
 *   insn=0x00000000002C4A30 string=0x00000000002C4A34 "\n"
 *   insn=0x00000000002C4A40 string=0x00000000002C4A44 "X"
 *   insn=0x00000000002C4A44 string=0x00000000002C4A48 "1"
 *   insn=0x00000000002C4A4C string=0x00000000002C4A50 "*"
 *   insn=0x00000000002C4A50 string=0x00000000002C4A54 "\n"
 *   insn=0x00000000002C4A58 string=0x00000000002C4A5C "l"
 *   insn=0x00000000002C4A60 string=0x00000000002C4A64 "P"
 *   insn=0x00000000002C4A64 string=0x00000000002C4A68 "P"
 *   insn=0x00000000002C4A6C string=0x00000000002C4A70 "*"
 *   insn=0x00000000002C4A70 string=0x00000000002C4A74 "\n"
 *   insn=0x00000000002C4A80 string=0x00000000002C4A84 "H"
 *   insn=0x00000000002C4A84 string=0x00000000002C4A88 "L"
 *   insn=0x00000000002C4A8C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C4A94 string=0x00000000002C4A98 "(a"
 *   insn=0x00000000002C4AA0 string=0x00000000002C4AA4 "\n!"
 *   insn=0x00000000002C4AA4 string=0x00000000002C4AA8 "J=G"
 *   insn=0x00000000002C4AA8 string=0x00000000002C4AAC ")!"
 *   insn=0x00000000002C4AB0 string=0x00000000002C4AB4 "*"
 *   insn=0x00000000002C4AB0 string=0x00000000002C4AC8 "*"
 *   insn=0x00000000002C4AB4 string=0x00000000002C4AB8 "K"
 *   insn=0x00000000002C4AB8 string=0x00000000002C4ABC "+"
 *   insn=0x00000000002C4AC4 string=0x00000000002C4AD4 "_"
 *   insn=0x00000000002C4AC8 string=0x00000000002C4ACC "K"
 *   insn=0x00000000002C4ACC string=0x00000000002C4AD0 "+"
 *   insn=0x00000000002C4AE0 string=0x00000000002C4AE4 "0"
 *   insn=0x00000000002C4AF8 string=0x00000000002C4AFC " "
 *   insn=0x00000000002C4AFC string=0x00000000002C4B00 "\t!"
 *   insn=0x00000000002C4B00 string=0x00000000002C4B04 ")=G"
 *   insn=0x00000000002C4B04 string=0x00000000002C4B08 "!"
 *   insn=0x00000000002C4B0C string=0x00000000002C4B10 "\t"
 *   insn=0x00000000002C4B0C string=0x00000000002C4DA8 "\t"
 *   insn=0x00000000002C4B10 string=0x00000000002C4B14 "*"
 *   insn=0x00000000002C4B14 string=0x00000000002C4B18 "\n"
 *   insn=0x00000000002C4B20 string=0x00000000002C4D90 "?"
 *   insn=0x00000000002C4B2C string=0x00000000002C4B30 "(a"
 *   insn=0x00000000002C4B38 string=0x00000000002C4B3C "\n!"
 *   insn=0x00000000002C4B3C string=0x00000000002C4B40 "J=G"
 *   insn=0x00000000002C4B40 string=0x00000000002C4B44 ")!"
 *   insn=0x00000000002C4B48 string=0x00000000002C4B4C "*"
 *   insn=0x00000000002C4B48 string=0x00000000002C4B60 "*"
 *   insn=0x00000000002C4B4C string=0x00000000002C4B50 "K"
 *   insn=0x00000000002C4B50 string=0x00000000002C4B54 "+"
 *   insn=0x00000000002C4B5C string=0x00000000002C4B6C "_"
 *   insn=0x00000000002C4B60 string=0x00000000002C4B64 "K"
 *   insn=0x00000000002C4B64 string=0x00000000002C4B68 "+"
 *   insn=0x00000000002C4B78 string=0x00000000002C4B7C "\n"
 *   insn=0x00000000002C4B90 string=0x00000000002C4B94 "`"
 *   insn=0x00000000002C4B94 string=0x00000000002C4B98 "\t!"
 *   insn=0x00000000002C4B98 string=0x00000000002C4B9C ")=G"
 *   insn=0x00000000002C4B9C string=0x00000000002C4BA0 "!"
 *   insn=0x00000000002C4BA0 string=0x00000000002C4BA4 ")"
 *   insn=0x00000000002C4BA4 string=0x00000000002C4BA8 "\t"
 *   insn=0x00000000002C4BA8 string=0x00000000002C4BAC "*"
 *   insn=0x00000000002C4BAC string=0x00000000002C4BB0 "\n"
 *   insn=0x00000000002C4BB4 string=0x00000000002C4BB8 "v"
 *   insn=0x00000000002C4BC4 string=0x00000000002C4BC8 "(a"
 *   insn=0x00000000002C4BD0 string=0x00000000002C4BD4 "\n!"
 *   insn=0x00000000002C4BD4 string=0x00000000002C4BD8 "J=G"
 *   insn=0x00000000002C4BD8 string=0x00000000002C4BDC ")!"
 *   insn=0x00000000002C4BE0 string=0x00000000002C4BE4 "*"
 *   insn=0x00000000002C4BE0 string=0x00000000002C4BF8 "*"
 *   insn=0x00000000002C4BE4 string=0x00000000002C4BE8 "K"
 *   insn=0x00000000002C4BE8 string=0x00000000002C4BEC "+"
 *   insn=0x00000000002C4BF4 string=0x00000000002C4C04 "_"
 *   insn=0x00000000002C4BF8 string=0x00000000002C4BFC "K"
 *   insn=0x00000000002C4BFC string=0x00000000002C4C00 "+"
 *   insn=0x00000000002C4C2C string=0x00000000002C4C30 "\t!"
 *   insn=0x00000000002C4C30 string=0x00000000002C4C34 ")=G"
 *   insn=0x00000000002C4C34 string=0x00000000002C4C38 "!"
 *   insn=0x00000000002C4C38 string=0x00000000002C4C3C "i"
 *   insn=0x00000000002C4C3C string=0x00000000002C4C40 "\t"
 *   insn=0x00000000002C4C40 string=0x00000000002C4C44 "*"
 *   insn=0x00000000002C4C44 string=0x00000000002C4C48 "\n"
 *   insn=0x00000000002C4C4C string=0x00000000002C4C50 "P"
 *   insn=0x00000000002C4C5C string=0x00000000002C4C60 "(a"
 *   insn=0x00000000002C4C68 string=0x00000000002C4C6C "\n!"
 *   insn=0x00000000002C4C6C string=0x00000000002C4C70 "J=G"
 *   insn=0x00000000002C4C70 string=0x00000000002C4C74 ")!"
 *   insn=0x00000000002C4C78 string=0x00000000002C4C7C "*"
 *   insn=0x00000000002C4C78 string=0x00000000002C4C90 "*"
 *   insn=0x00000000002C4C7C string=0x00000000002C4C80 "K"
 *   insn=0x00000000002C4C80 string=0x00000000002C4C84 "+"
 *   insn=0x00000000002C4C8C string=0x00000000002C4C9C "_"
 *   insn=0x00000000002C4C90 string=0x00000000002C4C94 "K"
 *   insn=0x00000000002C4C94 string=0x00000000002C4C98 "+"
 *   insn=0x00000000002C4CC4 string=0x00000000002C4CC8 "\t!"
 *   insn=0x00000000002C4CC8 string=0x00000000002C4CCC ")=G"
 *   insn=0x00000000002C4CCC string=0x00000000002C4CD0 "!"
 *   insn=0x00000000002C4CD4 string=0x00000000002C4CD8 "\t"
 *   insn=0x00000000002C4CD8 string=0x00000000002C4CDC "*"
 *   insn=0x00000000002C4CDC string=0x00000000002C4CE0 "\n"
 *   insn=0x00000000002C4CE4 string=0x00000000002C4CE8 "*"
 *   insn=0x00000000002C4CF0 string=0x00000000002C4CF4 "\n!"
 *   insn=0x00000000002C4CF4 string=0x00000000002C4CF8 "J"
 *   insn=0x00000000002C4CFC string=0x00000000002C4D00 "(a"
 *   insn=0x00000000002C4D08 string=0x00000000002C4D0C "\n!"
 *   insn=0x00000000002C4D0C string=0x00000000002C4D10 "J=G"
 *   insn=0x00000000002C4D10 string=0x00000000002C4D14 ")!"
 *   insn=0x00000000002C4D18 string=0x00000000002C4D1C "*"
 *   insn=0x00000000002C4D18 string=0x00000000002C4D30 "*"
 *   insn=0x00000000002C4D1C string=0x00000000002C4D20 "K"
 *   insn=0x00000000002C4D20 string=0x00000000002C4D24 "+"
 *   insn=0x00000000002C4D2C string=0x00000000002C4D3C "_"
 *   insn=0x00000000002C4D30 string=0x00000000002C4D34 "K"
 *   insn=0x00000000002C4D34 string=0x00000000002C4D38 "+"
 *   insn=0x00000000002C4D58 string=0x00000000002C4D5C "\t!"
 *   insn=0x00000000002C4D5C string=0x00000000002C4D60 ")"
 *   insn=0x00000000002C4D6C string=0x00000000002C4D70 "\t!"
 *   insn=0x00000000002C4D70 string=0x00000000002C4D74 ")=G"
 *   insn=0x00000000002C4D74 string=0x00000000002C4D78 "!"
 *   insn=0x00000000002C4D78 string=0x00000000002C4D7C "i"
 *   insn=0x00000000002C4D7C string=0x00000000002C4D80 "\t"
 *   insn=0x00000000002C4D80 string=0x00000000002C4D84 "*"
 *   insn=0x00000000002C4D84 string=0x00000000002C4D88 "\n"
 *   insn=0x00000000002C4D90 string=0x00000000002C4D94 "l"
 *   insn=0x00000000002C4DA8 string=0x00000000002C4DAC "*"
 *   insn=0x00000000002C4DAC string=0x00000000002C4DB0 "\n"
 *   insn=0x00000000002C4DB0 string=0x00000000002C4DB4 "?"
 *   insn=0x00000000002C4DB4 string=0x00000000002C4DB8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x20
  void *v13; // x0
  void *v14; // x0
  __int64 v15; // x20
  void *v16; // x0
  void *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  unsigned int *v26; // x8
  int v27; // w9
  unsigned int *v28; // x8
  int v29; // w9
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  __int64 v38; // [xsp+8h] [xbp-78h] BYREF
  int v39; // [xsp+18h] [xbp-68h]
  __int64 v40; // [xsp+20h] [xbp-60h] BYREF
  __int64 v41; // [xsp+28h] [xbp-58h]
  int v42; // [xsp+30h] [xbp-50h]
  __int64 v43; // [xsp+38h] [xbp-48h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v38, "baseLength");
  v39 = 2;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v39;
    sub_56A528(v3 + 8, &v40);
    *(_DWORD *)(v3 + 24) = v42;
    *(_QWORD *)(v3 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v40 - 8);
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
    if ( v19 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v38, "glowLength");
  v39 = 3;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v39;
    sub_56A528(v6 + 8, &v40);
    *(_DWORD *)(v6 + 24) = v42;
    *(_QWORD *)(v6 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v24 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v25 = __ldaxr(v24);
      while ( __stlxr(v25 - 1, v24) );
    }
    else
    {
      v25 = (*v24)--;
    }
    if ( v25 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v38, "glowIntensity");
  v39 = 4;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v39;
    sub_56A528(v9 + 8, &v40);
    *(_DWORD *)(v9 + 24) = v42;
    *(_QWORD *)(v9 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v26 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v27 = __ldaxr(v26);
      while ( __stlxr(v27 - 1, v26) );
    }
    else
    {
      v27 = (*v26)--;
    }
    if ( v27 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v28 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v29 = __ldaxr(v28);
      while ( __stlxr(v29 - 1, v28) );
    }
    else
    {
      v29 = (*v28)--;
    }
    if ( v29 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v38, "glowColor");
  v39 = 5;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x700000001LL;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v39;
    sub_56A528(v12 + 8, &v40);
    *(_DWORD *)(v12 + 24) = v42;
    *(_QWORD *)(v12 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = (*v30)--;
    }
    if ( v31 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v33 = __ldaxr(v32);
      while ( __stlxr(v33 - 1, v32) );
    }
    else
    {
      v33 = (*v32)--;
    }
    if ( v33 <= 0 )
      operator delete(v14);
  }
  sub_566BB8((int)&v38, "width");
  v39 = 6;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v39;
    sub_56A528(v15 + 8, &v40);
    *(_DWORD *)(v15 + 24) = v42;
    *(_QWORD *)(v15 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
    }
    else
    {
      v35 = (*v34)--;
    }
    if ( v35 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v17);
  }
}

