/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000226F20
 * Mangled: _ZN5Caver33ModelTransformControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F9210  Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F9210  Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 410
 *   insn=0x0000000000226F38 string=0x0000000000226F3C "W"
 *   insn=0x0000000000226F4C string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000226F50 string=0x0000000000584128 "originX"
 *   insn=0x0000000000226F78 string=0x0000000000226F7C "k"
 *   insn=0x0000000000226F80 string=0x0000000000226F84 ""
 *   insn=0x0000000000226F90 string=0x0000000000226F94 "t"
 *   insn=0x0000000000226FA4 string=0x0000000000226FA8 ""
 *   insn=0x0000000000226FAC string=0x0000000000226FB0 "^"
 *   insn=0x0000000000226FB4 string=0x0000000000226FB8 "\t\t@"
 *   insn=0x0000000000226FBC string=0x0000000000226FC0 ""
 *   insn=0x0000000000226FC4 string=0x0000000000226FC8 "h"
 *   insn=0x0000000000226FC8 string=0x0000000000226FCC ""
 *   insn=0x0000000000226FCC string=0x0000000000226FD0 "h"
 *   insn=0x0000000000226FE0 string=0x0000000000226FE4 "?B"
 *   insn=0x0000000000226FE4 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000226FF8 string=0x0000000000226FFC "!("
 *   insn=0x0000000000227010 string=0x0000000000584130 "originY"
 *   insn=0x0000000000227038 string=0x000000000022703C ";"
 *   insn=0x0000000000227048 string=0x000000000022704C "t"
 *   insn=0x000000000022705C string=0x0000000000227060 ""
 *   insn=0x0000000000227064 string=0x0000000000227068 "0"
 *   insn=0x0000000000227068 string=0x000000000022706C "C"
 *   insn=0x000000000022706C string=0x0000000000227070 "\t\t@"
 *   insn=0x0000000000227074 string=0x0000000000227078 ""
 *   insn=0x000000000022707C string=0x0000000000227080 "h"
 *   insn=0x0000000000227080 string=0x0000000000227084 ""
 *   insn=0x0000000000227084 string=0x0000000000227088 "h"
 *   insn=0x00000000002270C0 string=0x0000000000584138 "originZ"
 *   insn=0x00000000002270F8 string=0x00000000002270FC "t"
 *   insn=0x000000000022710C string=0x0000000000227110 ""
 *   insn=0x0000000000227118 string=0x000000000022711C "C"
 *   insn=0x000000000022711C string=0x0000000000227120 "\t\t@"
 *   insn=0x0000000000227124 string=0x0000000000227128 ""
 *   insn=0x000000000022712C string=0x0000000000227130 "h"
 *   insn=0x0000000000227130 string=0x0000000000227134 ""
 *   insn=0x0000000000227134 string=0x0000000000227138 "h"
 *   insn=0x0000000000227168 string=0x000000000022716C "A""
 *   insn=0x0000000000227170 string=0x0000000000584140 "rotationAxisX"
 *   insn=0x00000000002271A4 string=0x00000000002271A8 "t"
 *   insn=0x00000000002271B8 string=0x00000000002271BC ""
 *   insn=0x00000000002271C4 string=0x00000000002271C8 "C"
 *   insn=0x00000000002271C8 string=0x00000000002271CC "\t\t@"
 *   insn=0x00000000002271D0 string=0x00000000002271D4 ""
 *   insn=0x00000000002271D8 string=0x00000000002271DC "h"
 *   insn=0x00000000002271DC string=0x00000000002271E0 ""
 *   insn=0x00000000002271E0 string=0x00000000002271E4 "h"
 *   insn=0x0000000000227214 string=0x0000000000227218 "!"
 *   insn=0x000000000022721C string=0x000000000058414E "rotationAxisY"
 *   insn=0x0000000000227228 string=0x000000000022722C "c"
 *   insn=0x0000000000227254 string=0x0000000000227258 "t"
 *   insn=0x0000000000227268 string=0x000000000022726C ""
 *   insn=0x0000000000227274 string=0x0000000000227278 "C"
 *   insn=0x0000000000227278 string=0x000000000022727C "\t\t@"
 *   insn=0x0000000000227280 string=0x0000000000227284 ""
 *   insn=0x0000000000227288 string=0x000000000022728C "h"
 *   insn=0x000000000022728C string=0x0000000000227290 ""
 *   insn=0x0000000000227290 string=0x0000000000227294 "h"
 *   insn=0x00000000002272B4 string=0x00000000002272B8 "A"
 *   insn=0x00000000002272CC string=0x000000000058415C "rotationAxisZ"
 *   insn=0x00000000002272D8 string=0x00000000002272DC "7"
 *   insn=0x0000000000227304 string=0x0000000000227308 "t"
 *   insn=0x0000000000227318 string=0x000000000022731C ""
 *   insn=0x0000000000227324 string=0x0000000000227328 "C"
 *   insn=0x0000000000227328 string=0x000000000022732C "\t\t@"
 *   insn=0x0000000000227330 string=0x0000000000227334 ""
 *   insn=0x0000000000227338 string=0x000000000022733C "h"
 *   insn=0x000000000022733C string=0x0000000000227340 ""
 *   insn=0x0000000000227340 string=0x0000000000227344 "h"
 *   insn=0x0000000000227354 string=0x0000000000227358 "bA"
 *   insn=0x000000000022737C string=0x000000000058416A "rotationAngle"
 *   insn=0x0000000000227388 string=0x000000000022738C ""
 *   insn=0x00000000002273A4 string=0x00000000002273A8 "`"
 *   insn=0x00000000002273B0 string=0x00000000002273B4 "t"
 *   insn=0x00000000002273C4 string=0x00000000002273C8 ""
 *   insn=0x00000000002273CC string=0x00000000002273D0 "V"
 *   insn=0x00000000002273D0 string=0x00000000002273D4 "C"
 *   insn=0x00000000002273D4 string=0x00000000002273D8 "\t\t@"
 *   insn=0x00000000002273DC string=0x00000000002273E0 ""
 *   insn=0x00000000002273E4 string=0x00000000002273E8 "h"
 *   insn=0x00000000002273E8 string=0x00000000002273EC ""
 *   insn=0x00000000002273EC string=0x00000000002273F0 "h"
 *   insn=0x0000000000227400 string=0x0000000000227404 "7A"
 *   insn=0x0000000000227428 string=0x0000000000584178 "rotationSpeed"
 *   insn=0x0000000000227450 string=0x0000000000227454 "5"
 *   insn=0x000000000022745C string=0x0000000000227460 "t"
 *   insn=0x0000000000227470 string=0x0000000000227474 ""
 *   insn=0x0000000000227478 string=0x000000000022747C "+"
 *   insn=0x000000000022747C string=0x0000000000227480 "C"
 *   insn=0x0000000000227480 string=0x0000000000227484 "\t\t@"
 *   insn=0x0000000000227488 string=0x000000000022748C ""
 *   insn=0x0000000000227490 string=0x0000000000227494 "h"
 *   insn=0x0000000000227494 string=0x0000000000227498 ""
 *   insn=0x0000000000227498 string=0x000000000022749C "h"
 *   insn=0x00000000002274CC string=0x00000000002274D0 "a"
 *   insn=0x00000000002274E0 string=0x0000000000227940 "d:"
 *   insn=0x0000000000227500 string=0x0000000000227504 ")=G"
 *   insn=0x0000000000227504 string=0x0000000000227508 "!"
 *   insn=0x000000000022750C string=0x0000000000227510 "\t"
 *   insn=0x000000000022750C string=0x0000000000227740 "\t"
 *   insn=0x0000000000227510 string=0x0000000000227514 "*"
 *   insn=0x0000000000227514 string=0x0000000000227518 "\n"
 *   insn=0x0000000000227520 string=0x000000000022774C "?"
 *   insn=0x0000000000227524 string=0x0000000000227528 ")=G"
 *   insn=0x0000000000227528 string=0x000000000022752C "!"
 *   insn=0x0000000000227530 string=0x0000000000227534 "\t"
 *   insn=0x0000000000227530 string=0x0000000000227760 "\t"
 *   insn=0x0000000000227534 string=0x0000000000227538 "*"
 *   insn=0x0000000000227538 string=0x000000000022753C "\n"
 *   insn=0x0000000000227544 string=0x000000000022776C "?"
 *   insn=0x0000000000227548 string=0x000000000022754C ")=G"
 *   insn=0x000000000022754C string=0x0000000000227550 "!"
 *   insn=0x0000000000227550 string=0x0000000000227554 "i"
 *   insn=0x0000000000227554 string=0x0000000000227558 "\t"
 *   insn=0x0000000000227554 string=0x0000000000227780 "\t"
 *   insn=0x0000000000227558 string=0x000000000022755C "*"
 *   insn=0x000000000022755C string=0x0000000000227560 "\n"
 *   insn=0x0000000000227568 string=0x000000000022778C "?"
 *   insn=0x000000000022756C string=0x0000000000227570 ")=G"
 *   insn=0x0000000000227570 string=0x0000000000227574 "!"
 *   insn=0x0000000000227574 string=0x0000000000227578 "I"
 *   insn=0x0000000000227578 string=0x000000000022757C "\t"
 *   insn=0x0000000000227578 string=0x00000000002277A0 "\t"
 *   insn=0x000000000022757C string=0x0000000000227580 "*"
 *   insn=0x0000000000227580 string=0x0000000000227584 "\n"
 *   insn=0x000000000022758C string=0x00000000002277AC "?"
 *   insn=0x0000000000227590 string=0x0000000000227594 ")=G"
 *   insn=0x0000000000227594 string=0x0000000000227598 "!"
 *   insn=0x0000000000227598 string=0x000000000022759C ")"
 *   insn=0x000000000022759C string=0x00000000002275A0 "\t"
 *   insn=0x000000000022759C string=0x00000000002277C0 "\t"
 *   insn=0x00000000002275A0 string=0x00000000002275A4 "*"
 *   insn=0x00000000002275A4 string=0x00000000002275A8 "\n"
 *   insn=0x00000000002275B0 string=0x00000000002277CC "?"
 *   insn=0x00000000002275B4 string=0x00000000002275B8 ")=G"
 *   insn=0x00000000002275B8 string=0x00000000002275BC "!"
 *   insn=0x00000000002275BC string=0x00000000002275C0 "\t"
 *   insn=0x00000000002275C0 string=0x00000000002275C4 "\t"
 *   insn=0x00000000002275C0 string=0x00000000002277E0 "\t"
 *   insn=0x00000000002275C4 string=0x00000000002275C8 "*"
 *   insn=0x00000000002275C8 string=0x00000000002275CC "\n"
 *   insn=0x00000000002275D4 string=0x00000000002277EC "?"
 *   insn=0x00000000002275D8 string=0x00000000002275DC ")=G"
 *   insn=0x00000000002275DC string=0x00000000002275E0 "!"
 *   insn=0x00000000002275E4 string=0x00000000002275E8 "\t"
 *   insn=0x00000000002275E4 string=0x0000000000227800 "\t"
 *   insn=0x00000000002275E8 string=0x00000000002275EC "*"
 *   insn=0x00000000002275EC string=0x00000000002275F0 "\n"
 *   insn=0x00000000002275F8 string=0x000000000022780C "?"
 *   insn=0x00000000002275FC string=0x0000000000227600 ")=G"
 *   insn=0x0000000000227600 string=0x0000000000227604 "!"
 *   insn=0x0000000000227608 string=0x000000000022760C "\t"
 *   insn=0x0000000000227608 string=0x0000000000227820 "\t"
 *   insn=0x000000000022760C string=0x0000000000227610 "*"
 *   insn=0x0000000000227610 string=0x0000000000227614 "\n"
 *   insn=0x000000000022761C string=0x000000000022782C "?"
 *   insn=0x0000000000227620 string=0x0000000000227624 ")=G"
 *   insn=0x0000000000227624 string=0x0000000000227628 "!"
 *   insn=0x000000000022762C string=0x0000000000227630 "\t"
 *   insn=0x000000000022762C string=0x0000000000227840 "\t"
 *   insn=0x0000000000227630 string=0x0000000000227634 "*"
 *   insn=0x0000000000227634 string=0x0000000000227638 "\n"
 *   insn=0x0000000000227640 string=0x000000000022784C "?"
 *   insn=0x0000000000227644 string=0x0000000000227648 ")=G"
 *   insn=0x0000000000227648 string=0x000000000022764C "!"
 *   insn=0x0000000000227650 string=0x0000000000227654 "\t"
 *   insn=0x0000000000227650 string=0x0000000000227860 "\t"
 *   insn=0x0000000000227654 string=0x0000000000227658 "*"
 *   insn=0x0000000000227658 string=0x000000000022765C "\n"
 *   insn=0x0000000000227664 string=0x000000000022786C "?"
 *   insn=0x0000000000227668 string=0x000000000022766C ")=G"
 *   insn=0x000000000022766C string=0x0000000000227670 "!"
 *   insn=0x0000000000227670 string=0x0000000000227674 "i"
 *   insn=0x0000000000227674 string=0x0000000000227678 "\t"
 *   insn=0x0000000000227674 string=0x0000000000227880 "\t"
 *   insn=0x0000000000227678 string=0x000000000022767C "*"
 *   insn=0x000000000022767C string=0x0000000000227680 "\n"
 *   insn=0x0000000000227688 string=0x000000000022788C "?"
 *   insn=0x000000000022768C string=0x0000000000227690 ")=G"
 *   insn=0x0000000000227690 string=0x0000000000227694 "!"
 *   insn=0x0000000000227694 string=0x0000000000227698 "I"
 *   insn=0x0000000000227698 string=0x000000000022769C "\t"
 *   insn=0x0000000000227698 string=0x00000000002278A0 "\t"
 *   insn=0x000000000022769C string=0x00000000002276A0 "*"
 *   insn=0x00000000002276A0 string=0x00000000002276A4 "\n"
 *   insn=0x00000000002276AC string=0x00000000002278AC "?"
 *   insn=0x00000000002276B0 string=0x00000000002276B4 ")=G"
 *   insn=0x00000000002276B4 string=0x00000000002276B8 "!"
 *   insn=0x00000000002276B8 string=0x00000000002276BC ")"
 *   insn=0x00000000002276BC string=0x00000000002276C0 "\t"
 *   insn=0x00000000002276BC string=0x00000000002278C0 "\t"
 *   insn=0x00000000002276C0 string=0x00000000002276C4 "*"
 *   insn=0x00000000002276C4 string=0x00000000002276C8 "\n"
 *   insn=0x00000000002276D0 string=0x00000000002278CC "?"
 *   insn=0x00000000002276D4 string=0x00000000002276D8 ")=G"
 *   insn=0x00000000002276D8 string=0x00000000002276DC "!"
 *   insn=0x00000000002276DC string=0x00000000002276E0 "\t"
 *   insn=0x00000000002276E0 string=0x00000000002276E4 "\t"
 *   insn=0x00000000002276E0 string=0x00000000002278E0 "\t"
 *   insn=0x00000000002276E4 string=0x00000000002276E8 "*"
 *   insn=0x00000000002276E8 string=0x00000000002276EC "\n"
 *   insn=0x00000000002276F0 string=0x00000000002276F4 "~"
 *   insn=0x00000000002276F4 string=0x00000000002278EC "?"
 *   insn=0x00000000002276F8 string=0x00000000002276FC ")=G"
 *   insn=0x00000000002276FC string=0x0000000000227700 "!"
 *   insn=0x0000000000227704 string=0x0000000000227708 "\t"
 *   insn=0x0000000000227704 string=0x0000000000227900 "\t"
 *   insn=0x0000000000227708 string=0x000000000022770C "*"
 *   insn=0x000000000022770C string=0x0000000000227710 "\n"
 *   insn=0x0000000000227714 string=0x0000000000227718 "}"
 *   insn=0x0000000000227718 string=0x000000000022790C "?"
 *   insn=0x000000000022771C string=0x0000000000227720 ")=G"
 *   insn=0x0000000000227720 string=0x0000000000227724 "!"
 *   insn=0x0000000000227728 string=0x000000000022772C "\t"
 *   insn=0x0000000000227728 string=0x0000000000227920 "\t"
 *   insn=0x000000000022772C string=0x0000000000227730 "*"
 *   insn=0x0000000000227730 string=0x0000000000227734 "\n"
 *   insn=0x0000000000227738 string=0x000000000022773C "|"
 *   insn=0x000000000022773C string=0x000000000022792C "?"
 *   insn=0x0000000000227740 string=0x0000000000227744 "*"
 *   insn=0x0000000000227744 string=0x0000000000227748 "\n"
 *   insn=0x0000000000227758 string=0x000000000022775C ")"
 *   insn=0x0000000000227760 string=0x0000000000227764 "*"
 *   insn=0x0000000000227764 string=0x0000000000227768 "\n"
 *   insn=0x0000000000227774 string=0x0000000000227778 ""
 *   insn=0x0000000000227778 string=0x000000000022777C "%"
 *   insn=0x0000000000227780 string=0x0000000000227784 "*"
 *   insn=0x0000000000227784 string=0x0000000000227788 "\n"
 *   insn=0x0000000000227798 string=0x000000000022779C "E"
 *   insn=0x00000000002277A0 string=0x00000000002277A4 "*"
 *   insn=0x00000000002277A4 string=0x00000000002277A8 "\n"
 *   insn=0x00000000002277B8 string=0x00000000002277BC "A"
 *   insn=0x00000000002277C0 string=0x00000000002277C4 "*"
 *   insn=0x00000000002277C4 string=0x00000000002277C8 "\n"
 *   insn=0x00000000002277D8 string=0x00000000002277DC "a"
 *   insn=0x00000000002277E0 string=0x00000000002277E4 "*"
 *   insn=0x00000000002277E4 string=0x00000000002277E8 "\n"
 *   insn=0x00000000002277F8 string=0x00000000002277FC "]"
 *   insn=0x0000000000227800 string=0x0000000000227804 "*"
 *   insn=0x0000000000227804 string=0x0000000000227808 "\n"
 *   insn=0x0000000000227818 string=0x000000000022781C "|"
 *   insn=0x0000000000227820 string=0x0000000000227824 "*"
 *   insn=0x0000000000227824 string=0x0000000000227828 "\n"
 *   insn=0x000000000022782C string=0x0000000000227830 "l"
 *   insn=0x0000000000227838 string=0x000000000022783C "x"
 *   insn=0x0000000000227840 string=0x0000000000227844 "*"
 *   insn=0x0000000000227844 string=0x0000000000227848 "\n"
 *   insn=0x000000000022784C string=0x0000000000227850 "l"
 *   insn=0x0000000000227860 string=0x0000000000227864 "*"
 *   insn=0x0000000000227864 string=0x0000000000227868 "\n"
 *   insn=0x0000000000227880 string=0x0000000000227884 "*"
 *   insn=0x0000000000227884 string=0x0000000000227888 "\n"
 *   insn=0x00000000002278A0 string=0x00000000002278A4 "*"
 *   insn=0x00000000002278A4 string=0x00000000002278A8 "\n"
 *   insn=0x00000000002278AC string=0x00000000002278B0 "l"
 *   insn=0x00000000002278C0 string=0x00000000002278C4 "*"
 *   insn=0x00000000002278C4 string=0x00000000002278C8 "\n"
 *   insn=0x00000000002278CC string=0x00000000002278D0 "L"
 *   insn=0x00000000002278E0 string=0x00000000002278E4 "*"
 *   insn=0x00000000002278E4 string=0x00000000002278E8 "\n"
 *   insn=0x0000000000227900 string=0x0000000000227904 "*"
 *   insn=0x0000000000227904 string=0x0000000000227908 "\n"
 *   insn=0x0000000000227920 string=0x0000000000227924 "*"
 *   insn=0x0000000000227924 string=0x0000000000227928 "\n"
 *   insn=0x000000000022792C string=0x0000000000227930 ","
 *   insn=0x0000000000227940 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000227948 string=0x000000000022794C "(a"
 *   insn=0x0000000000227958 string=0x000000000022795C "J=G"
 *   insn=0x000000000022795C string=0x0000000000227960 ")!"
 *   insn=0x0000000000227964 string=0x0000000000227968 "*"
 *   insn=0x0000000000227964 string=0x000000000022797C "*"
 *   insn=0x0000000000227968 string=0x000000000022796C "K"
 *   insn=0x000000000022796C string=0x0000000000227970 "+"
 *   insn=0x0000000000227978 string=0x0000000000227988 "_"
 *   insn=0x000000000022797C string=0x0000000000227980 "K"
 *   insn=0x0000000000227980 string=0x0000000000227984 "+"
 *   insn=0x00000000002279AC string=0x00000000002279B0 "`#"
 *   insn=0x00000000002279B4 string=0x00000000002279B8 ")=G"
 *   insn=0x00000000002279B8 string=0x00000000002279BC "!"
 *   insn=0x00000000002279BC string=0x00000000002279C0 ")#"
 *   insn=0x00000000002279C0 string=0x00000000002279C4 "\t"
 *   insn=0x00000000002279C0 string=0x0000000000227E24 "\t"
 *   insn=0x00000000002279C4 string=0x00000000002279C8 "*"
 *   insn=0x00000000002279C8 string=0x00000000002279CC "\n"
 *   insn=0x00000000002279D4 string=0x0000000000227E0C "?"
 *   insn=0x00000000002279E0 string=0x00000000002279E4 "(a"
 *   insn=0x00000000002279F0 string=0x00000000002279F4 "J=G"
 *   insn=0x00000000002279F4 string=0x00000000002279F8 ")!"
 *   insn=0x00000000002279FC string=0x0000000000227A00 "*"
 *   insn=0x00000000002279FC string=0x0000000000227A14 "*"
 *   insn=0x0000000000227A00 string=0x0000000000227A04 "K"
 *   insn=0x0000000000227A04 string=0x0000000000227A08 "+"
 *   insn=0x0000000000227A10 string=0x0000000000227A20 "_"
 *   insn=0x0000000000227A14 string=0x0000000000227A18 "K"
 *   insn=0x0000000000227A18 string=0x0000000000227A1C "+"
 *   insn=0x0000000000227A2C string=0x0000000000227A30 "]\n"
 *   insn=0x0000000000227A4C string=0x0000000000227A50 ")=G"
 *   insn=0x0000000000227A50 string=0x0000000000227A54 "!"
 *   insn=0x0000000000227A54 string=0x0000000000227A58 "i"
 *   insn=0x0000000000227A58 string=0x0000000000227A5C "\t"
 *   insn=0x0000000000227A5C string=0x0000000000227A60 "*"
 *   insn=0x0000000000227A60 string=0x0000000000227A64 "\n"
 *   insn=0x0000000000227A78 string=0x0000000000227A7C "(a"
 *   insn=0x0000000000227A88 string=0x0000000000227A8C "J=G"
 *   insn=0x0000000000227A8C string=0x0000000000227A90 ")!"
 *   insn=0x0000000000227A94 string=0x0000000000227A98 "*"
 *   insn=0x0000000000227A94 string=0x0000000000227AAC "*"
 *   insn=0x0000000000227A98 string=0x0000000000227A9C "K"
 *   insn=0x0000000000227A9C string=0x0000000000227AA0 "+"
 *   insn=0x0000000000227AA8 string=0x0000000000227AB8 "_"
 *   insn=0x0000000000227AAC string=0x0000000000227AB0 "K"
 *   insn=0x0000000000227AB0 string=0x0000000000227AB4 "+"
 *   insn=0x0000000000227AC4 string=0x0000000000227AC8 "7\n"
 *   insn=0x0000000000227AE4 string=0x0000000000227AE8 ")=G"
 *   insn=0x0000000000227AE8 string=0x0000000000227AEC "!"
 *   insn=0x0000000000227AF0 string=0x0000000000227AF4 "\t"
 *   insn=0x0000000000227AF4 string=0x0000000000227AF8 "*"
 *   insn=0x0000000000227AF8 string=0x0000000000227AFC "\n"
 *   insn=0x0000000000227B10 string=0x0000000000227B14 "(a"
 *   insn=0x0000000000227B20 string=0x0000000000227B24 "J=G"
 *   insn=0x0000000000227B24 string=0x0000000000227B28 ")!"
 *   insn=0x0000000000227B2C string=0x0000000000227B30 "*"
 *   insn=0x0000000000227B2C string=0x0000000000227B44 "*"
 *   insn=0x0000000000227B30 string=0x0000000000227B34 "K"
 *   insn=0x0000000000227B34 string=0x0000000000227B38 "+"
 *   insn=0x0000000000227B40 string=0x0000000000227B50 "_"
 *   insn=0x0000000000227B44 string=0x0000000000227B48 "K"
 *   insn=0x0000000000227B48 string=0x0000000000227B4C "+"
 *   insn=0x0000000000227B74 string=0x0000000000227B78 " "
 *   insn=0x0000000000227B7C string=0x0000000000227B80 ")=G"
 *   insn=0x0000000000227B80 string=0x0000000000227B84 "!"
 *   insn=0x0000000000227B88 string=0x0000000000227B8C "\t"
 *   insn=0x0000000000227B8C string=0x0000000000227B90 "*"
 *   insn=0x0000000000227B90 string=0x0000000000227B94 "\n"
 *   insn=0x0000000000227BA8 string=0x0000000000227BAC "(a"
 *   insn=0x0000000000227BB8 string=0x0000000000227BBC "J=G"
 *   insn=0x0000000000227BBC string=0x0000000000227BC0 ")!"
 *   insn=0x0000000000227BC4 string=0x0000000000227BC8 "*"
 *   insn=0x0000000000227BC4 string=0x0000000000227BDC "*"
 *   insn=0x0000000000227BC8 string=0x0000000000227BCC "K"
 *   insn=0x0000000000227BCC string=0x0000000000227BD0 "+"
 *   insn=0x0000000000227BD8 string=0x0000000000227BE8 "_"
 *   insn=0x0000000000227BDC string=0x0000000000227BE0 "K"
 *   insn=0x0000000000227BE0 string=0x0000000000227BE4 "+"
 *   insn=0x0000000000227C0C string=0x0000000000227C10 "`"
 *   insn=0x0000000000227C14 string=0x0000000000227C18 ")=G"
 *   insn=0x0000000000227C18 string=0x0000000000227C1C "!"
 *   insn=0x0000000000227C1C string=0x0000000000227C20 ")"
 *   insn=0x0000000000227C20 string=0x0000000000227C24 "\t"
 *   insn=0x0000000000227C24 string=0x0000000000227C28 "*"
 *   insn=0x0000000000227C28 string=0x0000000000227C2C "\n"
 *   insn=0x0000000000227C30 string=0x0000000000227C34 "v"
 *   insn=0x0000000000227C40 string=0x0000000000227C44 "(a"
 *   insn=0x0000000000227C50 string=0x0000000000227C54 "J=G"
 *   insn=0x0000000000227C54 string=0x0000000000227C58 ")!"
 *   insn=0x0000000000227C5C string=0x0000000000227C60 "*"
 *   insn=0x0000000000227C5C string=0x0000000000227C74 "*"
 *   insn=0x0000000000227C60 string=0x0000000000227C64 "K"
 *   insn=0x0000000000227C64 string=0x0000000000227C68 "+"
 *   insn=0x0000000000227C70 string=0x0000000000227C80 "_"
 *   insn=0x0000000000227C74 string=0x0000000000227C78 "K"
 *   insn=0x0000000000227C78 string=0x0000000000227C7C "+"
 *   insn=0x0000000000227CAC string=0x0000000000227CB0 ")=G"
 *   insn=0x0000000000227CB0 string=0x0000000000227CB4 "!"
 *   insn=0x0000000000227CB4 string=0x0000000000227CB8 "i"
 *   insn=0x0000000000227CB8 string=0x0000000000227CBC "\t"
 *   insn=0x0000000000227CBC string=0x0000000000227CC0 "*"
 *   insn=0x0000000000227CC0 string=0x0000000000227CC4 "\n"
 *   insn=0x0000000000227CC8 string=0x0000000000227CCC "P"
 *   insn=0x0000000000227CD8 string=0x0000000000227CDC "(a"
 *   insn=0x0000000000227CE8 string=0x0000000000227CEC "J=G"
 *   insn=0x0000000000227CEC string=0x0000000000227CF0 ")!"
 *   insn=0x0000000000227CF4 string=0x0000000000227CF8 "*"
 *   insn=0x0000000000227CF4 string=0x0000000000227D0C "*"
 *   insn=0x0000000000227CF8 string=0x0000000000227CFC "K"
 *   insn=0x0000000000227CFC string=0x0000000000227D00 "+"
 *   insn=0x0000000000227D08 string=0x0000000000227D18 "_"
 *   insn=0x0000000000227D0C string=0x0000000000227D10 "K"
 *   insn=0x0000000000227D10 string=0x0000000000227D14 "+"
 *   insn=0x0000000000227D44 string=0x0000000000227D48 ")=G"
 *   insn=0x0000000000227D48 string=0x0000000000227D4C "!"
 *   insn=0x0000000000227D50 string=0x0000000000227D54 "\t"
 *   insn=0x0000000000227D54 string=0x0000000000227D58 "*"
 *   insn=0x0000000000227D58 string=0x0000000000227D5C "\n"
 *   insn=0x0000000000227D60 string=0x0000000000227D64 "*"
 *   insn=0x0000000000227D70 string=0x0000000000227D74 "J"
 *   insn=0x0000000000227D78 string=0x0000000000227D7C "(a"
 *   insn=0x0000000000227D88 string=0x0000000000227D8C "J=G"
 *   insn=0x0000000000227D8C string=0x0000000000227D90 ")!"
 *   insn=0x0000000000227D94 string=0x0000000000227D98 "*"
 *   insn=0x0000000000227D94 string=0x0000000000227DAC "*"
 *   insn=0x0000000000227D98 string=0x0000000000227D9C "K"
 *   insn=0x0000000000227D9C string=0x0000000000227DA0 "+"
 *   insn=0x0000000000227DA8 string=0x0000000000227DB8 "_"
 *   insn=0x0000000000227DAC string=0x0000000000227DB0 "K"
 *   insn=0x0000000000227DB0 string=0x0000000000227DB4 "+"
 *   insn=0x0000000000227DC4 string=0x0000000000227DC8 "w\t"
 *   insn=0x0000000000227DD8 string=0x0000000000227DDC ")"
 *   insn=0x0000000000227DEC string=0x0000000000227DF0 ")=G"
 *   insn=0x0000000000227DF0 string=0x0000000000227DF4 "!"
 *   insn=0x0000000000227DF4 string=0x0000000000227DF8 "i"
 *   insn=0x0000000000227DF8 string=0x0000000000227DFC "\t"
 *   insn=0x0000000000227DFC string=0x0000000000227E00 "*"
 *   insn=0x0000000000227E00 string=0x0000000000227E04 "\n"
 *   insn=0x0000000000227E0C string=0x0000000000227E10 "l"
 *   insn=0x0000000000227E14 string=0x0000000000227E18 "c\t"
 *   insn=0x0000000000227E24 string=0x0000000000227E28 "*"
 *   insn=0x0000000000227E28 string=0x0000000000227E2C "\n"
 *   insn=0x0000000000227E2C string=0x0000000000227E30 "?"
 *   insn=0x0000000000227E30 string=0x0000000000227E34 ""
 *   insn=0x0000000000227E44 string=0x00000000001F9210 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v21; // x20
  void *v22; // x0
  void *v23; // x0
  __int64 v24; // x20
  void *v25; // x0
  void *v26; // x0
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
  __int64 v59; // [xsp+8h] [xbp-78h] BYREF
  int v60; // [xsp+18h] [xbp-68h]
  __int64 v61; // [xsp+20h] [xbp-60h] BYREF
  __int64 v62; // [xsp+28h] [xbp-58h]
  int v63; // [xsp+30h] [xbp-50h]
  __int64 v64; // [xsp+38h] [xbp-48h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v59, "originX");
  v60 = 1;
  sub_56A528(&v61, &v59);
  v63 = 4;
  v62 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v60;
    sub_56A528(v3 + 8, &v61);
    *(_DWORD *)(v3 + 24) = v63;
    *(_QWORD *)(v3 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v61 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v59 - 8);
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
      operator delete(v5);
  }
  sub_566BB8((int)&v59, "originY");
  v60 = 2;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 4;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v60;
    sub_56A528(v6 + 8, &v61);
    *(_DWORD *)(v6 + 24) = v63;
    *(_QWORD *)(v6 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v61 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v59 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v59, "originZ");
  v60 = 3;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 4;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v60;
    sub_56A528(v9 + 8, &v61);
    *(_DWORD *)(v9 + 24) = v63;
    *(_QWORD *)(v9 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v61 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v59 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v59, "rotationAxisX");
  v60 = 4;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 4;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v60;
    sub_56A528(v12 + 8, &v61);
    *(_DWORD *)(v12 + 24) = v63;
    *(_QWORD *)(v12 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v61 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v59 - 8);
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
      operator delete(v14);
  }
  sub_566BB8((int)&v59, "rotationAxisY");
  v60 = 5;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 4;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v60;
    sub_56A528(v15 + 8, &v61);
    *(_DWORD *)(v15 + 24) = v63;
    *(_QWORD *)(v15 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v61 - 8);
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
      operator delete(v16);
  }
  v17 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v59 - 8);
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
      operator delete(v17);
  }
  sub_566BB8((int)&v59, "rotationAxisZ");
  v60 = 6;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 4;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v60;
    sub_56A528(v18 + 8, &v61);
    *(_DWORD *)(v18 + 24) = v63;
    *(_QWORD *)(v18 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)(v61 - 8);
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
      operator delete(v19);
  }
  v20 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v49 = (unsigned int *)(v59 - 8);
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
      operator delete(v20);
  }
  sub_566BB8((int)&v59, "rotationAngle");
  v60 = 7;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v21 = *(_QWORD *)(a2 + 8);
  if ( v21 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v21 = v60;
    sub_56A528(v21 + 8, &v61);
    *(_DWORD *)(v21 + 24) = v63;
    *(_QWORD *)(v21 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v22 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v51 = (unsigned int *)(v61 - 8);
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
      operator delete(v22);
  }
  v23 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v53 = (unsigned int *)(v59 - 8);
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
      operator delete(v23);
  }
  sub_566BB8((int)&v59, "rotationSpeed");
  v60 = 8;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v24 = v60;
    sub_56A528(v24 + 8, &v61);
    *(_DWORD *)(v24 + 24) = v63;
    *(_QWORD *)(v24 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v25 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v55 = (unsigned int *)(v61 - 8);
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
      operator delete(v25);
  }
  v26 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v57 = (unsigned int *)(v59 - 8);
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
      operator delete(v26);
  }
}

