/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029424C
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BouncingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FF7B0  Caver::BouncingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FF7B0  Caver::BouncingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000200EB0  Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 114
 *   insn=0x0000000000294264 string=0x0000000000294268 "V"
 *   insn=0x000000000029427C string=0x0000000000589080 "jumpAngle"
 *   insn=0x0000000000294288 string=0x000000000029428C "KJ"
 *   insn=0x00000000002942A8 string=0x00000000002942AC "h"
 *   insn=0x00000000002942AC string=0x00000000002942B0 ""
 *   insn=0x00000000002942B8 string=0x00000000002942BC "t"
 *   insn=0x00000000002942CC string=0x00000000002942D0 ""
 *   insn=0x00000000002942DC string=0x00000000002942E0 "\t\t@"
 *   insn=0x00000000002942E4 string=0x00000000002942E8 ""
 *   insn=0x00000000002942EC string=0x00000000002942F0 "h"
 *   insn=0x00000000002942F0 string=0x00000000002942F4 ""
 *   insn=0x00000000002942F4 string=0x00000000002942F8 "h"
 *   insn=0x0000000000294308 string=0x000000000029430C "u"
 *   insn=0x000000000029430C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000294320 string=0x0000000000294324 "a"
 *   insn=0x0000000000294338 string=0x0000000000587AB6 "jumpSpeed"
 *   insn=0x0000000000294360 string=0x0000000000294364 "qX"
 *   insn=0x000000000029436C string=0x0000000000294370 "t"
 *   insn=0x0000000000294380 string=0x0000000000294384 ""
 *   insn=0x0000000000294388 string=0x000000000029438C "gX"
 *   insn=0x000000000029438C string=0x0000000000294390 "C"
 *   insn=0x0000000000294390 string=0x0000000000294394 "\t\t@"
 *   insn=0x0000000000294398 string=0x000000000029439C ""
 *   insn=0x00000000002943A0 string=0x00000000002943A4 "h"
 *   insn=0x00000000002943A4 string=0x00000000002943A8 ""
 *   insn=0x00000000002943A8 string=0x00000000002943AC "h"
 *   insn=0x00000000002943BC string=0x00000000002943C0 "H"
 *   insn=0x00000000002943CC string=0x00000000002943D0 "A"
 *   insn=0x00000000002943F0 string=0x0000000000294520 "l"
 *   insn=0x0000000000294410 string=0x0000000000294414 ")=G"
 *   insn=0x0000000000294414 string=0x0000000000294418 "!"
 *   insn=0x0000000000294418 string=0x000000000029441C ")"
 *   insn=0x000000000029441C string=0x0000000000294420 "\t"
 *   insn=0x000000000029441C string=0x00000000002944A0 "\t"
 *   insn=0x0000000000294420 string=0x0000000000294424 "*"
 *   insn=0x0000000000294424 string=0x0000000000294428 "\n"
 *   insn=0x0000000000294430 string=0x00000000002944AC "?"
 *   insn=0x0000000000294434 string=0x0000000000294438 ")=G"
 *   insn=0x0000000000294438 string=0x000000000029443C "!"
 *   insn=0x000000000029443C string=0x0000000000294440 "\t"
 *   insn=0x0000000000294440 string=0x0000000000294444 "\t"
 *   insn=0x0000000000294440 string=0x00000000002944C0 "\t"
 *   insn=0x0000000000294444 string=0x0000000000294448 "*"
 *   insn=0x0000000000294448 string=0x000000000029444C "\n"
 *   insn=0x0000000000294454 string=0x00000000002944CC "?"
 *   insn=0x0000000000294458 string=0x000000000029445C ")=G"
 *   insn=0x000000000029445C string=0x0000000000294460 "!"
 *   insn=0x0000000000294464 string=0x0000000000294468 "\t"
 *   insn=0x0000000000294464 string=0x00000000002944E0 "\t"
 *   insn=0x0000000000294468 string=0x000000000029446C "*"
 *   insn=0x000000000029446C string=0x0000000000294470 "\n"
 *   insn=0x0000000000294478 string=0x00000000002944EC "?"
 *   insn=0x000000000029447C string=0x0000000000294480 ")=G"
 *   insn=0x0000000000294480 string=0x0000000000294484 "!"
 *   insn=0x0000000000294488 string=0x000000000029448C "\t"
 *   insn=0x0000000000294488 string=0x0000000000294500 "\t"
 *   insn=0x000000000029448C string=0x0000000000294490 "*"
 *   insn=0x0000000000294490 string=0x0000000000294494 "\n"
 *   insn=0x000000000029449C string=0x000000000029450C "?"
 *   insn=0x00000000002944A0 string=0x00000000002944A4 "*"
 *   insn=0x00000000002944A4 string=0x00000000002944A8 "\n"
 *   insn=0x00000000002944C0 string=0x00000000002944C4 "*"
 *   insn=0x00000000002944C4 string=0x00000000002944C8 "\n"
 *   insn=0x00000000002944CC string=0x00000000002944D0 "L"
 *   insn=0x00000000002944E0 string=0x00000000002944E4 "*"
 *   insn=0x00000000002944E4 string=0x00000000002944E8 "\n"
 *   insn=0x00000000002944EC string=0x00000000002944F0 ","
 *   insn=0x0000000000294500 string=0x0000000000294504 "*"
 *   insn=0x0000000000294504 string=0x0000000000294508 "\n"
 *   insn=0x0000000000294520 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000294528 string=0x000000000029452C "(a"
 *   insn=0x0000000000294538 string=0x000000000029453C "J=G"
 *   insn=0x000000000029453C string=0x0000000000294540 ")!"
 *   insn=0x0000000000294544 string=0x0000000000294548 "*"
 *   insn=0x0000000000294544 string=0x000000000029455C "*"
 *   insn=0x0000000000294548 string=0x000000000029454C "K"
 *   insn=0x000000000029454C string=0x0000000000294550 "+"
 *   insn=0x0000000000294558 string=0x0000000000294568 "_"
 *   insn=0x000000000029455C string=0x0000000000294560 "K"
 *   insn=0x0000000000294560 string=0x0000000000294564 "+"
 *   insn=0x0000000000294594 string=0x0000000000294598 ")=G"
 *   insn=0x0000000000294598 string=0x000000000029459C "!"
 *   insn=0x00000000002945A0 string=0x00000000002945A4 "\t"
 *   insn=0x00000000002945A0 string=0x0000000000294674 "\t"
 *   insn=0x00000000002945A4 string=0x00000000002945A8 "*"
 *   insn=0x00000000002945A8 string=0x00000000002945AC "\n"
 *   insn=0x00000000002945B0 string=0x00000000002945B4 "*"
 *   insn=0x00000000002945B4 string=0x000000000029465C "?"
 *   insn=0x00000000002945C0 string=0x00000000002945C4 "J"
 *   insn=0x00000000002945C8 string=0x00000000002945CC "(a"
 *   insn=0x00000000002945D8 string=0x00000000002945DC "J=G"
 *   insn=0x00000000002945DC string=0x00000000002945E0 ")!"
 *   insn=0x00000000002945E4 string=0x00000000002945E8 "*"
 *   insn=0x00000000002945E4 string=0x00000000002945FC "*"
 *   insn=0x00000000002945E8 string=0x00000000002945EC "K"
 *   insn=0x00000000002945EC string=0x00000000002945F0 "+"
 *   insn=0x00000000002945F8 string=0x0000000000294608 "_"
 *   insn=0x00000000002945FC string=0x0000000000294600 "K"
 *   insn=0x0000000000294600 string=0x0000000000294604 "+"
 *   insn=0x0000000000294614 string=0x0000000000294618 "cW"
 *   insn=0x0000000000294628 string=0x000000000029462C ")"
 *   insn=0x000000000029463C string=0x0000000000294640 ")=G"
 *   insn=0x0000000000294640 string=0x0000000000294644 "!"
 *   insn=0x0000000000294644 string=0x0000000000294648 "i"
 *   insn=0x0000000000294648 string=0x000000000029464C "\t"
 *   insn=0x000000000029464C string=0x0000000000294650 "*"
 *   insn=0x0000000000294650 string=0x0000000000294654 "\n"
 *   insn=0x000000000029465C string=0x0000000000294660 "l"
 *   insn=0x0000000000294664 string=0x0000000000294668 "OW"
 *   insn=0x0000000000294674 string=0x0000000000294678 "*"
 *   insn=0x0000000000294678 string=0x000000000029467C "\n"
 *   insn=0x000000000029467C string=0x0000000000294680 "?"
 *   insn=0x0000000000294680 string=0x0000000000294684 ""
 *   insn=0x0000000000294690 string=0x0000000000294694 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BouncingMonsterControllerComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
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
  __int64 v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+18h] [xbp-68h]
  __int64 v19; // [xsp+20h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-58h]
  int v21; // [xsp+30h] [xbp-50h]
  __int64 v22; // [xsp+38h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::GetBindings();
  sub_566BB8((int)&v17, "jumpAngle");
  v18 = 102;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v18;
    sub_56A528(v3 + 8, &v19);
    *(_DWORD *)(v3 + 24) = v21;
    *(_QWORD *)(v3 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v19 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v17 - 8);
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
      operator delete(v5);
  }
  sub_566BB8((int)&v17, "jumpSpeed");
  v18 = 103;
  sub_56A528(&v19, &v17);
  v20 = 0x500000001LL;
  v21 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v18;
    sub_56A528(v6 + 8, &v19);
    *(_DWORD *)(v6 + 24) = v21;
    *(_QWORD *)(v6 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v19 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v17 - 8);
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
      operator delete(v8);
  }
}

