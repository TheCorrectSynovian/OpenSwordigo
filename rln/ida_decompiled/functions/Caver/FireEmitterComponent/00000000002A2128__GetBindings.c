/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2128
 * Mangled: _ZN5Caver20FireEmitterComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FC7C0  Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FC7C0  Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 306
 *   insn=0x00000000002A2140 string=0x00000000002A2144 "W"
 *   insn=0x00000000002A2154 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002A2158 string=0x0000000000584070 "origin"
 *   insn=0x00000000002A2184 string=0x00000000002A2188 ""
 *   insn=0x00000000002A2188 string=0x00000000002A218C "}G"
 *   insn=0x00000000002A2194 string=0x00000000002A2198 "t"
 *   insn=0x00000000002A21A8 string=0x00000000002A21AC ""
 *   insn=0x00000000002A21B8 string=0x00000000002A21BC "\t\t@"
 *   insn=0x00000000002A21C0 string=0x00000000002A21C4 ""
 *   insn=0x00000000002A21C8 string=0x00000000002A21CC "h"
 *   insn=0x00000000002A21CC string=0x00000000002A21D0 ""
 *   insn=0x00000000002A21D0 string=0x00000000002A21D4 "h"
 *   insn=0x00000000002A21E8 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002A2200 string=0x00000000002A2500 "\t""
 *   insn=0x00000000002A2210 string=0x00000000002A2524 "\t""
 *   insn=0x00000000002A2214 string=0x0000000000583F83 "color"
 *   insn=0x00000000002A2220 string=0x00000000002A2224 "e"
 *   insn=0x00000000002A2240 string=0x00000000002A2244 ""
 *   insn=0x00000000002A2250 string=0x00000000002A2254 "t"
 *   insn=0x00000000002A2264 string=0x00000000002A2268 ""
 *   insn=0x00000000002A2270 string=0x00000000002A2274 "C"
 *   insn=0x00000000002A2274 string=0x00000000002A2278 "\t\t@"
 *   insn=0x00000000002A227C string=0x00000000002A2280 ""
 *   insn=0x00000000002A2284 string=0x00000000002A2288 "h"
 *   insn=0x00000000002A2288 string=0x00000000002A228C ""
 *   insn=0x00000000002A228C string=0x00000000002A2290 "h"
 *   insn=0x00000000002A22B4 string=0x00000000002A2548 "\t""
 *   insn=0x00000000002A22C0 string=0x00000000002A22C4 "A"
 *   insn=0x00000000002A22C4 string=0x00000000002A22C8 "!"
 *   insn=0x00000000002A22C4 string=0x00000000002A256C "\t""
 *   insn=0x00000000002A22C8 string=0x0000000000589558 "particleInterval"
 *   insn=0x00000000002A22D4 string=0x00000000002A22D8 "8"
 *   insn=0x00000000002A22F4 string=0x00000000002A22F8 ""
 *   insn=0x00000000002A22F8 string=0x00000000002A22FC "\t"
 *   insn=0x00000000002A2304 string=0x00000000002A2308 "t"
 *   insn=0x00000000002A2318 string=0x00000000002A231C ""
 *   insn=0x00000000002A2324 string=0x00000000002A2328 "C"
 *   insn=0x00000000002A2328 string=0x00000000002A232C "\t\t@"
 *   insn=0x00000000002A2330 string=0x00000000002A2334 ""
 *   insn=0x00000000002A2338 string=0x00000000002A233C "h"
 *   insn=0x00000000002A233C string=0x00000000002A2340 ""
 *   insn=0x00000000002A2340 string=0x00000000002A2344 "h"
 *   insn=0x00000000002A2354 string=0x00000000002A2358 "bU"
 *   insn=0x00000000002A2364 string=0x00000000002A2368 "A"
 *   insn=0x00000000002A2368 string=0x00000000002A2590 "\t""
 *   insn=0x00000000002A2378 string=0x00000000002A237C "!"
 *   insn=0x00000000002A2378 string=0x00000000002A25B4 "\t""
 *   insn=0x00000000002A237C string=0x0000000000589569 "particleMaxAge"
 *   insn=0x00000000002A2388 string=0x00000000002A238C ""
 *   insn=0x00000000002A23A4 string=0x00000000002A23A8 "` "
 *   insn=0x00000000002A23B0 string=0x00000000002A23B4 "t"
 *   insn=0x00000000002A23C4 string=0x00000000002A23C8 ""
 *   insn=0x00000000002A23CC string=0x00000000002A23D0 "V "
 *   insn=0x00000000002A23D0 string=0x00000000002A23D4 "C"
 *   insn=0x00000000002A23D4 string=0x00000000002A23D8 "\t\t@"
 *   insn=0x00000000002A23DC string=0x00000000002A23E0 ""
 *   insn=0x00000000002A23E4 string=0x00000000002A23E8 "h"
 *   insn=0x00000000002A23E8 string=0x00000000002A23EC ""
 *   insn=0x00000000002A23EC string=0x00000000002A23F0 "h"
 *   insn=0x00000000002A2400 string=0x00000000002A2404 "7U"
 *   insn=0x00000000002A2410 string=0x00000000002A2414 "!"
 *   insn=0x00000000002A2414 string=0x00000000002A25D8 "\t""
 *   insn=0x00000000002A2424 string=0x00000000002A2428 "!"
 *   insn=0x00000000002A2424 string=0x00000000002A25FC "\t""
 *   insn=0x00000000002A2428 string=0x0000000000589578 "particleSpread"
 *   insn=0x00000000002A2450 string=0x00000000002A2454 "5 "
 *   insn=0x00000000002A245C string=0x00000000002A2460 "t"
 *   insn=0x00000000002A2470 string=0x00000000002A2474 ""
 *   insn=0x00000000002A2478 string=0x00000000002A247C "+ "
 *   insn=0x00000000002A247C string=0x00000000002A2480 "C"
 *   insn=0x00000000002A2480 string=0x00000000002A2484 "\t\t@"
 *   insn=0x00000000002A2488 string=0x00000000002A248C ""
 *   insn=0x00000000002A2490 string=0x00000000002A2494 "h"
 *   insn=0x00000000002A2494 string=0x00000000002A2498 ""
 *   insn=0x00000000002A2498 string=0x00000000002A249C "h"
 *   insn=0x00000000002A24C0 string=0x00000000002A2620 "\t""
 *   insn=0x00000000002A24D0 string=0x00000000002A2644 "\t""
 *   insn=0x00000000002A24DC string=0x00000000002A24E0 "A"
 *   insn=0x00000000002A2500 string=0x00000000002A2504 ")=G"
 *   insn=0x00000000002A2504 string=0x00000000002A2508 "!"
 *   insn=0x00000000002A250C string=0x00000000002A2510 "\t"
 *   insn=0x00000000002A250C string=0x00000000002A2668 "\t"
 *   insn=0x00000000002A2510 string=0x00000000002A2514 "*"
 *   insn=0x00000000002A2514 string=0x00000000002A2518 "\n"
 *   insn=0x00000000002A251C string=0x00000000002A2520 "U"
 *   insn=0x00000000002A2520 string=0x00000000002A2674 "?"
 *   insn=0x00000000002A2524 string=0x00000000002A2528 ")=G"
 *   insn=0x00000000002A2528 string=0x00000000002A252C "!"
 *   insn=0x00000000002A2530 string=0x00000000002A2534 "\t"
 *   insn=0x00000000002A2530 string=0x00000000002A2688 "\t"
 *   insn=0x00000000002A2534 string=0x00000000002A2538 "*"
 *   insn=0x00000000002A2538 string=0x00000000002A253C "\n"
 *   insn=0x00000000002A2540 string=0x00000000002A2544 "T"
 *   insn=0x00000000002A2544 string=0x00000000002A2694 "?"
 *   insn=0x00000000002A2548 string=0x00000000002A254C ")=G"
 *   insn=0x00000000002A254C string=0x00000000002A2550 "!"
 *   insn=0x00000000002A2554 string=0x00000000002A2558 "\t"
 *   insn=0x00000000002A2554 string=0x00000000002A26A8 "\t"
 *   insn=0x00000000002A2558 string=0x00000000002A255C "*"
 *   insn=0x00000000002A255C string=0x00000000002A2560 "\n"
 *   insn=0x00000000002A2564 string=0x00000000002A2568 "S"
 *   insn=0x00000000002A2568 string=0x00000000002A26B4 "?"
 *   insn=0x00000000002A256C string=0x00000000002A2570 ")=G"
 *   insn=0x00000000002A2570 string=0x00000000002A2574 "!"
 *   insn=0x00000000002A2578 string=0x00000000002A257C "\t"
 *   insn=0x00000000002A2578 string=0x00000000002A26C8 "\t"
 *   insn=0x00000000002A257C string=0x00000000002A2580 "*"
 *   insn=0x00000000002A2580 string=0x00000000002A2584 "\n"
 *   insn=0x00000000002A2588 string=0x00000000002A258C "R"
 *   insn=0x00000000002A258C string=0x00000000002A26D4 "?"
 *   insn=0x00000000002A2590 string=0x00000000002A2594 ")=G"
 *   insn=0x00000000002A2594 string=0x00000000002A2598 "!"
 *   insn=0x00000000002A2598 string=0x00000000002A259C "i\n"
 *   insn=0x00000000002A259C string=0x00000000002A25A0 "\t"
 *   insn=0x00000000002A259C string=0x00000000002A26E8 "\t"
 *   insn=0x00000000002A25A0 string=0x00000000002A25A4 "*"
 *   insn=0x00000000002A25A4 string=0x00000000002A25A8 "\n"
 *   insn=0x00000000002A25AC string=0x00000000002A25B0 "Q"
 *   insn=0x00000000002A25B0 string=0x00000000002A26F4 "?"
 *   insn=0x00000000002A25B4 string=0x00000000002A25B8 ")=G"
 *   insn=0x00000000002A25B8 string=0x00000000002A25BC "!"
 *   insn=0x00000000002A25BC string=0x00000000002A25C0 "I\n"
 *   insn=0x00000000002A25C0 string=0x00000000002A25C4 "\t"
 *   insn=0x00000000002A25C0 string=0x00000000002A2708 "\t"
 *   insn=0x00000000002A25C4 string=0x00000000002A25C8 "*"
 *   insn=0x00000000002A25C8 string=0x00000000002A25CC "\n"
 *   insn=0x00000000002A25D0 string=0x00000000002A25D4 "P"
 *   insn=0x00000000002A25D4 string=0x00000000002A2714 "?"
 *   insn=0x00000000002A25D8 string=0x00000000002A25DC ")=G"
 *   insn=0x00000000002A25DC string=0x00000000002A25E0 "!"
 *   insn=0x00000000002A25E0 string=0x00000000002A25E4 ")\n"
 *   insn=0x00000000002A25E4 string=0x00000000002A25E8 "\t"
 *   insn=0x00000000002A25E4 string=0x00000000002A2728 "\t"
 *   insn=0x00000000002A25E8 string=0x00000000002A25EC "*"
 *   insn=0x00000000002A25EC string=0x00000000002A25F0 "\n"
 *   insn=0x00000000002A25F4 string=0x00000000002A25F8 "O"
 *   insn=0x00000000002A25F8 string=0x00000000002A2734 "?"
 *   insn=0x00000000002A25FC string=0x00000000002A2600 ")=G"
 *   insn=0x00000000002A2600 string=0x00000000002A2604 "!"
 *   insn=0x00000000002A2604 string=0x00000000002A2608 "\t\n"
 *   insn=0x00000000002A2608 string=0x00000000002A260C "\t"
 *   insn=0x00000000002A2608 string=0x00000000002A2748 "\t"
 *   insn=0x00000000002A260C string=0x00000000002A2610 "*"
 *   insn=0x00000000002A2610 string=0x00000000002A2614 "\n"
 *   insn=0x00000000002A2618 string=0x00000000002A261C "N"
 *   insn=0x00000000002A261C string=0x00000000002A2754 "?"
 *   insn=0x00000000002A2620 string=0x00000000002A2624 ")=G"
 *   insn=0x00000000002A2624 string=0x00000000002A2628 "!"
 *   insn=0x00000000002A262C string=0x00000000002A2630 "\t"
 *   insn=0x00000000002A262C string=0x00000000002A2768 "\t"
 *   insn=0x00000000002A2630 string=0x00000000002A2634 "*"
 *   insn=0x00000000002A2634 string=0x00000000002A2638 "\n"
 *   insn=0x00000000002A263C string=0x00000000002A2640 "M"
 *   insn=0x00000000002A2640 string=0x00000000002A2774 "?"
 *   insn=0x00000000002A2644 string=0x00000000002A2648 ")=G"
 *   insn=0x00000000002A2648 string=0x00000000002A264C "!"
 *   insn=0x00000000002A2650 string=0x00000000002A2654 "\t"
 *   insn=0x00000000002A2650 string=0x00000000002A2788 "\t"
 *   insn=0x00000000002A2654 string=0x00000000002A2658 "*"
 *   insn=0x00000000002A2658 string=0x00000000002A265C "\n"
 *   insn=0x00000000002A2660 string=0x00000000002A2664 "L"
 *   insn=0x00000000002A2664 string=0x00000000002A2794 "?"
 *   insn=0x00000000002A2668 string=0x00000000002A266C "*"
 *   insn=0x00000000002A266C string=0x00000000002A2670 "\n"
 *   insn=0x00000000002A2674 string=0x00000000002A2678 "l"
 *   insn=0x00000000002A267C string=0x00000000002A2680 "I"
 *   insn=0x00000000002A2688 string=0x00000000002A268C "*"
 *   insn=0x00000000002A268C string=0x00000000002A2690 "\n"
 *   insn=0x00000000002A269C string=0x00000000002A26A0 "A"
 *   insn=0x00000000002A26A8 string=0x00000000002A26AC "*"
 *   insn=0x00000000002A26AC string=0x00000000002A26B0 "\n"
 *   insn=0x00000000002A26BC string=0x00000000002A26C0 "9"
 *   insn=0x00000000002A26C8 string=0x00000000002A26CC "*"
 *   insn=0x00000000002A26CC string=0x00000000002A26D0 "\n"
 *   insn=0x00000000002A26DC string=0x00000000002A26E0 "1"
 *   insn=0x00000000002A26E8 string=0x00000000002A26EC "*"
 *   insn=0x00000000002A26EC string=0x00000000002A26F0 "\n"
 *   insn=0x00000000002A26FC string=0x00000000002A2700 ")"
 *   insn=0x00000000002A2708 string=0x00000000002A270C "*"
 *   insn=0x00000000002A270C string=0x00000000002A2710 "\n"
 *   insn=0x00000000002A2714 string=0x00000000002A2718 ","
 *   insn=0x00000000002A271C string=0x00000000002A2720 "!"
 *   insn=0x00000000002A2728 string=0x00000000002A272C "*"
 *   insn=0x00000000002A272C string=0x00000000002A2730 "\n"
 *   insn=0x00000000002A2740 string=0x00000000002A2744 "5"
 *   insn=0x00000000002A2748 string=0x00000000002A274C "*"
 *   insn=0x00000000002A274C string=0x00000000002A2750 "\n"
 *   insn=0x00000000002A2760 string=0x00000000002A2764 "1"
 *   insn=0x00000000002A2768 string=0x00000000002A276C "*"
 *   insn=0x00000000002A276C string=0x00000000002A2770 "\n"
 *   insn=0x00000000002A2774 string=0x00000000002A2778 "l"
 *   insn=0x00000000002A277C string=0x00000000002A2780 "\t"
 *   insn=0x00000000002A2780 string=0x00000000002A2784 "P"
 *   insn=0x00000000002A2788 string=0x00000000002A278C "*"
 *   insn=0x00000000002A278C string=0x00000000002A2790 "\n"
 *   insn=0x00000000002A27A0 string=0x00000000002A27A4 "L"
 *   insn=0x00000000002A27A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A27B0 string=0x00000000002A27B4 "(a"
 *   insn=0x00000000002A27BC string=0x00000000002A27C0 "\n""
 *   insn=0x00000000002A27C0 string=0x00000000002A27C4 "J=G"
 *   insn=0x00000000002A27C4 string=0x00000000002A27C8 ")!"
 *   insn=0x00000000002A27CC string=0x00000000002A27D0 "*"
 *   insn=0x00000000002A27CC string=0x00000000002A27E4 "*"
 *   insn=0x00000000002A27D0 string=0x00000000002A27D4 "K"
 *   insn=0x00000000002A27D4 string=0x00000000002A27D8 "+"
 *   insn=0x00000000002A27E0 string=0x00000000002A27F0 "_"
 *   insn=0x00000000002A27E4 string=0x00000000002A27E8 "K"
 *   insn=0x00000000002A27E8 string=0x00000000002A27EC "+"
 *   insn=0x00000000002A2814 string=0x00000000002A2818 " "
 *   insn=0x00000000002A2818 string=0x00000000002A281C "\t""
 *   insn=0x00000000002A281C string=0x00000000002A2820 ")=G"
 *   insn=0x00000000002A2820 string=0x00000000002A2824 "!"
 *   insn=0x00000000002A2828 string=0x00000000002A282C "\t"
 *   insn=0x00000000002A2828 string=0x00000000002A2AC4 "\t"
 *   insn=0x00000000002A282C string=0x00000000002A2830 "*"
 *   insn=0x00000000002A2830 string=0x00000000002A2834 "\n"
 *   insn=0x00000000002A283C string=0x00000000002A2AAC "?"
 *   insn=0x00000000002A2848 string=0x00000000002A284C "(a"
 *   insn=0x00000000002A2854 string=0x00000000002A2858 "\n""
 *   insn=0x00000000002A2858 string=0x00000000002A285C "J=G"
 *   insn=0x00000000002A285C string=0x00000000002A2860 ")!"
 *   insn=0x00000000002A2864 string=0x00000000002A2868 "*"
 *   insn=0x00000000002A2864 string=0x00000000002A287C "*"
 *   insn=0x00000000002A2868 string=0x00000000002A286C "K"
 *   insn=0x00000000002A286C string=0x00000000002A2870 "+"
 *   insn=0x00000000002A2878 string=0x00000000002A2888 "_"
 *   insn=0x00000000002A287C string=0x00000000002A2880 "K"
 *   insn=0x00000000002A2880 string=0x00000000002A2884 "+"
 *   insn=0x00000000002A28AC string=0x00000000002A28B0 "`"
 *   insn=0x00000000002A28B0 string=0x00000000002A28B4 "\t""
 *   insn=0x00000000002A28B4 string=0x00000000002A28B8 ")=G"
 *   insn=0x00000000002A28B8 string=0x00000000002A28BC "!"
 *   insn=0x00000000002A28BC string=0x00000000002A28C0 ")"
 *   insn=0x00000000002A28C0 string=0x00000000002A28C4 "\t"
 *   insn=0x00000000002A28C4 string=0x00000000002A28C8 "*"
 *   insn=0x00000000002A28C8 string=0x00000000002A28CC "\n"
 *   insn=0x00000000002A28D0 string=0x00000000002A28D4 "v"
 *   insn=0x00000000002A28E0 string=0x00000000002A28E4 "(a"
 *   insn=0x00000000002A28EC string=0x00000000002A28F0 "\n""
 *   insn=0x00000000002A28F0 string=0x00000000002A28F4 "J=G"
 *   insn=0x00000000002A28F4 string=0x00000000002A28F8 ")!"
 *   insn=0x00000000002A28FC string=0x00000000002A2900 "*"
 *   insn=0x00000000002A28FC string=0x00000000002A2914 "*"
 *   insn=0x00000000002A2900 string=0x00000000002A2904 "K"
 *   insn=0x00000000002A2904 string=0x00000000002A2908 "+"
 *   insn=0x00000000002A2910 string=0x00000000002A2920 "_"
 *   insn=0x00000000002A2914 string=0x00000000002A2918 "K"
 *   insn=0x00000000002A2918 string=0x00000000002A291C "+"
 *   insn=0x00000000002A2948 string=0x00000000002A294C "\t""
 *   insn=0x00000000002A294C string=0x00000000002A2950 ")=G"
 *   insn=0x00000000002A2950 string=0x00000000002A2954 "!"
 *   insn=0x00000000002A2954 string=0x00000000002A2958 "i"
 *   insn=0x00000000002A2958 string=0x00000000002A295C "\t"
 *   insn=0x00000000002A295C string=0x00000000002A2960 "*"
 *   insn=0x00000000002A2960 string=0x00000000002A2964 "\n"
 *   insn=0x00000000002A2968 string=0x00000000002A296C "P"
 *   insn=0x00000000002A2978 string=0x00000000002A297C "(a"
 *   insn=0x00000000002A2984 string=0x00000000002A2988 "\n""
 *   insn=0x00000000002A2988 string=0x00000000002A298C "J=G"
 *   insn=0x00000000002A298C string=0x00000000002A2990 ")!"
 *   insn=0x00000000002A2994 string=0x00000000002A2998 "*"
 *   insn=0x00000000002A2994 string=0x00000000002A29AC "*"
 *   insn=0x00000000002A2998 string=0x00000000002A299C "K"
 *   insn=0x00000000002A299C string=0x00000000002A29A0 "+"
 *   insn=0x00000000002A29A8 string=0x00000000002A29B8 "_"
 *   insn=0x00000000002A29AC string=0x00000000002A29B0 "K"
 *   insn=0x00000000002A29B0 string=0x00000000002A29B4 "+"
 *   insn=0x00000000002A29C4 string=0x00000000002A29C8 "w"
 *   insn=0x00000000002A29E0 string=0x00000000002A29E4 "\t""
 *   insn=0x00000000002A29E4 string=0x00000000002A29E8 ")=G"
 *   insn=0x00000000002A29E8 string=0x00000000002A29EC "!"
 *   insn=0x00000000002A29F0 string=0x00000000002A29F4 "\t"
 *   insn=0x00000000002A29F4 string=0x00000000002A29F8 "*"
 *   insn=0x00000000002A29F8 string=0x00000000002A29FC "\n"
 *   insn=0x00000000002A2A00 string=0x00000000002A2A04 "*"
 *   insn=0x00000000002A2A0C string=0x00000000002A2A10 "\n""
 *   insn=0x00000000002A2A10 string=0x00000000002A2A14 "J"
 *   insn=0x00000000002A2A18 string=0x00000000002A2A1C "(a"
 *   insn=0x00000000002A2A24 string=0x00000000002A2A28 "\n""
 *   insn=0x00000000002A2A28 string=0x00000000002A2A2C "J=G"
 *   insn=0x00000000002A2A2C string=0x00000000002A2A30 ")!"
 *   insn=0x00000000002A2A34 string=0x00000000002A2A38 "*"
 *   insn=0x00000000002A2A34 string=0x00000000002A2A4C "*"
 *   insn=0x00000000002A2A38 string=0x00000000002A2A3C "K"
 *   insn=0x00000000002A2A3C string=0x00000000002A2A40 "+"
 *   insn=0x00000000002A2A48 string=0x00000000002A2A58 "_"
 *   insn=0x00000000002A2A4C string=0x00000000002A2A50 "K"
 *   insn=0x00000000002A2A50 string=0x00000000002A2A54 "+"
 *   insn=0x00000000002A2A64 string=0x00000000002A2A68 "O"
 *   insn=0x00000000002A2A74 string=0x00000000002A2A78 "\t""
 *   insn=0x00000000002A2A78 string=0x00000000002A2A7C ")"
 *   insn=0x00000000002A2A88 string=0x00000000002A2A8C "\t""
 *   insn=0x00000000002A2A8C string=0x00000000002A2A90 ")=G"
 *   insn=0x00000000002A2A90 string=0x00000000002A2A94 "!"
 *   insn=0x00000000002A2A94 string=0x00000000002A2A98 "i"
 *   insn=0x00000000002A2A98 string=0x00000000002A2A9C "\t"
 *   insn=0x00000000002A2A9C string=0x00000000002A2AA0 "*"
 *   insn=0x00000000002A2AA0 string=0x00000000002A2AA4 "\n"
 *   insn=0x00000000002A2AAC string=0x00000000002A2AB0 "l"
 *   insn=0x00000000002A2AB4 string=0x00000000002A2AB8 ";"
 *   insn=0x00000000002A2AC4 string=0x00000000002A2AC8 "*"
 *   insn=0x00000000002A2AC8 string=0x00000000002A2ACC "\n"
 *   insn=0x00000000002A2ACC string=0x00000000002A2AD0 "?"
 *   insn=0x00000000002A2AD0 string=0x00000000002A2AD4 ""
 *   insn=0x00000000002A2AE0 string=0x00000000002A2AE4 "7g"
 *   insn=0x00000000002A2AE4 string=0x00000000001FC7C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v38, "origin");
  v39 = 2;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x900000001LL;
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
  sub_566BB8((int)&v38, "color");
  v39 = 3;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x700000001LL;
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
  sub_566BB8((int)&v38, "particleInterval");
  v39 = 4;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x500000001LL;
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
  sub_566BB8((int)&v38, "particleMaxAge");
  v39 = 5;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
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
  sub_566BB8((int)&v38, "particleSpread");
  v39 = 6;
  sub_56A528(&v40, &v38);
  v41 = 0x900000001LL;
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

