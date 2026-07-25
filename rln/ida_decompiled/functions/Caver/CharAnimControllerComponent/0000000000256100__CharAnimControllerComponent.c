/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256100
 * Mangled: _ZN5Caver27CharAnimControllerComponentC2Ev
 * Demangled: Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FBF40  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x0000000000200750  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Callees: 10
 *   0x00000000001F50B0  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x00000000001F5720  Caver::AnimationControllerComponent::~AnimationControllerComponent()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FC8A0  Caver::AnimationControllerComponent::InitWithComponent(Caver::AnimationControllerComponent const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 263
 *   insn=0x0000000000256118 string=0x000000000025611C "Y"
 *   insn=0x000000000025611C string=0x0000000000256120 "("
 *   insn=0x000000000025612C string=0x00000000001F50B0 "P'"
 *   insn=0x0000000000256130 string=0x0000000000256134 "-@"
 *   insn=0x0000000000256134 string=0x0000000000256138 "x$"
 *   insn=0x0000000000256140 string=0x0000000000256144 "\t"
 *   insn=0x0000000000256144 string=0x0000000000256148 " "
 *   insn=0x0000000000256148 string=0x000000000025614C "\t"
 *   insn=0x000000000025614C string=0x0000000000256150 "A"
 *   insn=0x0000000000256158 string=0x000000000025615C " "
 *   insn=0x000000000025615C string=0x0000000000256160 "h"
 *   insn=0x0000000000256160 string=0x0000000000256164 "C"
 *   insn=0x0000000000256164 string=0x0000000000256168 "t"
 *   insn=0x0000000000256168 string=0x000000000025616C "`"
 *   insn=0x00000000002561AC string=0x00000000002561B0 "`"
 *   insn=0x00000000002561C0 string=0x0000000000587830 "standAnimation"
 *   insn=0x00000000002561CC string=0x00000000002561D0 "zB"
 *   insn=0x00000000002561E8 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002561EC string=0x00000000002561F0 "w$"
 *   insn=0x0000000000256200 string=0x000000000025635C "i$"
 *   insn=0x0000000000256204 string=0x000000000058783F "walkAnimation"
 *   insn=0x0000000000256210 string=0x0000000000256214 "iB"
 *   insn=0x0000000000256238 string=0x000000000025623C "!\n"
 *   insn=0x000000000025623C string=0x0000000000256380 "i$"
 *   insn=0x0000000000256240 string=0x000000000058784D "jumpAnimation"
 *   insn=0x000000000025624C string=0x0000000000256250 "ZB"
 *   insn=0x0000000000256274 string=0x0000000000256278 "a\t"
 *   insn=0x0000000000256278 string=0x00000000002563A4 "i$"
 *   insn=0x000000000025627C string=0x000000000058785B "airJumpAnimation"
 *   insn=0x0000000000256288 string=0x000000000025628C "KB"
 *   insn=0x000000000025628C string=0x0000000000256290 "c"
 *   insn=0x00000000002562B4 string=0x00000000002563C8 "i$"
 *   insn=0x00000000002562B8 string=0x000000000058786C "fallAnimation"
 *   insn=0x00000000002562C4 string=0x00000000002562C8 "<B"
 *   insn=0x00000000002562C8 string=0x00000000002562CC "cb"
 *   insn=0x00000000002562F0 string=0x00000000002563EC "i$"
 *   insn=0x00000000002562F4 string=0x000000000058787A "castAnimation"
 *   insn=0x0000000000256300 string=0x0000000000256304 "-B"
 *   insn=0x0000000000256304 string=0x0000000000256308 "!"
 *   insn=0x0000000000256318 string=0x000000000025631C "q"
 *   insn=0x0000000000256328 string=0x000000000025632C "!"
 *   insn=0x000000000025632C string=0x0000000000256330 "("
 *   insn=0x000000000025632C string=0x0000000000256410 "i$"
 *   insn=0x000000000025633C string=0x00000000002564F4 "w"
 *   insn=0x000000000025635C string=0x0000000000256360 ")=G"
 *   insn=0x0000000000256360 string=0x0000000000256364 "!"
 *   insn=0x0000000000256364 string=0x0000000000256368 "i"
 *   insn=0x0000000000256368 string=0x000000000025636C "\t"
 *   insn=0x0000000000256368 string=0x0000000000256434 "\t"
 *   insn=0x000000000025636C string=0x0000000000256370 "*"
 *   insn=0x0000000000256370 string=0x0000000000256374 "\n"
 *   insn=0x0000000000256378 string=0x000000000025637C "1"
 *   insn=0x000000000025637C string=0x0000000000256440 "?"
 *   insn=0x0000000000256380 string=0x0000000000256384 ")=G"
 *   insn=0x0000000000256384 string=0x0000000000256388 "!"
 *   insn=0x0000000000256388 string=0x000000000025638C "I"
 *   insn=0x000000000025638C string=0x0000000000256390 "\t"
 *   insn=0x000000000025638C string=0x0000000000256454 "\t"
 *   insn=0x0000000000256390 string=0x0000000000256394 "*"
 *   insn=0x0000000000256394 string=0x0000000000256398 "\n"
 *   insn=0x000000000025639C string=0x00000000002563A0 "0"
 *   insn=0x00000000002563A0 string=0x0000000000256460 "?"
 *   insn=0x00000000002563A4 string=0x00000000002563A8 ")=G"
 *   insn=0x00000000002563A8 string=0x00000000002563AC "!"
 *   insn=0x00000000002563AC string=0x00000000002563B0 ")"
 *   insn=0x00000000002563B0 string=0x00000000002563B4 "\t"
 *   insn=0x00000000002563B0 string=0x0000000000256474 "\t"
 *   insn=0x00000000002563B4 string=0x00000000002563B8 "*"
 *   insn=0x00000000002563B8 string=0x00000000002563BC "\n"
 *   insn=0x00000000002563C0 string=0x00000000002563C4 "/"
 *   insn=0x00000000002563C4 string=0x0000000000256480 "?"
 *   insn=0x00000000002563C8 string=0x00000000002563CC ")=G"
 *   insn=0x00000000002563CC string=0x00000000002563D0 "!"
 *   insn=0x00000000002563D0 string=0x00000000002563D4 "\t"
 *   insn=0x00000000002563D4 string=0x00000000002563D8 "\t"
 *   insn=0x00000000002563D4 string=0x0000000000256494 "\t"
 *   insn=0x00000000002563D8 string=0x00000000002563DC "*"
 *   insn=0x00000000002563DC string=0x00000000002563E0 "\n"
 *   insn=0x00000000002563E4 string=0x00000000002563E8 "."
 *   insn=0x00000000002563E8 string=0x00000000002564A0 "?"
 *   insn=0x00000000002563EC string=0x00000000002563F0 ")=G"
 *   insn=0x00000000002563F0 string=0x00000000002563F4 "!"
 *   insn=0x00000000002563F8 string=0x00000000002563FC "\t"
 *   insn=0x00000000002563F8 string=0x00000000002564B4 "\t"
 *   insn=0x00000000002563FC string=0x0000000000256400 "*"
 *   insn=0x0000000000256400 string=0x0000000000256404 "\n"
 *   insn=0x0000000000256408 string=0x000000000025640C "-"
 *   insn=0x000000000025640C string=0x00000000002564C0 "?"
 *   insn=0x0000000000256410 string=0x0000000000256414 ")=G"
 *   insn=0x0000000000256414 string=0x0000000000256418 "!"
 *   insn=0x000000000025641C string=0x0000000000256420 "\t"
 *   insn=0x000000000025641C string=0x00000000002564D4 "\t"
 *   insn=0x0000000000256420 string=0x0000000000256424 "*"
 *   insn=0x0000000000256424 string=0x0000000000256428 "\n"
 *   insn=0x000000000025642C string=0x0000000000256430 ","
 *   insn=0x0000000000256430 string=0x00000000002564E0 "?"
 *   insn=0x0000000000256434 string=0x0000000000256438 "*"
 *   insn=0x0000000000256438 string=0x000000000025643C "\n"
 *   insn=0x000000000025644C string=0x0000000000256450 "m"
 *   insn=0x0000000000256454 string=0x0000000000256458 "*"
 *   insn=0x0000000000256458 string=0x000000000025645C "\n"
 *   insn=0x000000000025646C string=0x0000000000256470 "t"
 *   insn=0x0000000000256474 string=0x0000000000256478 "*"
 *   insn=0x0000000000256478 string=0x000000000025647C "\n"
 *   insn=0x000000000025648C string=0x0000000000256490 "{"
 *   insn=0x0000000000256494 string=0x0000000000256498 "*"
 *   insn=0x0000000000256498 string=0x000000000025649C "\n"
 *   insn=0x00000000002564B4 string=0x00000000002564B8 "*"
 *   insn=0x00000000002564B8 string=0x00000000002564BC "\n"
 *   insn=0x00000000002564D4 string=0x00000000002564D8 "*"
 *   insn=0x00000000002564D8 string=0x00000000002564DC "\n"
 *   insn=0x00000000002564E0 string=0x00000000002564E4 "l"
 *   insn=0x00000000002564F4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002564FC string=0x0000000000256500 "(a"
 *   insn=0x0000000000256508 string=0x000000000025650C "j$"
 *   insn=0x0000000000256508 string=0x00000000002566A8 "`"
 *   insn=0x000000000025650C string=0x0000000000256510 "J=G"
 *   insn=0x0000000000256510 string=0x0000000000256514 ")!"
 *   insn=0x0000000000256518 string=0x000000000025651C "*"
 *   insn=0x0000000000256518 string=0x000000000025668C "*"
 *   insn=0x000000000025651C string=0x0000000000256520 "K"
 *   insn=0x0000000000256520 string=0x0000000000256524 "+"
 *   insn=0x0000000000256528 string=0x000000000025652C "P"
 *   insn=0x000000000025652C string=0x000000000025666C "_"
 *   insn=0x0000000000256538 string=0x000000000025653C "(a"
 *   insn=0x0000000000256540 string=0x0000000000256544 " "
 *   insn=0x0000000000256544 string=0x0000000000256548 "j$"
 *   insn=0x0000000000256548 string=0x000000000025654C "J=G"
 *   insn=0x000000000025654C string=0x0000000000256550 ")!"
 *   insn=0x0000000000256554 string=0x0000000000256558 "*"
 *   insn=0x0000000000256558 string=0x000000000025655C "K"
 *   insn=0x000000000025655C string=0x0000000000256560 "+"
 *   insn=0x0000000000256564 string=0x0000000000256568 "A"
 *   insn=0x0000000000256574 string=0x0000000000256578 "(a"
 *   insn=0x000000000025657C string=0x0000000000256580 "@\t"
 *   insn=0x0000000000256580 string=0x0000000000256584 "j$"
 *   insn=0x0000000000256584 string=0x0000000000256588 "J=G"
 *   insn=0x0000000000256588 string=0x000000000025658C ")!"
 *   insn=0x0000000000256590 string=0x0000000000256594 "*"
 *   insn=0x0000000000256594 string=0x0000000000256598 "K"
 *   insn=0x0000000000256598 string=0x000000000025659C "+"
 *   insn=0x00000000002565A0 string=0x00000000002565A4 "2"
 *   insn=0x00000000002565B0 string=0x00000000002565B4 "(a"
 *   insn=0x00000000002565B8 string=0x00000000002565BC "`"
 *   insn=0x00000000002565BC string=0x00000000002565C0 "j$"
 *   insn=0x00000000002565C0 string=0x00000000002565C4 "J=G"
 *   insn=0x00000000002565C4 string=0x00000000002565C8 ")!"
 *   insn=0x00000000002565C8 string=0x00000000002565CC "\n"
 *   insn=0x00000000002565CC string=0x00000000002565D0 "*"
 *   insn=0x00000000002565D0 string=0x00000000002565D4 "K"
 *   insn=0x00000000002565D4 string=0x00000000002565D8 "+"
 *   insn=0x00000000002565DC string=0x00000000002565E0 "#"
 *   insn=0x00000000002565EC string=0x00000000002565F0 "(a"
 *   insn=0x00000000002565F8 string=0x00000000002565FC "j$"
 *   insn=0x00000000002565FC string=0x0000000000256600 "J=G"
 *   insn=0x0000000000256600 string=0x0000000000256604 ")!"
 *   insn=0x0000000000256604 string=0x0000000000256608 "*"
 *   insn=0x0000000000256608 string=0x000000000025660C "*"
 *   insn=0x000000000025660C string=0x0000000000256610 "K"
 *   insn=0x0000000000256610 string=0x0000000000256614 "+"
 *   insn=0x0000000000256620 string=0x0000000000256624 "`"
 *   insn=0x0000000000256624 string=0x0000000000256628 "@"
 *   insn=0x0000000000256628 string=0x000000000025662C "("
 *   insn=0x0000000000256628 string=0x00000000002566B0 "@"
 *   insn=0x000000000025662C string=0x00000000002566CC "`"
 *   insn=0x0000000000256630 string=0x0000000000256634 "j$"
 *   insn=0x0000000000256634 string=0x0000000000256638 "J"
 *   insn=0x000000000025663C string=0x0000000000256640 "(a"
 *   insn=0x0000000000256648 string=0x000000000025664C "j$"
 *   insn=0x000000000025664C string=0x0000000000256650 "J=G"
 *   insn=0x0000000000256650 string=0x0000000000256654 ")!"
 *   insn=0x0000000000256658 string=0x000000000025665C "*"
 *   insn=0x000000000025665C string=0x0000000000256660 "K"
 *   insn=0x0000000000256660 string=0x0000000000256664 "+"
 *   insn=0x0000000000256678 string=0x000000000025667C "JO"
 *   insn=0x000000000025667C string=0x0000000000256680 "`"
 *   insn=0x0000000000256680 string=0x0000000000256684 "`"
 *   insn=0x000000000025668C string=0x0000000000256690 "K"
 *   insn=0x0000000000256690 string=0x0000000000256694 "+"
 *   insn=0x0000000000256694 string=0x0000000000256698 "_"
 *   insn=0x00000000002566B0 string=0x00000000002566B4 ""
 *   insn=0x00000000002566B4 string=0x00000000002566B8 ""
 *   insn=0x00000000002566BC string=0x00000000002566C0 ""
 *   insn=0x00000000002566C0 string=0x00000000002566C4 ""
 *   insn=0x00000000002566D0 string=0x00000000002566D4 "@"
 *   insn=0x00000000002566D0 string=0x00000000002566F0 "h"
 *   insn=0x00000000002566D4 string=0x00000000002566D8 ""
 *   insn=0x00000000002566D8 string=0x00000000002566DC ""
 *   insn=0x00000000002566E0 string=0x00000000002566E4 ""
 *   insn=0x00000000002566E4 string=0x00000000002566E8 ""
 *   insn=0x00000000002566F8 string=0x00000000002566FC "@"
 *   insn=0x00000000002566F8 string=0x0000000000256718 "`"
 *   insn=0x00000000002566FC string=0x0000000000256700 ""
 *   insn=0x0000000000256700 string=0x0000000000256704 ""
 *   insn=0x0000000000256708 string=0x000000000025670C ""
 *   insn=0x000000000025670C string=0x0000000000256710 ""
 *   insn=0x000000000025671C string=0x0000000000256720 "@"
 *   insn=0x000000000025671C string=0x000000000025673C "`"
 *   insn=0x0000000000256720 string=0x0000000000256724 ""
 *   insn=0x0000000000256724 string=0x0000000000256728 ""
 *   insn=0x000000000025672C string=0x0000000000256730 ""
 *   insn=0x0000000000256730 string=0x0000000000256734 ""
 *   insn=0x0000000000256740 string=0x0000000000256744 "@"
 *   insn=0x0000000000256740 string=0x0000000000256760 "`"
 *   insn=0x0000000000256744 string=0x0000000000256748 ""
 *   insn=0x0000000000256748 string=0x000000000025674C ""
 *   insn=0x0000000000256750 string=0x0000000000256754 ""
 *   insn=0x0000000000256754 string=0x0000000000256758 ""
 *   insn=0x0000000000256764 string=0x0000000000256768 "@"
 *   insn=0x0000000000256768 string=0x000000000025676C ""
 *   insn=0x000000000025676C string=0x0000000000256770 ""
 *   insn=0x0000000000256774 string=0x0000000000256778 ""
 *   insn=0x0000000000256778 string=0x000000000025677C ""
 *   insn=0x0000000000256784 string=0x0000000000256788 "h"
 *   insn=0x0000000000256794 string=0x0000000000256798 "@"
 *   insn=0x0000000000256794 string=0x00000000002567B4 "`"
 *   insn=0x0000000000256798 string=0x000000000025679C ""
 *   insn=0x000000000025679C string=0x00000000002567A0 ""
 *   insn=0x00000000002567A4 string=0x00000000002567A8 ""
 *   insn=0x00000000002567A8 string=0x00000000002567AC ""
 *   insn=0x00000000002567B4 string=0x00000000002567B8 "v"
 *   insn=0x00000000002567BC string=0x00000000002567C0 "@"
 *   insn=0x00000000002567BC string=0x00000000002567DC "`"
 *   insn=0x00000000002567C0 string=0x00000000002567C4 ""
 *   insn=0x00000000002567C4 string=0x00000000002567C8 ""
 *   insn=0x00000000002567CC string=0x00000000002567D0 ""
 *   insn=0x00000000002567D0 string=0x00000000002567D4 ""
 *   insn=0x00000000002567E0 string=0x00000000002567E4 "t"
 *   insn=0x00000000002567E8 string=0x00000000002567EC "@"
 *   insn=0x00000000002567E8 string=0x0000000000256808 "`~@"
 *   insn=0x00000000002567EC string=0x00000000002567F0 ""
 *   insn=0x00000000002567F0 string=0x00000000002567F4 ""
 *   insn=0x00000000002567F8 string=0x00000000002567FC ""
 *   insn=0x00000000002567FC string=0x0000000000256800 ""
 *   insn=0x0000000000256808 string=0x000000000025680C "tv"
 *   insn=0x0000000000256810 string=0x0000000000256814 "@"
 *   insn=0x0000000000256810 string=0x0000000000256830 "`r@"
 *   insn=0x0000000000256814 string=0x0000000000256818 ""
 *   insn=0x0000000000256818 string=0x000000000025681C ""
 *   insn=0x0000000000256820 string=0x0000000000256824 ""
 *   insn=0x0000000000256824 string=0x0000000000256828 ""
 *   insn=0x0000000000256834 string=0x0000000000256838 "tj"
 *   insn=0x000000000025683C string=0x0000000000256840 "@"
 *   insn=0x000000000025683C string=0x000000000025685C "`f@"
 *   insn=0x0000000000256840 string=0x0000000000256844 ""
 *   insn=0x0000000000256844 string=0x0000000000256848 ""
 *   insn=0x000000000025684C string=0x0000000000256850 ""
 *   insn=0x0000000000256850 string=0x0000000000256854 ""
 *   insn=0x000000000025685C string=0x0000000000256860 "t^"
 *   insn=0x0000000000256864 string=0x0000000000256868 "@"
 *   insn=0x0000000000256868 string=0x000000000025686C ""
 *   insn=0x000000000025686C string=0x0000000000256870 ""
 *   insn=0x0000000000256874 string=0x0000000000256878 ""
 *   insn=0x0000000000256878 string=0x000000000025687C ""
 *   insn=0x0000000000256888 string=0x00000000001F5720 "P'"
 *   insn=0x000000000025688C string=0x0000000000256890 ""
 *   insn=0x00000000002568AC string=0x00000000002568B0 "h"
 *   insn=0x00000000002568AC string=0x00000000001FC8A0 "0'"
 *   insn=0x00000000002568B4 string=0x00000000002568B8 "h"
 *   insn=0x00000000002568BC string=0x00000000002568C0 "h"
 *   insn=0x00000000002568C4 string=0x00000000002568C8 "h\nA"
 *   insn=0x00000000002568CC string=0x00000000002568D0 "h"A"
 *   insn=0x00000000002568D4 string=0x00000000002568D8 "h:A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharAnimControllerComponent::CharAnimControllerComponent(
        Caver::CharAnimControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9
  _QWORD v21[3]; // [xsp+28h] [xbp-58h] BYREF

  v21[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::AnimationControllerComponent::AnimationControllerComponent(this);
  *(_QWORD *)&v2 = &off_6BDEF0;
  *((_QWORD *)&v2 + 1) = &off_6BDF30;
  *(_QWORD *)this = off_6BDDD0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 23) = &off_6BDF68;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BDF68;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = &off_6BDF68;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = &off_6BDF68;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = &off_6BDF68;
  *((_DWORD *)this + 78) = 0;
  *((_BYTE *)this + 352) = 0;
  *((_OWORD *)this + 20) = 0u;
  *((_OWORD *)this + 21) = 0u;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 47) = 0;
  *((_QWORD *)this + 45) = 0;
  sub_566BB8((int)v21, "standAnimation");
  Caver::Component::BindOutlet();
  v3 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v21[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v21, "walkAnimation");
  Caver::Component::BindOutlet();
  v4 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v21[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v4);
  }
  sub_566BB8((int)v21, "jumpAnimation");
  Caver::Component::BindOutlet();
  v5 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v21[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)v21, "airJumpAnimation");
  Caver::Component::BindOutlet();
  v6 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v21[0] - 8LL);
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
      operator delete(v6);
  }
  sub_566BB8((int)v21, "fallAnimation");
  Caver::Component::BindOutlet();
  v7 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v21[0] - 8LL);
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
      operator delete(v7);
  }
  sub_566BB8((int)v21, "castAnimation");
  Caver::Component::BindOutlet();
  v8 = (void *)(v21[0] - 24LL);
  if ( (__int64 *)(v21[0] - 24LL) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(v21[0] - 8LL);
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
      operator delete(v8);
  }
}

