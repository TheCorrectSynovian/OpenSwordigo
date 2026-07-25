/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002202CC
 * Mangled: _ZN5Caver26KeyframeAnimationComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FC290  Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FC290  Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 361
 *   insn=0x00000000002202E4 string=0x00000000002202E8 "W"
 *   insn=0x00000000002202F4 string=0x00000000002202F8 ".l"
 *   insn=0x00000000002202F8 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002202FC string=0x000000000059145F "name"
 *   insn=0x0000000000220308 string=0x000000000022030C "+"
 *   insn=0x0000000000220328 string=0x000000000022032C " "
 *   insn=0x0000000000220338 string=0x000000000022033C "t"
 *   insn=0x000000000022034C string=0x0000000000220350 ""
 *   insn=0x0000000000220354 string=0x0000000000220358 "t("
 *   insn=0x000000000022035C string=0x0000000000220360 "\t\t@"
 *   insn=0x0000000000220364 string=0x0000000000220368 ""
 *   insn=0x000000000022036C string=0x0000000000220370 "h"
 *   insn=0x0000000000220370 string=0x0000000000220374 ""
 *   insn=0x0000000000220374 string=0x0000000000220378 "h"
 *   insn=0x0000000000220388 string=0x000000000022038C "U]"
 *   insn=0x000000000022038C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000220390 string=0x0000000000220394 "6&"
 *   insn=0x00000000002203A4 string=0x0000000000220760 ")&"
 *   insn=0x00000000002203B4 string=0x0000000000220784 ")&"
 *   insn=0x00000000002203B8 string=0x0000000000583E44 "numFrames"
 *   insn=0x00000000002203E0 string=0x00000000002203E4 "Q("
 *   insn=0x00000000002203E4 string=0x00000000002203E8 ""
 *   insn=0x00000000002203F8 string=0x00000000002203FC "t"
 *   insn=0x000000000022040C string=0x0000000000220410 ""
 *   insn=0x0000000000220414 string=0x0000000000220418 "D("
 *   insn=0x0000000000220418 string=0x000000000022041C "C"
 *   insn=0x000000000022041C string=0x0000000000220420 "\t\t@"
 *   insn=0x0000000000220424 string=0x0000000000220428 ""
 *   insn=0x000000000022042C string=0x0000000000220430 "h"
 *   insn=0x0000000000220430 string=0x0000000000220434 ""
 *   insn=0x0000000000220434 string=0x0000000000220438 "h"
 *   insn=0x0000000000220448 string=0x000000000022044C "%]"
 *   insn=0x0000000000220458 string=0x000000000022045C "a"
 *   insn=0x000000000022045C string=0x00000000002207A8 ")&"
 *   insn=0x000000000022046C string=0x00000000002207CC ")&"
 *   insn=0x0000000000220470 string=0x0000000000583E4E "duration"
 *   insn=0x0000000000220498 string=0x000000000022049C "#("
 *   insn=0x000000000022049C string=0x00000000002204A0 ""
 *   insn=0x00000000002204A0 string=0x00000000002204A4 ""
 *   insn=0x00000000002204B0 string=0x00000000002204B4 "t"
 *   insn=0x00000000002204C4 string=0x00000000002204C8 ""
 *   insn=0x00000000002204D0 string=0x00000000002204D4 "C"
 *   insn=0x00000000002204D4 string=0x00000000002204D8 "\t\t@"
 *   insn=0x00000000002204DC string=0x00000000002204E0 ""
 *   insn=0x00000000002204E4 string=0x00000000002204E8 "h"
 *   insn=0x00000000002204E8 string=0x00000000002204EC ""
 *   insn=0x00000000002204EC string=0x00000000002204F0 "h"
 *   insn=0x0000000000220514 string=0x00000000002207F0 ")&"
 *   insn=0x0000000000220524 string=0x0000000000220814 ")&"
 *   insn=0x0000000000220528 string=0x0000000000583E57 "repeating"
 *   insn=0x000000000022053C string=0x0000000000220540 ""
 *   insn=0x0000000000220554 string=0x0000000000220558 ""
 *   insn=0x0000000000220558 string=0x000000000022055C "\t"
 *   insn=0x0000000000220564 string=0x0000000000220568 "t"
 *   insn=0x0000000000220578 string=0x000000000022057C ""
 *   insn=0x0000000000220584 string=0x0000000000220588 "C"
 *   insn=0x0000000000220588 string=0x000000000022058C "\t\t@"
 *   insn=0x0000000000220590 string=0x0000000000220594 ""
 *   insn=0x0000000000220598 string=0x000000000022059C "h"
 *   insn=0x000000000022059C string=0x00000000002205A0 ""
 *   insn=0x00000000002205A0 string=0x00000000002205A4 "h"
 *   insn=0x00000000002205C8 string=0x0000000000220838 ")&"
 *   insn=0x00000000002205D4 string=0x00000000002205D8 "!"
 *   insn=0x00000000002205D8 string=0x000000000022085C ")&"
 *   insn=0x00000000002205DC string=0x0000000000583E61 "running"
 *   insn=0x00000000002205E8 string=0x00000000002205EC "s"
 *   insn=0x00000000002205F0 string=0x00000000002205F4 "("
 *   insn=0x0000000000220610 string=0x0000000000220614 "t"
 *   insn=0x0000000000220624 string=0x0000000000220628 ""
 *   insn=0x0000000000220630 string=0x0000000000220634 "C"
 *   insn=0x0000000000220634 string=0x0000000000220638 "\t\t@"
 *   insn=0x000000000022063C string=0x0000000000220640 ""
 *   insn=0x0000000000220644 string=0x0000000000220648 "h"
 *   insn=0x0000000000220648 string=0x000000000022064C ""
 *   insn=0x000000000022064C string=0x0000000000220650 "h"
 *   insn=0x0000000000220670 string=0x0000000000220674 "a"
 *   insn=0x0000000000220674 string=0x0000000000220880 ")&"
 *   insn=0x0000000000220684 string=0x00000000002208A4 ")&"
 *   insn=0x0000000000220688 string=0x0000000000583E69 "speedMultiplier"
 *   insn=0x0000000000220694 string=0x0000000000220698 "H"
 *   insn=0x000000000022069C string=0x00000000002206A0 "H"
 *   insn=0x00000000002206BC string=0x00000000002206C0 "t"
 *   insn=0x00000000002206D0 string=0x00000000002206D4 ""
 *   insn=0x00000000002206DC string=0x00000000002206E0 "C"
 *   insn=0x00000000002206E0 string=0x00000000002206E4 "\t\t@"
 *   insn=0x00000000002206E8 string=0x00000000002206EC ""
 *   insn=0x00000000002206F0 string=0x00000000002206F4 "h"
 *   insn=0x00000000002206F4 string=0x00000000002206F8 ""
 *   insn=0x00000000002206F8 string=0x00000000002206FC "h"
 *   insn=0x000000000022070C string=0x0000000000220710 "t\"
 *   insn=0x000000000022071C string=0x0000000000220720 "A"
 *   insn=0x0000000000220720 string=0x00000000002208C8 ")&"
 *   insn=0x0000000000220730 string=0x00000000002208EC ")&"
 *   insn=0x0000000000220760 string=0x0000000000220764 ")=G"
 *   insn=0x0000000000220764 string=0x0000000000220768 "!"
 *   insn=0x0000000000220768 string=0x000000000022076C ")"
 *   insn=0x000000000022076C string=0x0000000000220770 "\t"
 *   insn=0x000000000022076C string=0x0000000000220910 "\t"
 *   insn=0x0000000000220770 string=0x0000000000220774 "*"
 *   insn=0x0000000000220774 string=0x0000000000220778 "\n"
 *   insn=0x000000000022077C string=0x0000000000220780 "g"
 *   insn=0x0000000000220780 string=0x000000000022091C "?"
 *   insn=0x0000000000220784 string=0x0000000000220788 ")=G"
 *   insn=0x0000000000220788 string=0x000000000022078C "!"
 *   insn=0x000000000022078C string=0x0000000000220790 "\t"
 *   insn=0x0000000000220790 string=0x0000000000220794 "\t"
 *   insn=0x0000000000220790 string=0x0000000000220930 "\t"
 *   insn=0x0000000000220794 string=0x0000000000220798 "*"
 *   insn=0x0000000000220798 string=0x000000000022079C "\n"
 *   insn=0x00000000002207A0 string=0x00000000002207A4 "f"
 *   insn=0x00000000002207A4 string=0x000000000022093C "?"
 *   insn=0x00000000002207A8 string=0x00000000002207AC ")=G"
 *   insn=0x00000000002207AC string=0x00000000002207B0 "!"
 *   insn=0x00000000002207B4 string=0x00000000002207B8 "\t"
 *   insn=0x00000000002207B4 string=0x0000000000220950 "\t"
 *   insn=0x00000000002207B8 string=0x00000000002207BC "*"
 *   insn=0x00000000002207BC string=0x00000000002207C0 "\n"
 *   insn=0x00000000002207C4 string=0x00000000002207C8 "e"
 *   insn=0x00000000002207C8 string=0x000000000022095C "?"
 *   insn=0x00000000002207CC string=0x00000000002207D0 ")=G"
 *   insn=0x00000000002207D0 string=0x00000000002207D4 "!"
 *   insn=0x00000000002207D8 string=0x00000000002207DC "\t"
 *   insn=0x00000000002207D8 string=0x0000000000220970 "\t"
 *   insn=0x00000000002207DC string=0x00000000002207E0 "*"
 *   insn=0x00000000002207E0 string=0x00000000002207E4 "\n"
 *   insn=0x00000000002207E8 string=0x00000000002207EC "d"
 *   insn=0x00000000002207EC string=0x000000000022097C "?"
 *   insn=0x00000000002207F0 string=0x00000000002207F4 ")=G"
 *   insn=0x00000000002207F4 string=0x00000000002207F8 "!"
 *   insn=0x00000000002207FC string=0x0000000000220800 "\t"
 *   insn=0x00000000002207FC string=0x0000000000220990 "\t"
 *   insn=0x0000000000220800 string=0x0000000000220804 "*"
 *   insn=0x0000000000220804 string=0x0000000000220808 "\n"
 *   insn=0x000000000022080C string=0x0000000000220810 "c"
 *   insn=0x0000000000220810 string=0x000000000022099C "?"
 *   insn=0x0000000000220814 string=0x0000000000220818 ")=G"
 *   insn=0x0000000000220818 string=0x000000000022081C "!"
 *   insn=0x0000000000220820 string=0x0000000000220824 "\t"
 *   insn=0x0000000000220820 string=0x00000000002209B0 "\t"
 *   insn=0x0000000000220824 string=0x0000000000220828 "*"
 *   insn=0x0000000000220828 string=0x000000000022082C "\n"
 *   insn=0x0000000000220830 string=0x0000000000220834 "b"
 *   insn=0x0000000000220834 string=0x00000000002209BC "?"
 *   insn=0x0000000000220838 string=0x000000000022083C ")=G"
 *   insn=0x000000000022083C string=0x0000000000220840 "!"
 *   insn=0x0000000000220840 string=0x0000000000220844 "i"
 *   insn=0x0000000000220844 string=0x0000000000220848 "\t"
 *   insn=0x0000000000220844 string=0x00000000002209D0 "\t"
 *   insn=0x0000000000220848 string=0x000000000022084C "*"
 *   insn=0x000000000022084C string=0x0000000000220850 "\n"
 *   insn=0x0000000000220854 string=0x0000000000220858 "a"
 *   insn=0x0000000000220858 string=0x00000000002209DC "?"
 *   insn=0x000000000022085C string=0x0000000000220860 ")=G"
 *   insn=0x0000000000220860 string=0x0000000000220864 "!"
 *   insn=0x0000000000220864 string=0x0000000000220868 "I"
 *   insn=0x0000000000220868 string=0x000000000022086C "\t"
 *   insn=0x0000000000220868 string=0x00000000002209F0 "\t"
 *   insn=0x000000000022086C string=0x0000000000220870 "*"
 *   insn=0x0000000000220870 string=0x0000000000220874 "\n"
 *   insn=0x0000000000220878 string=0x000000000022087C "`"
 *   insn=0x000000000022087C string=0x00000000002209FC "?"
 *   insn=0x0000000000220880 string=0x0000000000220884 ")=G"
 *   insn=0x0000000000220884 string=0x0000000000220888 "!"
 *   insn=0x0000000000220888 string=0x000000000022088C ")"
 *   insn=0x000000000022088C string=0x0000000000220890 "\t"
 *   insn=0x000000000022088C string=0x0000000000220A10 "\t"
 *   insn=0x0000000000220890 string=0x0000000000220894 "*"
 *   insn=0x0000000000220894 string=0x0000000000220898 "\n"
 *   insn=0x000000000022089C string=0x00000000002208A0 "_"
 *   insn=0x00000000002208A0 string=0x0000000000220A1C "?"
 *   insn=0x00000000002208A4 string=0x00000000002208A8 ")=G"
 *   insn=0x00000000002208A8 string=0x00000000002208AC "!"
 *   insn=0x00000000002208AC string=0x00000000002208B0 "\t"
 *   insn=0x00000000002208B0 string=0x00000000002208B4 "\t"
 *   insn=0x00000000002208B0 string=0x0000000000220A30 "\t"
 *   insn=0x00000000002208B4 string=0x00000000002208B8 "*"
 *   insn=0x00000000002208B8 string=0x00000000002208BC "\n"
 *   insn=0x00000000002208C0 string=0x00000000002208C4 "^"
 *   insn=0x00000000002208C4 string=0x0000000000220A3C "?"
 *   insn=0x00000000002208C8 string=0x00000000002208CC ")=G"
 *   insn=0x00000000002208CC string=0x00000000002208D0 "!"
 *   insn=0x00000000002208D4 string=0x00000000002208D8 "\t"
 *   insn=0x00000000002208D4 string=0x0000000000220A50 "\t"
 *   insn=0x00000000002208D8 string=0x00000000002208DC "*"
 *   insn=0x00000000002208DC string=0x00000000002208E0 "\n"
 *   insn=0x00000000002208E4 string=0x00000000002208E8 "]"
 *   insn=0x00000000002208E8 string=0x0000000000220A5C "?"
 *   insn=0x00000000002208EC string=0x00000000002208F0 ")=G"
 *   insn=0x00000000002208F0 string=0x00000000002208F4 "!"
 *   insn=0x00000000002208F8 string=0x00000000002208FC "\t"
 *   insn=0x00000000002208F8 string=0x0000000000220A70 "\t"
 *   insn=0x00000000002208FC string=0x0000000000220900 "*"
 *   insn=0x0000000000220900 string=0x0000000000220904 "\n"
 *   insn=0x0000000000220908 string=0x000000000022090C "\"
 *   insn=0x000000000022090C string=0x0000000000220A7C "?"
 *   insn=0x0000000000220910 string=0x0000000000220914 "*"
 *   insn=0x0000000000220914 string=0x0000000000220918 "\n"
 *   insn=0x000000000022091C string=0x0000000000220920 "L"
 *   insn=0x0000000000220930 string=0x0000000000220934 "*"
 *   insn=0x0000000000220934 string=0x0000000000220938 "\n"
 *   insn=0x0000000000220950 string=0x0000000000220954 "*"
 *   insn=0x0000000000220954 string=0x0000000000220958 "\n"
 *   insn=0x0000000000220970 string=0x0000000000220974 "*"
 *   insn=0x0000000000220974 string=0x0000000000220978 "\n"
 *   insn=0x0000000000220990 string=0x0000000000220994 "*"
 *   insn=0x0000000000220994 string=0x0000000000220998 "\n"
 *   insn=0x00000000002209B0 string=0x00000000002209B4 "*"
 *   insn=0x00000000002209B4 string=0x00000000002209B8 "\n"
 *   insn=0x00000000002209BC string=0x00000000002209C0 "L"
 *   insn=0x00000000002209C4 string=0x00000000002209C8 "w&"
 *   insn=0x00000000002209D0 string=0x00000000002209D4 "*"
 *   insn=0x00000000002209D4 string=0x00000000002209D8 "\n"
 *   insn=0x00000000002209DC string=0x00000000002209E0 "l"
 *   insn=0x00000000002209E4 string=0x00000000002209E8 "o&"
 *   insn=0x00000000002209F0 string=0x00000000002209F4 "*"
 *   insn=0x00000000002209F4 string=0x00000000002209F8 "\n"
 *   insn=0x0000000000220A04 string=0x0000000000220A08 "g&"
 *   insn=0x0000000000220A10 string=0x0000000000220A14 "*"
 *   insn=0x0000000000220A14 string=0x0000000000220A18 "\n"
 *   insn=0x0000000000220A24 string=0x0000000000220A28 "_&"
 *   insn=0x0000000000220A30 string=0x0000000000220A34 "*"
 *   insn=0x0000000000220A34 string=0x0000000000220A38 "\n"
 *   insn=0x0000000000220A3C string=0x0000000000220A40 "L"
 *   insn=0x0000000000220A44 string=0x0000000000220A48 "W&"
 *   insn=0x0000000000220A50 string=0x0000000000220A54 "*"
 *   insn=0x0000000000220A54 string=0x0000000000220A58 "\n"
 *   insn=0x0000000000220A5C string=0x0000000000220A60 ","
 *   insn=0x0000000000220A64 string=0x0000000000220A68 "O&"
 *   insn=0x0000000000220A68 string=0x0000000000220A6C "."
 *   insn=0x0000000000220A70 string=0x0000000000220A74 "*"
 *   insn=0x0000000000220A74 string=0x0000000000220A78 "\n"
 *   insn=0x0000000000220A84 string=0x0000000000220A88 "G&"
 *   insn=0x0000000000220A88 string=0x0000000000220A8C "*"
 *   insn=0x0000000000220A90 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000220A98 string=0x0000000000220A9C "(a"
 *   insn=0x0000000000220AA4 string=0x0000000000220AA8 "*&"
 *   insn=0x0000000000220AA8 string=0x0000000000220AAC "J=G"
 *   insn=0x0000000000220AAC string=0x0000000000220AB0 ")!"
 *   insn=0x0000000000220AB4 string=0x0000000000220AB8 "*"
 *   insn=0x0000000000220AB4 string=0x0000000000220ACC "*"
 *   insn=0x0000000000220AB8 string=0x0000000000220ABC "K"
 *   insn=0x0000000000220ABC string=0x0000000000220AC0 "+"
 *   insn=0x0000000000220AC8 string=0x0000000000220AD8 "_"
 *   insn=0x0000000000220ACC string=0x0000000000220AD0 "K"
 *   insn=0x0000000000220AD0 string=0x0000000000220AD4 "+"
 *   insn=0x0000000000220AE4 string=0x0000000000220AE8 "/&"
 *   insn=0x0000000000220B00 string=0x0000000000220B04 ")&"
 *   insn=0x0000000000220B04 string=0x0000000000220B08 ")=G"
 *   insn=0x0000000000220B08 string=0x0000000000220B0C "!"
 *   insn=0x0000000000220B10 string=0x0000000000220B14 "\t"
 *   insn=0x0000000000220B10 string=0x0000000000220E44 "\t"
 *   insn=0x0000000000220B14 string=0x0000000000220B18 "*"
 *   insn=0x0000000000220B18 string=0x0000000000220B1C "\n"
 *   insn=0x0000000000220B24 string=0x0000000000220E2C "?"
 *   insn=0x0000000000220B30 string=0x0000000000220B34 "(a"
 *   insn=0x0000000000220B3C string=0x0000000000220B40 "*&"
 *   insn=0x0000000000220B40 string=0x0000000000220B44 "J=G"
 *   insn=0x0000000000220B44 string=0x0000000000220B48 ")!"
 *   insn=0x0000000000220B4C string=0x0000000000220B50 "*"
 *   insn=0x0000000000220B4C string=0x0000000000220B64 "*"
 *   insn=0x0000000000220B50 string=0x0000000000220B54 "K"
 *   insn=0x0000000000220B54 string=0x0000000000220B58 "+"
 *   insn=0x0000000000220B60 string=0x0000000000220B70 "_"
 *   insn=0x0000000000220B64 string=0x0000000000220B68 "K"
 *   insn=0x0000000000220B68 string=0x0000000000220B6C "+"
 *   insn=0x0000000000220B7C string=0x0000000000220B80 "\t&"
 *   insn=0x0000000000220B94 string=0x0000000000220B98 " "
 *   insn=0x0000000000220B98 string=0x0000000000220B9C ")&"
 *   insn=0x0000000000220B9C string=0x0000000000220BA0 ")=G"
 *   insn=0x0000000000220BA0 string=0x0000000000220BA4 "!"
 *   insn=0x0000000000220BA8 string=0x0000000000220BAC "\t"
 *   insn=0x0000000000220BAC string=0x0000000000220BB0 "*"
 *   insn=0x0000000000220BB0 string=0x0000000000220BB4 "\n"
 *   insn=0x0000000000220BC8 string=0x0000000000220BCC "(a"
 *   insn=0x0000000000220BD4 string=0x0000000000220BD8 "*&"
 *   insn=0x0000000000220BD8 string=0x0000000000220BDC "J=G"
 *   insn=0x0000000000220BDC string=0x0000000000220BE0 ")!"
 *   insn=0x0000000000220BE4 string=0x0000000000220BE8 "*"
 *   insn=0x0000000000220BE4 string=0x0000000000220BFC "*"
 *   insn=0x0000000000220BE8 string=0x0000000000220BEC "K"
 *   insn=0x0000000000220BEC string=0x0000000000220BF0 "+"
 *   insn=0x0000000000220BF8 string=0x0000000000220C08 "_"
 *   insn=0x0000000000220BFC string=0x0000000000220C00 "K"
 *   insn=0x0000000000220C00 string=0x0000000000220C04 "+"
 *   insn=0x0000000000220C2C string=0x0000000000220C30 "`"
 *   insn=0x0000000000220C30 string=0x0000000000220C34 ")&"
 *   insn=0x0000000000220C34 string=0x0000000000220C38 ")=G"
 *   insn=0x0000000000220C38 string=0x0000000000220C3C "!"
 *   insn=0x0000000000220C3C string=0x0000000000220C40 ")"
 *   insn=0x0000000000220C40 string=0x0000000000220C44 "\t"
 *   insn=0x0000000000220C44 string=0x0000000000220C48 "*"
 *   insn=0x0000000000220C48 string=0x0000000000220C4C "\n"
 *   insn=0x0000000000220C50 string=0x0000000000220C54 "v"
 *   insn=0x0000000000220C60 string=0x0000000000220C64 "(a"
 *   insn=0x0000000000220C6C string=0x0000000000220C70 "*&"
 *   insn=0x0000000000220C70 string=0x0000000000220C74 "J=G"
 *   insn=0x0000000000220C74 string=0x0000000000220C78 ")!"
 *   insn=0x0000000000220C7C string=0x0000000000220C80 "*"
 *   insn=0x0000000000220C7C string=0x0000000000220C94 "*"
 *   insn=0x0000000000220C80 string=0x0000000000220C84 "K"
 *   insn=0x0000000000220C84 string=0x0000000000220C88 "+"
 *   insn=0x0000000000220C90 string=0x0000000000220CA0 "_"
 *   insn=0x0000000000220C94 string=0x0000000000220C98 "K"
 *   insn=0x0000000000220C98 string=0x0000000000220C9C "+"
 *   insn=0x0000000000220CC8 string=0x0000000000220CCC ")&"
 *   insn=0x0000000000220CCC string=0x0000000000220CD0 ")=G"
 *   insn=0x0000000000220CD0 string=0x0000000000220CD4 "!"
 *   insn=0x0000000000220CD4 string=0x0000000000220CD8 "i"
 *   insn=0x0000000000220CD8 string=0x0000000000220CDC "\t"
 *   insn=0x0000000000220CDC string=0x0000000000220CE0 "*"
 *   insn=0x0000000000220CE0 string=0x0000000000220CE4 "\n"
 *   insn=0x0000000000220CE8 string=0x0000000000220CEC "P"
 *   insn=0x0000000000220CF8 string=0x0000000000220CFC "(a"
 *   insn=0x0000000000220D04 string=0x0000000000220D08 "*&"
 *   insn=0x0000000000220D08 string=0x0000000000220D0C "J=G"
 *   insn=0x0000000000220D0C string=0x0000000000220D10 ")!"
 *   insn=0x0000000000220D14 string=0x0000000000220D18 "*"
 *   insn=0x0000000000220D14 string=0x0000000000220D2C "*"
 *   insn=0x0000000000220D18 string=0x0000000000220D1C "K"
 *   insn=0x0000000000220D1C string=0x0000000000220D20 "+"
 *   insn=0x0000000000220D28 string=0x0000000000220D38 "_"
 *   insn=0x0000000000220D2C string=0x0000000000220D30 "K"
 *   insn=0x0000000000220D30 string=0x0000000000220D34 "+"
 *   insn=0x0000000000220D60 string=0x0000000000220D64 ")&"
 *   insn=0x0000000000220D64 string=0x0000000000220D68 ")=G"
 *   insn=0x0000000000220D68 string=0x0000000000220D6C "!"
 *   insn=0x0000000000220D70 string=0x0000000000220D74 "\t"
 *   insn=0x0000000000220D74 string=0x0000000000220D78 "*"
 *   insn=0x0000000000220D78 string=0x0000000000220D7C "\n"
 *   insn=0x0000000000220D80 string=0x0000000000220D84 "*"
 *   insn=0x0000000000220D8C string=0x0000000000220D90 "*&"
 *   insn=0x0000000000220D90 string=0x0000000000220D94 "J"
 *   insn=0x0000000000220D98 string=0x0000000000220D9C "(a"
 *   insn=0x0000000000220DA4 string=0x0000000000220DA8 "*&"
 *   insn=0x0000000000220DA8 string=0x0000000000220DAC "J=G"
 *   insn=0x0000000000220DAC string=0x0000000000220DB0 ")!"
 *   insn=0x0000000000220DB4 string=0x0000000000220DB8 "*"
 *   insn=0x0000000000220DB4 string=0x0000000000220DCC "*"
 *   insn=0x0000000000220DB8 string=0x0000000000220DBC "K"
 *   insn=0x0000000000220DBC string=0x0000000000220DC0 "+"
 *   insn=0x0000000000220DC8 string=0x0000000000220DD8 "_"
 *   insn=0x0000000000220DCC string=0x0000000000220DD0 "K"
 *   insn=0x0000000000220DD0 string=0x0000000000220DD4 "+"
 *   insn=0x0000000000220DE4 string=0x0000000000220DE8 "o%"
 *   insn=0x0000000000220DF4 string=0x0000000000220DF8 ")&"
 *   insn=0x0000000000220DF8 string=0x0000000000220DFC ")"
 *   insn=0x0000000000220E08 string=0x0000000000220E0C ")&"
 *   insn=0x0000000000220E0C string=0x0000000000220E10 ")=G"
 *   insn=0x0000000000220E10 string=0x0000000000220E14 "!"
 *   insn=0x0000000000220E14 string=0x0000000000220E18 "i"
 *   insn=0x0000000000220E18 string=0x0000000000220E1C "\t"
 *   insn=0x0000000000220E1C string=0x0000000000220E20 "*"
 *   insn=0x0000000000220E20 string=0x0000000000220E24 "\n"
 *   insn=0x0000000000220E2C string=0x0000000000220E30 "l"
 *   insn=0x0000000000220E34 string=0x0000000000220E38 "[%"
 *   insn=0x0000000000220E44 string=0x0000000000220E48 "*"
 *   insn=0x0000000000220E48 string=0x0000000000220E4C "\n"
 *   insn=0x0000000000220E4C string=0x0000000000220E50 "?"
 *   insn=0x0000000000220E50 string=0x0000000000220E54 ""
 *   insn=0x0000000000220E60 string=0x0000000000220E64 "m"
 *   insn=0x0000000000220E64 string=0x00000000001FC290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::KeyframeAnimationComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v18; // x20
  void *v19; // x0
  void *v20; // x0
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
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  __int64 v45; // [xsp+8h] [xbp-78h] BYREF
  int v46; // [xsp+18h] [xbp-68h]
  __int64 v47; // [xsp+20h] [xbp-60h] BYREF
  __int64 v48; // [xsp+28h] [xbp-58h]
  int v49; // [xsp+30h] [xbp-50h]
  __int64 v50; // [xsp+38h] [xbp-48h]

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v45, "name");
  v46 = 101;
  sub_56A528(&v47, &v45);
  v48 = 0x100000001LL;
  v49 = 4;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v46;
    sub_56A528(v3 + 8, &v47);
    *(_DWORD *)(v3 + 24) = v49;
    *(_QWORD *)(v3 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v47 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v45 - 8);
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
      operator delete(v5);
  }
  sub_566BB8((int)&v45, "numFrames");
  v46 = 102;
  sub_56A528(&v47, &v45);
  v49 = 2;
  v48 = 0x200000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v46;
    sub_56A528(v6 + 8, &v47);
    *(_DWORD *)(v6 + 24) = v49;
    *(_QWORD *)(v6 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v47 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v45 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v45, "duration");
  v46 = 103;
  sub_56A528(&v47, &v45);
  v49 = 2;
  v48 = 0x500000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v46;
    sub_56A528(v9 + 8, &v47);
    *(_DWORD *)(v9 + 24) = v49;
    *(_QWORD *)(v9 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v47 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v45, "repeating");
  v46 = 104;
  sub_56A528(&v47, &v45);
  v49 = 0;
  v48 = 0x400000001LL;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v46;
    sub_56A528(v12 + 8, &v47);
    *(_DWORD *)(v12 + 24) = v49;
    *(_QWORD *)(v12 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
      operator delete(v14);
  }
  sub_566BB8((int)&v45, "running");
  v46 = 105;
  sub_56A528(&v47, &v45);
  v48 = 0x400000001LL;
  v49 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v46;
    sub_56A528(v15 + 8, &v47);
    *(_DWORD *)(v15 + 24) = v49;
    *(_QWORD *)(v15 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v17);
  }
  sub_566BB8((int)&v45, "speedMultiplier");
  v46 = 106;
  sub_56A528(&v47, &v45);
  v48 = 0x500000001LL;
  v49 = 0;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v46;
    sub_56A528(v18 + 8, &v47);
    *(_DWORD *)(v18 + 24) = v49;
    *(_QWORD *)(v18 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v19);
  }
  v20 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v20);
  }
}

