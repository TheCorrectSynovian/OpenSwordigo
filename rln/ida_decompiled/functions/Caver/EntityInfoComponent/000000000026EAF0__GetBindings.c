/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026EAF0
 * Mangled: _ZN5Caver19EntityInfoComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F6870  Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6870  Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x000000000026EB04 string=0x000000000026EB08 "V"
 *   insn=0x000000000026EB14 string=0x000000000026EB18 "&2"
 *   insn=0x000000000026EB18 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000026EB1C string=0x000000000058823E "entityClass"
 *   insn=0x000000000026EB28 string=0x000000000026EB2C "#"
 *   insn=0x000000000026EB40 string=0x000000000026EB44 "y"
 *   insn=0x000000000026EB44 string=0x000000000026EB48 " "
 *   insn=0x000000000026EB50 string=0x000000000026EB54 "t"
 *   insn=0x000000000026EB64 string=0x000000000026EB68 ""
 *   insn=0x000000000026EB6C string=0x000000000026EB70 "n"
 *   insn=0x000000000026EB74 string=0x000000000026EB78 "\t\t@"
 *   insn=0x000000000026EB7C string=0x000000000026EB80 ""
 *   insn=0x000000000026EB84 string=0x000000000026EB88 "h"
 *   insn=0x000000000026EB88 string=0x000000000026EB8C ""
 *   insn=0x000000000026EB8C string=0x000000000026EB90 "h"
 *   insn=0x000000000026EBA0 string=0x000000000026EBA4 "O#"
 *   insn=0x000000000026EBA4 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000026EBAC string=0x000000000026EBB0 "s"
 *   insn=0x000000000026EBD8 string=0x000000000026EBDC "!"
 *   insn=0x000000000026EBF8 string=0x000000000026EBFC ")=G"
 *   insn=0x000000000026EBFC string=0x000000000026EC00 "!"
 *   insn=0x000000000026EC04 string=0x000000000026EC08 "\t"
 *   insn=0x000000000026EC04 string=0x000000000026EC40 "\t"
 *   insn=0x000000000026EC08 string=0x000000000026EC0C "*"
 *   insn=0x000000000026EC0C string=0x000000000026EC10 "\n"
 *   insn=0x000000000026EC14 string=0x000000000026EC18 ""
 *   insn=0x000000000026EC18 string=0x000000000026EC4C "?"
 *   insn=0x000000000026EC1C string=0x000000000026EC20 ")=G"
 *   insn=0x000000000026EC20 string=0x000000000026EC24 "!"
 *   insn=0x000000000026EC28 string=0x000000000026EC2C "\t"
 *   insn=0x000000000026EC28 string=0x000000000026EC60 "\t"
 *   insn=0x000000000026EC2C string=0x000000000026EC30 "*"
 *   insn=0x000000000026EC30 string=0x000000000026EC34 "\n"
 *   insn=0x000000000026EC3C string=0x000000000026EC6C "?"
 *   insn=0x000000000026EC40 string=0x000000000026EC44 "*"
 *   insn=0x000000000026EC44 string=0x000000000026EC48 "\n"
 *   insn=0x000000000026EC60 string=0x000000000026EC64 "*"
 *   insn=0x000000000026EC64 string=0x000000000026EC68 "\n"
 *   insn=0x000000000026EC80 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026EC88 string=0x000000000026EC8C "J"
 *   insn=0x000000000026EC90 string=0x000000000026EC94 "(a"
 *   insn=0x000000000026ECA0 string=0x000000000026ECA4 "J=G"
 *   insn=0x000000000026ECA4 string=0x000000000026ECA8 ")!"
 *   insn=0x000000000026ECAC string=0x000000000026ECB0 "*"
 *   insn=0x000000000026ECAC string=0x000000000026ECC4 "*"
 *   insn=0x000000000026ECB0 string=0x000000000026ECB4 "K"
 *   insn=0x000000000026ECB4 string=0x000000000026ECB8 "+"
 *   insn=0x000000000026ECC0 string=0x000000000026ECD0 "_"
 *   insn=0x000000000026ECC4 string=0x000000000026ECC8 "K"
 *   insn=0x000000000026ECC8 string=0x000000000026ECCC "+"
 *   insn=0x000000000026ECF0 string=0x000000000026ECF4 ")"
 *   insn=0x000000000026ED04 string=0x000000000026ED08 ")=G"
 *   insn=0x000000000026ED08 string=0x000000000026ED0C "!"
 *   insn=0x000000000026ED0C string=0x000000000026ED10 "i"
 *   insn=0x000000000026ED10 string=0x000000000026ED14 "\t"
 *   insn=0x000000000026ED10 string=0x000000000026ED3C "\t"
 *   insn=0x000000000026ED14 string=0x000000000026ED18 "*"
 *   insn=0x000000000026ED18 string=0x000000000026ED1C "\n"
 *   insn=0x000000000026ED20 string=0x000000000026ED24 "?"
 *   insn=0x000000000026ED24 string=0x000000000026ED28 "l"
 *   insn=0x000000000026ED3C string=0x000000000026ED40 "*"
 *   insn=0x000000000026ED40 string=0x000000000026ED44 "\n"
 *   insn=0x000000000026ED44 string=0x000000000026ED48 "?"
 *   insn=0x000000000026ED48 string=0x000000000026ED4C ""
 *   insn=0x000000000026ED5C string=0x00000000001F6870 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v10, "entityClass");
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

