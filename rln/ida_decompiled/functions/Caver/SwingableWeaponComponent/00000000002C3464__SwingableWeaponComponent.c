/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C3464
 * Mangled: _ZN5Caver24SwingableWeaponComponentC2Ev
 * Demangled: Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *
 * Callers: 2
 *   0x00000000001F8A20  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *   0x00000000001FFBE0  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 377
 *   insn=0x00000000002C3480 string=0x00000000002C3484 "!"
 *   insn=0x00000000002C3484 string=0x00000000002C3488 "\t!"
 *   insn=0x00000000002C3488 string=0x00000000002C348C "Z"
 *   insn=0x00000000002C348C string=0x00000000002C3490 "{"
 *   insn=0x00000000002C3490 string=0x00000000002C3494 ")"
 *   insn=0x00000000002C3498 string=0x00000000002C349C "!"
 *   insn=0x00000000002C34B4 string=0x00000000002C34B8 "K"
 *   insn=0x00000000002C34B8 string=0x00000000002C34BC "*"
 *   insn=0x00000000002C34BC string=0x00000000002C34C0 "A"
 *   insn=0x00000000002C34C0 string=0x00000000002C34C4 "*"
 *   insn=0x00000000002C34C8 string=0x00000000002C34CC "A"
 *   insn=0x00000000002C34CC string=0x00000000002C34D0 "0!"
 *   insn=0x00000000002C34D0 string=0x00000000002C34D4 "jc"
 *   insn=0x00000000002C34E4 string=0x00000000002C34E8 "j"
 *   insn=0x00000000002C34E8 string=0x00000000002C34EC "*"
 *   insn=0x00000000002C34F0 string=0x00000000002C34F4 "a"
 *   insn=0x00000000002C34FC string=0x00000000002C3500 "A"
 *   insn=0x00000000002C3500 string=0x00000000002C3504 "\n!"
 *   insn=0x00000000002C3508 string=0x00000000002C350C "J)E"
 *   insn=0x00000000002C350C string=0x00000000002C3510 ")A"
 *   insn=0x00000000002C3510 string=0x00000000002C3514 "h"
 *   insn=0x00000000002C351C string=0x00000000002C3520 "i"
 *   insn=0x00000000002C3524 string=0x00000000002C3528 "("
 *   insn=0x00000000002C3558 string=0x00000000002C355C "`."
 *   insn=0x00000000002C355C string=0x00000000002C3560 ""
 *   insn=0x00000000002C3570 string=0x00000000002C3574 ")"
 *   insn=0x00000000002C3588 string=0x00000000002C358C " "
 *   insn=0x00000000002C358C string=0x00000000002C3590 "\tB"
 *   insn=0x00000000002C3590 string=0x00000000002C3594 "$"
 *   insn=0x00000000002C3598 string=0x00000000002C359C "IA"
 *   insn=0x00000000002C35D4 string=0x0000000000583C3C "model"
 *   insn=0x00000000002C35E0 string=0x00000000002C35E4 "u"
 *   insn=0x00000000002C35FC string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002C360C string=0x00000000002C3610 "!"
 *   insn=0x00000000002C360C string=0x00000000002C37E4 "\n!"
 *   insn=0x00000000002C3610 string=0x0000000000588EDA "collisionShape"
 *   insn=0x00000000002C361C string=0x00000000002C3620 "f"
 *   insn=0x00000000002C3648 string=0x00000000002C364C "!"
 *   insn=0x00000000002C3648 string=0x00000000002C3808 "\t!"
 *   insn=0x00000000002C364C string=0x000000000058A100 "trail"
 *   insn=0x00000000002C3658 string=0x00000000002C365C "W"
 *   insn=0x00000000002C3680 string=0x00000000002C3684 "A"
 *   insn=0x00000000002C3684 string=0x00000000002C3688 "!"
 *   insn=0x00000000002C3684 string=0x00000000002C382C "\t!"
 *   insn=0x00000000002C3688 string=0x000000000058A088 "glowTrail"
 *   insn=0x00000000002C3694 string=0x00000000002C3698 "H"
 *   insn=0x00000000002C36C0 string=0x00000000002C36C4 "!"
 *   insn=0x00000000002C36C0 string=0x00000000002C3850 "\t!"
 *   insn=0x00000000002C36C4 string=0x000000000058A10D "glow"
 *   insn=0x00000000002C36D0 string=0x00000000002C36D4 "9"
 *   insn=0x00000000002C36D4 string=0x00000000002C36D8 "!"
 *   insn=0x00000000002C36E8 string=0x00000000002C36EC "}"
 *   insn=0x00000000002C36FC string=0x00000000002C3700 "!"
 *   insn=0x00000000002C36FC string=0x00000000002C3874 "\t!"
 *   insn=0x00000000002C3700 string=0x000000000058A092 "impactParticleEmitter"
 *   insn=0x00000000002C370C string=0x00000000002C3710 "*"
 *   insn=0x00000000002C3714 string=0x00000000002C3718 "A"
 *   insn=0x00000000002C3724 string=0x00000000002C3728 "n"
 *   insn=0x00000000002C3738 string=0x00000000002C373C "!"
 *   insn=0x00000000002C3738 string=0x00000000002C3898 "\t!"
 *   insn=0x00000000002C373C string=0x000000000058A0A8 "swingSound"
 *   insn=0x00000000002C3748 string=0x00000000002C374C ""
 *   insn=0x00000000002C3750 string=0x00000000002C3754 "a"
 *   insn=0x00000000002C3760 string=0x00000000002C3764 "_"
 *   insn=0x00000000002C3770 string=0x00000000002C3774 "A\n"
 *   insn=0x00000000002C3774 string=0x00000000002C3778 "!"
 *   insn=0x00000000002C3774 string=0x00000000002C38BC "\t!"
 *   insn=0x00000000002C3778 string=0x000000000058A0B3 "damageImpactSound"
 *   insn=0x00000000002C379C string=0x00000000002C37A0 "P"
 *   insn=0x00000000002C37B0 string=0x00000000002C37B4 "H"
 *   insn=0x00000000002C37B0 string=0x00000000002C38E0 "\t!"
 *   insn=0x00000000002C37BC string=0x00000000002C37C0 "!"
 *   insn=0x00000000002C37C0 string=0x00000000002C3A04 "3"
 *   insn=0x00000000002C37E4 string=0x00000000002C37E8 "J=G"
 *   insn=0x00000000002C37E8 string=0x00000000002C37EC "\t!"
 *   insn=0x00000000002C37F0 string=0x00000000002C37F4 "("
 *   insn=0x00000000002C37F0 string=0x00000000002C3904 "("
 *   insn=0x00000000002C37F4 string=0x00000000002C37F8 "\n"
 *   insn=0x00000000002C37F8 string=0x00000000002C37FC "*"
 *   insn=0x00000000002C3800 string=0x00000000002C3804 "C"
 *   insn=0x00000000002C3808 string=0x00000000002C380C ")=G"
 *   insn=0x00000000002C380C string=0x00000000002C3810 "!"
 *   insn=0x00000000002C3814 string=0x00000000002C3818 "\t"
 *   insn=0x00000000002C3814 string=0x00000000002C3924 "\t"
 *   insn=0x00000000002C3818 string=0x00000000002C381C "*"
 *   insn=0x00000000002C381C string=0x00000000002C3820 "\n"
 *   insn=0x00000000002C3824 string=0x00000000002C3828 "B"
 *   insn=0x00000000002C3828 string=0x00000000002C3930 "?"
 *   insn=0x00000000002C382C string=0x00000000002C3830 ")=G"
 *   insn=0x00000000002C3830 string=0x00000000002C3834 "!"
 *   insn=0x00000000002C3834 string=0x00000000002C3838 "i"
 *   insn=0x00000000002C3838 string=0x00000000002C383C "\t"
 *   insn=0x00000000002C3838 string=0x00000000002C3944 "\t"
 *   insn=0x00000000002C383C string=0x00000000002C3840 "*"
 *   insn=0x00000000002C3840 string=0x00000000002C3844 "\n"
 *   insn=0x00000000002C3848 string=0x00000000002C384C "A"
 *   insn=0x00000000002C384C string=0x00000000002C3950 "?"
 *   insn=0x00000000002C3850 string=0x00000000002C3854 ")=G"
 *   insn=0x00000000002C3854 string=0x00000000002C3858 "!"
 *   insn=0x00000000002C3858 string=0x00000000002C385C "I"
 *   insn=0x00000000002C385C string=0x00000000002C3860 "\t"
 *   insn=0x00000000002C385C string=0x00000000002C3964 "\t"
 *   insn=0x00000000002C3860 string=0x00000000002C3864 "*"
 *   insn=0x00000000002C3864 string=0x00000000002C3868 "\n"
 *   insn=0x00000000002C386C string=0x00000000002C3870 "@"
 *   insn=0x00000000002C3870 string=0x00000000002C3970 "?"
 *   insn=0x00000000002C3874 string=0x00000000002C3878 ")=G"
 *   insn=0x00000000002C3878 string=0x00000000002C387C "!"
 *   insn=0x00000000002C387C string=0x00000000002C3880 ")"
 *   insn=0x00000000002C3880 string=0x00000000002C3884 "\t"
 *   insn=0x00000000002C3880 string=0x00000000002C3984 "\t"
 *   insn=0x00000000002C3884 string=0x00000000002C3888 "*"
 *   insn=0x00000000002C3888 string=0x00000000002C388C "\n"
 *   insn=0x00000000002C3890 string=0x00000000002C3894 "?"
 *   insn=0x00000000002C3894 string=0x00000000002C3990 "?"
 *   insn=0x00000000002C3898 string=0x00000000002C389C ")=G"
 *   insn=0x00000000002C389C string=0x00000000002C38A0 "!"
 *   insn=0x00000000002C38A0 string=0x00000000002C38A4 "\t"
 *   insn=0x00000000002C38A4 string=0x00000000002C38A8 "\t"
 *   insn=0x00000000002C38A4 string=0x00000000002C39A4 "\t"
 *   insn=0x00000000002C38A8 string=0x00000000002C38AC "*"
 *   insn=0x00000000002C38AC string=0x00000000002C38B0 "\n"
 *   insn=0x00000000002C38B4 string=0x00000000002C38B8 ">"
 *   insn=0x00000000002C38B8 string=0x00000000002C39B0 "?"
 *   insn=0x00000000002C38BC string=0x00000000002C38C0 ")=G"
 *   insn=0x00000000002C38C0 string=0x00000000002C38C4 "!"
 *   insn=0x00000000002C38C8 string=0x00000000002C38CC "\t"
 *   insn=0x00000000002C38C8 string=0x00000000002C39C4 "\t"
 *   insn=0x00000000002C38CC string=0x00000000002C38D0 "*"
 *   insn=0x00000000002C38D0 string=0x00000000002C38D4 "\n"
 *   insn=0x00000000002C38D8 string=0x00000000002C38DC "="
 *   insn=0x00000000002C38DC string=0x00000000002C39D0 "?"
 *   insn=0x00000000002C38E0 string=0x00000000002C38E4 ")=G"
 *   insn=0x00000000002C38E4 string=0x00000000002C38E8 "!"
 *   insn=0x00000000002C38EC string=0x00000000002C38F0 "\t"
 *   insn=0x00000000002C38EC string=0x00000000002C39E4 "\t"
 *   insn=0x00000000002C38F0 string=0x00000000002C38F4 "*"
 *   insn=0x00000000002C38F4 string=0x00000000002C38F8 "\n"
 *   insn=0x00000000002C38FC string=0x00000000002C3900 "<"
 *   insn=0x00000000002C3900 string=0x00000000002C39F0 "?"
 *   insn=0x00000000002C3904 string=0x00000000002C3908 "\n"
 *   insn=0x00000000002C3908 string=0x00000000002C390C "*"
 *   insn=0x00000000002C391C string=0x00000000002C3920 "<"
 *   insn=0x00000000002C3924 string=0x00000000002C3928 "*"
 *   insn=0x00000000002C3928 string=0x00000000002C392C "\n"
 *   insn=0x00000000002C393C string=0x00000000002C3940 "C"
 *   insn=0x00000000002C3944 string=0x00000000002C3948 "*"
 *   insn=0x00000000002C3948 string=0x00000000002C394C "\n"
 *   insn=0x00000000002C395C string=0x00000000002C3960 "J"
 *   insn=0x00000000002C3964 string=0x00000000002C3968 "*"
 *   insn=0x00000000002C3968 string=0x00000000002C396C "\n"
 *   insn=0x00000000002C397C string=0x00000000002C3980 "Q"
 *   insn=0x00000000002C3984 string=0x00000000002C3988 "*"
 *   insn=0x00000000002C3988 string=0x00000000002C398C "\n"
 *   insn=0x00000000002C3990 string=0x00000000002C3994 "l"
 *   insn=0x00000000002C399C string=0x00000000002C39A0 "X"
 *   insn=0x00000000002C39A4 string=0x00000000002C39A8 "*"
 *   insn=0x00000000002C39A8 string=0x00000000002C39AC "\n"
 *   insn=0x00000000002C39B0 string=0x00000000002C39B4 "L"
 *   insn=0x00000000002C39B8 string=0x00000000002C39BC "z"
 *   insn=0x00000000002C39BC string=0x00000000002C39C0 "_"
 *   insn=0x00000000002C39C4 string=0x00000000002C39C8 "*"
 *   insn=0x00000000002C39C8 string=0x00000000002C39CC "\n"
 *   insn=0x00000000002C39D0 string=0x00000000002C39D4 ","
 *   insn=0x00000000002C39D8 string=0x00000000002C39DC "r"
 *   insn=0x00000000002C39DC string=0x00000000002C39E0 "f"
 *   insn=0x00000000002C39E4 string=0x00000000002C39E8 "*"
 *   insn=0x00000000002C39E8 string=0x00000000002C39EC "\n"
 *   insn=0x00000000002C39F8 string=0x00000000002C39FC "j"
 *   insn=0x00000000002C39FC string=0x00000000002C3A00 "m"
 *   insn=0x00000000002C3A04 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C3A0C string=0x00000000002C3A10 "(a"
 *   insn=0x00000000002C3A18 string=0x00000000002C3A1C "\n!"
 *   insn=0x00000000002C3A18 string=0x00000000002C3C28 "`"
 *   insn=0x00000000002C3A1C string=0x00000000002C3A20 "J=G"
 *   insn=0x00000000002C3A20 string=0x00000000002C3A24 ")!"
 *   insn=0x00000000002C3A24 string=0x00000000002C3A28 "*"
 *   insn=0x00000000002C3A28 string=0x00000000002C3A2C "*"
 *   insn=0x00000000002C3A28 string=0x00000000002C3C0C "*"
 *   insn=0x00000000002C3A2C string=0x00000000002C3A30 "K"
 *   insn=0x00000000002C3A30 string=0x00000000002C3A34 "+"
 *   insn=0x00000000002C3A38 string=0x00000000002C3A3C "l"
 *   insn=0x00000000002C3A3C string=0x00000000002C3BEC "_"
 *   insn=0x00000000002C3A48 string=0x00000000002C3A4C "(a"
 *   insn=0x00000000002C3A54 string=0x00000000002C3A58 "\n!"
 *   insn=0x00000000002C3A58 string=0x00000000002C3A5C "J=G"
 *   insn=0x00000000002C3A5C string=0x00000000002C3A60 ")!"
 *   insn=0x00000000002C3A60 string=0x00000000002C3A64 "J"
 *   insn=0x00000000002C3A64 string=0x00000000002C3A68 "*"
 *   insn=0x00000000002C3A68 string=0x00000000002C3A6C "K"
 *   insn=0x00000000002C3A6C string=0x00000000002C3A70 "+"
 *   insn=0x00000000002C3A74 string=0x00000000002C3A78 "]"
 *   insn=0x00000000002C3A84 string=0x00000000002C3A88 "(a"
 *   insn=0x00000000002C3A90 string=0x00000000002C3A94 "\n!"
 *   insn=0x00000000002C3A94 string=0x00000000002C3A98 "J=G"
 *   insn=0x00000000002C3A98 string=0x00000000002C3A9C ")!"
 *   insn=0x00000000002C3A9C string=0x00000000002C3AA0 "j"
 *   insn=0x00000000002C3AA0 string=0x00000000002C3AA4 "*"
 *   insn=0x00000000002C3AA4 string=0x00000000002C3AA8 "K"
 *   insn=0x00000000002C3AA8 string=0x00000000002C3AAC "+"
 *   insn=0x00000000002C3AB0 string=0x00000000002C3AB4 "N"
 *   insn=0x00000000002C3AC0 string=0x00000000002C3AC4 "(a"
 *   insn=0x00000000002C3ACC string=0x00000000002C3AD0 "\n!"
 *   insn=0x00000000002C3AD0 string=0x00000000002C3AD4 "J=G"
 *   insn=0x00000000002C3AD4 string=0x00000000002C3AD8 ")!"
 *   insn=0x00000000002C3ADC string=0x00000000002C3AE0 "*"
 *   insn=0x00000000002C3AE0 string=0x00000000002C3AE4 "K"
 *   insn=0x00000000002C3AE4 string=0x00000000002C3AE8 "+"
 *   insn=0x00000000002C3AEC string=0x00000000002C3AF0 "?"
 *   insn=0x00000000002C3AFC string=0x00000000002C3B00 "(a"
 *   insn=0x00000000002C3B08 string=0x00000000002C3B0C "\n!"
 *   insn=0x00000000002C3B0C string=0x00000000002C3B10 "J=G"
 *   insn=0x00000000002C3B10 string=0x00000000002C3B14 ")!"
 *   insn=0x00000000002C3B18 string=0x00000000002C3B1C "*"
 *   insn=0x00000000002C3B1C string=0x00000000002C3B20 "K"
 *   insn=0x00000000002C3B20 string=0x00000000002C3B24 "+"
 *   insn=0x00000000002C3B28 string=0x00000000002C3B2C "0"
 *   insn=0x00000000002C3B38 string=0x00000000002C3B3C "(a"
 *   insn=0x00000000002C3B40 string=0x00000000002C3B44 " "
 *   insn=0x00000000002C3B44 string=0x00000000002C3B48 "\n!"
 *   insn=0x00000000002C3B48 string=0x00000000002C3B4C "J=G"
 *   insn=0x00000000002C3B4C string=0x00000000002C3B50 ")!"
 *   insn=0x00000000002C3B54 string=0x00000000002C3B58 "*"
 *   insn=0x00000000002C3B58 string=0x00000000002C3B5C "K"
 *   insn=0x00000000002C3B5C string=0x00000000002C3B60 "+"
 *   insn=0x00000000002C3B64 string=0x00000000002C3B68 "!"
 *   insn=0x00000000002C3B74 string=0x00000000002C3B78 "(a"
 *   insn=0x00000000002C3B7C string=0x00000000002C3B80 "@"
 *   insn=0x00000000002C3B80 string=0x00000000002C3B84 "\n!"
 *   insn=0x00000000002C3B84 string=0x00000000002C3B88 "J=G"
 *   insn=0x00000000002C3B88 string=0x00000000002C3B8C ")!"
 *   insn=0x00000000002C3B90 string=0x00000000002C3B94 "*"
 *   insn=0x00000000002C3B94 string=0x00000000002C3B98 "K"
 *   insn=0x00000000002C3B98 string=0x00000000002C3B9C "+"
 *   insn=0x00000000002C3BA8 string=0x00000000002C3BAC "`"
 *   insn=0x00000000002C3BB0 string=0x00000000002C3BB4 "&"
 *   insn=0x00000000002C3BB0 string=0x00000000002C3C30 "@"
 *   insn=0x00000000002C3BB4 string=0x00000000002C3C4C "`"
 *   insn=0x00000000002C3BBC string=0x00000000002C3BC0 "(a"
 *   insn=0x00000000002C3BC8 string=0x00000000002C3BCC "\n!"
 *   insn=0x00000000002C3BCC string=0x00000000002C3BD0 "J=G"
 *   insn=0x00000000002C3BD0 string=0x00000000002C3BD4 ")!"
 *   insn=0x00000000002C3BD8 string=0x00000000002C3BDC "*"
 *   insn=0x00000000002C3BDC string=0x00000000002C3BE0 "K"
 *   insn=0x00000000002C3BE0 string=0x00000000002C3BE4 "+"
 *   insn=0x00000000002C3BFC string=0x00000000002C3C00 "`"
 *   insn=0x00000000002C3C00 string=0x00000000002C3C04 "`"
 *   insn=0x00000000002C3C0C string=0x00000000002C3C10 "K"
 *   insn=0x00000000002C3C10 string=0x00000000002C3C14 "+"
 *   insn=0x00000000002C3C14 string=0x00000000002C3C18 "_"
 *   insn=0x00000000002C3C30 string=0x00000000002C3C34 ""
 *   insn=0x00000000002C3C34 string=0x00000000002C3C38 ""
 *   insn=0x00000000002C3C3C string=0x00000000002C3C40 ""
 *   insn=0x00000000002C3C40 string=0x00000000002C3C44 ""
 *   insn=0x00000000002C3C50 string=0x00000000002C3C54 "@"
 *   insn=0x00000000002C3C50 string=0x00000000002C3C70 "`"
 *   insn=0x00000000002C3C54 string=0x00000000002C3C58 ""
 *   insn=0x00000000002C3C58 string=0x00000000002C3C5C ""
 *   insn=0x00000000002C3C60 string=0x00000000002C3C64 ""
 *   insn=0x00000000002C3C64 string=0x00000000002C3C68 ""
 *   insn=0x00000000002C3C74 string=0x00000000002C3C78 "@"
 *   insn=0x00000000002C3C74 string=0x00000000002C3C94 "\t!"
 *   insn=0x00000000002C3C78 string=0x00000000002C3C7C ""
 *   insn=0x00000000002C3C7C string=0x00000000002C3C80 ""
 *   insn=0x00000000002C3C84 string=0x00000000002C3C88 ""
 *   insn=0x00000000002C3C88 string=0x00000000002C3C8C ""
 *   insn=0x00000000002C3C94 string=0x00000000002C3C98 "))E"
 *   insn=0x00000000002C3C9C string=0x00000000002C3CA0 "5A"
 *   insn=0x00000000002C3CAC string=0x00000000002C3CB0 "@"
 *   insn=0x00000000002C3CAC string=0x00000000002C3CCC "`"
 *   insn=0x00000000002C3CB0 string=0x00000000002C3CB4 ""
 *   insn=0x00000000002C3CB4 string=0x00000000002C3CB8 ""
 *   insn=0x00000000002C3CBC string=0x00000000002C3CC0 ""
 *   insn=0x00000000002C3CC0 string=0x00000000002C3CC4 ""
 *   insn=0x00000000002C3CCC string=0x00000000002C3CD0 "u"
 *   insn=0x00000000002C3CD4 string=0x00000000002C3CD8 "@"
 *   insn=0x00000000002C3CD4 string=0x00000000002C3CF4 "(!"
 *   insn=0x00000000002C3CD8 string=0x00000000002C3CDC ""
 *   insn=0x00000000002C3CDC string=0x00000000002C3CE0 ""
 *   insn=0x00000000002C3CE4 string=0x00000000002C3CE8 ""
 *   insn=0x00000000002C3CE8 string=0x00000000002C3CEC ""
 *   insn=0x00000000002C3CF4 string=0x00000000002C3CF8 "`"
 *   insn=0x00000000002C3CF8 string=0x00000000002C3CFC "mB"
 *   insn=0x00000000002C3CFC string=0x00000000002C3D00 "A"
 *   insn=0x00000000002C3D00 string=0x00000000002C3D04 "h"
 *   insn=0x00000000002C3D08 string=0x00000000002C3D0C "@"
 *   insn=0x00000000002C3D08 string=0x00000000002C3D28 "!"
 *   insn=0x00000000002C3D0C string=0x00000000002C3D10 ""
 *   insn=0x00000000002C3D10 string=0x00000000002C3D14 ""
 *   insn=0x00000000002C3D18 string=0x00000000002C3D1C ""
 *   insn=0x00000000002C3D1C string=0x00000000002C3D20 ""
 *   insn=0x00000000002C3D28 string=0x00000000002C3D2C "`"
 *   insn=0x00000000002C3D2C string=0x00000000002C3D30 ""
 *   insn=0x00000000002C3D30 string=0x00000000002C3D34 "A"
 *   insn=0x00000000002C3D34 string=0x00000000002C3D38 "h~"
 *   insn=0x00000000002C3D3C string=0x00000000002C3D40 "@"
 *   insn=0x00000000002C3D3C string=0x00000000002C3D5C "!"
 *   insn=0x00000000002C3D40 string=0x00000000002C3D44 ""
 *   insn=0x00000000002C3D44 string=0x00000000002C3D48 ""
 *   insn=0x00000000002C3D4C string=0x00000000002C3D50 ""
 *   insn=0x00000000002C3D50 string=0x00000000002C3D54 ""
 *   insn=0x00000000002C3D5C string=0x00000000002C3D60 "`z@"
 *   insn=0x00000000002C3D60 string=0x00000000002C3D64 ""
 *   insn=0x00000000002C3D68 string=0x00000000002C3D6C "ur"
 *   insn=0x00000000002C3D70 string=0x00000000002C3D74 "@"
 *   insn=0x00000000002C3D70 string=0x00000000002C3D90 "`n@"
 *   insn=0x00000000002C3D74 string=0x00000000002C3D78 ""
 *   insn=0x00000000002C3D78 string=0x00000000002C3D7C ""
 *   insn=0x00000000002C3D80 string=0x00000000002C3D84 ""
 *   insn=0x00000000002C3D84 string=0x00000000002C3D88 ""
 *   insn=0x00000000002C3D90 string=0x00000000002C3D94 "uf"
 *   insn=0x00000000002C3D98 string=0x00000000002C3D9C "@"
 *   insn=0x00000000002C3D98 string=0x00000000002C3DB8 "!"
 *   insn=0x00000000002C3D9C string=0x00000000002C3DA0 ""
 *   insn=0x00000000002C3DA0 string=0x00000000002C3DA4 ""
 *   insn=0x00000000002C3DA8 string=0x00000000002C3DAC ""
 *   insn=0x00000000002C3DAC string=0x00000000002C3DB0 ""
 *   insn=0x00000000002C3DB8 string=0x00000000002C3DBC ""
 *   insn=0x00000000002C3DBC string=0x00000000002C3DC0 "A"
 *   insn=0x00000000002C3DCC string=0x00000000002C3DD0 "@"
 *   insn=0x00000000002C3DCC string=0x00000000002C3DEC "!"
 *   insn=0x00000000002C3DD0 string=0x00000000002C3DD4 ""
 *   insn=0x00000000002C3DD4 string=0x00000000002C3DD8 ""
 *   insn=0x00000000002C3DDC string=0x00000000002C3DE0 ""
 *   insn=0x00000000002C3DE0 string=0x00000000002C3DE4 ""
 *   insn=0x00000000002C3DEC string=0x00000000002C3DF0 "`F@"
 *   insn=0x00000000002C3DF0 string=0x00000000002C3DF4 "i@"
 *   insn=0x00000000002C3DF4 string=0x00000000002C3DF8 "A"
 *   insn=0x00000000002C3DF8 string=0x00000000002C3DFC "h>"
 *   insn=0x00000000002C3E00 string=0x00000000002C3E04 "@"
 *   insn=0x00000000002C3E04 string=0x00000000002C3E08 ""
 *   insn=0x00000000002C3E08 string=0x00000000002C3E0C ""
 *   insn=0x00000000002C3E10 string=0x00000000002C3E14 ""
 *   insn=0x00000000002C3E14 string=0x00000000002C3E18 ""
 *   insn=0x00000000002C3E24 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002C3E2C string=0x00000000002C3E30 "G)"
 *   insn=0x00000000002C3E4C string=0x00000000002C3E50 "`"
 *   insn=0x00000000002C3E50 string=0x00000000002C3E54 "h""
 *   insn=0x00000000002C3E5C string=0x00000000002C3E60 "i"
 *   insn=0x00000000002C3E60 string=0x00000000002C3E64 "?"
 *   insn=0x00000000002C3E68 string=0x00000000002C3E6C "`F@"
 *   insn=0x00000000002C3E6C string=0x00000000002C3E70 "h"
 *   insn=0x00000000002C3E78 string=0x00000000002C3E7C "@"
 *   insn=0x00000000002C3E7C string=0x00000000002C3E80 ""
 *   insn=0x00000000002C3E80 string=0x00000000002C3E84 ""
 *   insn=0x00000000002C3E88 string=0x00000000002C3E8C ""
 *   insn=0x00000000002C3E8C string=0x00000000002C3E90 ""
 *   insn=0x00000000002C3E9C string=0x00000000002C3EA0 "h"
 *   insn=0x00000000002C3EA0 string=0x00000000002C3EA4 "("
 *   insn=0x00000000002C3EA4 string=0x00000000002C3EA8 "ir"
 *   insn=0x00000000002C3EA8 string=0x00000000002C3EAC "("
 *   insn=0x00000000002C3EB4 string=0x00000000002C3EB8 "h"
 *   insn=0x00000000002C3EB8 string=0x00000000002C3EBC " "
 *   insn=0x00000000002C3EBC string=0x00000000002C3EC0 "h"
 *   insn=0x00000000002C3EC8 string=0x00000000002C3ECC "i"
 *   insn=0x00000000002C3ECC string=0x00000000002C3ED0 "h"
 *   insn=0x00000000002C3ED4 string=0x00000000002C3ED8 "?"
 *   insn=0x00000000002C3EDC string=0x00000000002C3EE0 "`n@"
 *   insn=0x00000000002C3EE0 string=0x00000000002C3EE4 "h"
 *   insn=0x00000000002C3EEC string=0x00000000002C3EF0 "@"
 *   insn=0x00000000002C3EF0 string=0x00000000002C3EF4 ""
 *   insn=0x00000000002C3EF4 string=0x00000000002C3EF8 ""
 *   insn=0x00000000002C3EFC string=0x00000000002C3F00 ""
 *   insn=0x00000000002C3F00 string=0x00000000002C3F04 ""
 *   insn=0x00000000002C3F0C string=0x00000000002C3F10 "i"
 *   insn=0x00000000002C3F10 string=0x00000000002C3F14 "h"
 *   insn=0x00000000002C3F18 string=0x00000000002C3F1C "h"
 *   insn=0x00000000002C3F20 string=0x00000000002C3F24 "?"
 *   insn=0x00000000002C3F28 string=0x00000000002C3F2C "`"
 *   insn=0x00000000002C3F2C string=0x00000000002C3F30 "h"
 *   insn=0x00000000002C3F38 string=0x00000000002C3F3C "@"
 *   insn=0x00000000002C3F3C string=0x00000000002C3F40 ""
 *   insn=0x00000000002C3F40 string=0x00000000002C3F44 ""
 *   insn=0x00000000002C3F48 string=0x00000000002C3F4C ""
 *   insn=0x00000000002C3F4C string=0x00000000002C3F50 ""
 *   insn=0x00000000002C3F58 string=0x00000000002C3F5C "h2"
 *   insn=0x00000000002C3F60 string=0x00000000002C3F64 "hJ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::SwingableWeaponComponent(Caver::SwingableWeaponComponent *this)
{
  __int128 v1; // q1
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x9
  int v11; // w8
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  _QWORD v26[3]; // [xsp+28h] [xbp-68h] BYREF

  *(_QWORD *)&v1 = &off_6C51D8;
  *((_QWORD *)&v1 + 1) = &off_6C5218;
  v26[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_OWORD *)this + 2) = 0u;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C50C0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 15) = off_6B9438;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = &off_6BAE78;
  *((_DWORD *)this + 38) = 0;
  *((_OWORD *)this + 10) = 0u;
  *((_QWORD *)this + 24) = 0;
  *((_OWORD *)this + 11) = 0u;
  *((_QWORD *)this + 25) = off_6C52A8;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0;
  *((_QWORD *)this + 28) = off_6C52A8;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = &off_6C5258;
  *((_OWORD *)this + 22) = 0u;
  *((_OWORD *)this + 21) = 0u;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = off_6C0268;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = off_6BE248;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 40) = off_6BE248;
  *((_DWORD *)this + 82) = 0;
  *((_WORD *)this + 184) = 0;
  *(_QWORD *)((char *)this + 412) = 0x4282000042480000LL;
  *((_DWORD *)this + 105) = 0;
  *(_OWORD *)((char *)this + 424) = xmmword_58A040;
  *(_QWORD *)((char *)this + 444) = 1092616192;
  *((_BYTE *)this + 452) = 0;
  sub_566BB8((int)v26, "model");
  Caver::Component::BindOutlet();
  v2 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v26[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v26, "collisionShape");
  Caver::Component::BindOutlet();
  v3 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v26[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v26, "trail");
  Caver::Component::BindOutlet();
  v4 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v26[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v4);
  }
  sub_566BB8((int)v26, "glowTrail");
  Caver::Component::BindOutlet();
  v5 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v26[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)v26, "glow");
  Caver::Component::BindOutlet();
  v6 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v26[0] - 8LL);
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
      operator delete(v6);
  }
  sub_566BB8((int)v26, "impactParticleEmitter");
  Caver::Component::BindOutlet();
  v7 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26[0] - 8LL);
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
      operator delete(v7);
  }
  sub_566BB8((int)v26, "swingSound");
  Caver::Component::BindOutlet();
  v8 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v26[0] - 8LL);
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
      operator delete(v8);
  }
  sub_566BB8((int)v26, "damageImpactSound");
  Caver::Component::BindOutlet();
  v9 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v24 = (unsigned int *)(v26[0] - 8LL);
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
      operator delete(v9);
  }
}

