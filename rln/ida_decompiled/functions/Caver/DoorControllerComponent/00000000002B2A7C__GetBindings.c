/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2A7C
 * Mangled: _ZN5Caver23DoorControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::DoorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FF750  Caver::DoorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FF750  Caver::DoorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x00000000002B2A90 string=0x00000000002B2A94 "V"
 *   insn=0x00000000002B2AA0 string=0x00000000002B2AA4 "C""
 *   insn=0x00000000002B2AA4 string=0x00000000002B2AA8 "A"
 *   insn=0x00000000002B2AA4 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002B2AA8 string=0x000000000059A63A "open"
 *   insn=0x00000000002B2AB4 string=0x00000000002B2AB8 "@"
 *   insn=0x00000000002B2AE4 string=0x00000000002B2AE8 "t"
 *   insn=0x00000000002B2AF8 string=0x00000000002B2AFC ""
 *   insn=0x00000000002B2B08 string=0x00000000002B2B0C "\t\t@"
 *   insn=0x00000000002B2B10 string=0x00000000002B2B14 ""
 *   insn=0x00000000002B2B18 string=0x00000000002B2B1C "h"
 *   insn=0x00000000002B2B1C string=0x00000000002B2B20 ""
 *   insn=0x00000000002B2B20 string=0x00000000002B2B24 "h"
 *   insn=0x00000000002B2B34 string=0x00000000002B2B38 "j"
 *   insn=0x00000000002B2B38 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002B2B40 string=0x00000000002B2B44 "s"
 *   insn=0x00000000002B2B6C string=0x00000000002B2B70 "!"
 *   insn=0x00000000002B2B8C string=0x00000000002B2B90 ")=G"
 *   insn=0x00000000002B2B90 string=0x00000000002B2B94 "!"
 *   insn=0x00000000002B2B98 string=0x00000000002B2B9C "\t"
 *   insn=0x00000000002B2B98 string=0x00000000002B2BD4 "\t"
 *   insn=0x00000000002B2B9C string=0x00000000002B2BA0 "*"
 *   insn=0x00000000002B2BA0 string=0x00000000002B2BA4 "\n"
 *   insn=0x00000000002B2BA8 string=0x00000000002B2BAC ""
 *   insn=0x00000000002B2BAC string=0x00000000002B2BE0 "?"
 *   insn=0x00000000002B2BB0 string=0x00000000002B2BB4 ")=G"
 *   insn=0x00000000002B2BB4 string=0x00000000002B2BB8 "!"
 *   insn=0x00000000002B2BBC string=0x00000000002B2BC0 "\t"
 *   insn=0x00000000002B2BBC string=0x00000000002B2BF4 "\t"
 *   insn=0x00000000002B2BC0 string=0x00000000002B2BC4 "*"
 *   insn=0x00000000002B2BC4 string=0x00000000002B2BC8 "\n"
 *   insn=0x00000000002B2BD0 string=0x00000000002B2C00 "?"
 *   insn=0x00000000002B2BD4 string=0x00000000002B2BD8 "*"
 *   insn=0x00000000002B2BD8 string=0x00000000002B2BDC "\n"
 *   insn=0x00000000002B2BF4 string=0x00000000002B2BF8 "*"
 *   insn=0x00000000002B2BF8 string=0x00000000002B2BFC "\n"
 *   insn=0x00000000002B2C14 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B2C1C string=0x00000000002B2C20 "J"
 *   insn=0x00000000002B2C24 string=0x00000000002B2C28 "(a"
 *   insn=0x00000000002B2C34 string=0x00000000002B2C38 "J=G"
 *   insn=0x00000000002B2C38 string=0x00000000002B2C3C ")!"
 *   insn=0x00000000002B2C40 string=0x00000000002B2C44 "*"
 *   insn=0x00000000002B2C40 string=0x00000000002B2C58 "*"
 *   insn=0x00000000002B2C44 string=0x00000000002B2C48 "K"
 *   insn=0x00000000002B2C48 string=0x00000000002B2C4C "+"
 *   insn=0x00000000002B2C54 string=0x00000000002B2C64 "_"
 *   insn=0x00000000002B2C58 string=0x00000000002B2C5C "K"
 *   insn=0x00000000002B2C5C string=0x00000000002B2C60 "+"
 *   insn=0x00000000002B2C84 string=0x00000000002B2C88 ")"
 *   insn=0x00000000002B2C98 string=0x00000000002B2C9C ")=G"
 *   insn=0x00000000002B2C9C string=0x00000000002B2CA0 "!"
 *   insn=0x00000000002B2CA0 string=0x00000000002B2CA4 "i"
 *   insn=0x00000000002B2CA4 string=0x00000000002B2CA8 "\t"
 *   insn=0x00000000002B2CA4 string=0x00000000002B2CD0 "\t"
 *   insn=0x00000000002B2CA8 string=0x00000000002B2CAC "*"
 *   insn=0x00000000002B2CAC string=0x00000000002B2CB0 "\n"
 *   insn=0x00000000002B2CB4 string=0x00000000002B2CB8 "?"
 *   insn=0x00000000002B2CB8 string=0x00000000002B2CBC "l"
 *   insn=0x00000000002B2CD0 string=0x00000000002B2CD4 "*"
 *   insn=0x00000000002B2CD4 string=0x00000000002B2CD8 "\n"
 *   insn=0x00000000002B2CD8 string=0x00000000002B2CDC "?"
 *   insn=0x00000000002B2CDC string=0x00000000002B2CE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DoorControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "open");
  v11 = 4;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x400000001LL;
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

