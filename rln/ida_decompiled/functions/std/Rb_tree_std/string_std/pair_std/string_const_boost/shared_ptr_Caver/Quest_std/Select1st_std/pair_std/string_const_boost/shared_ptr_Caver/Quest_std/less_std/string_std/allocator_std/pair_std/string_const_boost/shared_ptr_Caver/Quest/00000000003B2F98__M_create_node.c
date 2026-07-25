/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B2F98
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver5QuestEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Quest>> const&)
 *
 * Callers: 1
 *   0x00000000001F6050  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Quest>> const&)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 128
 *   insn=0x00000000003B2FAC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B2FB0 string=0x00000000003B2FB4 "`"
 *   insn=0x00000000003B2FB8 string=0x00000000003B2FBC "["
 *   insn=0x00000000003B2FC0 string=0x00000000003B2FC4 "h"
 *   insn=0x00000000003B2FC8 string=0x00000000003B2FCC "h"
 *   insn=0x00000000003B2FD0 string=0x00000000003B2FD4 "\t"
 *   insn=0x00000000003B2FD4 string=0x00000000003B2FD8 ")"
 *   insn=0x00000000003B2FD8 string=0x00000000003B2FDC "\t"
 *   insn=0x00000000003B2FF0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B2FF8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B3000 string=0x00000000003B3004 "c)"
 *   insn=0x00000000003B3004 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B3008 string=0x00000000003B300C ".:"
 *   insn=0x00000000003B3038 string=0x00000000003B303C "?"
 *   insn=0x00000000003B3044 string=0x00000000003B3048 "_"
 *   insn=0x00000000003B3048 string=0x00000000003B304C "*"
 *   insn=0x00000000003B304C string=0x00000000003B3050 "+)"
 *   insn=0x00000000003B3054 string=0x00000000003B3058 "K"
 *   insn=0x00000000003B3054 string=0x00000000003B3064 ")A"
 *   insn=0x00000000003B3058 string=0x00000000003B305C "k"
 *   insn=0x00000000003B305C string=0x00000000003B3060 "K"
 *   insn=0x00000000003B3070 string=0x00000000003B3080 "\t"
 *   insn=0x00000000003B3074 string=0x00000000003B3078 ")"
 *   insn=0x00000000003B3080 string=0x00000000003B3084 "?"
 *   insn=0x00000000003B3084 string=0x00000000003B3088 "+"
 *   insn=0x00000000003B3088 string=0x00000000003B308C ")"
 *   insn=0x00000000003B308C string=0x00000000003B3090 "7"
 *   insn=0x00000000003B3094 string=0x00000000003B3098 "\t"
 *   insn=0x00000000003B3098 string=0x00000000003B309C "\n@"
 *   insn=0x00000000003B30A0 string=0x00000000003B30A4 "K"
 *   insn=0x00000000003B30A4 string=0x00000000003B30A8 "k"
 *   insn=0x00000000003B30A8 string=0x00000000003B30AC "K"
 *   insn=0x00000000003B30B0 string=0x00000000003B30B4 "\t)"
 *   insn=0x00000000003B30B4 string=0x00000000003B30B8 "5"
 *   insn=0x00000000003B30BC string=0x00000000003B30C0 ""
 *   insn=0x00000000003B30CC string=0x00000000003B30D0 "\t@"
 *   insn=0x00000000003B30DC string=0x00000000003B30E0 ""
 *   insn=0x00000000003B30EC string=0x00000000003B30F0 "@"
 *   insn=0x00000000003B310C string=0x00000000003B311C "u"
 *   insn=0x00000000003B3110 string=0x00000000003B3114 ""
 *   insn=0x00000000003B311C string=0x00000000003B3120 "vR"
 *   insn=0x00000000003B3120 string=0x00000000003B3124 "5"
 *   insn=0x00000000003B3124 string=0x00000000003B3168 "t"
 *   insn=0x00000000003B3128 string=0x00000000003B312C ""
 *   insn=0x00000000003B3138 string=0x00000000003B313C "\t@"
 *   insn=0x00000000003B3148 string=0x00000000003B314C ""
 *   insn=0x00000000003B3158 string=0x00000000003B315C "@"
 *   insn=0x00000000003B316C string=0x00000000003B3170 ""
 *   insn=0x00000000003B3180 string=0x00000000003B3184 "\t@"
 *   insn=0x00000000003B318C string=0x00000000003B3190 ""
 *   insn=0x00000000003B31B8 string=0x00000000003B31BC " "
 *   insn=0x00000000003B31C0 string=0x00000000003B31C4 "("
 *   insn=0x00000000003B31C4 string=0x00000000003B31C8 ""
 *   insn=0x00000000003B31C8 string=0x00000000003B31CC "\t"
 *   insn=0x00000000003B31CC string=0x00000000003B31D0 "("
 *   insn=0x00000000003B31D0 string=0x00000000003B31D4 "\n"
 *   insn=0x00000000003B31D8 string=0x00000000003B31DC "_"
 *   insn=0x00000000003B31E0 string=0x00000000003B31E4 ")"
 *   insn=0x00000000003B31E4 string=0x00000000003B31E8 "?"
 *   insn=0x00000000003B31EC string=0x00000000003B31F0 "7"
 *   insn=0x00000000003B3214 string=0x00000000003B3218 "i"
 *   insn=0x00000000003B3218 string=0x00000000003B321C ")"
 *   insn=0x00000000003B3220 string=0x00000000003B3224 "("
 *   insn=0x00000000003B3228 string=0x00000000003B322C "("
 *   insn=0x00000000003B3230 string=0x00000000003B3234 "\t"
 *   insn=0x00000000003B3234 string=0x00000000003B3238 ")"
 *   insn=0x00000000003B3238 string=0x00000000003B323C "\t"
 *   insn=0x00000000003B3250 string=0x00000000003B3254 "hB"
 *   insn=0x00000000003B3258 string=0x00000000003B325C "K"
 *   insn=0x00000000003B3264 string=0x00000000003B3268 "K"
 *   insn=0x00000000003B3270 string=0x00000000003B3274 "l"
 *   insn=0x00000000003B3270 string=0x00000000003B3280 "JA"
 *   insn=0x00000000003B3278 string=0x00000000003B327C "l"
 *   insn=0x00000000003B3280 string=0x00000000003B3284 "_"
 *   insn=0x00000000003B3284 string=0x00000000003B3288 ")A"
 *   insn=0x00000000003B3288 string=0x00000000003B328C "a"
 *   insn=0x00000000003B328C string=0x00000000003B3290 ""
 *   insn=0x00000000003B3290 string=0x00000000003B3294 ""
 *   insn=0x00000000003B3298 string=0x00000000003B329C "A"
 *   insn=0x00000000003B32A4 string=0x00000000003B32A8 "?"
 *   insn=0x00000000003B32AC string=0x00000000003B32B0 "(C"
 *   insn=0x00000000003B32B8 string=0x00000000003B32BC "K"
 *   insn=0x00000000003B32BC string=0x00000000003B32C0 "+"
 *   insn=0x00000000003B32C0 string=0x00000000003B32C4 "K"
 *   insn=0x00000000003B32C4 string=0x00000000003B32C8 "+"
 *   insn=0x00000000003B32CC string=0x00000000003B32D0 "l"
 *   insn=0x00000000003B32CC string=0x00000000003B32DC "JA"
 *   insn=0x00000000003B32D4 string=0x00000000003B32D8 "l"
 *   insn=0x00000000003B32DC string=0x00000000003B32E0 "_"
 *   insn=0x00000000003B32E0 string=0x00000000003B32E4 ")A"
 *   insn=0x00000000003B32E8 string=0x00000000003B32EC ""
 *   insn=0x00000000003B32EC string=0x00000000003B32F0 ""
 *   insn=0x00000000003B32F0 string=0x00000000003B32F4 ""
 *   insn=0x00000000003B3300 string=0x00000000003B335C "v"
 *   insn=0x00000000003B3304 string=0x00000000003B3308 "3"
 *   insn=0x00000000003B3308 string=0x00000000003B330C "h"
 *   insn=0x00000000003B330C string=0x00000000003B3310 ""
 *   insn=0x00000000003B3310 string=0x00000000003B3314 "h"
 *   insn=0x00000000003B3318 string=0x00000000003B331C "h"
 *   insn=0x00000000003B3320 string=0x00000000003B3324 "\t@"
 *   insn=0x00000000003B3328 string=0x00000000003B332C "h\n@"
 *   insn=0x00000000003B332C string=0x00000000003B3330 ""
 *   insn=0x00000000003B3330 string=0x00000000003B3334 "h\n"
 *   insn=0x00000000003B3338 string=0x00000000003B333C "h"
 *   insn=0x00000000003B3340 string=0x00000000003B3344 "@"
 *   insn=0x00000000003B334C string=0x00000000003B3350 "?"
 *   insn=0x00000000003B339C string=0x00000000003B33A0 "4"
 *   insn=0x00000000003B33A4 string=0x00000000003B33A8 ""
 *   insn=0x00000000003B33B4 string=0x00000000003B33B8 "\t@"
 *   insn=0x00000000003B33C4 string=0x00000000003B33C8 ""
 *   insn=0x00000000003B33D4 string=0x00000000003B33D8 "@"
 *   insn=0x00000000003B33E4 string=0x00000000003B33E8 "79"
 *   insn=0x00000000003B3430 string=0x00000000003B3434 "@"
 *   insn=0x00000000003B3438 string=0x00000000003B343C ""
 *   insn=0x00000000003B3444 string=0x00000000003B3448 "R"
 *   insn=0x00000000003B3448 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B344C string=0x00000000003B3450 "@"
 *   insn=0x00000000003B3450 string=0x00000000003B3454 "Hc"
 *   insn=0x00000000003B3450 string=0x00000000003B3478 "HC"
 *   insn=0x00000000003B345C string=0x00000000003B3460 "\n"
 *   insn=0x00000000003B34A4 string=0x00000000003B34A8 ""
 *   insn=0x00000000003B34A8 string=0x00000000003B34AC ")"
 *   insn=0x00000000003B34B0 string=0x00000000003B34B4 """
 *   insn=0x00000000003B34B4 string=0x00000000003B34B8 "6"
 *   insn=0x00000000003B34B8 string=0x00000000003B34BC "`"
 *   insn=0x00000000003B34BC string=0x00000000003B34C0 "@"
 *   insn=0x00000000003B34C0 string=0x00000000003B34C4 "\n"
 *   insn=0x00000000003B34E0 string=0x00000000003B34E4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x38u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  return v3;
}

