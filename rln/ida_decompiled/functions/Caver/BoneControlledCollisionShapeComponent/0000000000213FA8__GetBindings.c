/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213FA8
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000203540  Caver::BoneControlledCollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000002027F0  Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000203540  Caver::BoneControlledCollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x0000000000213FBC string=0x0000000000213FC0 "V"
 *   insn=0x0000000000213FCC string=0x0000000000213FD0 ""
 *   insn=0x0000000000213FD4 string=0x0000000000583821 "controllingBoneName"
 *   insn=0x0000000000213FFC string=0x0000000000214000 "JY"
 *   insn=0x0000000000214000 string=0x0000000000214004 " "
 *   insn=0x0000000000214010 string=0x0000000000214014 "t"
 *   insn=0x0000000000214024 string=0x0000000000214028 ""
 *   insn=0x000000000021402C string=0x0000000000214030 ">Y"
 *   insn=0x0000000000214034 string=0x0000000000214038 "\t\t@"
 *   insn=0x000000000021403C string=0x0000000000214040 ""
 *   insn=0x0000000000214044 string=0x0000000000214048 "h"
 *   insn=0x0000000000214048 string=0x000000000021404C ""
 *   insn=0x000000000021404C string=0x0000000000214050 "h"
 *   insn=0x0000000000214064 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000021406C string=0x0000000000214070 "s"
 *   insn=0x0000000000214098 string=0x000000000021409C "!"
 *   insn=0x000000000021409C string=0x0000000000214140 "d"
 *   insn=0x00000000002140B8 string=0x00000000002140BC ")=G"
 *   insn=0x00000000002140BC string=0x00000000002140C0 "!"
 *   insn=0x00000000002140C4 string=0x00000000002140C8 "\t"
 *   insn=0x00000000002140C4 string=0x0000000000214100 "\t"
 *   insn=0x00000000002140C8 string=0x00000000002140CC "*"
 *   insn=0x00000000002140CC string=0x00000000002140D0 "\n"
 *   insn=0x00000000002140D4 string=0x00000000002140D8 ""
 *   insn=0x00000000002140D8 string=0x000000000021410C "?"
 *   insn=0x00000000002140DC string=0x00000000002140E0 ")=G"
 *   insn=0x00000000002140E0 string=0x00000000002140E4 "!"
 *   insn=0x00000000002140E8 string=0x00000000002140EC "\t"
 *   insn=0x00000000002140E8 string=0x0000000000214120 "\t"
 *   insn=0x00000000002140EC string=0x00000000002140F0 "*"
 *   insn=0x00000000002140F0 string=0x00000000002140F4 "\n"
 *   insn=0x00000000002140FC string=0x000000000021412C "?"
 *   insn=0x0000000000214100 string=0x0000000000214104 "*"
 *   insn=0x0000000000214104 string=0x0000000000214108 "\n"
 *   insn=0x0000000000214120 string=0x0000000000214124 "*"
 *   insn=0x0000000000214124 string=0x0000000000214128 "\n"
 *   insn=0x0000000000214140 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000214148 string=0x000000000021414C "J"
 *   insn=0x0000000000214150 string=0x0000000000214154 "(a"
 *   insn=0x0000000000214160 string=0x0000000000214164 "J=G"
 *   insn=0x0000000000214164 string=0x0000000000214168 ")!"
 *   insn=0x000000000021416C string=0x0000000000214170 "*"
 *   insn=0x000000000021416C string=0x0000000000214184 "*"
 *   insn=0x0000000000214170 string=0x0000000000214174 "K"
 *   insn=0x0000000000214174 string=0x0000000000214178 "+"
 *   insn=0x0000000000214180 string=0x0000000000214190 "_"
 *   insn=0x0000000000214184 string=0x0000000000214188 "K"
 *   insn=0x0000000000214188 string=0x000000000021418C "+"
 *   insn=0x00000000002141B0 string=0x00000000002141B4 ")"
 *   insn=0x00000000002141C4 string=0x00000000002141C8 ")=G"
 *   insn=0x00000000002141C8 string=0x00000000002141CC "!"
 *   insn=0x00000000002141CC string=0x00000000002141D0 "i"
 *   insn=0x00000000002141D0 string=0x00000000002141D4 "\t"
 *   insn=0x00000000002141D0 string=0x00000000002141FC "\t"
 *   insn=0x00000000002141D4 string=0x00000000002141D8 "*"
 *   insn=0x00000000002141D8 string=0x00000000002141DC "\n"
 *   insn=0x00000000002141E0 string=0x00000000002141E4 "?"
 *   insn=0x00000000002141E4 string=0x00000000002141E8 "l"
 *   insn=0x00000000002141EC string=0x00000000002141F0 "mX"
 *   insn=0x00000000002141FC string=0x0000000000214200 "*"
 *   insn=0x0000000000214200 string=0x0000000000214204 "\n"
 *   insn=0x0000000000214204 string=0x0000000000214208 "?"
 *   insn=0x0000000000214208 string=0x000000000021420C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // [xsp+8h] [xbp-68h] BYREF
  int v11; // [xsp+18h] [xbp-58h]
  __int64 v12; // [xsp+20h] [xbp-50h] BYREF
  __int64 v13; // [xsp+28h] [xbp-48h]
  int v14; // [xsp+30h] [xbp-40h]
  __int64 v15; // [xsp+38h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::CollisionShapeComponent::GetBindings();
  sub_566BB8((int)&v10, "controllingBoneName");
  v11 = 301;
  sub_56A528(&v12, &v10);
  v13 = 0x100000001LL;
  v14 = 1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v11;
    sub_56A528(v3 + 8, &v12);
    *(_DWORD *)(v3 + 24) = v14;
    *(_QWORD *)(v3 + 16) = v13;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v12 - 24);
  if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v10 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v5);
  }
}

