/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BCEE0
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F3890  Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 9
 *   0x00000000001F3890  Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 538
 *   insn=0x00000000002BCEFC string=0x00000000002BCF00 "X"
 *   insn=0x00000000002BCF00 string=0x00000000002BCF04 ""
 *   insn=0x00000000002BCF10 string=0x00000000002BCF14 "'"
 *   insn=0x00000000002BCF14 string=0x00000000002BCF18 "a"
 *   insn=0x00000000002BCF14 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002BCF18 string=0x0000000000589E6D "meshType"
 *   insn=0x00000000002BCF24 string=0x00000000002BCF28 "$"
 *   insn=0x00000000002BCF40 string=0x00000000002BCF44 "y"
 *   insn=0x00000000002BCF44 string=0x00000000002BCF48 "("
 *   insn=0x00000000002BCF48 string=0x00000000002BCF4C "\t"
 *   insn=0x00000000002BCF58 string=0x00000000002BCF5C "u"
 *   insn=0x00000000002BCF6C string=0x00000000002BCF70 ""
 *   insn=0x00000000002BCF74 string=0x00000000002BCF78 "l"
 *   insn=0x00000000002BCF7C string=0x00000000002BCF80 "\t\t@"
 *   insn=0x00000000002BCF84 string=0x00000000002BCF88 ""
 *   insn=0x00000000002BCF8C string=0x00000000002BCF90 "h"
 *   insn=0x00000000002BCF90 string=0x00000000002BCF94 ""
 *   insn=0x00000000002BCF94 string=0x00000000002BCF98 "h"
 *   insn=0x00000000002BCFA8 string=0x00000000002BCFAC "M"
 *   insn=0x00000000002BCFAC string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002BCFB0 string=0x00000000002BCFB4 "W!"
 *   insn=0x00000000002BCFC4 string=0x00000000002BD57C ")!"
 *   insn=0x00000000002BCFD0 string=0x00000000002BCFD4 "a."
 *   insn=0x00000000002BCFD4 string=0x00000000002BCFD8 "a"
 *   insn=0x00000000002BCFD4 string=0x00000000002BD5A0 ")!"
 *   insn=0x00000000002BCFD8 string=0x0000000000589E76 "surfaceWidth"
 *   insn=0x00000000002BCFF0 string=0x00000000002BCFF4 "6#"
 *   insn=0x00000000002BD000 string=0x00000000002BD004 "I"
 *   insn=0x00000000002BD004 string=0x00000000002BD008 "("
 *   insn=0x00000000002BD008 string=0x00000000002BD00C ""
 *   insn=0x00000000002BD014 string=0x00000000002BD018 "u"
 *   insn=0x00000000002BD028 string=0x00000000002BD02C ""
 *   insn=0x00000000002BD030 string=0x00000000002BD034 "="
 *   insn=0x00000000002BD034 string=0x00000000002BD038 "(C"
 *   insn=0x00000000002BD038 string=0x00000000002BD03C "\t\t@"
 *   insn=0x00000000002BD040 string=0x00000000002BD044 ""
 *   insn=0x00000000002BD048 string=0x00000000002BD04C "h"
 *   insn=0x00000000002BD04C string=0x00000000002BD050 ""
 *   insn=0x00000000002BD050 string=0x00000000002BD054 "h"
 *   insn=0x00000000002BD074 string=0x00000000002BD078 "a*"
 *   insn=0x00000000002BD078 string=0x00000000002BD5C4 ")!"
 *   insn=0x00000000002BD088 string=0x00000000002BD08C "a"
 *   insn=0x00000000002BD088 string=0x00000000002BD5E8 ")!"
 *   insn=0x00000000002BD08C string=0x0000000000589E83 "randomSeed"
 *   insn=0x00000000002BD0A4 string=0x00000000002BD0A8 "6#"
 *   insn=0x00000000002BD0C0 string=0x00000000002BD0C4 "u"
 *   insn=0x00000000002BD0D4 string=0x00000000002BD0D8 ""
 *   insn=0x00000000002BD0E0 string=0x00000000002BD0E4 "(C"
 *   insn=0x00000000002BD0E4 string=0x00000000002BD0E8 "\t\t@"
 *   insn=0x00000000002BD0EC string=0x00000000002BD0F0 ""
 *   insn=0x00000000002BD0F4 string=0x00000000002BD0F8 "h"
 *   insn=0x00000000002BD0F8 string=0x00000000002BD0FC ""
 *   insn=0x00000000002BD0FC string=0x00000000002BD100 "h"
 *   insn=0x00000000002BD120 string=0x00000000002BD124 "A'"
 *   insn=0x00000000002BD124 string=0x00000000002BD60C ")!"
 *   insn=0x00000000002BD134 string=0x00000000002BD138 "a"
 *   insn=0x00000000002BD134 string=0x00000000002BD630 ")!"
 *   insn=0x00000000002BD138 string=0x0000000000589E8E "horizNoise"
 *   insn=0x00000000002BD150 string=0x00000000002BD154 "6#"
 *   insn=0x00000000002BD16C string=0x00000000002BD170 "u"
 *   insn=0x00000000002BD180 string=0x00000000002BD184 ""
 *   insn=0x00000000002BD18C string=0x00000000002BD190 "(C"
 *   insn=0x00000000002BD190 string=0x00000000002BD194 "\t\t@"
 *   insn=0x00000000002BD198 string=0x00000000002BD19C ""
 *   insn=0x00000000002BD1A0 string=0x00000000002BD1A4 "h"
 *   insn=0x00000000002BD1A4 string=0x00000000002BD1A8 ""
 *   insn=0x00000000002BD1A8 string=0x00000000002BD1AC "h"
 *   insn=0x00000000002BD1CC string=0x00000000002BD1D0 "!$"
 *   insn=0x00000000002BD1D0 string=0x00000000002BD654 ")!"
 *   insn=0x00000000002BD1E0 string=0x00000000002BD678 ")!"
 *   insn=0x00000000002BD1E8 string=0x00000000002BD1EC "A"
 *   insn=0x00000000002BD1EC string=0x00000000002BD1F0 "a"
 *   insn=0x00000000002BD1EC string=0x00000000002BD3F4 "a"
 *   insn=0x00000000002BD1F0 string=0x0000000000589E99 "hatHeight"
 *   insn=0x00000000002BD1FC string=0x00000000002BD200 "n"
 *   insn=0x00000000002BD224 string=0x00000000002BD228 "t"
 *   insn=0x00000000002BD238 string=0x00000000002BD23C ""
 *   insn=0x00000000002BD248 string=0x00000000002BD24C "\t\t@"
 *   insn=0x00000000002BD250 string=0x00000000002BD254 ""
 *   insn=0x00000000002BD258 string=0x00000000002BD25C "h"
 *   insn=0x00000000002BD25C string=0x00000000002BD260 ""
 *   insn=0x00000000002BD260 string=0x00000000002BD264 "h"
 *   insn=0x00000000002BD284 string=0x00000000002BD288 "!-"
 *   insn=0x00000000002BD288 string=0x00000000002BD82C ")!"
 *   insn=0x00000000002BD298 string=0x00000000002BD29C "a"
 *   insn=0x00000000002BD298 string=0x00000000002BD850 ")!"
 *   insn=0x00000000002BD29C string=0x0000000000589EA3 "hatWidthOffset1"
 *   insn=0x00000000002BD2A8 string=0x00000000002BD2AC "C"
 *   insn=0x00000000002BD2B0 string=0x00000000002BD2B4 "("
 *   insn=0x00000000002BD2D0 string=0x00000000002BD2D4 "t"
 *   insn=0x00000000002BD2E4 string=0x00000000002BD2E8 ""
 *   insn=0x00000000002BD2F4 string=0x00000000002BD2F8 "\t\t@"
 *   insn=0x00000000002BD2FC string=0x00000000002BD300 ""
 *   insn=0x00000000002BD304 string=0x00000000002BD308 "h"
 *   insn=0x00000000002BD308 string=0x00000000002BD30C ""
 *   insn=0x00000000002BD30C string=0x00000000002BD310 "h"
 *   insn=0x00000000002BD320 string=0x00000000002BD324 "o"
 *   insn=0x00000000002BD334 string=0x00000000002BD874 ")!"
 *   insn=0x00000000002BD344 string=0x00000000002BD348 "a"
 *   insn=0x00000000002BD344 string=0x00000000002BD898 ")!"
 *   insn=0x00000000002BD348 string=0x0000000000589EB3 "hatWidthOffset2"
 *   insn=0x00000000002BD35C string=0x00000000002BD360 "H"
 *   insn=0x00000000002BD370 string=0x00000000002BD374 "m"
 *   insn=0x00000000002BD37C string=0x00000000002BD380 "t"
 *   insn=0x00000000002BD390 string=0x00000000002BD394 ""
 *   insn=0x00000000002BD398 string=0x00000000002BD39C "c"
 *   insn=0x00000000002BD3A0 string=0x00000000002BD3A4 "\t\t@"
 *   insn=0x00000000002BD3A8 string=0x00000000002BD3AC ""
 *   insn=0x00000000002BD3B0 string=0x00000000002BD3B4 "h"
 *   insn=0x00000000002BD3B4 string=0x00000000002BD3B8 ""
 *   insn=0x00000000002BD3B8 string=0x00000000002BD3BC "h"
 *   insn=0x00000000002BD3CC string=0x00000000002BD3D0 "D"
 *   insn=0x00000000002BD3E0 string=0x00000000002BD8FC ")!"
 *   insn=0x00000000002BD3F0 string=0x00000000002BD920 ")!"
 *   insn=0x00000000002BD3F4 string=0x0000000000589EC3 "Randomize"
 *   insn=0x00000000002BD408 string=0x00000000002BD40C "h"
 *   insn=0x00000000002BD41C string=0x00000000002BD420 "B"
 *   insn=0x00000000002BD428 string=0x00000000002BD42C "t"
 *   insn=0x00000000002BD43C string=0x00000000002BD440 ""
 *   insn=0x00000000002BD444 string=0x00000000002BD448 "8"
 *   insn=0x00000000002BD44C string=0x00000000002BD450 "\t\t@"
 *   insn=0x00000000002BD454 string=0x00000000002BD458 ""
 *   insn=0x00000000002BD45C string=0x00000000002BD460 "h"
 *   insn=0x00000000002BD460 string=0x00000000002BD464 ""
 *   insn=0x00000000002BD464 string=0x00000000002BD468 "h"
 *   insn=0x00000000002BD48C string=0x00000000002BD69C ")!"
 *   insn=0x00000000002BD498 string=0x00000000002BD49C "!"
 *   insn=0x00000000002BD49C string=0x00000000002BD4A0 "a"
 *   insn=0x00000000002BD49C string=0x00000000002BD6C0 ")!"
 *   insn=0x00000000002BD4A0 string=0x0000000000589ECD "Apply changes"
 *   insn=0x00000000002BD4D4 string=0x00000000002BD4D8 "t"
 *   insn=0x00000000002BD4E8 string=0x00000000002BD4EC ""
 *   insn=0x00000000002BD4F0 string=0x00000000002BD4F4 ""
 *   insn=0x00000000002BD4F8 string=0x00000000002BD4FC "\t\t@"
 *   insn=0x00000000002BD500 string=0x00000000002BD504 ""
 *   insn=0x00000000002BD508 string=0x00000000002BD50C "h"
 *   insn=0x00000000002BD50C string=0x00000000002BD510 ""
 *   insn=0x00000000002BD510 string=0x00000000002BD514 "h"
 *   insn=0x00000000002BD534 string=0x00000000002BD538 "a"
 *   insn=0x00000000002BD538 string=0x00000000002BD6E4 ")!"
 *   insn=0x00000000002BD548 string=0x00000000002BD54C ""
 *   insn=0x00000000002BD548 string=0x00000000002BD708 ")!"
 *   insn=0x00000000002BD554 string=0x00000000002BD558 "a'"
 *   insn=0x00000000002BD558 string=0x00000000002BDA44 "#"
 *   insn=0x00000000002BD57C string=0x00000000002BD580 ")=G"
 *   insn=0x00000000002BD580 string=0x00000000002BD584 "!"
 *   insn=0x00000000002BD584 string=0x00000000002BD588 ")"
 *   insn=0x00000000002BD588 string=0x00000000002BD58C "\t"
 *   insn=0x00000000002BD588 string=0x00000000002BD72C "\t"
 *   insn=0x00000000002BD58C string=0x00000000002BD590 "*"
 *   insn=0x00000000002BD590 string=0x00000000002BD594 "\n"
 *   insn=0x00000000002BD598 string=0x00000000002BD59C "g"
 *   insn=0x00000000002BD59C string=0x00000000002BD738 "?"
 *   insn=0x00000000002BD5A0 string=0x00000000002BD5A4 ")=G"
 *   insn=0x00000000002BD5A4 string=0x00000000002BD5A8 "!"
 *   insn=0x00000000002BD5A8 string=0x00000000002BD5AC "\t"
 *   insn=0x00000000002BD5AC string=0x00000000002BD5B0 "\t"
 *   insn=0x00000000002BD5AC string=0x00000000002BD74C "\t"
 *   insn=0x00000000002BD5B0 string=0x00000000002BD5B4 "*"
 *   insn=0x00000000002BD5B4 string=0x00000000002BD5B8 "\n"
 *   insn=0x00000000002BD5BC string=0x00000000002BD5C0 "f"
 *   insn=0x00000000002BD5C0 string=0x00000000002BD758 "?"
 *   insn=0x00000000002BD5C4 string=0x00000000002BD5C8 ")=G"
 *   insn=0x00000000002BD5C8 string=0x00000000002BD5CC "!"
 *   insn=0x00000000002BD5D0 string=0x00000000002BD5D4 "\t"
 *   insn=0x00000000002BD5D0 string=0x00000000002BD76C "\t"
 *   insn=0x00000000002BD5D4 string=0x00000000002BD5D8 "*"
 *   insn=0x00000000002BD5D8 string=0x00000000002BD5DC "\n"
 *   insn=0x00000000002BD5E0 string=0x00000000002BD5E4 "e"
 *   insn=0x00000000002BD5E4 string=0x00000000002BD778 "?"
 *   insn=0x00000000002BD5E8 string=0x00000000002BD5EC ")=G"
 *   insn=0x00000000002BD5EC string=0x00000000002BD5F0 "!"
 *   insn=0x00000000002BD5F4 string=0x00000000002BD5F8 "\t"
 *   insn=0x00000000002BD5F4 string=0x00000000002BD78C "\t"
 *   insn=0x00000000002BD5F8 string=0x00000000002BD5FC "*"
 *   insn=0x00000000002BD5FC string=0x00000000002BD600 "\n"
 *   insn=0x00000000002BD604 string=0x00000000002BD608 "d"
 *   insn=0x00000000002BD608 string=0x00000000002BD798 "?"
 *   insn=0x00000000002BD60C string=0x00000000002BD610 ")=G"
 *   insn=0x00000000002BD610 string=0x00000000002BD614 "!"
 *   insn=0x00000000002BD618 string=0x00000000002BD61C "\t"
 *   insn=0x00000000002BD618 string=0x00000000002BD7AC "\t"
 *   insn=0x00000000002BD61C string=0x00000000002BD620 "*"
 *   insn=0x00000000002BD620 string=0x00000000002BD624 "\n"
 *   insn=0x00000000002BD628 string=0x00000000002BD62C "c"
 *   insn=0x00000000002BD62C string=0x00000000002BD7B8 "?"
 *   insn=0x00000000002BD630 string=0x00000000002BD634 ")=G"
 *   insn=0x00000000002BD634 string=0x00000000002BD638 "!"
 *   insn=0x00000000002BD63C string=0x00000000002BD640 "\t"
 *   insn=0x00000000002BD63C string=0x00000000002BD7CC "\t"
 *   insn=0x00000000002BD640 string=0x00000000002BD644 "*"
 *   insn=0x00000000002BD644 string=0x00000000002BD648 "\n"
 *   insn=0x00000000002BD64C string=0x00000000002BD650 "b"
 *   insn=0x00000000002BD650 string=0x00000000002BD7D8 "?"
 *   insn=0x00000000002BD654 string=0x00000000002BD658 ")=G"
 *   insn=0x00000000002BD658 string=0x00000000002BD65C "!"
 *   insn=0x00000000002BD65C string=0x00000000002BD660 "i"
 *   insn=0x00000000002BD660 string=0x00000000002BD664 "\t"
 *   insn=0x00000000002BD660 string=0x00000000002BD7EC "\t"
 *   insn=0x00000000002BD664 string=0x00000000002BD668 "*"
 *   insn=0x00000000002BD668 string=0x00000000002BD66C "\n"
 *   insn=0x00000000002BD670 string=0x00000000002BD674 "a"
 *   insn=0x00000000002BD674 string=0x00000000002BD7F8 "?"
 *   insn=0x00000000002BD678 string=0x00000000002BD67C ")=G"
 *   insn=0x00000000002BD67C string=0x00000000002BD680 "!"
 *   insn=0x00000000002BD680 string=0x00000000002BD684 "I"
 *   insn=0x00000000002BD684 string=0x00000000002BD688 "\t"
 *   insn=0x00000000002BD684 string=0x00000000002BD80C "\t"
 *   insn=0x00000000002BD688 string=0x00000000002BD68C "*"
 *   insn=0x00000000002BD68C string=0x00000000002BD690 "\n"
 *   insn=0x00000000002BD694 string=0x00000000002BD698 "`"
 *   insn=0x00000000002BD698 string=0x00000000002BD818 "?"
 *   insn=0x00000000002BD69C string=0x00000000002BD6A0 ")=G"
 *   insn=0x00000000002BD6A0 string=0x00000000002BD6A4 "!"
 *   insn=0x00000000002BD6A8 string=0x00000000002BD6AC "\t"
 *   insn=0x00000000002BD6A8 string=0x00000000002BD8BC "\t"
 *   insn=0x00000000002BD6AC string=0x00000000002BD6B0 "*"
 *   insn=0x00000000002BD6B0 string=0x00000000002BD6B4 "\n"
 *   insn=0x00000000002BD6BC string=0x00000000002BD8C8 "?"
 *   insn=0x00000000002BD6C0 string=0x00000000002BD6C4 ")=G"
 *   insn=0x00000000002BD6C4 string=0x00000000002BD6C8 "!"
 *   insn=0x00000000002BD6CC string=0x00000000002BD6D0 "\t"
 *   insn=0x00000000002BD6CC string=0x00000000002BD8DC "\t"
 *   insn=0x00000000002BD6D0 string=0x00000000002BD6D4 "*"
 *   insn=0x00000000002BD6D4 string=0x00000000002BD6D8 "\n"
 *   insn=0x00000000002BD6E0 string=0x00000000002BD8E8 "?"
 *   insn=0x00000000002BD6E4 string=0x00000000002BD6E8 ")=G"
 *   insn=0x00000000002BD6E8 string=0x00000000002BD6EC "!"
 *   insn=0x00000000002BD6F0 string=0x00000000002BD6F4 "\t"
 *   insn=0x00000000002BD6F0 string=0x00000000002BD944 "\t"
 *   insn=0x00000000002BD6F4 string=0x00000000002BD6F8 "*"
 *   insn=0x00000000002BD6F8 string=0x00000000002BD6FC "\n"
 *   insn=0x00000000002BD704 string=0x00000000002BD950 "?"
 *   insn=0x00000000002BD708 string=0x00000000002BD70C ")=G"
 *   insn=0x00000000002BD70C string=0x00000000002BD710 "!"
 *   insn=0x00000000002BD714 string=0x00000000002BD718 "\t"
 *   insn=0x00000000002BD714 string=0x00000000002BD964 "\t"
 *   insn=0x00000000002BD718 string=0x00000000002BD71C "*"
 *   insn=0x00000000002BD71C string=0x00000000002BD720 "\n"
 *   insn=0x00000000002BD728 string=0x00000000002BD970 "?"
 *   insn=0x00000000002BD72C string=0x00000000002BD730 "*"
 *   insn=0x00000000002BD730 string=0x00000000002BD734 "\n"
 *   insn=0x00000000002BD738 string=0x00000000002BD73C "l"
 *   insn=0x00000000002BD744 string=0x00000000002BD748 " "
 *   insn=0x00000000002BD74C string=0x00000000002BD750 "*"
 *   insn=0x00000000002BD750 string=0x00000000002BD754 "\n"
 *   insn=0x00000000002BD76C string=0x00000000002BD770 "*"
 *   insn=0x00000000002BD770 string=0x00000000002BD774 "\n"
 *   insn=0x00000000002BD780 string=0x00000000002BD784 ""
 *   insn=0x00000000002BD784 string=0x00000000002BD788 "="
 *   insn=0x00000000002BD78C string=0x00000000002BD790 "*"
 *   insn=0x00000000002BD790 string=0x00000000002BD794 "\n"
 *   insn=0x00000000002BD7A4 string=0x00000000002BD7A8 "9"
 *   insn=0x00000000002BD7AC string=0x00000000002BD7B0 "*"
 *   insn=0x00000000002BD7B0 string=0x00000000002BD7B4 "\n"
 *   insn=0x00000000002BD7B8 string=0x00000000002BD7BC "l"
 *   insn=0x00000000002BD7C4 string=0x00000000002BD7C8 "X"
 *   insn=0x00000000002BD7CC string=0x00000000002BD7D0 "*"
 *   insn=0x00000000002BD7D0 string=0x00000000002BD7D4 "\n"
 *   insn=0x00000000002BD7E4 string=0x00000000002BD7E8 "T"
 *   insn=0x00000000002BD7EC string=0x00000000002BD7F0 "*"
 *   insn=0x00000000002BD7F0 string=0x00000000002BD7F4 "\n"
 *   insn=0x00000000002BD804 string=0x00000000002BD808 "s"
 *   insn=0x00000000002BD80C string=0x00000000002BD810 "*"
 *   insn=0x00000000002BD810 string=0x00000000002BD814 "\n"
 *   insn=0x00000000002BD818 string=0x00000000002BD81C "L"
 *   insn=0x00000000002BD824 string=0x00000000002BD828 "o"
 *   insn=0x00000000002BD82C string=0x00000000002BD830 ")=G"
 *   insn=0x00000000002BD830 string=0x00000000002BD834 "!"
 *   insn=0x00000000002BD834 string=0x00000000002BD838 "i\n"
 *   insn=0x00000000002BD838 string=0x00000000002BD83C "\t"
 *   insn=0x00000000002BD838 string=0x00000000002BD984 "\t"
 *   insn=0x00000000002BD83C string=0x00000000002BD840 "*"
 *   insn=0x00000000002BD840 string=0x00000000002BD844 "\n"
 *   insn=0x00000000002BD848 string=0x00000000002BD84C "Q"
 *   insn=0x00000000002BD84C string=0x00000000002BD990 "?"
 *   insn=0x00000000002BD850 string=0x00000000002BD854 ")=G"
 *   insn=0x00000000002BD854 string=0x00000000002BD858 "!"
 *   insn=0x00000000002BD858 string=0x00000000002BD85C "I\n"
 *   insn=0x00000000002BD85C string=0x00000000002BD860 "\t"
 *   insn=0x00000000002BD85C string=0x00000000002BD9A4 "\t"
 *   insn=0x00000000002BD860 string=0x00000000002BD864 "*"
 *   insn=0x00000000002BD864 string=0x00000000002BD868 "\n"
 *   insn=0x00000000002BD86C string=0x00000000002BD870 "P"
 *   insn=0x00000000002BD870 string=0x00000000002BD9B0 "?"
 *   insn=0x00000000002BD874 string=0x00000000002BD878 ")=G"
 *   insn=0x00000000002BD878 string=0x00000000002BD87C "!"
 *   insn=0x00000000002BD87C string=0x00000000002BD880 ")\n"
 *   insn=0x00000000002BD880 string=0x00000000002BD884 "\t"
 *   insn=0x00000000002BD880 string=0x00000000002BD9C4 "\t"
 *   insn=0x00000000002BD884 string=0x00000000002BD888 "*"
 *   insn=0x00000000002BD888 string=0x00000000002BD88C "\n"
 *   insn=0x00000000002BD890 string=0x00000000002BD894 "O"
 *   insn=0x00000000002BD894 string=0x00000000002BD9D0 "?"
 *   insn=0x00000000002BD898 string=0x00000000002BD89C ")=G"
 *   insn=0x00000000002BD89C string=0x00000000002BD8A0 "!"
 *   insn=0x00000000002BD8A0 string=0x00000000002BD8A4 "\t\n"
 *   insn=0x00000000002BD8A4 string=0x00000000002BD8A8 "\t"
 *   insn=0x00000000002BD8A4 string=0x00000000002BD9E4 "\t"
 *   insn=0x00000000002BD8A8 string=0x00000000002BD8AC "*"
 *   insn=0x00000000002BD8AC string=0x00000000002BD8B0 "\n"
 *   insn=0x00000000002BD8B4 string=0x00000000002BD8B8 "N"
 *   insn=0x00000000002BD8B8 string=0x00000000002BD9F0 "?"
 *   insn=0x00000000002BD8BC string=0x00000000002BD8C0 "*"
 *   insn=0x00000000002BD8C0 string=0x00000000002BD8C4 "\n"
 *   insn=0x00000000002BD8C8 string=0x00000000002BD8CC ","
 *   insn=0x00000000002BD8DC string=0x00000000002BD8E0 "*"
 *   insn=0x00000000002BD8E0 string=0x00000000002BD8E4 "\n"
 *   insn=0x00000000002BD8FC string=0x00000000002BD900 ")=G"
 *   insn=0x00000000002BD900 string=0x00000000002BD904 "!"
 *   insn=0x00000000002BD908 string=0x00000000002BD90C "\t"
 *   insn=0x00000000002BD908 string=0x00000000002BDA04 "\t"
 *   insn=0x00000000002BD90C string=0x00000000002BD910 "*"
 *   insn=0x00000000002BD910 string=0x00000000002BD914 "\n"
 *   insn=0x00000000002BD918 string=0x00000000002BD91C "="
 *   insn=0x00000000002BD91C string=0x00000000002BDA10 "?"
 *   insn=0x00000000002BD920 string=0x00000000002BD924 ")=G"
 *   insn=0x00000000002BD924 string=0x00000000002BD928 "!"
 *   insn=0x00000000002BD92C string=0x00000000002BD930 "\t"
 *   insn=0x00000000002BD92C string=0x00000000002BDA24 "\t"
 *   insn=0x00000000002BD930 string=0x00000000002BD934 "*"
 *   insn=0x00000000002BD934 string=0x00000000002BD938 "\n"
 *   insn=0x00000000002BD93C string=0x00000000002BD940 "<"
 *   insn=0x00000000002BD940 string=0x00000000002BDA30 "?"
 *   insn=0x00000000002BD944 string=0x00000000002BD948 "*"
 *   insn=0x00000000002BD948 string=0x00000000002BD94C "\n"
 *   insn=0x00000000002BD950 string=0x00000000002BD954 "L"
 *   insn=0x00000000002BD964 string=0x00000000002BD968 "*"
 *   insn=0x00000000002BD968 string=0x00000000002BD96C "\n"
 *   insn=0x00000000002BD984 string=0x00000000002BD988 "*"
 *   insn=0x00000000002BD988 string=0x00000000002BD98C "\n"
 *   insn=0x00000000002BD99C string=0x00000000002BD9A0 ";"
 *   insn=0x00000000002BD9A4 string=0x00000000002BD9A8 "*"
 *   insn=0x00000000002BD9A8 string=0x00000000002BD9AC "\n"
 *   insn=0x00000000002BD9B0 string=0x00000000002BD9B4 "L"
 *   insn=0x00000000002BD9B8 string=0x00000000002BD9BC "z"
 *   insn=0x00000000002BD9BC string=0x00000000002BD9C0 "7"
 *   insn=0x00000000002BD9C4 string=0x00000000002BD9C8 "*"
 *   insn=0x00000000002BD9C8 string=0x00000000002BD9CC "\n"
 *   insn=0x00000000002BD9D0 string=0x00000000002BD9D4 ","
 *   insn=0x00000000002BD9D8 string=0x00000000002BD9DC "r"
 *   insn=0x00000000002BD9DC string=0x00000000002BD9E0 "V"
 *   insn=0x00000000002BD9E4 string=0x00000000002BD9E8 "*"
 *   insn=0x00000000002BD9E8 string=0x00000000002BD9EC "\n"
 *   insn=0x00000000002BD9F8 string=0x00000000002BD9FC "j"
 *   insn=0x00000000002BD9FC string=0x00000000002BDA00 "R"
 *   insn=0x00000000002BDA04 string=0x00000000002BDA08 "*"
 *   insn=0x00000000002BDA08 string=0x00000000002BDA0C "\n"
 *   insn=0x00000000002BDA18 string=0x00000000002BDA1C "b"
 *   insn=0x00000000002BDA1C string=0x00000000002BDA20 "q"
 *   insn=0x00000000002BDA24 string=0x00000000002BDA28 "*"
 *   insn=0x00000000002BDA28 string=0x00000000002BDA2C "\n"
 *   insn=0x00000000002BDA38 string=0x00000000002BDA3C "Z"
 *   insn=0x00000000002BDA3C string=0x00000000002BDA40 "m"
 *   insn=0x00000000002BDA44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BDA4C string=0x00000000002BDA50 "(a"
 *   insn=0x00000000002BDA58 string=0x00000000002BDA5C "*!"
 *   insn=0x00000000002BDA5C string=0x00000000002BDA60 "J=G"
 *   insn=0x00000000002BDA60 string=0x00000000002BDA64 ")!"
 *   insn=0x00000000002BDA68 string=0x00000000002BDA6C "*"
 *   insn=0x00000000002BDA68 string=0x00000000002BDA80 "*"
 *   insn=0x00000000002BDA6C string=0x00000000002BDA70 "K"
 *   insn=0x00000000002BDA70 string=0x00000000002BDA74 "+"
 *   insn=0x00000000002BDA7C string=0x00000000002BDA8C "_"
 *   insn=0x00000000002BDA80 string=0x00000000002BDA84 "K"
 *   insn=0x00000000002BDA84 string=0x00000000002BDA88 "+"
 *   insn=0x00000000002BDA98 string=0x00000000002BDA9C "B"
 *   insn=0x00000000002BDAB0 string=0x00000000002BDAB4 " ("
 *   insn=0x00000000002BDAB4 string=0x00000000002BDAB8 ")!"
 *   insn=0x00000000002BDAB8 string=0x00000000002BDABC ")=G"
 *   insn=0x00000000002BDABC string=0x00000000002BDAC0 "!"
 *   insn=0x00000000002BDAC4 string=0x00000000002BDAC8 "\t"
 *   insn=0x00000000002BDAC4 string=0x00000000002BDFC0 "\t"
 *   insn=0x00000000002BDAC8 string=0x00000000002BDACC "*"
 *   insn=0x00000000002BDACC string=0x00000000002BDAD0 "\n"
 *   insn=0x00000000002BDAD4 string=0x00000000002BDAD8 "4"
 *   insn=0x00000000002BDAD8 string=0x00000000002BDFA8 "?"
 *   insn=0x00000000002BDAE4 string=0x00000000002BDAE8 "(a"
 *   insn=0x00000000002BDAF0 string=0x00000000002BDAF4 "*!"
 *   insn=0x00000000002BDAF4 string=0x00000000002BDAF8 "J=G"
 *   insn=0x00000000002BDAF8 string=0x00000000002BDAFC ")!"
 *   insn=0x00000000002BDB00 string=0x00000000002BDB04 "*"
 *   insn=0x00000000002BDB00 string=0x00000000002BDB18 "*"
 *   insn=0x00000000002BDB04 string=0x00000000002BDB08 "K"
 *   insn=0x00000000002BDB08 string=0x00000000002BDB0C "+"
 *   insn=0x00000000002BDB14 string=0x00000000002BDB24 "_"
 *   insn=0x00000000002BDB18 string=0x00000000002BDB1C "K"
 *   insn=0x00000000002BDB1C string=0x00000000002BDB20 "+"
 *   insn=0x00000000002BDB48 string=0x00000000002BDB4C "`#"
 *   insn=0x00000000002BDB4C string=0x00000000002BDB50 ")!"
 *   insn=0x00000000002BDB50 string=0x00000000002BDB54 ")=G"
 *   insn=0x00000000002BDB54 string=0x00000000002BDB58 "!"
 *   insn=0x00000000002BDB58 string=0x00000000002BDB5C ")#"
 *   insn=0x00000000002BDB5C string=0x00000000002BDB60 "\t"
 *   insn=0x00000000002BDB60 string=0x00000000002BDB64 "*"
 *   insn=0x00000000002BDB64 string=0x00000000002BDB68 "\n"
 *   insn=0x00000000002BDB7C string=0x00000000002BDB80 "(a"
 *   insn=0x00000000002BDB88 string=0x00000000002BDB8C "*!"
 *   insn=0x00000000002BDB8C string=0x00000000002BDB90 "J=G"
 *   insn=0x00000000002BDB90 string=0x00000000002BDB94 ")!"
 *   insn=0x00000000002BDB98 string=0x00000000002BDB9C "*"
 *   insn=0x00000000002BDB98 string=0x00000000002BDBB0 "*"
 *   insn=0x00000000002BDB9C string=0x00000000002BDBA0 "K"
 *   insn=0x00000000002BDBA0 string=0x00000000002BDBA4 "+"
 *   insn=0x00000000002BDBAC string=0x00000000002BDBBC "_"
 *   insn=0x00000000002BDBB0 string=0x00000000002BDBB4 "K"
 *   insn=0x00000000002BDBB4 string=0x00000000002BDBB8 "+"
 *   insn=0x00000000002BDBE4 string=0x00000000002BDBE8 ")!"
 *   insn=0x00000000002BDBE8 string=0x00000000002BDBEC ")=G"
 *   insn=0x00000000002BDBEC string=0x00000000002BDBF0 "!"
 *   insn=0x00000000002BDBF0 string=0x00000000002BDBF4 "i"
 *   insn=0x00000000002BDBF4 string=0x00000000002BDBF8 "\t"
 *   insn=0x00000000002BDBF8 string=0x00000000002BDBFC "*"
 *   insn=0x00000000002BDBFC string=0x00000000002BDC00 "\n"
 *   insn=0x00000000002BDC14 string=0x00000000002BDC18 "(a"
 *   insn=0x00000000002BDC20 string=0x00000000002BDC24 "*!"
 *   insn=0x00000000002BDC24 string=0x00000000002BDC28 "J=G"
 *   insn=0x00000000002BDC28 string=0x00000000002BDC2C ")!"
 *   insn=0x00000000002BDC30 string=0x00000000002BDC34 "*"
 *   insn=0x00000000002BDC30 string=0x00000000002BDC48 "*"
 *   insn=0x00000000002BDC34 string=0x00000000002BDC38 "K"
 *   insn=0x00000000002BDC38 string=0x00000000002BDC3C "+"
 *   insn=0x00000000002BDC44 string=0x00000000002BDC54 "_"
 *   insn=0x00000000002BDC48 string=0x00000000002BDC4C "K"
 *   insn=0x00000000002BDC4C string=0x00000000002BDC50 "+"
 *   insn=0x00000000002BDC7C string=0x00000000002BDC80 ")!"
 *   insn=0x00000000002BDC80 string=0x00000000002BDC84 ")=G"
 *   insn=0x00000000002BDC84 string=0x00000000002BDC88 "!"
 *   insn=0x00000000002BDC8C string=0x00000000002BDC90 "\t"
 *   insn=0x00000000002BDC90 string=0x00000000002BDC94 "*"
 *   insn=0x00000000002BDC94 string=0x00000000002BDC98 "\n"
 *   insn=0x00000000002BDCAC string=0x00000000002BDCB0 "(a"
 *   insn=0x00000000002BDCB8 string=0x00000000002BDCBC "*!"
 *   insn=0x00000000002BDCBC string=0x00000000002BDCC0 "J=G"
 *   insn=0x00000000002BDCC0 string=0x00000000002BDCC4 ")!"
 *   insn=0x00000000002BDCC8 string=0x00000000002BDCCC "*"
 *   insn=0x00000000002BDCC8 string=0x00000000002BDCE0 "*"
 *   insn=0x00000000002BDCCC string=0x00000000002BDCD0 "K"
 *   insn=0x00000000002BDCD0 string=0x00000000002BDCD4 "+"
 *   insn=0x00000000002BDCDC string=0x00000000002BDCEC "_"
 *   insn=0x00000000002BDCE0 string=0x00000000002BDCE4 "K"
 *   insn=0x00000000002BDCE4 string=0x00000000002BDCE8 "+"
 *   insn=0x00000000002BDD10 string=0x00000000002BDD14 " "
 *   insn=0x00000000002BDD14 string=0x00000000002BDD18 ")!"
 *   insn=0x00000000002BDD18 string=0x00000000002BDD1C ")=G"
 *   insn=0x00000000002BDD1C string=0x00000000002BDD20 "!"
 *   insn=0x00000000002BDD24 string=0x00000000002BDD28 "\t"
 *   insn=0x00000000002BDD28 string=0x00000000002BDD2C "*"
 *   insn=0x00000000002BDD2C string=0x00000000002BDD30 "\n"
 *   insn=0x00000000002BDD44 string=0x00000000002BDD48 "(a"
 *   insn=0x00000000002BDD50 string=0x00000000002BDD54 "*!"
 *   insn=0x00000000002BDD54 string=0x00000000002BDD58 "J=G"
 *   insn=0x00000000002BDD58 string=0x00000000002BDD5C ")!"
 *   insn=0x00000000002BDD60 string=0x00000000002BDD64 "*"
 *   insn=0x00000000002BDD60 string=0x00000000002BDD78 "*"
 *   insn=0x00000000002BDD64 string=0x00000000002BDD68 "K"
 *   insn=0x00000000002BDD68 string=0x00000000002BDD6C "+"
 *   insn=0x00000000002BDD74 string=0x00000000002BDD84 "_"
 *   insn=0x00000000002BDD78 string=0x00000000002BDD7C "K"
 *   insn=0x00000000002BDD7C string=0x00000000002BDD80 "+"
 *   insn=0x00000000002BDDA8 string=0x00000000002BDDAC "`"
 *   insn=0x00000000002BDDAC string=0x00000000002BDDB0 ")!"
 *   insn=0x00000000002BDDB0 string=0x00000000002BDDB4 ")=G"
 *   insn=0x00000000002BDDB4 string=0x00000000002BDDB8 "!"
 *   insn=0x00000000002BDDB8 string=0x00000000002BDDBC ")"
 *   insn=0x00000000002BDDBC string=0x00000000002BDDC0 "\t"
 *   insn=0x00000000002BDDC0 string=0x00000000002BDDC4 "*"
 *   insn=0x00000000002BDDC4 string=0x00000000002BDDC8 "\n"
 *   insn=0x00000000002BDDCC string=0x00000000002BDDD0 "v"
 *   insn=0x00000000002BDDDC string=0x00000000002BDDE0 "(a"
 *   insn=0x00000000002BDDE8 string=0x00000000002BDDEC "*!"
 *   insn=0x00000000002BDDEC string=0x00000000002BDDF0 "J=G"
 *   insn=0x00000000002BDDF0 string=0x00000000002BDDF4 ")!"
 *   insn=0x00000000002BDDF8 string=0x00000000002BDDFC "*"
 *   insn=0x00000000002BDDF8 string=0x00000000002BDE10 "*"
 *   insn=0x00000000002BDDFC string=0x00000000002BDE00 "K"
 *   insn=0x00000000002BDE00 string=0x00000000002BDE04 "+"
 *   insn=0x00000000002BDE0C string=0x00000000002BDE1C "_"
 *   insn=0x00000000002BDE10 string=0x00000000002BDE14 "K"
 *   insn=0x00000000002BDE14 string=0x00000000002BDE18 "+"
 *   insn=0x00000000002BDE28 string=0x00000000002BDE2C "^"
 *   insn=0x00000000002BDE44 string=0x00000000002BDE48 ")!"
 *   insn=0x00000000002BDE48 string=0x00000000002BDE4C ")=G"
 *   insn=0x00000000002BDE4C string=0x00000000002BDE50 "!"
 *   insn=0x00000000002BDE50 string=0x00000000002BDE54 "i"
 *   insn=0x00000000002BDE54 string=0x00000000002BDE58 "\t"
 *   insn=0x00000000002BDE58 string=0x00000000002BDE5C "*"
 *   insn=0x00000000002BDE5C string=0x00000000002BDE60 "\n"
 *   insn=0x00000000002BDE64 string=0x00000000002BDE68 "P"
 *   insn=0x00000000002BDE74 string=0x00000000002BDE78 "(a"
 *   insn=0x00000000002BDE80 string=0x00000000002BDE84 "*!"
 *   insn=0x00000000002BDE84 string=0x00000000002BDE88 "J=G"
 *   insn=0x00000000002BDE88 string=0x00000000002BDE8C ")!"
 *   insn=0x00000000002BDE90 string=0x00000000002BDE94 "*"
 *   insn=0x00000000002BDE90 string=0x00000000002BDEA8 "*"
 *   insn=0x00000000002BDE94 string=0x00000000002BDE98 "K"
 *   insn=0x00000000002BDE98 string=0x00000000002BDE9C "+"
 *   insn=0x00000000002BDEA4 string=0x00000000002BDEB4 "_"
 *   insn=0x00000000002BDEA8 string=0x00000000002BDEAC "K"
 *   insn=0x00000000002BDEAC string=0x00000000002BDEB0 "+"
 *   insn=0x00000000002BDEC0 string=0x00000000002BDEC4 "8"
 *   insn=0x00000000002BDEDC string=0x00000000002BDEE0 ")!"
 *   insn=0x00000000002BDEE0 string=0x00000000002BDEE4 ")=G"
 *   insn=0x00000000002BDEE4 string=0x00000000002BDEE8 "!"
 *   insn=0x00000000002BDEEC string=0x00000000002BDEF0 "\t"
 *   insn=0x00000000002BDEF0 string=0x00000000002BDEF4 "*"
 *   insn=0x00000000002BDEF4 string=0x00000000002BDEF8 "\n"
 *   insn=0x00000000002BDEFC string=0x00000000002BDF00 "*"
 *   insn=0x00000000002BDF08 string=0x00000000002BDF0C "J!"
 *   insn=0x00000000002BDF0C string=0x00000000002BDF10 "J"
 *   insn=0x00000000002BDF14 string=0x00000000002BDF18 "(a"
 *   insn=0x00000000002BDF20 string=0x00000000002BDF24 "*!"
 *   insn=0x00000000002BDF24 string=0x00000000002BDF28 "J=G"
 *   insn=0x00000000002BDF28 string=0x00000000002BDF2C ")!"
 *   insn=0x00000000002BDF30 string=0x00000000002BDF34 "*"
 *   insn=0x00000000002BDF30 string=0x00000000002BDF48 "*"
 *   insn=0x00000000002BDF34 string=0x00000000002BDF38 "K"
 *   insn=0x00000000002BDF38 string=0x00000000002BDF3C "+"
 *   insn=0x00000000002BDF44 string=0x00000000002BDF54 "_"
 *   insn=0x00000000002BDF48 string=0x00000000002BDF4C "K"
 *   insn=0x00000000002BDF4C string=0x00000000002BDF50 "+"
 *   insn=0x00000000002BDF70 string=0x00000000002BDF74 "I!"
 *   insn=0x00000000002BDF74 string=0x00000000002BDF78 ")"
 *   insn=0x00000000002BDF84 string=0x00000000002BDF88 ")!"
 *   insn=0x00000000002BDF88 string=0x00000000002BDF8C ")=G"
 *   insn=0x00000000002BDF8C string=0x00000000002BDF90 "!"
 *   insn=0x00000000002BDF90 string=0x00000000002BDF94 "i"
 *   insn=0x00000000002BDF94 string=0x00000000002BDF98 "\t"
 *   insn=0x00000000002BDF98 string=0x00000000002BDF9C "*"
 *   insn=0x00000000002BDF9C string=0x00000000002BDFA0 "\n"
 *   insn=0x00000000002BDFA8 string=0x00000000002BDFAC "l"
 *   insn=0x00000000002BDFB8 string=0x00000000002BDFBC "B"
 *   insn=0x00000000002BDFC0 string=0x00000000002BDFC4 "*"
 *   insn=0x00000000002BDFC4 string=0x00000000002BDFC8 "\n"
 *   insn=0x00000000002BDFC8 string=0x00000000002BDFCC "?"
 *   insn=0x00000000002BDFCC string=0x00000000002BDFD0 ""
 *   insn=0x00000000002BDFDC string=0x00000000002BDFE0 ","
 *   insn=0x00000000002BDFE0 string=0x00000000001F3890 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshGeneratorComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v4; // x21
  void *v5; // x0
  void *v6; // x0
  __int64 v7; // x21
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x21
  void *v11; // x0
  void *v12; // x0
  __int64 v13; // x21
  void *v14; // x0
  void *v15; // x0
  __int64 v16; // x20
  void *v17; // x0
  void *v18; // x0
  __int64 v19; // x20
  void *v20; // x0
  void *v21; // x0
  __int64 v22; // x20
  void *v23; // x0
  void *v24; // x0
  __int64 v25; // x20
  void *v26; // x0
  void *v27; // x0
  __int64 v28; // x20
  void *v29; // x0
  void *v30; // x0
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
  unsigned int *v45; // x8
  int v46; // w9
  unsigned int *v47; // x8
  int v48; // w9
  unsigned int *v49; // x8
  int v50; // w9
  unsigned int *v51; // x8
  int v52; // w9
  unsigned int *v53; // x8
  int v54; // w9
  unsigned int *v55; // x8
  int v56; // w9
  unsigned int *v57; // x8
  int v58; // w9
  unsigned int *v59; // x8
  int v60; // w9
  unsigned int *v61; // x8
  int v62; // w9
  unsigned int *v63; // x8
  int v64; // w9
  unsigned int *v65; // x8
  int v66; // w9
  __int64 v67; // [xsp+8h] [xbp-88h] BYREF
  int v68; // [xsp+18h] [xbp-78h]
  __int64 v69; // [xsp+20h] [xbp-70h] BYREF
  __int64 v70; // [xsp+28h] [xbp-68h]
  int v71; // [xsp+30h] [xbp-60h]
  __int64 v72; // [xsp+38h] [xbp-58h]

  v72 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v67, "meshType");
  v68 = 4;
  sub_56A528(&v69, &v67);
  v71 = 5;
  v70 = 0x200000001LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v4 = v68;
    sub_56A528(v4 + 8, &v69);
    *(_DWORD *)(v4 + 24) = v71;
    *(_QWORD *)(v4 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v5 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v69 - 8);
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
      operator delete(v5);
  }
  v6 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v67 - 8);
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
      operator delete(v6);
  }
  sub_566BB8((int)&v67, "surfaceWidth");
  v68 = 5;
  sub_56A528(&v69, &v67);
  v71 = 0;
  v70 = 0x500000001LL;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v7 = v68;
    sub_56A528(v7 + 8, &v69);
    *(_DWORD *)(v7 + 24) = v71;
    *(_QWORD *)(v7 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v8 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v69 - 8);
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
      operator delete(v8);
  }
  v9 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v67 - 8);
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
      operator delete(v9);
  }
  sub_566BB8((int)&v67, "randomSeed");
  v68 = 6;
  sub_56A528(&v69, &v67);
  v70 = 0x200000001LL;
  v71 = 0;
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v10 = v68;
    sub_56A528(v10 + 8, &v69);
    *(_DWORD *)(v10 + 24) = v71;
    *(_QWORD *)(v10 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v11 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v69 - 8);
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
      operator delete(v11);
  }
  v12 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v67 - 8);
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
      operator delete(v12);
  }
  sub_566BB8((int)&v67, "horizNoise");
  v68 = 7;
  sub_56A528(&v69, &v67);
  v70 = 0x500000001LL;
  v71 = 0;
  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v13 = v68;
    sub_56A528(v13 + 8, &v69);
    *(_DWORD *)(v13 + 24) = v71;
    *(_QWORD *)(v13 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v14 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v69 - 8);
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
      operator delete(v14);
  }
  v15 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v67 - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v15);
  }
  if ( *((_DWORD *)a1 + 52) == 1 )
  {
    sub_566BB8((int)&v67, "hatHeight");
    v68 = 8;
    sub_56A528(&v69, &v67);
    v70 = 0x500000001LL;
    v71 = 0;
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v16 = v68;
      sub_56A528(v16 + 8, &v69);
      *(_DWORD *)(v16 + 24) = v71;
      *(_QWORD *)(v16 + 16) = v70;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v17 = (void *)(v69 - 24);
    if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
    {
      v55 = (unsigned int *)(v69 - 8);
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
        operator delete(v17);
    }
    v18 = (void *)(v67 - 24);
    if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
    {
      v57 = (unsigned int *)(v67 - 8);
      if ( &pthread_create )
      {
        do
          v58 = __ldaxr(v57);
        while ( __stlxr(v58 - 1, v57) );
      }
      else
      {
        v58 = (*v57)--;
      }
      if ( v58 <= 0 )
        operator delete(v18);
    }
    sub_566BB8((int)&v67, "hatWidthOffset1");
    v68 = 9;
    sub_56A528(&v69, &v67);
    v70 = 0x500000001LL;
    v71 = 0;
    v19 = *(_QWORD *)(a2 + 8);
    if ( v19 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v19 = v68;
      sub_56A528(v19 + 8, &v69);
      *(_DWORD *)(v19 + 24) = v71;
      *(_QWORD *)(v19 + 16) = v70;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v20 = (void *)(v69 - 24);
    if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
    {
      v59 = (unsigned int *)(v69 - 8);
      if ( &pthread_create )
      {
        do
          v60 = __ldaxr(v59);
        while ( __stlxr(v60 - 1, v59) );
      }
      else
      {
        v60 = (*v59)--;
      }
      if ( v60 <= 0 )
        operator delete(v20);
    }
    v21 = (void *)(v67 - 24);
    if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
    {
      v61 = (unsigned int *)(v67 - 8);
      if ( &pthread_create )
      {
        do
          v62 = __ldaxr(v61);
        while ( __stlxr(v62 - 1, v61) );
      }
      else
      {
        v62 = (*v61)--;
      }
      if ( v62 <= 0 )
        operator delete(v21);
    }
    sub_566BB8((int)&v67, "hatWidthOffset2");
    v68 = 10;
    sub_56A528(&v69, &v67);
    v70 = 0x500000001LL;
    v71 = 0;
    v22 = *(_QWORD *)(a2 + 8);
    if ( v22 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v22 = v68;
      sub_56A528(v22 + 8, &v69);
      *(_DWORD *)(v22 + 24) = v71;
      *(_QWORD *)(v22 + 16) = v70;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v23 = (void *)(v69 - 24);
    if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
    {
      v63 = (unsigned int *)(v69 - 8);
      if ( &pthread_create )
      {
        do
          v64 = __ldaxr(v63);
        while ( __stlxr(v64 - 1, v63) );
      }
      else
      {
        v64 = (*v63)--;
      }
      if ( v64 <= 0 )
        operator delete(v23);
    }
    v24 = (void *)(v67 - 24);
    if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
    {
      v65 = (unsigned int *)(v67 - 8);
      if ( &pthread_create )
      {
        do
          v66 = __ldaxr(v65);
        while ( __stlxr(v66 - 1, v65) );
      }
      else
      {
        v66 = (*v65)--;
      }
      if ( v66 <= 0 )
        operator delete(v24);
    }
  }
  sub_566BB8((int)&v67, "Randomize");
  v68 = 11;
  sub_56A528(&v69, &v67);
  v70 = 0;
  v71 = 0;
  v25 = *(_QWORD *)(a2 + 8);
  if ( v25 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v25 = v68;
    sub_56A528(v25 + 8, &v69);
    *(_DWORD *)(v25 + 24) = v71;
    *(_QWORD *)(v25 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v26 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)(v69 - 8);
    if ( &pthread_create )
    {
      do
        v48 = __ldaxr(v47);
      while ( __stlxr(v48 - 1, v47) );
    }
    else
    {
      v48 = (*v47)--;
    }
    if ( v48 <= 0 )
      operator delete(v26);
  }
  v27 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v49 = (unsigned int *)(v67 - 8);
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
    if ( v50 <= 0 )
      operator delete(v27);
  }
  sub_566BB8((int)&v67, "Apply changes");
  v68 = 12;
  sub_56A528(&v69, &v67);
  v70 = 0;
  v71 = 0;
  v28 = *(_QWORD *)(a2 + 8);
  if ( v28 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v28 = v68;
    sub_56A528(v28 + 8, &v69);
    *(_DWORD *)(v28 + 24) = v71;
    *(_QWORD *)(v28 + 16) = v70;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v29 = (void *)(v69 - 24);
  if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
  {
    v51 = (unsigned int *)(v69 - 8);
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
    if ( v52 <= 0 )
      operator delete(v29);
  }
  v30 = (void *)(v67 - 24);
  if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
  {
    v53 = (unsigned int *)(v67 - 8);
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
    if ( v54 <= 0 )
      operator delete(v30);
  }
}

