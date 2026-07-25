/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A31E8
 * Mangled: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN5Caver13PlayerProfileEEESt6vectorIS6_SaIS6_EEEENS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_
 * Demangled: std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callers: 1
 *   0x00000000001FE6D0  std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC740  std::__push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000200E00  std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 206
 *   insn=0x00000000003A3200 string=0x00000000003A3204 "Y"
 *   insn=0x00000000003A3204 string=0x00000000003A3208 ")"
 *   insn=0x00000000003A320C string=0x00000000003A3210 "("
 *   insn=0x00000000003A3220 string=0x00000000003A3318 "("
 *   insn=0x00000000003A3230 string=0x00000000003A3234 "("
 *   insn=0x00000000003A3240 string=0x00000000003A3244 "H"
 *   insn=0x00000000003A3248 string=0x00000000003A324C "i"
 *   insn=0x00000000003A3250 string=0x00000000003A3254 "(\t"
 *   insn=0x00000000003A3254 string=0x00000000003A3258 "h"
 *   insn=0x00000000003A327C string=0x00000000003A3280 "8"
 *   insn=0x00000000003A3280 string=0x00000000003A3284 "@"
 *   insn=0x00000000003A3284 string=0x00000000003A3288 ""
 *   insn=0x00000000003A3288 string=0x00000000003A328C ""
 *   insn=0x00000000003A3290 string=0x00000000003A3294 ""
 *   insn=0x00000000003A3294 string=0x00000000003A3298 "\t@"
 *   insn=0x00000000003A32A0 string=0x00000000003A32A4 "@"
 *   insn=0x00000000003A32A4 string=0x00000000003A32A8 ""
 *   insn=0x00000000003A32A8 string=0x00000000003A32AC ""
 *   insn=0x00000000003A32B0 string=0x00000000003A32B4 ""
 *   insn=0x00000000003A32B4 string=0x00000000003A32B8 "@"
 *   insn=0x00000000003A32C4 string=0x00000000003A32C8 "3"
 *   insn=0x00000000003A32C8 string=0x00000000003A32CC "h"
 *   insn=0x00000000003A32CC string=0x00000000003A32D0 ""
 *   insn=0x00000000003A32D0 string=0x00000000003A32D4 "h"
 *   insn=0x00000000003A32D8 string=0x00000000003A32DC "h"
 *   insn=0x00000000003A32E0 string=0x00000000003A32E4 "\t@"
 *   insn=0x00000000003A32E8 string=0x00000000003A32EC "h\n@"
 *   insn=0x00000000003A32EC string=0x00000000003A32F0 ""
 *   insn=0x00000000003A32F0 string=0x00000000003A32F4 "h\n"
 *   insn=0x00000000003A32F8 string=0x00000000003A32FC "h"
 *   insn=0x00000000003A3300 string=0x00000000003A3304 "@"
 *   insn=0x00000000003A330C string=0x00000000003A3310 "ZC"
 *   insn=0x00000000003A3344 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A334C string=0x00000000003A3350 "%"
 *   insn=0x00000000003A334C string=0x00000000003A33A4 "h"
 *   insn=0x00000000003A3358 string=0x00000000003A335C "5"
 *   insn=0x00000000003A335C string=0x00000000003A33A0 "3"
 *   insn=0x00000000003A3360 string=0x00000000003A3364 ""
 *   insn=0x00000000003A3370 string=0x00000000003A3374 "\t@"
 *   insn=0x00000000003A3380 string=0x00000000003A3384 ""
 *   insn=0x00000000003A3390 string=0x00000000003A3394 "@"
 *   insn=0x00000000003A33A4 string=0x00000000003A33A8 ""
 *   insn=0x00000000003A33A8 string=0x00000000003A33AC "h"
 *   insn=0x00000000003A33B0 string=0x00000000003A33B4 "h"
 *   insn=0x00000000003A33B4 string=0x00000000003A33B8 "\t@"
 *   insn=0x00000000003A33C0 string=0x00000000003A33C4 "h\n@"
 *   insn=0x00000000003A33C4 string=0x00000000003A33C8 ""
 *   insn=0x00000000003A33C8 string=0x00000000003A33CC "h\n"
 *   insn=0x00000000003A33D0 string=0x00000000003A33D4 "h"
 *   insn=0x00000000003A33D4 string=0x00000000003A33D8 "@"
 *   insn=0x00000000003A33E4 string=0x00000000003A33E8 "7y"
 *   insn=0x00000000003A3408 string=0x00000000003A340C "X"
 *   insn=0x00000000003A340C string=0x00000000003A3410 ""
 *   insn=0x00000000003A3420 string=0x00000000003A3424 "YL@"
 *   insn=0x00000000003A3428 string=0x00000000003A342C "h"
 *   insn=0x00000000003A342C string=0x00000000003A3430 ""
 *   insn=0x00000000003A3430 string=0x00000000003A3434 "h"
 *   insn=0x00000000003A343C string=0x00000000003A3440 "\n"
 *   insn=0x00000000003A343C string=0x00000000003A344C "W"
 *   insn=0x00000000003A3440 string=0x00000000003A3444 "J"
 *   insn=0x00000000003A3444 string=0x00000000003A3448 "\n"
 *   insn=0x00000000003A344C string=0x00000000003A3450 "I "
 *   insn=0x00000000003A3450 string=0x00000000003A3454 "7"
 *   insn=0x00000000003A3458 string=0x00000000003A345C ""
 *   insn=0x00000000003A3468 string=0x00000000003A346C "\t@"
 *   insn=0x00000000003A3478 string=0x00000000003A347C ""
 *   insn=0x00000000003A3488 string=0x00000000003A348C "@"
 *   insn=0x00000000003A34A4 string=0x00000000003A34A8 "h"
 *   insn=0x00000000003A34A8 string=0x00000000003A34AC ""
 *   insn=0x00000000003A34AC string=0x00000000003A34B0 "h"
 *   insn=0x00000000003A34C0 string=0x00000000003A34C4 "Ov"
 *   insn=0x00000000003A34C8 string=0x00000000003A34CC "4"
 *   insn=0x00000000003A34CC string=0x00000000003A3510 "3"
 *   insn=0x00000000003A34D0 string=0x00000000003A34D4 ""
 *   insn=0x00000000003A34E0 string=0x00000000003A34E4 "\t@"
 *   insn=0x00000000003A34F0 string=0x00000000003A34F4 ""
 *   insn=0x00000000003A3500 string=0x00000000003A3504 "@"
 *   insn=0x00000000003A3510 string=0x00000000003A3514 "h"
 *   insn=0x00000000003A3510 string=0x00000000003A3554 ""
 *   insn=0x00000000003A3514 string=0x00000000003A3518 ""
 *   insn=0x00000000003A3518 string=0x00000000003A351C "h"
 *   insn=0x00000000003A3520 string=0x00000000003A3524 "h"
 *   insn=0x00000000003A3528 string=0x00000000003A352C "\t@"
 *   insn=0x00000000003A3530 string=0x00000000003A3534 "h\n@"
 *   insn=0x00000000003A3534 string=0x00000000003A3538 ""
 *   insn=0x00000000003A3538 string=0x00000000003A353C "h\n"
 *   insn=0x00000000003A3540 string=0x00000000003A3544 "h"
 *   insn=0x00000000003A3548 string=0x00000000003A354C "@"
 *   insn=0x00000000003A3560 string=0x00000000003A3580 "TK"
 *   insn=0x00000000003A3588 string=0x00000000003A358C "%"
 *   insn=0x00000000003A3588 string=0x00000000003A35E0 "h"
 *   insn=0x00000000003A3594 string=0x00000000003A3598 "5"
 *   insn=0x00000000003A3598 string=0x00000000003A35DC "3"
 *   insn=0x00000000003A359C string=0x00000000003A35A0 ""
 *   insn=0x00000000003A35AC string=0x00000000003A35B0 "\t@"
 *   insn=0x00000000003A35BC string=0x00000000003A35C0 ""
 *   insn=0x00000000003A35CC string=0x00000000003A35D0 "@"
 *   insn=0x00000000003A35E0 string=0x00000000003A35E4 ""
 *   insn=0x00000000003A35E4 string=0x00000000003A35E8 "h"
 *   insn=0x00000000003A35EC string=0x00000000003A35F0 "h"
 *   insn=0x00000000003A35F0 string=0x00000000003A35F4 "\t@"
 *   insn=0x00000000003A35FC string=0x00000000003A3600 "h\n@"
 *   insn=0x00000000003A3600 string=0x00000000003A3604 ""
 *   insn=0x00000000003A3604 string=0x00000000003A3608 "h\n"
 *   insn=0x00000000003A360C string=0x00000000003A3610 "h"
 *   insn=0x00000000003A3610 string=0x00000000003A3614 "@"
 *   insn=0x00000000003A3624 string=0x00000000003A3628 "I"
 *   insn=0x00000000003A364C string=0x00000000003A3650 "H"
 *   insn=0x00000000003A3658 string=0x00000000003A365C ""
 *   insn=0x00000000003A365C string=0x00000000003A3660 "_"
 *   insn=0x00000000003A3668 string=0x00000000003A366C "<"
 *   insn=0x00000000003A3684 string=0x00000000003A3688 "m"
 *   insn=0x00000000003A3688 string=0x00000000003A3734 "w"
 *   insn=0x00000000003A3690 string=0x00000000003A3694 ""
 *   insn=0x00000000003A369C string=0x00000000003A36A0 ""
 *   insn=0x00000000003A36A8 string=0x00000000003A36AC "`"
 *   insn=0x00000000003A36B0 string=0x00000000003A36B4 "{"
 *   insn=0x00000000003A36B8 string=0x00000000003A36BC "*!@"
 *   insn=0x00000000003A36C4 string=0x00000000003A36C8 ""
 *   insn=0x00000000003A36C4 string=0x00000000003A36D4 "8"
 *   insn=0x00000000003A36C8 string=0x00000000003A36CC "k"
 *   insn=0x00000000003A36CC string=0x00000000003A36D0 ""
 *   insn=0x00000000003A36D4 string=0x00000000003A36D8 "*!"
 *   insn=0x00000000003A36DC string=0x00000000003A36E0 "@"
 *   insn=0x00000000003A36E0 string=0x00000000003A36E4 ""
 *   insn=0x00000000003A36E4 string=0x00000000003A36E8 ""
 *   insn=0x00000000003A36E8 string=0x00000000003A36EC "!"
 *   insn=0x00000000003A36EC string=0x00000000003A36F0 ""
 *   insn=0x00000000003A36F4 string=0x00000000003A36F8 "\t@"
 *   insn=0x00000000003A36FC string=0x00000000003A3700 "@"
 *   insn=0x00000000003A3700 string=0x00000000003A3704 ""
 *   insn=0x00000000003A3704 string=0x00000000003A3708 ""
 *   insn=0x00000000003A370C string=0x00000000003A371C ""
 *   insn=0x00000000003A3714 string=0x00000000003A3718 ""
 *   insn=0x00000000003A3720 string=0x00000000003A3724 "@"
 *   insn=0x00000000003A372C string=0x00000000003A3730 ""
 *   insn=0x00000000003A373C string=0x00000000003A3740 "H"
 *   insn=0x00000000003A374C string=0x00000000003A3750 "w"
 *   insn=0x00000000003A3754 string=0x00000000003A3758 "*!@"
 *   insn=0x00000000003A3760 string=0x00000000003A3764 ""
 *   insn=0x00000000003A3760 string=0x00000000003A3770 "8"
 *   insn=0x00000000003A3764 string=0x00000000003A3768 "k"
 *   insn=0x00000000003A3768 string=0x00000000003A376C ""
 *   insn=0x00000000003A3770 string=0x00000000003A3774 "*!"
 *   insn=0x00000000003A3774 string=0x00000000003A3778 "x"
 *   insn=0x00000000003A3778 string=0x00000000003A377C "@"
 *   insn=0x00000000003A377C string=0x00000000003A3780 ""
 *   insn=0x00000000003A3780 string=0x00000000003A3784 ""
 *   insn=0x00000000003A3788 string=0x00000000003A378C ""
 *   insn=0x00000000003A3790 string=0x00000000003A3794 "\t@"
 *   insn=0x00000000003A3798 string=0x00000000003A379C "@"
 *   insn=0x00000000003A379C string=0x00000000003A37A0 ""
 *   insn=0x00000000003A37A0 string=0x00000000003A37A4 ""
 *   insn=0x00000000003A37A8 string=0x00000000003A37AC ""
 *   insn=0x00000000003A37B0 string=0x00000000003A37B4 "@"
 *   insn=0x00000000003A37D4 string=0x00000000003A37D8 "\t"
 *   insn=0x00000000003A37D8 string=0x00000000003A37DC ")"
 *   insn=0x00000000003A37DC string=0x00000000003A37E0 "\t"
 *   insn=0x00000000003A37F8 string=0x00000000001FC740 "0'"
 *   insn=0x00000000003A37FC string=0x00000000003A3800 "3"
 *   insn=0x00000000003A3800 string=0x00000000003A3804 "h"
 *   insn=0x00000000003A3804 string=0x00000000003A3808 ""
 *   insn=0x00000000003A3808 string=0x00000000003A380C "h"
 *   insn=0x00000000003A3810 string=0x00000000003A3814 "h"
 *   insn=0x00000000003A3818 string=0x00000000003A381C "\t@"
 *   insn=0x00000000003A3820 string=0x00000000003A3824 "h\n@"
 *   insn=0x00000000003A3824 string=0x00000000003A3828 ""
 *   insn=0x00000000003A3828 string=0x00000000003A382C "h\n"
 *   insn=0x00000000003A3830 string=0x00000000003A3834 "h"
 *   insn=0x00000000003A3838 string=0x00000000003A383C "@"
 *   insn=0x00000000003A3844 string=0x00000000003A3848 ""
 *   insn=0x00000000003A3850 string=0x00000000003A3854 "!"
 *   insn=0x00000000003A3880 string=0x00000000003A3884 "4"
 *   insn=0x00000000003A3888 string=0x00000000003A388C ""
 *   insn=0x00000000003A3898 string=0x00000000003A389C "\t@"
 *   insn=0x00000000003A38A8 string=0x00000000003A38AC ""
 *   insn=0x00000000003A38B8 string=0x00000000003A38BC "@"
 *   insn=0x00000000003A3928 string=0x00000000003A392C "\n#@"
 *   insn=0x00000000003A3934 string=0x00000000003A3938 ""
 *   insn=0x00000000003A3934 string=0x00000000003A3944 "7"
 *   insn=0x00000000003A3938 string=0x00000000003A393C "k"
 *   insn=0x00000000003A393C string=0x00000000003A3940 ""
 *   insn=0x00000000003A3944 string=0x00000000003A3948 "*!"
 *   insn=0x00000000003A3948 string=0x00000000003A394C "7"
 *   insn=0x00000000003A394C string=0x00000000003A3990 "?"
 *   insn=0x00000000003A3950 string=0x00000000003A3954 ""
 *   insn=0x00000000003A3964 string=0x00000000003A3968 "\t@"
 *   insn=0x00000000003A3970 string=0x00000000003A3974 ""
 *   insn=0x00000000003A3984 string=0x00000000003A3988 "@"
 *   insn=0x00000000003A399C string=0x00000000003A39A4 "j"@"
 *   insn=0x00000000003A39AC string=0x00000000003A39B0 ""
 *   insn=0x00000000003A39AC string=0x00000000003A39BC "3"
 *   insn=0x00000000003A39B0 string=0x00000000003A39B4 "k"
 *   insn=0x00000000003A39B4 string=0x00000000003A39B8 ""
 *   insn=0x00000000003A39BC string=0x00000000003A39C0 "*!"
 *   insn=0x00000000003A39C4 string=0x00000000003A39C8 "h"
 *   insn=0x00000000003A39C8 string=0x00000000003A39CC ""
 *   insn=0x00000000003A39CC string=0x00000000003A39D0 "h"
 *   insn=0x00000000003A39D0 string=0x00000000003A39D4 "!"
 *   insn=0x00000000003A39D4 string=0x00000000003A39D8 "h"
 *   insn=0x00000000003A39DC string=0x00000000003A39E0 "\t@"
 *   insn=0x00000000003A39E4 string=0x00000000003A39E8 "h\n@"
 *   insn=0x00000000003A39E8 string=0x00000000003A39EC ""
 *   insn=0x00000000003A39EC string=0x00000000003A39F0 "h\n"
 *   insn=0x00000000003A39F4 string=0x00000000003A3A10 "h"
 *   insn=0x00000000003A3A2C string=0x00000000003A3A30 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x22
  __int64 v4; // x8
  __int64 v5; // x23
  _QWORD **v6; // x26
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // [xsp+150h] [xbp-50h]

  v2 = a2 - a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 - a1 >= 32 )
  {
    v3 = v2 >> 4;
    v4 = (v2 >> 4) - 2;
    if ( v4 < 0 )
      v4 = v3 - 1;
    v5 = v4 >> 1;
    v6 = (_QWORD **)(a1 + 16 * (v4 >> 1) + 8);
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v12 = *v6;
        v7[1] += 2LL;
      }
      else
      {
        v12 = 0;
      }
      std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>();
      if ( v12 )
      {
        v8 = v12[1] - 1LL;
        v12[1] = v8;
        if ( !v8 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v9 = v12[2] - 1LL;
          v12[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      --v5;
      if ( v7 )
      {
        v10 = v7[1] - 1LL;
        v7[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v11 = v7[2] - 1LL;
          v7[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v6 -= 2;
    }
    while ( v5 != -1 );
  }
}

