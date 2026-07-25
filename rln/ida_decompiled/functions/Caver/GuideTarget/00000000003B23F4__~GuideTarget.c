/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B23F4
 * Mangled: _ZN5Caver11GuideTargetD2Ev
 * Demangled: Caver::GuideTarget::~GuideTarget()
 *
 * Callers: 1
 *   0x00000000001F8260  Caver::GuideTarget::~GuideTarget()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 101
 *   insn=0x00000000003B2404 string=0x00000000003B2408 "T"
 *   insn=0x00000000003B2410 string=0x00000000003B2414 "`"
 *   insn=0x00000000003B2418 string=0x00000000003B241C "a"@"
 *   insn=0x00000000003B2420 string=0x00000000003B2424 "h"
 *   insn=0x00000000003B2438 string=0x00000000003B243C "h"
 *   insn=0x00000000003B2444 string=0x00000000003B2448 "a"
 *   insn=0x00000000003B2448 string=0x00000000003B244C "h\n@"
 *   insn=0x00000000003B2458 string=0x00000000003B245C "h"
 *   insn=0x00000000003B2474 string=0x00000000003B2478 "A\t"
 *   insn=0x00000000003B2478 string=0x00000000003B25A0 "L"
 *   insn=0x00000000003B2490 string=0x00000000003B2494 ")=G"
 *   insn=0x00000000003B2494 string=0x00000000003B2498 "!"
 *   insn=0x00000000003B2498 string=0x00000000003B249C ")"
 *   insn=0x00000000003B249C string=0x00000000003B24A0 "\t"
 *   insn=0x00000000003B249C string=0x00000000003B2520 "\t"
 *   insn=0x00000000003B24A0 string=0x00000000003B24A4 "*"
 *   insn=0x00000000003B24A4 string=0x00000000003B24A8 "\n"
 *   insn=0x00000000003B24B0 string=0x00000000003B252C "?"
 *   insn=0x00000000003B24B4 string=0x00000000003B24B8 ")=G"
 *   insn=0x00000000003B24B8 string=0x00000000003B24BC "!"
 *   insn=0x00000000003B24BC string=0x00000000003B24C0 "\t"
 *   insn=0x00000000003B24C0 string=0x00000000003B24C4 "\t"
 *   insn=0x00000000003B24C0 string=0x00000000003B2540 "\t"
 *   insn=0x00000000003B24C4 string=0x00000000003B24C8 "*"
 *   insn=0x00000000003B24C8 string=0x00000000003B24CC "\n"
 *   insn=0x00000000003B24D4 string=0x00000000003B254C "?"
 *   insn=0x00000000003B24D8 string=0x00000000003B24DC ")=G"
 *   insn=0x00000000003B24DC string=0x00000000003B24E0 "!"
 *   insn=0x00000000003B24E4 string=0x00000000003B24E8 "\t"
 *   insn=0x00000000003B24E4 string=0x00000000003B2560 "\t"
 *   insn=0x00000000003B24E8 string=0x00000000003B24EC "*"
 *   insn=0x00000000003B24EC string=0x00000000003B24F0 "\n"
 *   insn=0x00000000003B24F8 string=0x00000000003B256C "?"
 *   insn=0x00000000003B24FC string=0x00000000003B2500 ")=G"
 *   insn=0x00000000003B2500 string=0x00000000003B2504 "!"
 *   insn=0x00000000003B2508 string=0x00000000003B250C "\t"
 *   insn=0x00000000003B2508 string=0x00000000003B2580 "\t"
 *   insn=0x00000000003B250C string=0x00000000003B2510 "*"
 *   insn=0x00000000003B2510 string=0x00000000003B2514 "\n"
 *   insn=0x00000000003B251C string=0x00000000003B258C "?"
 *   insn=0x00000000003B2520 string=0x00000000003B2524 "*"
 *   insn=0x00000000003B2524 string=0x00000000003B2528 "\n"
 *   insn=0x00000000003B252C string=0x00000000003B2530 "l"
 *   insn=0x00000000003B2540 string=0x00000000003B2544 "*"
 *   insn=0x00000000003B2544 string=0x00000000003B2548 "\n"
 *   insn=0x00000000003B2560 string=0x00000000003B2564 "*"
 *   insn=0x00000000003B2564 string=0x00000000003B2568 "\n"
 *   insn=0x00000000003B256C string=0x00000000003B2570 "l"
 *   insn=0x00000000003B2580 string=0x00000000003B2584 "*"
 *   insn=0x00000000003B2584 string=0x00000000003B2588 "\n"
 *   insn=0x00000000003B25A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B25B0 string=0x00000000003B25B4 "(a"
 *   insn=0x00000000003B25B8 string=0x00000000003B25BC "a"
 *   insn=0x00000000003B25BC string=0x00000000003B25C0 "h"
 *   insn=0x00000000003B25CC string=0x00000000003B25D0 "h\n@"
 *   insn=0x00000000003B25DC string=0x00000000003B25E0 "h"
 *   insn=0x00000000003B25F0 string=0x00000000003B25F4 ")=G"
 *   insn=0x00000000003B25F4 string=0x00000000003B25F8 "!"
 *   insn=0x00000000003B25FC string=0x00000000003B2600 "\t"
 *   insn=0x00000000003B25FC string=0x00000000003B26F8 "\t"
 *   insn=0x00000000003B2600 string=0x00000000003B2604 "*"
 *   insn=0x00000000003B2604 string=0x00000000003B2608 "\n"
 *   insn=0x00000000003B260C string=0x00000000003B2610 "?"
 *   insn=0x00000000003B2610 string=0x00000000003B2614 "l"
 *   insn=0x00000000003B2618 string=0x00000000003B261C "b"
 *   insn=0x00000000003B2628 string=0x00000000003B262C "J=G"
 *   insn=0x00000000003B262C string=0x00000000003B2630 ")!"
 *   insn=0x00000000003B2630 string=0x00000000003B2634 "\n"
 *   insn=0x00000000003B2634 string=0x00000000003B2638 "*"
 *   insn=0x00000000003B2634 string=0x00000000003B2694 "*"
 *   insn=0x00000000003B2638 string=0x00000000003B263C "K"
 *   insn=0x00000000003B263C string=0x00000000003B2640 "+"
 *   insn=0x00000000003B2648 string=0x00000000003B26A0 "_"
 *   insn=0x00000000003B264C string=0x00000000003B2650 ")=G"
 *   insn=0x00000000003B2650 string=0x00000000003B2654 "!"
 *   insn=0x00000000003B2654 string=0x00000000003B2658 "\t"
 *   insn=0x00000000003B2658 string=0x00000000003B265C "\t"
 *   insn=0x00000000003B2658 string=0x00000000003B26B8 "\t"
 *   insn=0x00000000003B265C string=0x00000000003B2660 "*"
 *   insn=0x00000000003B2660 string=0x00000000003B2664 "\n"
 *   insn=0x00000000003B266C string=0x00000000003B26C4 "?"
 *   insn=0x00000000003B2670 string=0x00000000003B2674 ")=G"
 *   insn=0x00000000003B2674 string=0x00000000003B2678 "!"
 *   insn=0x00000000003B267C string=0x00000000003B2680 "\t"
 *   insn=0x00000000003B267C string=0x00000000003B26D8 "\t"
 *   insn=0x00000000003B2680 string=0x00000000003B2684 "*"
 *   insn=0x00000000003B2684 string=0x00000000003B2688 "\n"
 *   insn=0x00000000003B2690 string=0x00000000003B26E4 "?"
 *   insn=0x00000000003B2694 string=0x00000000003B2698 "K"
 *   insn=0x00000000003B2698 string=0x00000000003B269C "+"
 *   insn=0x00000000003B26AC string=0x00000000003B26B0 "="
 *   insn=0x00000000003B26B8 string=0x00000000003B26BC "*"
 *   insn=0x00000000003B26BC string=0x00000000003B26C0 "\n"
 *   insn=0x00000000003B26C4 string=0x00000000003B26C8 "L"
 *   insn=0x00000000003B26CC string=0x00000000003B26D0 "5"
 *   insn=0x00000000003B26D8 string=0x00000000003B26DC "*"
 *   insn=0x00000000003B26DC string=0x00000000003B26E0 "\n"
 *   insn=0x00000000003B26EC string=0x00000000003B26F0 "-"
 *   insn=0x00000000003B26F8 string=0x00000000003B26FC "*"
 *   insn=0x00000000003B26FC string=0x00000000003B2700 "\n"
 *   insn=0x00000000003B2700 string=0x00000000003B2704 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuideTarget::~GuideTarget(Caver::GuideTarget *this)
{
  __int64 v2; // x8
  void *v3; // x0
  __int64 v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  void *v7; // x0
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase();
  v2 = *((_QWORD *)this + 4);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v2 - 8);
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
      operator delete(v3);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v4 - 8);
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
      operator delete(v5);
  }
  v6 = *((_QWORD *)this + 2);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v6 - 8);
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
      operator delete(v7);
  }
  v8 = *((_QWORD *)this + 1);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v8 - 8);
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
      operator delete(v9);
  }
}

