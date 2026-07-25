/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D92C
 * Mangled: _ZN5Caver19BackgroundComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000203750  Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000203750  Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x000000000021D940 string=0x000000000021D944 "V"
 *   insn=0x000000000021D954 string=0x000000000059C36B "texture"
 *   insn=0x000000000021D97C string=0x000000000021D980 " "
 *   insn=0x000000000021D988 string=0x000000000021D98C "t"
 *   insn=0x000000000021D99C string=0x000000000021D9A0 ""
 *   insn=0x000000000021D9AC string=0x000000000021D9B0 "\t\t@"
 *   insn=0x000000000021D9B4 string=0x000000000021D9B8 ""
 *   insn=0x000000000021D9BC string=0x000000000021D9C0 "h"
 *   insn=0x000000000021D9C0 string=0x000000000021D9C4 ""
 *   insn=0x000000000021D9C4 string=0x000000000021D9C8 "h"
 *   insn=0x000000000021D9DC string=0x00000000001F78E0 "0'"
 *   insn=0x000000000021D9E0 string=0x000000000021D9E4 "S&"
 *   insn=0x000000000021D9E4 string=0x000000000021D9E8 "s"
 *   insn=0x000000000021D9F4 string=0x000000000021DA30 ")&"
 *   insn=0x000000000021DA04 string=0x000000000021DA54 ")&"
 *   insn=0x000000000021DA10 string=0x000000000021DA14 "!"
 *   insn=0x000000000021DA30 string=0x000000000021DA34 ")=G"
 *   insn=0x000000000021DA34 string=0x000000000021DA38 "!"
 *   insn=0x000000000021DA3C string=0x000000000021DA40 "\t"
 *   insn=0x000000000021DA3C string=0x000000000021DA78 "\t"
 *   insn=0x000000000021DA40 string=0x000000000021DA44 "*"
 *   insn=0x000000000021DA44 string=0x000000000021DA48 "\n"
 *   insn=0x000000000021DA4C string=0x000000000021DA50 ""
 *   insn=0x000000000021DA50 string=0x000000000021DA84 "?"
 *   insn=0x000000000021DA54 string=0x000000000021DA58 ")=G"
 *   insn=0x000000000021DA58 string=0x000000000021DA5C "!"
 *   insn=0x000000000021DA60 string=0x000000000021DA64 "\t"
 *   insn=0x000000000021DA60 string=0x000000000021DA98 "\t"
 *   insn=0x000000000021DA64 string=0x000000000021DA68 "*"
 *   insn=0x000000000021DA68 string=0x000000000021DA6C "\n"
 *   insn=0x000000000021DA74 string=0x000000000021DAA4 "?"
 *   insn=0x000000000021DA78 string=0x000000000021DA7C "*"
 *   insn=0x000000000021DA7C string=0x000000000021DA80 "\n"
 *   insn=0x000000000021DA8C string=0x000000000021DA90 "E2"
 *   insn=0x000000000021DA98 string=0x000000000021DA9C "*"
 *   insn=0x000000000021DA9C string=0x000000000021DAA0 "\n"
 *   insn=0x000000000021DAAC string=0x000000000021DAB0 "=2"
 *   insn=0x000000000021DAB8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021DABC string=0x000000000021DAC0 "J&"
 *   insn=0x000000000021DAC0 string=0x000000000021DAC4 "J"
 *   insn=0x000000000021DAC8 string=0x000000000021DACC "(a"
 *   insn=0x000000000021DAD4 string=0x000000000021DAD8 "*&"
 *   insn=0x000000000021DAD8 string=0x000000000021DADC "J=G"
 *   insn=0x000000000021DADC string=0x000000000021DAE0 ")!"
 *   insn=0x000000000021DAE4 string=0x000000000021DAE8 "*"
 *   insn=0x000000000021DAE4 string=0x000000000021DAFC "*"
 *   insn=0x000000000021DAE8 string=0x000000000021DAEC "K"
 *   insn=0x000000000021DAEC string=0x000000000021DAF0 "+"
 *   insn=0x000000000021DAF8 string=0x000000000021DB08 "_"
 *   insn=0x000000000021DAFC string=0x000000000021DB00 "K"
 *   insn=0x000000000021DB00 string=0x000000000021DB04 "+"
 *   insn=0x000000000021DB14 string=0x000000000021DB18 "#2"
 *   insn=0x000000000021DB24 string=0x000000000021DB28 "I&"
 *   insn=0x000000000021DB28 string=0x000000000021DB2C ")"
 *   insn=0x000000000021DB38 string=0x000000000021DB3C ")&"
 *   insn=0x000000000021DB3C string=0x000000000021DB40 ")=G"
 *   insn=0x000000000021DB40 string=0x000000000021DB44 "!"
 *   insn=0x000000000021DB44 string=0x000000000021DB48 "i"
 *   insn=0x000000000021DB48 string=0x000000000021DB4C "\t"
 *   insn=0x000000000021DB48 string=0x000000000021DB74 "\t"
 *   insn=0x000000000021DB4C string=0x000000000021DB50 "*"
 *   insn=0x000000000021DB50 string=0x000000000021DB54 "\n"
 *   insn=0x000000000021DB58 string=0x000000000021DB5C "?"
 *   insn=0x000000000021DB5C string=0x000000000021DB60 "l"
 *   insn=0x000000000021DB6C string=0x000000000021DB70 "U"
 *   insn=0x000000000021DB74 string=0x000000000021DB78 "*"
 *   insn=0x000000000021DB78 string=0x000000000021DB7C "\n"
 *   insn=0x000000000021DB7C string=0x000000000021DB80 "?"
 *   insn=0x000000000021DB80 string=0x000000000021DB84 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BackgroundComponent::GetBindings(__int64 a1, __int64 a2)
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
  sub_566BB8((int)&v10, "texture");
  v11 = 0;
  sub_56A528(&v12, &v10);
  v13 = 0x100000001LL;
  v14 = 0;
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

