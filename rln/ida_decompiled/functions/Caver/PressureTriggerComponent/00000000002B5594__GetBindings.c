/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B5594
 * Mangled: _ZN5Caver24PressureTriggerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PressureTriggerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F55C0  Caver::PressureTriggerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002B54AC  Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F55C0  Caver::PressureTriggerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 249
 *   insn=0x00000000002B55AC string=0x00000000002B55B0 "W"
 *   insn=0x00000000002B55BC string=0x00000000002B55C0 "|"
 *   insn=0x00000000002B55C0 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002B55C4 string=0x0000000000589C68 "maxHeightOffset"
 *   insn=0x00000000002B55D0 string=0x00000000002B55D4 "y"
 *   insn=0x00000000002B55EC string=0x00000000002B55F0 "h"
 *   insn=0x00000000002B55FC string=0x00000000002B5600 "t"
 *   insn=0x00000000002B5610 string=0x00000000002B5614 ""
 *   insn=0x00000000002B5620 string=0x00000000002B5624 "\t\t@"
 *   insn=0x00000000002B5628 string=0x00000000002B562C ""
 *   insn=0x00000000002B5630 string=0x00000000002B5634 "h"
 *   insn=0x00000000002B5634 string=0x00000000002B5638 ""
 *   insn=0x00000000002B5638 string=0x00000000002B563C "h"
 *   insn=0x00000000002B5650 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002B5668 string=0x00000000002B58BC "i!"
 *   insn=0x00000000002B5674 string=0x00000000002B5678 "A"
 *   insn=0x00000000002B5678 string=0x00000000002B58E0 "i!"
 *   insn=0x00000000002B567C string=0x0000000000589C78 "stayPressed"
 *   insn=0x00000000002B5688 string=0x00000000002B568C "K"
 *   insn=0x00000000002B56A8 string=0x00000000002B56AC "h"
 *   insn=0x00000000002B56B8 string=0x00000000002B56BC "t"
 *   insn=0x00000000002B56CC string=0x00000000002B56D0 ""
 *   insn=0x00000000002B56D8 string=0x00000000002B56DC "C"
 *   insn=0x00000000002B56DC string=0x00000000002B56E0 "\t\t@"
 *   insn=0x00000000002B56E4 string=0x00000000002B56E8 ""
 *   insn=0x00000000002B56EC string=0x00000000002B56F0 "h"
 *   insn=0x00000000002B56F0 string=0x00000000002B56F4 ""
 *   insn=0x00000000002B56F4 string=0x00000000002B56F8 "h"
 *   insn=0x00000000002B5708 string=0x00000000002B570C "u"
 *   insn=0x00000000002B5718 string=0x00000000002B571C "A"
 *   insn=0x00000000002B571C string=0x00000000002B5904 "i!"
 *   insn=0x00000000002B572C string=0x00000000002B5928 "i!"
 *   insn=0x00000000002B5730 string=0x0000000000589C84 "onPress"
 *   insn=0x00000000002B5758 string=0x00000000002B575C "s"
 *   insn=0x00000000002B575C string=0x00000000002B5760 "h"
 *   insn=0x00000000002B5760 string=0x00000000002B5764 ""
 *   insn=0x00000000002B576C string=0x00000000002B5770 "t"
 *   insn=0x00000000002B5780 string=0x00000000002B5784 ""
 *   insn=0x00000000002B5788 string=0x00000000002B578C "g"
 *   insn=0x00000000002B578C string=0x00000000002B5790 "C"
 *   insn=0x00000000002B5790 string=0x00000000002B5794 "\t\t@"
 *   insn=0x00000000002B5798 string=0x00000000002B579C ""
 *   insn=0x00000000002B57A0 string=0x00000000002B57A4 "h"
 *   insn=0x00000000002B57A4 string=0x00000000002B57A8 ""
 *   insn=0x00000000002B57A8 string=0x00000000002B57AC "h"
 *   insn=0x00000000002B57BC string=0x00000000002B57C0 "H"
 *   insn=0x00000000002B57D0 string=0x00000000002B594C "i!"
 *   insn=0x00000000002B57E0 string=0x00000000002B5970 "i!"
 *   insn=0x00000000002B57E4 string=0x0000000000589C8C "onRelease"
 *   insn=0x00000000002B580C string=0x00000000002B5810 "F"
 *   insn=0x00000000002B5818 string=0x00000000002B581C "t"
 *   insn=0x00000000002B582C string=0x00000000002B5830 ""
 *   insn=0x00000000002B5834 string=0x00000000002B5838 "<"
 *   insn=0x00000000002B5838 string=0x00000000002B583C "C"
 *   insn=0x00000000002B583C string=0x00000000002B5840 "\t\t@"
 *   insn=0x00000000002B5844 string=0x00000000002B5848 ""
 *   insn=0x00000000002B584C string=0x00000000002B5850 "h"
 *   insn=0x00000000002B5850 string=0x00000000002B5854 ""
 *   insn=0x00000000002B5854 string=0x00000000002B5858 "h"
 *   insn=0x00000000002B587C string=0x00000000002B5994 "i!"
 *   insn=0x00000000002B5888 string=0x00000000002B588C "a\t"
 *   insn=0x00000000002B588C string=0x00000000002B59B8 "i!"
 *   insn=0x00000000002B58BC string=0x00000000002B58C0 ")=G"
 *   insn=0x00000000002B58C0 string=0x00000000002B58C4 "!"
 *   insn=0x00000000002B58C8 string=0x00000000002B58CC "\t"
 *   insn=0x00000000002B58C8 string=0x00000000002B59DC "\t"
 *   insn=0x00000000002B58CC string=0x00000000002B58D0 "*"
 *   insn=0x00000000002B58D0 string=0x00000000002B58D4 "\n"
 *   insn=0x00000000002B58D8 string=0x00000000002B58DC "C"
 *   insn=0x00000000002B58DC string=0x00000000002B59E8 "?"
 *   insn=0x00000000002B58E0 string=0x00000000002B58E4 ")=G"
 *   insn=0x00000000002B58E4 string=0x00000000002B58E8 "!"
 *   insn=0x00000000002B58EC string=0x00000000002B58F0 "\t"
 *   insn=0x00000000002B58EC string=0x00000000002B59FC "\t"
 *   insn=0x00000000002B58F0 string=0x00000000002B58F4 "*"
 *   insn=0x00000000002B58F4 string=0x00000000002B58F8 "\n"
 *   insn=0x00000000002B58FC string=0x00000000002B5900 "B"
 *   insn=0x00000000002B5900 string=0x00000000002B5A08 "?"
 *   insn=0x00000000002B5904 string=0x00000000002B5908 ")=G"
 *   insn=0x00000000002B5908 string=0x00000000002B590C "!"
 *   insn=0x00000000002B590C string=0x00000000002B5910 "i"
 *   insn=0x00000000002B5910 string=0x00000000002B5914 "\t"
 *   insn=0x00000000002B5910 string=0x00000000002B5A1C "\t"
 *   insn=0x00000000002B5914 string=0x00000000002B5918 "*"
 *   insn=0x00000000002B5918 string=0x00000000002B591C "\n"
 *   insn=0x00000000002B5920 string=0x00000000002B5924 "A"
 *   insn=0x00000000002B5924 string=0x00000000002B5A28 "?"
 *   insn=0x00000000002B5928 string=0x00000000002B592C ")=G"
 *   insn=0x00000000002B592C string=0x00000000002B5930 "!"
 *   insn=0x00000000002B5930 string=0x00000000002B5934 "I"
 *   insn=0x00000000002B5934 string=0x00000000002B5938 "\t"
 *   insn=0x00000000002B5934 string=0x00000000002B5A3C "\t"
 *   insn=0x00000000002B5938 string=0x00000000002B593C "*"
 *   insn=0x00000000002B593C string=0x00000000002B5940 "\n"
 *   insn=0x00000000002B5944 string=0x00000000002B5948 "@"
 *   insn=0x00000000002B5948 string=0x00000000002B5A48 "?"
 *   insn=0x00000000002B594C string=0x00000000002B5950 ")=G"
 *   insn=0x00000000002B5950 string=0x00000000002B5954 "!"
 *   insn=0x00000000002B5954 string=0x00000000002B5958 ")"
 *   insn=0x00000000002B5958 string=0x00000000002B595C "\t"
 *   insn=0x00000000002B5958 string=0x00000000002B5A5C "\t"
 *   insn=0x00000000002B595C string=0x00000000002B5960 "*"
 *   insn=0x00000000002B5960 string=0x00000000002B5964 "\n"
 *   insn=0x00000000002B5968 string=0x00000000002B596C "?"
 *   insn=0x00000000002B596C string=0x00000000002B5A68 "?"
 *   insn=0x00000000002B5970 string=0x00000000002B5974 ")=G"
 *   insn=0x00000000002B5974 string=0x00000000002B5978 "!"
 *   insn=0x00000000002B5978 string=0x00000000002B597C "\t"
 *   insn=0x00000000002B597C string=0x00000000002B5980 "\t"
 *   insn=0x00000000002B597C string=0x00000000002B5A7C "\t"
 *   insn=0x00000000002B5980 string=0x00000000002B5984 "*"
 *   insn=0x00000000002B5984 string=0x00000000002B5988 "\n"
 *   insn=0x00000000002B598C string=0x00000000002B5990 ">"
 *   insn=0x00000000002B5990 string=0x00000000002B5A88 "?"
 *   insn=0x00000000002B5994 string=0x00000000002B5998 ")=G"
 *   insn=0x00000000002B5998 string=0x00000000002B599C "!"
 *   insn=0x00000000002B59A0 string=0x00000000002B59A4 "\t"
 *   insn=0x00000000002B59A0 string=0x00000000002B5A9C "\t"
 *   insn=0x00000000002B59A4 string=0x00000000002B59A8 "*"
 *   insn=0x00000000002B59A8 string=0x00000000002B59AC "\n"
 *   insn=0x00000000002B59B0 string=0x00000000002B59B4 "="
 *   insn=0x00000000002B59B4 string=0x00000000002B5AA8 "?"
 *   insn=0x00000000002B59B8 string=0x00000000002B59BC ")=G"
 *   insn=0x00000000002B59BC string=0x00000000002B59C0 "!"
 *   insn=0x00000000002B59C4 string=0x00000000002B59C8 "\t"
 *   insn=0x00000000002B59C4 string=0x00000000002B5ABC "\t"
 *   insn=0x00000000002B59C8 string=0x00000000002B59CC "*"
 *   insn=0x00000000002B59CC string=0x00000000002B59D0 "\n"
 *   insn=0x00000000002B59D4 string=0x00000000002B59D8 "<"
 *   insn=0x00000000002B59D8 string=0x00000000002B5AC8 "?"
 *   insn=0x00000000002B59DC string=0x00000000002B59E0 "*"
 *   insn=0x00000000002B59E0 string=0x00000000002B59E4 "\n"
 *   insn=0x00000000002B59F0 string=0x00000000002B59F4 "l"
 *   insn=0x00000000002B59FC string=0x00000000002B5A00 "*"
 *   insn=0x00000000002B5A00 string=0x00000000002B5A04 "\n"
 *   insn=0x00000000002B5A10 string=0x00000000002B5A14 "d"
 *   insn=0x00000000002B5A1C string=0x00000000002B5A20 "*"
 *   insn=0x00000000002B5A20 string=0x00000000002B5A24 "\n"
 *   insn=0x00000000002B5A30 string=0x00000000002B5A34 "\"
 *   insn=0x00000000002B5A34 string=0x00000000002B5A38 ":"
 *   insn=0x00000000002B5A3C string=0x00000000002B5A40 "*"
 *   insn=0x00000000002B5A40 string=0x00000000002B5A44 "\n"
 *   insn=0x00000000002B5A48 string=0x00000000002B5A4C ","
 *   insn=0x00000000002B5A50 string=0x00000000002B5A54 "T"
 *   insn=0x00000000002B5A54 string=0x00000000002B5A58 "6"
 *   insn=0x00000000002B5A5C string=0x00000000002B5A60 "*"
 *   insn=0x00000000002B5A60 string=0x00000000002B5A64 "\n"
 *   insn=0x00000000002B5A68 string=0x00000000002B5A6C "L"
 *   insn=0x00000000002B5A70 string=0x00000000002B5A74 "L"
 *   insn=0x00000000002B5A74 string=0x00000000002B5A78 "W"
 *   insn=0x00000000002B5A7C string=0x00000000002B5A80 "*"
 *   insn=0x00000000002B5A80 string=0x00000000002B5A84 "\n"
 *   insn=0x00000000002B5A90 string=0x00000000002B5A94 "D"
 *   insn=0x00000000002B5A94 string=0x00000000002B5A98 "S"
 *   insn=0x00000000002B5A9C string=0x00000000002B5AA0 "*"
 *   insn=0x00000000002B5AA0 string=0x00000000002B5AA4 "\n"
 *   insn=0x00000000002B5AB0 string=0x00000000002B5AB4 "<"
 *   insn=0x00000000002B5AB4 string=0x00000000002B5AB8 "r"
 *   insn=0x00000000002B5ABC string=0x00000000002B5AC0 "*"
 *   insn=0x00000000002B5AC0 string=0x00000000002B5AC4 "\n"
 *   insn=0x00000000002B5AC8 string=0x00000000002B5ACC ","
 *   insn=0x00000000002B5AD0 string=0x00000000002B5AD4 "4"
 *   insn=0x00000000002B5AD4 string=0x00000000002B5AD8 "n"
 *   insn=0x00000000002B5ADC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B5AE4 string=0x00000000002B5AE8 "(a"
 *   insn=0x00000000002B5AF0 string=0x00000000002B5AF4 "j!"
 *   insn=0x00000000002B5AF4 string=0x00000000002B5AF8 "J=G"
 *   insn=0x00000000002B5AF8 string=0x00000000002B5AFC ")!"
 *   insn=0x00000000002B5B00 string=0x00000000002B5B04 "*"
 *   insn=0x00000000002B5B00 string=0x00000000002B5B18 "*"
 *   insn=0x00000000002B5B04 string=0x00000000002B5B08 "K"
 *   insn=0x00000000002B5B08 string=0x00000000002B5B0C "+"
 *   insn=0x00000000002B5B14 string=0x00000000002B5B24 "_"
 *   insn=0x00000000002B5B18 string=0x00000000002B5B1C "K"
 *   insn=0x00000000002B5B1C string=0x00000000002B5B20 "+"
 *   insn=0x00000000002B5B48 string=0x00000000002B5B4C "`"
 *   insn=0x00000000002B5B4C string=0x00000000002B5B50 "i!"
 *   insn=0x00000000002B5B50 string=0x00000000002B5B54 ")=G"
 *   insn=0x00000000002B5B54 string=0x00000000002B5B58 "!"
 *   insn=0x00000000002B5B58 string=0x00000000002B5B5C ")"
 *   insn=0x00000000002B5B5C string=0x00000000002B5B60 "\t"
 *   insn=0x00000000002B5B5C string=0x00000000002B5D60 "\t"
 *   insn=0x00000000002B5B60 string=0x00000000002B5B64 "*"
 *   insn=0x00000000002B5B64 string=0x00000000002B5B68 "\n"
 *   insn=0x00000000002B5B6C string=0x00000000002B5B70 "v"
 *   insn=0x00000000002B5B70 string=0x00000000002B5D48 "?"
 *   insn=0x00000000002B5B7C string=0x00000000002B5B80 "(a"
 *   insn=0x00000000002B5B88 string=0x00000000002B5B8C "j!"
 *   insn=0x00000000002B5B8C string=0x00000000002B5B90 "J=G"
 *   insn=0x00000000002B5B90 string=0x00000000002B5B94 ")!"
 *   insn=0x00000000002B5B98 string=0x00000000002B5B9C "*"
 *   insn=0x00000000002B5B98 string=0x00000000002B5BB0 "*"
 *   insn=0x00000000002B5B9C string=0x00000000002B5BA0 "K"
 *   insn=0x00000000002B5BA0 string=0x00000000002B5BA4 "+"
 *   insn=0x00000000002B5BAC string=0x00000000002B5BBC "_"
 *   insn=0x00000000002B5BB0 string=0x00000000002B5BB4 "K"
 *   insn=0x00000000002B5BB4 string=0x00000000002B5BB8 "+"
 *   insn=0x00000000002B5BE4 string=0x00000000002B5BE8 "i!"
 *   insn=0x00000000002B5BE8 string=0x00000000002B5BEC ")=G"
 *   insn=0x00000000002B5BEC string=0x00000000002B5BF0 "!"
 *   insn=0x00000000002B5BF0 string=0x00000000002B5BF4 "i"
 *   insn=0x00000000002B5BF4 string=0x00000000002B5BF8 "\t"
 *   insn=0x00000000002B5BF8 string=0x00000000002B5BFC "*"
 *   insn=0x00000000002B5BFC string=0x00000000002B5C00 "\n"
 *   insn=0x00000000002B5C04 string=0x00000000002B5C08 "P"
 *   insn=0x00000000002B5C14 string=0x00000000002B5C18 "(a"
 *   insn=0x00000000002B5C20 string=0x00000000002B5C24 "j!"
 *   insn=0x00000000002B5C24 string=0x00000000002B5C28 "J=G"
 *   insn=0x00000000002B5C28 string=0x00000000002B5C2C ")!"
 *   insn=0x00000000002B5C30 string=0x00000000002B5C34 "*"
 *   insn=0x00000000002B5C30 string=0x00000000002B5C48 "*"
 *   insn=0x00000000002B5C34 string=0x00000000002B5C38 "K"
 *   insn=0x00000000002B5C38 string=0x00000000002B5C3C "+"
 *   insn=0x00000000002B5C44 string=0x00000000002B5C54 "_"
 *   insn=0x00000000002B5C48 string=0x00000000002B5C4C "K"
 *   insn=0x00000000002B5C4C string=0x00000000002B5C50 "+"
 *   insn=0x00000000002B5C7C string=0x00000000002B5C80 "i!"
 *   insn=0x00000000002B5C80 string=0x00000000002B5C84 ")=G"
 *   insn=0x00000000002B5C84 string=0x00000000002B5C88 "!"
 *   insn=0x00000000002B5C8C string=0x00000000002B5C90 "\t"
 *   insn=0x00000000002B5C90 string=0x00000000002B5C94 "*"
 *   insn=0x00000000002B5C94 string=0x00000000002B5C98 "\n"
 *   insn=0x00000000002B5C9C string=0x00000000002B5CA0 "*"
 *   insn=0x00000000002B5CAC string=0x00000000002B5CB0 "J"
 *   insn=0x00000000002B5CB4 string=0x00000000002B5CB8 "(a"
 *   insn=0x00000000002B5CC0 string=0x00000000002B5CC4 "j!"
 *   insn=0x00000000002B5CC4 string=0x00000000002B5CC8 "J=G"
 *   insn=0x00000000002B5CC8 string=0x00000000002B5CCC ")!"
 *   insn=0x00000000002B5CD0 string=0x00000000002B5CD4 "*"
 *   insn=0x00000000002B5CD0 string=0x00000000002B5CE8 "*"
 *   insn=0x00000000002B5CD4 string=0x00000000002B5CD8 "K"
 *   insn=0x00000000002B5CD8 string=0x00000000002B5CDC "+"
 *   insn=0x00000000002B5CE4 string=0x00000000002B5CF4 "_"
 *   insn=0x00000000002B5CE8 string=0x00000000002B5CEC "K"
 *   insn=0x00000000002B5CEC string=0x00000000002B5CF0 "+"
 *   insn=0x00000000002B5D14 string=0x00000000002B5D18 ")"
 *   insn=0x00000000002B5D24 string=0x00000000002B5D28 "i!"
 *   insn=0x00000000002B5D28 string=0x00000000002B5D2C ")=G"
 *   insn=0x00000000002B5D2C string=0x00000000002B5D30 "!"
 *   insn=0x00000000002B5D30 string=0x00000000002B5D34 "i"
 *   insn=0x00000000002B5D34 string=0x00000000002B5D38 "\t"
 *   insn=0x00000000002B5D38 string=0x00000000002B5D3C "*"
 *   insn=0x00000000002B5D3C string=0x00000000002B5D40 "\n"
 *   insn=0x00000000002B5D48 string=0x00000000002B5D4C "l"
 *   insn=0x00000000002B5D60 string=0x00000000002B5D64 "*"
 *   insn=0x00000000002B5D64 string=0x00000000002B5D68 "\n"
 *   insn=0x00000000002B5D68 string=0x00000000002B5D6C "?"
 *   insn=0x00000000002B5D6C string=0x00000000002B5D70 ""
 *   insn=0x00000000002B5D80 string=0x00000000001F55C0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PressureTriggerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  __int64 v31; // [xsp+8h] [xbp-78h] BYREF
  int v32; // [xsp+18h] [xbp-68h]
  __int64 v33; // [xsp+20h] [xbp-60h] BYREF
  __int64 v34; // [xsp+28h] [xbp-58h]
  int v35; // [xsp+30h] [xbp-50h]
  __int64 v36; // [xsp+38h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v31, "maxHeightOffset");
  v32 = 0;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v32;
    sub_56A528(v3 + 8, &v33);
    *(_DWORD *)(v3 + 24) = v35;
    *(_QWORD *)(v3 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v31, "stayPressed");
  v32 = 1;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x400000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v32;
    sub_56A528(v6 + 8, &v33);
    *(_DWORD *)(v6 + 24) = v35;
    *(_QWORD *)(v6 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
    }
    else
    {
      v20 = (*v19)--;
    }
    if ( v20 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v31, "onPress");
  v32 = 2;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x600000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v32;
    sub_56A528(v9 + 8, &v33);
    *(_DWORD *)(v9 + 24) = v35;
    *(_QWORD *)(v9 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v31 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v31, "onRelease");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v34 = 0x600000001LL;
  v35 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v32;
    sub_56A528(v12 + 8, &v33);
    *(_DWORD *)(v12 + 24) = v35;
    *(_QWORD *)(v12 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v14);
  }
}

