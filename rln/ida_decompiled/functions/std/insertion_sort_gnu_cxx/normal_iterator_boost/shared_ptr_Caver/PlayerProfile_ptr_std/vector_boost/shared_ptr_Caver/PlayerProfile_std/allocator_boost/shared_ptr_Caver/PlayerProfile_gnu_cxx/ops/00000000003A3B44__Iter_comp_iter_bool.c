/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A3B44
 * Mangled: _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN5Caver13PlayerProfileEEESt6vectorIS6_SaIS6_EEEENS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_
 * Demangled: std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callers: 1
 *   0x00000000001FFFB0  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9450  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203B80  std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 215
 *   insn=0x00000000003A3B78 string=0x00000000003A3B7C " "
 *   insn=0x00000000003A3B98 string=0x00000000003A3B9C "@\n"
 *   insn=0x00000000003A3BAC string=0x00000000003A3BB0 ""
 *   insn=0x00000000003A3BBC string=0x00000000003A3BC0 ""
 *   insn=0x00000000003A3BC0 string=0x00000000003A3BC4 ""
 *   insn=0x00000000003A3BC4 string=0x00000000003A3BC8 ""
 *   insn=0x00000000003A3BD4 string=0x00000000003A3BD8 "\n"
 *   insn=0x00000000003A3BD8 string=0x00000000003A3BDC "J"
 *   insn=0x00000000003A3BDC string=0x00000000003A3BE0 "\n"
 *   insn=0x00000000003A3BE8 string=0x00000000003A3BEC "8"
 *   insn=0x00000000003A3BEC string=0x00000000003A3BF0 "@"
 *   insn=0x00000000003A3BEC string=0x00000000003A3C30 "{"
 *   insn=0x00000000003A3BF0 string=0x00000000003A3BF4 ""
 *   insn=0x00000000003A3BF4 string=0x00000000003A3BF8 ""
 *   insn=0x00000000003A3BFC string=0x00000000003A3C00 ""
 *   insn=0x00000000003A3C00 string=0x00000000003A3C04 "\t@"
 *   insn=0x00000000003A3C0C string=0x00000000003A3C10 "@"
 *   insn=0x00000000003A3C10 string=0x00000000003A3C14 ""
 *   insn=0x00000000003A3C14 string=0x00000000003A3C18 ""
 *   insn=0x00000000003A3C1C string=0x00000000003A3C20 ""
 *   insn=0x00000000003A3C20 string=0x00000000003A3C24 "@"
 *   insn=0x00000000003A3C44 string=0x00000000003A3C48 ""
 *   insn=0x00000000003A3C54 string=0x00000000003A3C58 "8"
 *   insn=0x00000000003A3C58 string=0x00000000003A3C5C "@"
 *   insn=0x00000000003A3C5C string=0x00000000003A3C60 ""
 *   insn=0x00000000003A3C60 string=0x00000000003A3C64 ""
 *   insn=0x00000000003A3C68 string=0x00000000003A3C6C ""
 *   insn=0x00000000003A3C6C string=0x00000000003A3C70 "\t@"
 *   insn=0x00000000003A3C78 string=0x00000000003A3C7C "@"
 *   insn=0x00000000003A3C7C string=0x00000000003A3C80 ""
 *   insn=0x00000000003A3C80 string=0x00000000003A3C84 ""
 *   insn=0x00000000003A3C88 string=0x00000000003A3C8C ""
 *   insn=0x00000000003A3C8C string=0x00000000003A3C90 "@"
 *   insn=0x00000000003A3CA0 string=0x00000000003A3CA4 ""
 *   insn=0x00000000003A3CA8 string=0x00000000003A3CAC "!"
 *   insn=0x00000000003A3CB4 string=0x00000000003A3CB8 "\t@"
 *   insn=0x00000000003A3CC0 string=0x00000000003A3CC4 ""
 *   insn=0x00000000003A3CC8 string=0x00000000003A3CCC "!"
 *   insn=0x00000000003A3CD4 string=0x00000000003A3CD8 "@"
 *   insn=0x00000000003A3CF4 string=0x00000000003A3CF8 "9C"
 *   insn=0x00000000003A3CF8 string=0x00000000003A3CFC "a"
 *   insn=0x00000000003A3D28 string=0x00000000003A3D2C "6"
 *   insn=0x00000000003A3D30 string=0x00000000003A3D34 ""
 *   insn=0x00000000003A3D40 string=0x00000000003A3D44 "\t@"
 *   insn=0x00000000003A3D50 string=0x00000000003A3D54 ""
 *   insn=0x00000000003A3D60 string=0x00000000003A3D64 "@"
 *   insn=0x00000000003A3D74 string=0x00000000003A3D78 "u"
 *   insn=0x00000000003A3D8C string=0x00000000003A3D90 "V"
 *   insn=0x00000000003A3D9C string=0x00000000003A3DA0 ""
 *   insn=0x00000000003A3DA4 string=0x00000000003A3DA8 ""
 *   insn=0x00000000003A3DB0 string=0x00000000003A3DB4 "\t"
 *   insn=0x00000000003A3DB4 string=0x00000000003A3DB8 ")"
 *   insn=0x00000000003A3DB8 string=0x00000000003A3DBC "\t"
 *   insn=0x00000000003A3DD0 string=0x00000000003A3DD4 "`"
 *   insn=0x00000000003A3DD4 string=0x00000000003A3DD8 "@"
 *   insn=0x00000000003A3DE0 string=0x00000000003A3DE4 "\n"
 *   insn=0x00000000003A3DE4 string=0x00000000003A3DE8 "J"
 *   insn=0x00000000003A3DE8 string=0x00000000003A3DEC "\n"
 *   insn=0x00000000003A3DFC string=0x00000000003A3E00 ""
 *   insn=0x00000000003A3E0C string=0x00000000003A3E10 "\t@"
 *   insn=0x00000000003A3E1C string=0x00000000003A3E20 ""
 *   insn=0x00000000003A3E2C string=0x00000000003A3E30 "@"
 *   insn=0x00000000003A3E44 string=0x00000000003A3E48 "\n"
 *   insn=0x00000000003A3E48 string=0x00000000003A3E4C "J"
 *   insn=0x00000000003A3E4C string=0x00000000003A3E50 "\n"
 *   insn=0x00000000003A3E58 string=0x00000000003A3E5C "3"
 *   insn=0x00000000003A3E5C string=0x00000000003A3E60 "h"
 *   insn=0x00000000003A3E60 string=0x00000000003A3E64 ""
 *   insn=0x00000000003A3E64 string=0x00000000003A3E68 "h"
 *   insn=0x00000000003A3E6C string=0x00000000003A3E70 "h"
 *   insn=0x00000000003A3E70 string=0x00000000003A3E74 "\t@"
 *   insn=0x00000000003A3E7C string=0x00000000003A3E80 "h\n@"
 *   insn=0x00000000003A3E80 string=0x00000000003A3E84 ""
 *   insn=0x00000000003A3E84 string=0x00000000003A3E88 "h\n"
 *   insn=0x00000000003A3E8C string=0x00000000003A3E90 "h"
 *   insn=0x00000000003A3E90 string=0x00000000003A3E94 "@"
 *   insn=0x00000000003A3EA0 string=0x00000000003A3EA4 "3"
 *   insn=0x00000000003A3EA4 string=0x00000000003A3EA8 "h"
 *   insn=0x00000000003A3EA8 string=0x00000000003A3EAC ""
 *   insn=0x00000000003A3EAC string=0x00000000003A3EB0 "h"
 *   insn=0x00000000003A3EB4 string=0x00000000003A3EB8 "h"
 *   insn=0x00000000003A3EBC string=0x00000000003A3EC0 "\t@"
 *   insn=0x00000000003A3EC4 string=0x00000000003A3EC8 "h\n@"
 *   insn=0x00000000003A3EC8 string=0x00000000003A3ECC ""
 *   insn=0x00000000003A3ECC string=0x00000000003A3ED0 "h\n"
 *   insn=0x00000000003A3ED4 string=0x00000000003A3ED8 "h"
 *   insn=0x00000000003A3EDC string=0x00000000003A3EE0 "@"
 *   insn=0x00000000003A3F0C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A3F18 string=0x00000000003A3F1C "4"
 *   insn=0x00000000003A3F20 string=0x00000000003A3F24 ""
 *   insn=0x00000000003A3F30 string=0x00000000003A3F34 "\t@"
 *   insn=0x00000000003A3F40 string=0x00000000003A3F44 ""
 *   insn=0x00000000003A3F50 string=0x00000000003A3F54 "@"
 *   insn=0x00000000003A3F60 string=0x00000000003A3F64 "Xv"
 *   insn=0x00000000003A3F90 string=0x00000000003A3F94 "?"
 *   insn=0x00000000003A3F9C string=0x00000000003A3FA0 "_"
 *   insn=0x00000000003A3FA0 string=0x00000000003A3FA4 "*"
 *   insn=0x00000000003A3FA4 string=0x00000000003A3FA8 "+)"
 *   insn=0x00000000003A3FAC string=0x00000000003A3FB0 "K"
 *   insn=0x00000000003A3FAC string=0x00000000003A3FBC ")A"
 *   insn=0x00000000003A3FB0 string=0x00000000003A3FB4 "k"
 *   insn=0x00000000003A3FB4 string=0x00000000003A3FB8 "K"
 *   insn=0x00000000003A3FC8 string=0x00000000003A3FD8 "\t"
 *   insn=0x00000000003A3FCC string=0x00000000003A3FD0 ")"
 *   insn=0x00000000003A3FD8 string=0x00000000003A3FDC "?"
 *   insn=0x00000000003A3FDC string=0x00000000003A3FE0 "+"
 *   insn=0x00000000003A3FE0 string=0x00000000003A3FE4 ")"
 *   insn=0x00000000003A3FE4 string=0x00000000003A3FE8 "7"
 *   insn=0x00000000003A3FEC string=0x00000000003A3FF0 "\t"
 *   insn=0x00000000003A3FF0 string=0x00000000003A3FF4 "\n@"
 *   insn=0x00000000003A3FF8 string=0x00000000003A3FFC "K"
 *   insn=0x00000000003A3FFC string=0x00000000003A4000 "k"
 *   insn=0x00000000003A4000 string=0x00000000003A4004 "K"
 *   insn=0x00000000003A4008 string=0x00000000003A400C "\t)"
 *   insn=0x00000000003A400C string=0x00000000003A4010 "5"
 *   insn=0x00000000003A4014 string=0x00000000003A4018 ""
 *   insn=0x00000000003A4024 string=0x00000000003A4028 "\t@"
 *   insn=0x00000000003A4034 string=0x00000000003A4038 ""
 *   insn=0x00000000003A4044 string=0x00000000003A4048 "@"
 *   insn=0x00000000003A4064 string=0x00000000003A4074 "u"
 *   insn=0x00000000003A4068 string=0x00000000003A406C ""
 *   insn=0x00000000003A4074 string=0x00000000003A4078 "vR"
 *   insn=0x00000000003A4078 string=0x00000000003A407C "5"
 *   insn=0x00000000003A407C string=0x00000000003A40C0 "t"
 *   insn=0x00000000003A4080 string=0x00000000003A4084 ""
 *   insn=0x00000000003A4090 string=0x00000000003A4094 "\t@"
 *   insn=0x00000000003A40A0 string=0x00000000003A40A4 ""
 *   insn=0x00000000003A40B0 string=0x00000000003A40B4 "@"
 *   insn=0x00000000003A40C4 string=0x00000000003A40C8 ""
 *   insn=0x00000000003A40D8 string=0x00000000003A40DC "\t@"
 *   insn=0x00000000003A40E4 string=0x00000000003A40E8 ""
 *   insn=0x00000000003A4110 string=0x00000000003A4114 " "
 *   insn=0x00000000003A4118 string=0x00000000003A411C "("
 *   insn=0x00000000003A411C string=0x00000000003A4120 ""
 *   insn=0x00000000003A4120 string=0x00000000003A4124 "\t"
 *   insn=0x00000000003A4124 string=0x00000000003A4128 "("
 *   insn=0x00000000003A4128 string=0x00000000003A412C "\n"
 *   insn=0x00000000003A4130 string=0x00000000003A4134 "_"
 *   insn=0x00000000003A4138 string=0x00000000003A413C ")"
 *   insn=0x00000000003A413C string=0x00000000003A4140 "?"
 *   insn=0x00000000003A4144 string=0x00000000003A4148 "7"
 *   insn=0x00000000003A4158 string=0x00000000003A415C "!E"
 *   insn=0x00000000003A415C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A416C string=0x00000000003A4170 "i"
 *   insn=0x00000000003A4170 string=0x00000000003A4174 ")"
 *   insn=0x00000000003A4178 string=0x00000000003A417C "("
 *   insn=0x00000000003A4180 string=0x00000000003A4184 "("
 *   insn=0x00000000003A4188 string=0x00000000003A418C "\t"
 *   insn=0x00000000003A418C string=0x00000000003A4190 ")"
 *   insn=0x00000000003A4190 string=0x00000000003A4194 "\t"
 *   insn=0x00000000003A41A8 string=0x00000000003A41AC "hB"
 *   insn=0x00000000003A41B0 string=0x00000000003A41B4 "K"
 *   insn=0x00000000003A41BC string=0x00000000003A41C0 "K"
 *   insn=0x00000000003A41C8 string=0x00000000003A41CC "l"
 *   insn=0x00000000003A41C8 string=0x00000000003A41D8 "JA"
 *   insn=0x00000000003A41D0 string=0x00000000003A41D4 "l"
 *   insn=0x00000000003A41D8 string=0x00000000003A41DC "_"
 *   insn=0x00000000003A41DC string=0x00000000003A41E0 ")A"
 *   insn=0x00000000003A41E0 string=0x00000000003A41E4 "a"
 *   insn=0x00000000003A41E4 string=0x00000000003A41E8 ""
 *   insn=0x00000000003A41E8 string=0x00000000003A41EC ""
 *   insn=0x00000000003A41F0 string=0x00000000003A41F4 "A"
 *   insn=0x00000000003A41FC string=0x00000000003A4200 "?"
 *   insn=0x00000000003A4204 string=0x00000000003A4208 "(C"
 *   insn=0x00000000003A4210 string=0x00000000003A4214 "K"
 *   insn=0x00000000003A4214 string=0x00000000003A4218 "+"
 *   insn=0x00000000003A4218 string=0x00000000003A421C "K"
 *   insn=0x00000000003A421C string=0x00000000003A4220 "+"
 *   insn=0x00000000003A4224 string=0x00000000003A4228 "l"
 *   insn=0x00000000003A4224 string=0x00000000003A4234 "JA"
 *   insn=0x00000000003A422C string=0x00000000003A4230 "l"
 *   insn=0x00000000003A4234 string=0x00000000003A4238 "_"
 *   insn=0x00000000003A4238 string=0x00000000003A423C ")A"
 *   insn=0x00000000003A4240 string=0x00000000003A4244 ""
 *   insn=0x00000000003A4244 string=0x00000000003A4248 ""
 *   insn=0x00000000003A4248 string=0x00000000003A424C ""
 *   insn=0x00000000003A4258 string=0x00000000003A42B4 "v"
 *   insn=0x00000000003A425C string=0x00000000003A4260 "3"
 *   insn=0x00000000003A4260 string=0x00000000003A4264 "h"
 *   insn=0x00000000003A4264 string=0x00000000003A4268 ""
 *   insn=0x00000000003A4268 string=0x00000000003A426C "h"
 *   insn=0x00000000003A4270 string=0x00000000003A4274 "h"
 *   insn=0x00000000003A4278 string=0x00000000003A427C "\t@"
 *   insn=0x00000000003A4280 string=0x00000000003A4284 "h\n@"
 *   insn=0x00000000003A4284 string=0x00000000003A4288 ""
 *   insn=0x00000000003A4288 string=0x00000000003A428C "h\n"
 *   insn=0x00000000003A4290 string=0x00000000003A4294 "h"
 *   insn=0x00000000003A4298 string=0x00000000003A429C "@"
 *   insn=0x00000000003A42A4 string=0x00000000003A42A8 "?"
 *   insn=0x00000000003A42BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A42F4 string=0x00000000003A42F8 "4"
 *   insn=0x00000000003A42FC string=0x00000000003A4300 ""
 *   insn=0x00000000003A430C string=0x00000000003A4310 "\t@"
 *   insn=0x00000000003A431C string=0x00000000003A4320 ""
 *   insn=0x00000000003A432C string=0x00000000003A4330 "@"
 *   insn=0x00000000003A433C string=0x00000000003A4340 "au"
 *   insn=0x00000000003A4364 string=0x00000000003A4368 "\t"
 *   insn=0x00000000003A4368 string=0x00000000003A436C ")!F"
 *   insn=0x00000000003A4378 string=0x00000000003A437C "(A"
 *   insn=0x00000000003A4380 string=0x00000000003A4384 ""
 *   insn=0x00000000003A438C string=0x00000000003A4390 "`""
 *   insn=0x00000000003A4398 string=0x00000000003A439C "-T"
 *   insn=0x00000000003A439C string=0x00000000001F9450 "0'"
 *   insn=0x00000000003A43B0 string=0x00000000003A43B4 "4"
 *   insn=0x00000000003A43B8 string=0x00000000003A43BC ""
 *   insn=0x00000000003A43C8 string=0x00000000003A43CC "\t@"
 *   insn=0x00000000003A43D8 string=0x00000000003A43DC ""
 *   insn=0x00000000003A43E8 string=0x00000000003A43EC "@"
 *   insn=0x00000000003A43F8 string=0x00000000003A43FC "2u"
 *   insn=0x00000000003A4400 string=0x00000000003A4404 "w@"
 *   insn=0x00000000003A4404 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A4408 string=0x00000000003A440C "h"
 *   insn=0x00000000003A440C string=0x00000000003A4410 "!@"
 *   insn=0x00000000003A4420 string=0x00000000003A4424 "[d"
 *   insn=0x00000000003A4424 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(
        char *a1,
        char *a2,
        __int64 (__fastcall *a3)(char *, char *))
{
  char *v6; // x8
  _QWORD **v7; // x25
  char *v8; // x23
  char *v9; // x22
  _QWORD *v10; // x22
  __int64 v11; // x26
  __int64 v12; // x27
  _QWORD **v13; // x28
  _QWORD *v14; // x8
  _QWORD *v15; // x9
  _QWORD *v16; // x24
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x24
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8

  if ( a1 != a2 )
  {
    v6 = a1 + 16;
    if ( a1 + 16 != a2 )
    {
      v7 = (_QWORD **)(a1 + 24);
      v8 = a1;
      do
      {
        v9 = v8;
        v8 = v6;
        if ( (a3(v6, a1) & 1) != 0 )
        {
          v10 = (_QWORD *)*((_QWORD *)v9 + 3);
          v11 = *(_QWORD *)v8;
          if ( v10 )
            ++v10[1];
          if ( v8 - a1 >= 1 )
          {
            v12 = ((unsigned __int64)(v8 - a1) >> 4) + 1;
            v13 = v7;
            do
            {
              v15 = *(v13 - 3);
              v14 = *(v13 - 2);
              if ( v14 )
                ++v14[1];
              v16 = *v13;
              *(v13 - 1) = v15;
              *v13 = v14;
              if ( v16 )
              {
                v17 = v16[1] - 1LL;
                v16[1] = v17;
                if ( !v17 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
                  v18 = v16[2] - 1LL;
                  v16[2] = v18;
                  if ( !v18 )
                    (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
                }
              }
              --v12;
              v13 -= 2;
            }
            while ( v12 > 1 );
          }
          if ( v10 )
            ++v10[1];
          v19 = (_QWORD *)*((_QWORD *)a1 + 1);
          *(_QWORD *)a1 = v11;
          *((_QWORD *)a1 + 1) = v10;
          if ( v19 )
          {
            v20 = v19[1] - 1LL;
            v19[1] = v20;
            if ( !v20 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
              v21 = v19[2] - 1LL;
              v19[2] = v21;
              if ( !v21 )
                (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
            }
          }
          if ( v10 )
          {
            v22 = v10[1] - 1LL;
            v10[1] = v22;
            if ( !v22 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
              v23 = v10[2] - 1LL;
              v10[2] = v23;
              if ( !v23 )
                (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
            }
          }
        }
        else
        {
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>();
        }
        v6 = v8 + 16;
        v7 += 2;
      }
      while ( v8 + 16 != a2 );
    }
  }
}

