/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2F98
 * Mangled: _ZN5Caver9GameStateD2Ev
 * Demangled: Caver::GameState::~GameState()
 *
 * Callers: 1
 *   0x00000000001FA0D0  Caver::GameState::~GameState()
 *
 * Callees: 11
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8FB0  Caver::CharacterState::~CharacterState()
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x0000000000200870  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *   0x0000000000200A40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 334
 *   insn=0x00000000003C2FAC string=0x00000000003C2FB0 "V"
 *   insn=0x00000000003C2FBC string=0x00000000003C2FC0 "t^["
 *   insn=0x00000000003C2FC8 string=0x00000000003C3024 "t"
 *   insn=0x00000000003C2FCC string=0x00000000003C2FD0 "5"
 *   insn=0x00000000003C2FD4 string=0x00000000003C2FD8 ""
 *   insn=0x00000000003C2FE4 string=0x00000000003C2FE8 "\t@"
 *   insn=0x00000000003C2FF4 string=0x00000000003C2FF8 ""
 *   insn=0x00000000003C3004 string=0x00000000003C3008 "@"
 *   insn=0x00000000003C301C string=0x00000000003C3020 "t"
 *   insn=0x00000000003C3024 string=0x00000000003C3030 "h"
 *   insn=0x00000000003C302C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C3044 string=0x00000000003C3048 "h"
 *   insn=0x00000000003C3044 string=0x00000000003C319C "\t"
 *   insn=0x00000000003C3050 string=0x00000000003C3054 "a"
 *   insn=0x00000000003C3054 string=0x00000000003C3058 "h"
 *   insn=0x00000000003C3054 string=0x00000000003C31C0 "\t"
 *   insn=0x00000000003C3064 string=0x00000000003C3068 "h"
 *   insn=0x00000000003C3064 string=0x00000000003C31E4 "\t"
 *   insn=0x00000000003C3074 string=0x00000000003C3078 "h"
 *   insn=0x00000000003C3074 string=0x00000000003C3208 "\t"
 *   insn=0x00000000003C3080 string=0x00000000003C3084 "A"
 *   insn=0x00000000003C3084 string=0x00000000003C3088 "t"
 *   insn=0x00000000003C3084 string=0x00000000003C322C "\t"
 *   insn=0x00000000003C3088 string=0x00000000003C308C "4"
 *   insn=0x00000000003C308C string=0x00000000003C30D0 "h"
 *   insn=0x00000000003C3090 string=0x00000000003C3094 ""
 *   insn=0x00000000003C30A0 string=0x00000000003C30A4 "\t@"
 *   insn=0x00000000003C30B0 string=0x00000000003C30B4 ""
 *   insn=0x00000000003C30C0 string=0x00000000003C30C4 "@"
 *   insn=0x00000000003C30DC string=0x00000000003C30E0 "h"
 *   insn=0x00000000003C30DC string=0x00000000003C3250 "\t"
 *   insn=0x00000000003C30E8 string=0x00000000003C30EC "A"
 *   insn=0x00000000003C30EC string=0x00000000003C30F0 "h"
 *   insn=0x00000000003C30EC string=0x00000000003C3274 "\t"
 *   insn=0x00000000003C30FC string=0x00000000003C3100 "a"
 *   insn=0x00000000003C30FC string=0x00000000003C3298 "\t"
 *   insn=0x00000000003C3100 string=0x00000000003C3104 "`"
 *   insn=0x00000000003C3104 string=0x00000000003C3108 "6"
 *   insn=0x00000000003C3108 string=0x00000000003C310C "a"
 *   insn=0x00000000003C310C string=0x00000000003C3110 "`"
 *   insn=0x00000000003C3110 string=0x00000000003C3114 "K"
 *   insn=0x00000000003C3114 string=0x00000000003C3118 "an@"
 *   insn=0x00000000003C3118 string=0x00000000003C311C "`""
 *   insn=0x00000000003C3120 string=0x00000000003C3124 "`B"
 *   insn=0x00000000003C3128 string=0x00000000003C312C "s"
 *   insn=0x00000000003C3128 string=0x00000000001F8FB0 "0'"
 *   insn=0x00000000003C312C string=0x00000000003C3130 "3"
 *   insn=0x00000000003C3130 string=0x00000000003C3134 "h"
 *   insn=0x00000000003C3134 string=0x00000000003C3138 ""
 *   insn=0x00000000003C3138 string=0x00000000003C313C "h"
 *   insn=0x00000000003C3140 string=0x00000000003C3144 "h"
 *   insn=0x00000000003C3148 string=0x00000000003C314C "\t@"
 *   insn=0x00000000003C3150 string=0x00000000003C3154 "h\n@"
 *   insn=0x00000000003C3154 string=0x00000000003C3158 ""
 *   insn=0x00000000003C3158 string=0x00000000003C315C "h\n"
 *   insn=0x00000000003C3160 string=0x00000000003C3164 "h"
 *   insn=0x00000000003C3168 string=0x00000000003C316C "@"
 *   insn=0x00000000003C317C string=0x00000000003C3180 "!"
 *   insn=0x00000000003C319C string=0x00000000003C31A0 ")=G"
 *   insn=0x00000000003C31A0 string=0x00000000003C31A4 "!"
 *   insn=0x00000000003C31A8 string=0x00000000003C31AC "\t"
 *   insn=0x00000000003C31A8 string=0x00000000003C32BC "\t"
 *   insn=0x00000000003C31AC string=0x00000000003C31B0 "*"
 *   insn=0x00000000003C31B0 string=0x00000000003C31B4 "\n"
 *   insn=0x00000000003C31B8 string=0x00000000003C31BC "C"
 *   insn=0x00000000003C31BC string=0x00000000003C32C8 "?"
 *   insn=0x00000000003C31C0 string=0x00000000003C31C4 ")=G"
 *   insn=0x00000000003C31C4 string=0x00000000003C31C8 "!"
 *   insn=0x00000000003C31CC string=0x00000000003C31D0 "\t"
 *   insn=0x00000000003C31CC string=0x00000000003C32DC "\t"
 *   insn=0x00000000003C31D0 string=0x00000000003C31D4 "*"
 *   insn=0x00000000003C31D4 string=0x00000000003C31D8 "\n"
 *   insn=0x00000000003C31DC string=0x00000000003C31E0 "B"
 *   insn=0x00000000003C31E0 string=0x00000000003C32E8 "?"
 *   insn=0x00000000003C31E4 string=0x00000000003C31E8 ")=G"
 *   insn=0x00000000003C31E8 string=0x00000000003C31EC "!"
 *   insn=0x00000000003C31EC string=0x00000000003C31F0 "i"
 *   insn=0x00000000003C31F0 string=0x00000000003C31F4 "\t"
 *   insn=0x00000000003C31F0 string=0x00000000003C32FC "\t"
 *   insn=0x00000000003C31F4 string=0x00000000003C31F8 "*"
 *   insn=0x00000000003C31F8 string=0x00000000003C31FC "\n"
 *   insn=0x00000000003C3200 string=0x00000000003C3204 "A"
 *   insn=0x00000000003C3204 string=0x00000000003C3308 "?"
 *   insn=0x00000000003C3208 string=0x00000000003C320C ")=G"
 *   insn=0x00000000003C320C string=0x00000000003C3210 "!"
 *   insn=0x00000000003C3210 string=0x00000000003C3214 "I"
 *   insn=0x00000000003C3214 string=0x00000000003C3218 "\t"
 *   insn=0x00000000003C3214 string=0x00000000003C331C "\t"
 *   insn=0x00000000003C3218 string=0x00000000003C321C "*"
 *   insn=0x00000000003C321C string=0x00000000003C3220 "\n"
 *   insn=0x00000000003C3224 string=0x00000000003C3228 "@"
 *   insn=0x00000000003C3228 string=0x00000000003C3328 "?"
 *   insn=0x00000000003C322C string=0x00000000003C3230 ")=G"
 *   insn=0x00000000003C3230 string=0x00000000003C3234 "!"
 *   insn=0x00000000003C3234 string=0x00000000003C3238 ")"
 *   insn=0x00000000003C3238 string=0x00000000003C323C "\t"
 *   insn=0x00000000003C3238 string=0x00000000003C333C "\t"
 *   insn=0x00000000003C323C string=0x00000000003C3240 "*"
 *   insn=0x00000000003C3240 string=0x00000000003C3244 "\n"
 *   insn=0x00000000003C3248 string=0x00000000003C324C "?"
 *   insn=0x00000000003C324C string=0x00000000003C3348 "?"
 *   insn=0x00000000003C3250 string=0x00000000003C3254 ")=G"
 *   insn=0x00000000003C3254 string=0x00000000003C3258 "!"
 *   insn=0x00000000003C3258 string=0x00000000003C325C "I"
 *   insn=0x00000000003C325C string=0x00000000003C3260 "\t"
 *   insn=0x00000000003C325C string=0x00000000003C3364 "\t"
 *   insn=0x00000000003C3260 string=0x00000000003C3264 "*"
 *   insn=0x00000000003C3264 string=0x00000000003C3268 "\n"
 *   insn=0x00000000003C326C string=0x00000000003C3270 "@"
 *   insn=0x00000000003C3270 string=0x00000000003C3370 "?"
 *   insn=0x00000000003C3274 string=0x00000000003C3278 ")=G"
 *   insn=0x00000000003C3278 string=0x00000000003C327C "!"
 *   insn=0x00000000003C327C string=0x00000000003C3280 ")"
 *   insn=0x00000000003C3280 string=0x00000000003C3284 "\t"
 *   insn=0x00000000003C3280 string=0x00000000003C3384 "\t"
 *   insn=0x00000000003C3284 string=0x00000000003C3288 "*"
 *   insn=0x00000000003C3288 string=0x00000000003C328C "\n"
 *   insn=0x00000000003C3290 string=0x00000000003C3294 "?"
 *   insn=0x00000000003C3294 string=0x00000000003C3390 "?"
 *   insn=0x00000000003C3298 string=0x00000000003C329C ")=G"
 *   insn=0x00000000003C329C string=0x00000000003C32A0 "!"
 *   insn=0x00000000003C32A0 string=0x00000000003C32A4 "\t"
 *   insn=0x00000000003C32A4 string=0x00000000003C32A8 "\t"
 *   insn=0x00000000003C32A4 string=0x00000000003C33A4 "\t"
 *   insn=0x00000000003C32A8 string=0x00000000003C32AC "*"
 *   insn=0x00000000003C32AC string=0x00000000003C32B0 "\n"
 *   insn=0x00000000003C32B4 string=0x00000000003C32B8 ">"
 *   insn=0x00000000003C32B8 string=0x00000000003C33B0 "?"
 *   insn=0x00000000003C32BC string=0x00000000003C32C0 "*"
 *   insn=0x00000000003C32C0 string=0x00000000003C32C4 "\n"
 *   insn=0x00000000003C32D0 string=0x00000000003C32D4 "4"
 *   insn=0x00000000003C32D4 string=0x00000000003C32D8 "\"
 *   insn=0x00000000003C32DC string=0x00000000003C32E0 "*"
 *   insn=0x00000000003C32E0 string=0x00000000003C32E4 "\n"
 *   insn=0x00000000003C32E8 string=0x00000000003C32EC "l"
 *   insn=0x00000000003C32F0 string=0x00000000003C32F4 ","
 *   insn=0x00000000003C32F4 string=0x00000000003C32F8 "X"
 *   insn=0x00000000003C32FC string=0x00000000003C3300 "*"
 *   insn=0x00000000003C3300 string=0x00000000003C3304 "\n"
 *   insn=0x00000000003C3310 string=0x00000000003C3314 "$"
 *   insn=0x00000000003C3314 string=0x00000000003C3318 "T"
 *   insn=0x00000000003C331C string=0x00000000003C3320 "*"
 *   insn=0x00000000003C3320 string=0x00000000003C3324 "\n"
 *   insn=0x00000000003C3328 string=0x00000000003C332C "l"
 *   insn=0x00000000003C3334 string=0x00000000003C3338 "P"
 *   insn=0x00000000003C333C string=0x00000000003C3340 "*"
 *   insn=0x00000000003C3340 string=0x00000000003C3344 "\n"
 *   insn=0x00000000003C3354 string=0x00000000003C3358 "t"
 *   insn=0x00000000003C335C string=0x00000000003C3360 "\"
 *   insn=0x00000000003C3364 string=0x00000000003C3368 "*"
 *   insn=0x00000000003C3368 string=0x00000000003C336C "\n"
 *   insn=0x00000000003C3370 string=0x00000000003C3374 "l"
 *   insn=0x00000000003C3378 string=0x00000000003C337C "\n"
 *   insn=0x00000000003C337C string=0x00000000003C3380 "X"
 *   insn=0x00000000003C3384 string=0x00000000003C3388 "*"
 *   insn=0x00000000003C3388 string=0x00000000003C338C "\n"
 *   insn=0x00000000003C339C string=0x00000000003C33A0 "T"
 *   insn=0x00000000003C33A4 string=0x00000000003C33A8 "*"
 *   insn=0x00000000003C33A8 string=0x00000000003C33AC "\n"
 *   insn=0x00000000003C33B0 string=0x00000000003C33B4 "l"
 *   insn=0x00000000003C33BC string=0x00000000003C33C0 "P"
 *   insn=0x00000000003C33C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C33C8 string=0x00000000003C33CC "8"
 *   insn=0x00000000003C33CC string=0x00000000003C34AC "h"
 *   insn=0x00000000003C33D0 string=0x00000000003C33D4 "s"
 *   insn=0x00000000003C33D8 string=0x00000000003C33DC "k"
 *   insn=0x00000000003C33D8 string=0x00000000003C3548 "h"
 *   insn=0x00000000003C33E0 string=0x00000000003C33E4 "U"
 *   insn=0x00000000003C33E4 string=0x00000000003C3538 "`B"
 *   insn=0x00000000003C33E8 string=0x00000000003C33EC "P"
 *   insn=0x00000000003C33EC string=0x00000000003C352C "an@"
 *   insn=0x00000000003C33F0 string=0x00000000003C33F4 "K"
 *   insn=0x00000000003C33F4 string=0x00000000003C3520 "a"
 *   insn=0x00000000003C33FC string=0x00000000003C3400 "h"
 *   insn=0x00000000003C3400 string=0x00000000003C340C "h"
 *   insn=0x00000000003C3420 string=0x00000000003C3424 "h"
 *   insn=0x00000000003C3420 string=0x00000000003C35D8 "\t"
 *   insn=0x00000000003C342C string=0x00000000003C3430 "a"
 *   insn=0x00000000003C3430 string=0x00000000003C3434 "h"
 *   insn=0x00000000003C3430 string=0x00000000003C35FC "\t"
 *   insn=0x00000000003C3440 string=0x00000000003C3444 "h"
 *   insn=0x00000000003C3440 string=0x00000000003C3620 "\t"
 *   insn=0x00000000003C3450 string=0x00000000003C3454 "h"
 *   insn=0x00000000003C3450 string=0x00000000003C3644 "\t"
 *   insn=0x00000000003C345C string=0x00000000003C3460 "A"
 *   insn=0x00000000003C3460 string=0x00000000003C3464 "u"
 *   insn=0x00000000003C3460 string=0x00000000003C3668 "\t"
 *   insn=0x00000000003C3464 string=0x00000000003C3468 "5"
 *   insn=0x00000000003C346C string=0x00000000003C3470 ""
 *   insn=0x00000000003C347C string=0x00000000003C3480 "\t@"
 *   insn=0x00000000003C348C string=0x00000000003C3490 ""
 *   insn=0x00000000003C349C string=0x00000000003C34A0 "@"
 *   insn=0x00000000003C34C0 string=0x00000000003C34C4 "h"
 *   insn=0x00000000003C34C0 string=0x00000000003C3590 "\t"
 *   insn=0x00000000003C34CC string=0x00000000003C34D0 "!"
 *   insn=0x00000000003C34D0 string=0x00000000003C34D4 "h"
 *   insn=0x00000000003C34D0 string=0x00000000003C35B4 "\t"
 *   insn=0x00000000003C34E0 string=0x00000000003C34E4 "\t"
 *   insn=0x00000000003C34E0 string=0x00000000003C3514 "a"
 *   insn=0x00000000003C34E4 string=0x00000000003C34E8 ")=G"
 *   insn=0x00000000003C34E8 string=0x00000000003C34EC "!"
 *   insn=0x00000000003C34EC string=0x00000000003C34F0 ")"
 *   insn=0x00000000003C34F0 string=0x00000000003C34F4 "\t"
 *   insn=0x00000000003C34F0 string=0x00000000003C3774 "\t"
 *   insn=0x00000000003C34F4 string=0x00000000003C34F8 "*"
 *   insn=0x00000000003C34F8 string=0x00000000003C34FC "\n"
 *   insn=0x00000000003C3500 string=0x00000000003C3504 "?"
 *   insn=0x00000000003C3504 string=0x00000000003C3508 "l"
 *   insn=0x00000000003C3514 string=0x00000000003C3518 "`"
 *   insn=0x00000000003C3518 string=0x00000000003C351C "1"
 *   insn=0x00000000003C3520 string=0x00000000003C3524 "`"
 *   insn=0x00000000003C3524 string=0x00000000003C3528 "F"
 *   insn=0x00000000003C352C string=0x00000000003C3530 "`""
 *   insn=0x00000000003C353C string=0x00000000003C3540 "s"
 *   insn=0x00000000003C3540 string=0x00000000003C3544 "3"
 *   insn=0x00000000003C3548 string=0x00000000003C354C ""
 *   insn=0x00000000003C354C string=0x00000000003C3550 "h"
 *   insn=0x00000000003C3554 string=0x00000000003C3558 "h"
 *   insn=0x00000000003C3558 string=0x00000000003C355C "\t@"
 *   insn=0x00000000003C3564 string=0x00000000003C3568 "h\n@"
 *   insn=0x00000000003C3568 string=0x00000000003C356C ""
 *   insn=0x00000000003C356C string=0x00000000003C3570 "h\n"
 *   insn=0x00000000003C3574 string=0x00000000003C3578 "h"
 *   insn=0x00000000003C3578 string=0x00000000003C357C "@"
 *   insn=0x00000000003C3590 string=0x00000000003C3594 ")=G"
 *   insn=0x00000000003C3594 string=0x00000000003C3598 "!"
 *   insn=0x00000000003C359C string=0x00000000003C35A0 "\t"
 *   insn=0x00000000003C359C string=0x00000000003C368C "\t"
 *   insn=0x00000000003C35A0 string=0x00000000003C35A4 "*"
 *   insn=0x00000000003C35A4 string=0x00000000003C35A8 "\n"
 *   insn=0x00000000003C35AC string=0x00000000003C35B0 ":"
 *   insn=0x00000000003C35B0 string=0x00000000003C3698 "?"
 *   insn=0x00000000003C35B4 string=0x00000000003C35B8 ")=G"
 *   insn=0x00000000003C35B8 string=0x00000000003C35BC "!"
 *   insn=0x00000000003C35BC string=0x00000000003C35C0 "i"
 *   insn=0x00000000003C35C0 string=0x00000000003C35C4 "\t"
 *   insn=0x00000000003C35C0 string=0x00000000003C36AC "\t"
 *   insn=0x00000000003C35C4 string=0x00000000003C35C8 "*"
 *   insn=0x00000000003C35C8 string=0x00000000003C35CC "\n"
 *   insn=0x00000000003C35D0 string=0x00000000003C35D4 "9"
 *   insn=0x00000000003C35D4 string=0x00000000003C36B8 "?"
 *   insn=0x00000000003C35D8 string=0x00000000003C35DC ")=G"
 *   insn=0x00000000003C35DC string=0x00000000003C35E0 "!"
 *   insn=0x00000000003C35E0 string=0x00000000003C35E4 "I"
 *   insn=0x00000000003C35E4 string=0x00000000003C35E8 "\t"
 *   insn=0x00000000003C35E4 string=0x00000000003C36CC "\t"
 *   insn=0x00000000003C35E8 string=0x00000000003C35EC "*"
 *   insn=0x00000000003C35EC string=0x00000000003C35F0 "\n"
 *   insn=0x00000000003C35F4 string=0x00000000003C35F8 "8"
 *   insn=0x00000000003C35F8 string=0x00000000003C36D8 "?"
 *   insn=0x00000000003C35FC string=0x00000000003C3600 ")=G"
 *   insn=0x00000000003C3600 string=0x00000000003C3604 "!"
 *   insn=0x00000000003C3604 string=0x00000000003C3608 ")"
 *   insn=0x00000000003C3608 string=0x00000000003C360C "\t"
 *   insn=0x00000000003C3608 string=0x00000000003C36EC "\t"
 *   insn=0x00000000003C360C string=0x00000000003C3610 "*"
 *   insn=0x00000000003C3610 string=0x00000000003C3614 "\n"
 *   insn=0x00000000003C3618 string=0x00000000003C361C "7"
 *   insn=0x00000000003C361C string=0x00000000003C36F8 "?"
 *   insn=0x00000000003C3620 string=0x00000000003C3624 ")=G"
 *   insn=0x00000000003C3624 string=0x00000000003C3628 "!"
 *   insn=0x00000000003C3628 string=0x00000000003C362C "\t"
 *   insn=0x00000000003C362C string=0x00000000003C3630 "\t"
 *   insn=0x00000000003C362C string=0x00000000003C370C "\t"
 *   insn=0x00000000003C3630 string=0x00000000003C3634 "*"
 *   insn=0x00000000003C3634 string=0x00000000003C3638 "\n"
 *   insn=0x00000000003C363C string=0x00000000003C3640 "6"
 *   insn=0x00000000003C3640 string=0x00000000003C3718 "?"
 *   insn=0x00000000003C3644 string=0x00000000003C3648 ")=G"
 *   insn=0x00000000003C3648 string=0x00000000003C364C "!"
 *   insn=0x00000000003C3650 string=0x00000000003C3654 "\t"
 *   insn=0x00000000003C3650 string=0x00000000003C372C "\t"
 *   insn=0x00000000003C3654 string=0x00000000003C3658 "*"
 *   insn=0x00000000003C3658 string=0x00000000003C365C "\n"
 *   insn=0x00000000003C3660 string=0x00000000003C3664 "5"
 *   insn=0x00000000003C3664 string=0x00000000003C3738 "?"
 *   insn=0x00000000003C3668 string=0x00000000003C366C ")=G"
 *   insn=0x00000000003C366C string=0x00000000003C3670 "!"
 *   insn=0x00000000003C3674 string=0x00000000003C3678 "\t"
 *   insn=0x00000000003C3674 string=0x00000000003C374C "\t"
 *   insn=0x00000000003C3678 string=0x00000000003C367C "*"
 *   insn=0x00000000003C367C string=0x00000000003C3680 "\n"
 *   insn=0x00000000003C3684 string=0x00000000003C3688 "4"
 *   insn=0x00000000003C3688 string=0x00000000003C3758 "?"
 *   insn=0x00000000003C368C string=0x00000000003C3690 "*"
 *   insn=0x00000000003C3690 string=0x00000000003C3694 "\n"
 *   insn=0x00000000003C3698 string=0x00000000003C369C "L"
 *   insn=0x00000000003C36A0 string=0x00000000003C36A4 "@"
 *   insn=0x00000000003C36AC string=0x00000000003C36B0 "*"
 *   insn=0x00000000003C36B0 string=0x00000000003C36B4 "\n"
 *   insn=0x00000000003C36C0 string=0x00000000003C36C4 "8"
 *   insn=0x00000000003C36CC string=0x00000000003C36D0 "*"
 *   insn=0x00000000003C36D0 string=0x00000000003C36D4 "\n"
 *   insn=0x00000000003C36D8 string=0x00000000003C36DC "L"
 *   insn=0x00000000003C36E0 string=0x00000000003C36E4 "0"
 *   insn=0x00000000003C36E4 string=0x00000000003C36E8 "O"
 *   insn=0x00000000003C36EC string=0x00000000003C36F0 "*"
 *   insn=0x00000000003C36F0 string=0x00000000003C36F4 "\n"
 *   insn=0x00000000003C3700 string=0x00000000003C3704 "("
 *   insn=0x00000000003C3704 string=0x00000000003C3708 "K"
 *   insn=0x00000000003C370C string=0x00000000003C3710 "*"
 *   insn=0x00000000003C3710 string=0x00000000003C3714 "\n"
 *   insn=0x00000000003C3718 string=0x00000000003C371C "L"
 *   insn=0x00000000003C3720 string=0x00000000003C3724 " "
 *   insn=0x00000000003C3724 string=0x00000000003C3728 "G"
 *   insn=0x00000000003C372C string=0x00000000003C3730 "*"
 *   insn=0x00000000003C3730 string=0x00000000003C3734 "\n"
 *   insn=0x00000000003C3744 string=0x00000000003C3748 "C"
 *   insn=0x00000000003C374C string=0x00000000003C3750 "*"
 *   insn=0x00000000003C3750 string=0x00000000003C3754 "\n"
 *   insn=0x00000000003C3758 string=0x00000000003C375C "L"
 *   insn=0x00000000003C3764 string=0x00000000003C3768 "u"
 *   insn=0x00000000003C376C string=0x00000000003C3770 "O"
 *   insn=0x00000000003C3774 string=0x00000000003C3778 "*"
 *   insn=0x00000000003C3778 string=0x00000000003C377C "\n"
 *   insn=0x00000000003C377C string=0x00000000003C3780 "?"
 *   insn=0x00000000003C3780 string=0x00000000003C3784 "M"
 *   insn=0x00000000003C3784 string=0x00000000003C3788 "c"
 *   insn=0x00000000003C37D0 string=0x00000000003C37D4 "@"
 *   insn=0x00000000003C37D8 string=0x00000000003C37DC ""
 *   insn=0x00000000003C37E4 string=0x00000000003C37E8 "j"
 *   insn=0x00000000003C37E8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003C37EC string=0x00000000003C37F0 "@"
 *   insn=0x00000000003C37F0 string=0x00000000003C37F4 "Hc"
 *   insn=0x00000000003C37F0 string=0x00000000003C3818 "HC"
 *   insn=0x00000000003C37FC string=0x00000000003C3800 "\n"
 *   insn=0x00000000003C3844 string=0x00000000003C3848 ""
 *   insn=0x00000000003C3848 string=0x00000000003C384C ")"
 *   insn=0x00000000003C3850 string=0x00000000003C3854 """
 *   insn=0x00000000003C3854 string=0x00000000003C3858 "N"
 *   insn=0x00000000003C3858 string=0x00000000003C385C "`"
 *   insn=0x00000000003C385C string=0x00000000003C3860 "@"
 *   insn=0x00000000003C3860 string=0x00000000003C3864 "\n"
 *   insn=0x00000000003C3880 string=0x00000000003C3884 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameState::~GameState(Caver::GameState *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  __int64 v9; // x8
  void *v10; // x0
  __int64 v11; // x8
  void *v12; // x0
  __int64 v13; // x8
  void *v14; // x0
  __int64 v15; // x8
  void *v16; // x0
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  void *v21; // x0
  __int64 v22; // x8
  void *v23; // x0
  __int64 v24; // x8
  void *v25; // x0
  _QWORD *v26; // x19
  __int64 v27; // x8
  __int64 v28; // x8
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

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 54);
  v3 = (_QWORD *)*((_QWORD *)this + 55);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 54);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_QWORD *)this + 53);
  v8 = (void *)(v7 - 24);
  if ( (__int64 *)(v7 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v7 - 8);
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
      operator delete(v8);
  }
  v9 = *((_QWORD *)this + 52);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v9 - 8);
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
      operator delete(v10);
  }
  v11 = *((_QWORD *)this + 50);
  v12 = (void *)(v11 - 24);
  if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v11 - 8);
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
      operator delete(v12);
  }
  v13 = *((_QWORD *)this + 49);
  v14 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v13 - 8);
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
  v15 = *((_QWORD *)this + 48);
  v16 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) == &qword_6FD2E0 )
    goto LABEL_15;
  v37 = (unsigned int *)(v15 - 8);
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
  if ( v38 > 0 )
  {
LABEL_15:
    v17 = (_QWORD *)*((_QWORD *)this + 47);
    if ( !v17 )
      goto LABEL_19;
  }
  else
  {
    operator delete(v16);
    v17 = (_QWORD *)*((_QWORD *)this + 47);
    if ( !v17 )
      goto LABEL_19;
  }
  v18 = v17[1] - 1LL;
  v17[1] = v18;
  if ( !v18 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    v19 = v17[2] - 1LL;
    v17[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
  }
LABEL_19:
  v20 = *((_QWORD *)this + 45);
  v21 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v20 - 8);
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
      operator delete(v21);
  }
  v22 = *((_QWORD *)this + 44);
  v23 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v22 - 8);
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
      operator delete(v23);
  }
  v24 = *((_QWORD *)this + 43);
  v25 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v24 - 8);
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
      operator delete(v25);
  }
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase();
  Caver::CharacterState::~CharacterState((Caver::GameState *)((char *)this + 16));
  v26 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v26 )
  {
    v27 = v26[1] - 1LL;
    v26[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
}

