/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F314
 * Mangled: _ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x00000000001F61B0  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A80  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_create_nodes(boost::shared_ptr<Caver::Achievement>**,boost::shared_ptr<Caver::Achievement>**)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x000000000037F328 string=0x000000000037F32C "\t"
 *   insn=0x000000000037F32C string=0x000000000037F330 "?!"
 *   insn=0x000000000037F338 string=0x000000000037F33C ")"
 *   insn=0x000000000037F33C string=0x000000000037F340 "i"
 *   insn=0x000000000037F344 string=0x000000000037F348 " "
 *   insn=0x000000000037F350 string=0x000000000037F354 "h"
 *   insn=0x000000000037F350 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037F354 string=0x000000000037F358 "`"
 *   insn=0x000000000037F358 string=0x000000000037F35C ""
 *   insn=0x000000000037F35C string=0x000000000037F360 ""
 *   insn=0x000000000037F360 string=0x000000000037F364 ""
 *   insn=0x000000000037F37C string=0x00000000001F8A80 "0'"
 *   insn=0x000000000037F384 string=0x000000000037F388 "i&"
 *   insn=0x000000000037F38C string=0x000000000037F390 "\t"
 *   insn=0x000000000037F390 string=0x000000000037F394 "h""
 *   insn=0x000000000037F394 string=0x000000000037F398 "iZ"
 *   insn=0x000000000037F39C string=0x000000000037F3A0 "+"
 *   insn=0x000000000037F3A0 string=0x000000000037F3A4 "*"
 *   insn=0x000000000037F3A4 string=0x000000000037F3A8 "j&"
 *   insn=0x000000000037F3A8 string=0x000000000037F3AC "k""
 *   insn=0x000000000037F3C4 string=0x000000000037F3C8 "`"
 *   insn=0x000000000037F3C4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000037F3CC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037F3D8 string=0x000000000037F3DC "m"
 *   insn=0x000000000037F3DC string=0x00000000001FD590 "0'"
 *   insn=0x000000000037F3E0 string=0x000000000037F3E4 "8\t"
 *   insn=0x000000000037F410 string=0x000000000037F414 "s"
 *   insn=0x000000000037F43C string=0x000000000037F440 "`"
 *   insn=0x000000000037F454 string=0x000000000037F458 "N"
 *   insn=0x000000000037F484 string=0x000000000037F488 "h"
 *   insn=0x000000000037F488 string=0x000000000037F48C "6!"
 *   insn=0x000000000037F4A4 string=0x000000000037F4A8 "5"
 *   insn=0x000000000037F4AC string=0x000000000037F4B0 ""
 *   insn=0x000000000037F4C0 string=0x000000000037F4C4 "\t@"
 *   insn=0x000000000037F4CC string=0x000000000037F4D0 ""
 *   insn=0x000000000037F4E0 string=0x000000000037F4E4 "@"
 *   insn=0x000000000037F4F4 string=0x000000000037F4F8 "h"
 *   insn=0x000000000037F50C string=0x000000000037F510 "?"
 *   insn=0x000000000037F510 string=0x000000000037F514 "@"
 *   insn=0x000000000037F514 string=0x000000000037F5DC "t"
 *   insn=0x000000000037F520 string=0x000000000037F578 "tV@"
 *   insn=0x000000000037F524 string=0x000000000037F528 "4"
 *   insn=0x000000000037F52C string=0x000000000037F530 ""
 *   insn=0x000000000037F540 string=0x000000000037F544 "\t@"
 *   insn=0x000000000037F54C string=0x000000000037F550 ""
 *   insn=0x000000000037F560 string=0x000000000037F564 "@"
 *   insn=0x000000000037F584 string=0x000000000037F588 "3"
 *   insn=0x000000000037F588 string=0x000000000037F58C "h"
 *   insn=0x000000000037F58C string=0x000000000037F590 ""
 *   insn=0x000000000037F590 string=0x000000000037F594 "h"
 *   insn=0x000000000037F598 string=0x000000000037F59C "h"
 *   insn=0x000000000037F5A0 string=0x000000000037F5A4 "\t@"
 *   insn=0x000000000037F5A8 string=0x000000000037F5AC "h\n@"
 *   insn=0x000000000037F5AC string=0x000000000037F5B0 ""
 *   insn=0x000000000037F5B0 string=0x000000000037F5B4 "h\n"
 *   insn=0x000000000037F5B8 string=0x000000000037F5BC "h"
 *   insn=0x000000000037F5C0 string=0x000000000037F5C4 "@"
 *   insn=0x000000000037F5E8 string=0x000000000037F5EC "3"
 *   insn=0x000000000037F5EC string=0x000000000037F5F0 "h"
 *   insn=0x000000000037F5F0 string=0x000000000037F5F4 ""
 *   insn=0x000000000037F5F4 string=0x000000000037F5F8 "h"
 *   insn=0x000000000037F5FC string=0x000000000037F600 "h"
 *   insn=0x000000000037F604 string=0x000000000037F608 "\t@"
 *   insn=0x000000000037F60C string=0x000000000037F610 "h\n@"
 *   insn=0x000000000037F610 string=0x000000000037F614 ""
 *   insn=0x000000000037F614 string=0x000000000037F618 "h\n"
 *   insn=0x000000000037F61C string=0x000000000037F620 "h"
 *   insn=0x000000000037F624 string=0x000000000037F628 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Deque_base<boost::shared_ptr<Caver::Achievement>>::_M_initialize_map(
        __int64 *a1,
        unsigned __int64 a2)
{
  char v2; // w20
  unsigned __int64 v3; // x9
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 *v8; // x22
  __int64 *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x9

  v2 = a2;
  v3 = (a2 >> 5) + 3;
  if ( v3 <= 8 )
    v3 = 8;
  a1[1] = v3;
  v5 = (a2 >> 5) + 1;
  v6 = operator new(8 * v3);
  v7 = a1[1];
  *a1 = v6;
  v8 = (__int64 *)(v6 + ((4 * (v7 - v5)) & 0xFFFFFFFFFFFFFFF8LL));
  v9 = &v8[v5];
  std::_Deque_base<boost::shared_ptr<Caver::Achievement>>::_M_create_nodes();
  v10 = *v8;
  a1[9] = (__int64)(v9 - 1);
  a1[2] = v10;
  a1[3] = v10;
  a1[4] = v10 + 512;
  a1[5] = (__int64)v8;
  v11 = *(v9 - 1);
  a1[6] = v11 + 16LL * (v2 & 0x1F);
  a1[7] = v11;
  a1[8] = v11 + 512;
}

