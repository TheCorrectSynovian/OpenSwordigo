/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A50D4
 * Mangled: _ZN5Caver17ParticleComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ParticleComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002012B0  Caver::ParticleComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002012B0  Caver::ParticleComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x00000000002A50E8 string=0x00000000002A50EC "V"
 *   insn=0x00000000002A50FC string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002A5100 string=0x000000000059C36B "texture"
 *   insn=0x00000000002A5128 string=0x00000000002A512C " "
 *   insn=0x00000000002A5138 string=0x00000000002A513C "t"
 *   insn=0x00000000002A514C string=0x00000000002A5150 ""
 *   insn=0x00000000002A515C string=0x00000000002A5160 "\t\t@"
 *   insn=0x00000000002A5164 string=0x00000000002A5168 ""
 *   insn=0x00000000002A516C string=0x00000000002A5170 "h"
 *   insn=0x00000000002A5170 string=0x00000000002A5174 ""
 *   insn=0x00000000002A5174 string=0x00000000002A5178 "h"
 *   insn=0x00000000002A518C string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002A51B0 string=0x00000000002A51B4 "!"
 *   insn=0x00000000002A51B4 string=0x00000000002A51B8 "!"
 *   insn=0x00000000002A51B8 string=0x00000000005896A3 "size"
 *   insn=0x00000000002A51C4 string=0x00000000002A51C8 "|"
 *   insn=0x00000000002A51F4 string=0x00000000002A51F8 "t"
 *   insn=0x00000000002A5208 string=0x00000000002A520C ""
 *   insn=0x00000000002A5214 string=0x00000000002A5218 "C"
 *   insn=0x00000000002A5218 string=0x00000000002A521C "\t\t@"
 *   insn=0x00000000002A5220 string=0x00000000002A5224 ""
 *   insn=0x00000000002A5228 string=0x00000000002A522C "h"
 *   insn=0x00000000002A522C string=0x00000000002A5230 ""
 *   insn=0x00000000002A5230 string=0x00000000002A5234 "h"
 *   insn=0x00000000002A5254 string=0x00000000002A5258 "!"
 *   insn=0x00000000002A5274 string=0x00000000002A5278 "a\t"
 *   insn=0x00000000002A5294 string=0x00000000002A5298 ")=G"
 *   insn=0x00000000002A5298 string=0x00000000002A529C "!"
 *   insn=0x00000000002A529C string=0x00000000002A52A0 ")"
 *   insn=0x00000000002A52A0 string=0x00000000002A52A4 "\t"
 *   insn=0x00000000002A52A0 string=0x00000000002A5324 "\t"
 *   insn=0x00000000002A52A4 string=0x00000000002A52A8 "*"
 *   insn=0x00000000002A52A8 string=0x00000000002A52AC "\n"
 *   insn=0x00000000002A52B4 string=0x00000000002A5330 "?"
 *   insn=0x00000000002A52B8 string=0x00000000002A52BC ")=G"
 *   insn=0x00000000002A52BC string=0x00000000002A52C0 "!"
 *   insn=0x00000000002A52C0 string=0x00000000002A52C4 "\t"
 *   insn=0x00000000002A52C4 string=0x00000000002A52C8 "\t"
 *   insn=0x00000000002A52C4 string=0x00000000002A5344 "\t"
 *   insn=0x00000000002A52C8 string=0x00000000002A52CC "*"
 *   insn=0x00000000002A52CC string=0x00000000002A52D0 "\n"
 *   insn=0x00000000002A52D8 string=0x00000000002A5350 "?"
 *   insn=0x00000000002A52DC string=0x00000000002A52E0 ")=G"
 *   insn=0x00000000002A52E0 string=0x00000000002A52E4 "!"
 *   insn=0x00000000002A52E8 string=0x00000000002A52EC "\t"
 *   insn=0x00000000002A52E8 string=0x00000000002A5364 "\t"
 *   insn=0x00000000002A52EC string=0x00000000002A52F0 "*"
 *   insn=0x00000000002A52F0 string=0x00000000002A52F4 "\n"
 *   insn=0x00000000002A52FC string=0x00000000002A5370 "?"
 *   insn=0x00000000002A5300 string=0x00000000002A5304 ")=G"
 *   insn=0x00000000002A5304 string=0x00000000002A5308 "!"
 *   insn=0x00000000002A530C string=0x00000000002A5310 "\t"
 *   insn=0x00000000002A530C string=0x00000000002A5384 "\t"
 *   insn=0x00000000002A5310 string=0x00000000002A5314 "*"
 *   insn=0x00000000002A5314 string=0x00000000002A5318 "\n"
 *   insn=0x00000000002A5320 string=0x00000000002A5390 "?"
 *   insn=0x00000000002A5324 string=0x00000000002A5328 "*"
 *   insn=0x00000000002A5328 string=0x00000000002A532C "\n"
 *   insn=0x00000000002A5344 string=0x00000000002A5348 "*"
 *   insn=0x00000000002A5348 string=0x00000000002A534C "\n"
 *   insn=0x00000000002A5350 string=0x00000000002A5354 ","
 *   insn=0x00000000002A5364 string=0x00000000002A5368 "*"
 *   insn=0x00000000002A5368 string=0x00000000002A536C "\n"
 *   insn=0x00000000002A5370 string=0x00000000002A5374 "L"
 *   insn=0x00000000002A5378 string=0x00000000002A537C "\n"
 *   insn=0x00000000002A5384 string=0x00000000002A5388 "*"
 *   insn=0x00000000002A5388 string=0x00000000002A538C "\n"
 *   insn=0x00000000002A53A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A53AC string=0x00000000002A53B0 "(a"
 *   insn=0x00000000002A53BC string=0x00000000002A53C0 "J=G"
 *   insn=0x00000000002A53C0 string=0x00000000002A53C4 ")!"
 *   insn=0x00000000002A53C8 string=0x00000000002A53CC "*"
 *   insn=0x00000000002A53C8 string=0x00000000002A53E0 "*"
 *   insn=0x00000000002A53CC string=0x00000000002A53D0 "K"
 *   insn=0x00000000002A53D0 string=0x00000000002A53D4 "+"
 *   insn=0x00000000002A53DC string=0x00000000002A53EC "_"
 *   insn=0x00000000002A53E0 string=0x00000000002A53E4 "K"
 *   insn=0x00000000002A53E4 string=0x00000000002A53E8 "+"
 *   insn=0x00000000002A5418 string=0x00000000002A541C ")=G"
 *   insn=0x00000000002A541C string=0x00000000002A5420 "!"
 *   insn=0x00000000002A5424 string=0x00000000002A5428 "\t"
 *   insn=0x00000000002A5424 string=0x00000000002A54F8 "\t"
 *   insn=0x00000000002A5428 string=0x00000000002A542C "*"
 *   insn=0x00000000002A542C string=0x00000000002A5430 "\n"
 *   insn=0x00000000002A5434 string=0x00000000002A5438 "*"
 *   insn=0x00000000002A5438 string=0x00000000002A54E0 "?"
 *   insn=0x00000000002A5440 string=0x00000000002A5444 "\n""
 *   insn=0x00000000002A5444 string=0x00000000002A5448 "J"
 *   insn=0x00000000002A544C string=0x00000000002A5450 "(a"
 *   insn=0x00000000002A545C string=0x00000000002A5460 "J=G"
 *   insn=0x00000000002A5460 string=0x00000000002A5464 ")!"
 *   insn=0x00000000002A5468 string=0x00000000002A546C "*"
 *   insn=0x00000000002A5468 string=0x00000000002A5480 "*"
 *   insn=0x00000000002A546C string=0x00000000002A5470 "K"
 *   insn=0x00000000002A5470 string=0x00000000002A5474 "+"
 *   insn=0x00000000002A547C string=0x00000000002A548C "_"
 *   insn=0x00000000002A5480 string=0x00000000002A5484 "K"
 *   insn=0x00000000002A5484 string=0x00000000002A5488 "+"
 *   insn=0x00000000002A54A8 string=0x00000000002A54AC "\t""
 *   insn=0x00000000002A54AC string=0x00000000002A54B0 ")"
 *   insn=0x00000000002A54C0 string=0x00000000002A54C4 ")=G"
 *   insn=0x00000000002A54C4 string=0x00000000002A54C8 "!"
 *   insn=0x00000000002A54C8 string=0x00000000002A54CC "i"
 *   insn=0x00000000002A54CC string=0x00000000002A54D0 "\t"
 *   insn=0x00000000002A54D0 string=0x00000000002A54D4 "*"
 *   insn=0x00000000002A54D4 string=0x00000000002A54D8 "\n"
 *   insn=0x00000000002A54E0 string=0x00000000002A54E4 "l"
 *   insn=0x00000000002A54F8 string=0x00000000002A54FC "*"
 *   insn=0x00000000002A54FC string=0x00000000002A5500 "\n"
 *   insn=0x00000000002A5500 string=0x00000000002A5504 "?"
 *   insn=0x00000000002A5504 string=0x00000000002A5508 ""
 *   insn=0x00000000002A5514 string=0x00000000002A5518 "fo"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v17; // [xsp+8h] [xbp-68h] BYREF
  int v18; // [xsp+18h] [xbp-58h]
  __int64 v19; // [xsp+20h] [xbp-50h] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]
  int v21; // [xsp+30h] [xbp-40h]
  __int64 v22; // [xsp+38h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v17, "texture");
  v18 = 0;
  sub_56A528(&v19, &v17);
  v20 = 0x100000001LL;
  v21 = 4;
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
  sub_566BB8((int)&v17, "size");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x500000001LL;
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

