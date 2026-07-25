/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3BFC
 * Mangled: _ZN5Caver27ElevatorControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ElevatorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002034C0  Caver::ElevatorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002034C0  Caver::ElevatorControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x00000000002B3C10 string=0x00000000002B3C14 "V"
 *   insn=0x00000000002B3C24 string=0x00000000002B3C28 "!"
 *   insn=0x00000000002B3C24 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002B3C28 string=0x000000000059A32A "mode"
 *   insn=0x00000000002B3C50 string=0x00000000002B3C54 "5"
 *   insn=0x00000000002B3C64 string=0x00000000002B3C68 "t"
 *   insn=0x00000000002B3C78 string=0x00000000002B3C7C ""
 *   insn=0x00000000002B3C80 string=0x00000000002B3C84 ")"
 *   insn=0x00000000002B3C88 string=0x00000000002B3C8C "\t\t@"
 *   insn=0x00000000002B3C90 string=0x00000000002B3C94 ""
 *   insn=0x00000000002B3C98 string=0x00000000002B3C9C "h"
 *   insn=0x00000000002B3C9C string=0x00000000002B3CA0 ""
 *   insn=0x00000000002B3CA0 string=0x00000000002B3CA4 "h"
 *   insn=0x00000000002B3CB4 string=0x00000000002B3CB8 "\n"
 *   insn=0x00000000002B3CB8 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002B3CC0 string=0x00000000002B3CC4 "s"
 *   insn=0x00000000002B3CEC string=0x00000000002B3CF0 "!"
 *   insn=0x00000000002B3CF0 string=0x00000000002B3D94 "O\t"
 *   insn=0x00000000002B3D0C string=0x00000000002B3D10 ")=G"
 *   insn=0x00000000002B3D10 string=0x00000000002B3D14 "!"
 *   insn=0x00000000002B3D18 string=0x00000000002B3D1C "\t"
 *   insn=0x00000000002B3D18 string=0x00000000002B3D54 "\t"
 *   insn=0x00000000002B3D1C string=0x00000000002B3D20 "*"
 *   insn=0x00000000002B3D20 string=0x00000000002B3D24 "\n"
 *   insn=0x00000000002B3D28 string=0x00000000002B3D2C ""
 *   insn=0x00000000002B3D2C string=0x00000000002B3D60 "?"
 *   insn=0x00000000002B3D30 string=0x00000000002B3D34 ")=G"
 *   insn=0x00000000002B3D34 string=0x00000000002B3D38 "!"
 *   insn=0x00000000002B3D3C string=0x00000000002B3D40 "\t"
 *   insn=0x00000000002B3D3C string=0x00000000002B3D74 "\t"
 *   insn=0x00000000002B3D40 string=0x00000000002B3D44 "*"
 *   insn=0x00000000002B3D44 string=0x00000000002B3D48 "\n"
 *   insn=0x00000000002B3D50 string=0x00000000002B3D80 "?"
 *   insn=0x00000000002B3D54 string=0x00000000002B3D58 "*"
 *   insn=0x00000000002B3D58 string=0x00000000002B3D5C "\n"
 *   insn=0x00000000002B3D74 string=0x00000000002B3D78 "*"
 *   insn=0x00000000002B3D78 string=0x00000000002B3D7C "\n"
 *   insn=0x00000000002B3D94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B3D9C string=0x00000000002B3DA0 "J"
 *   insn=0x00000000002B3DA4 string=0x00000000002B3DA8 "(a"
 *   insn=0x00000000002B3DB4 string=0x00000000002B3DB8 "J=G"
 *   insn=0x00000000002B3DB8 string=0x00000000002B3DBC ")!"
 *   insn=0x00000000002B3DC0 string=0x00000000002B3DC4 "*"
 *   insn=0x00000000002B3DC0 string=0x00000000002B3DD8 "*"
 *   insn=0x00000000002B3DC4 string=0x00000000002B3DC8 "K"
 *   insn=0x00000000002B3DC8 string=0x00000000002B3DCC "+"
 *   insn=0x00000000002B3DD4 string=0x00000000002B3DE4 "_"
 *   insn=0x00000000002B3DD8 string=0x00000000002B3DDC "K"
 *   insn=0x00000000002B3DDC string=0x00000000002B3DE0 "+"
 *   insn=0x00000000002B3DF0 string=0x00000000002B3DF4 "l"
 *   insn=0x00000000002B3E04 string=0x00000000002B3E08 ")"
 *   insn=0x00000000002B3E18 string=0x00000000002B3E1C ")=G"
 *   insn=0x00000000002B3E1C string=0x00000000002B3E20 "!"
 *   insn=0x00000000002B3E20 string=0x00000000002B3E24 "i"
 *   insn=0x00000000002B3E24 string=0x00000000002B3E28 "\t"
 *   insn=0x00000000002B3E24 string=0x00000000002B3E50 "\t"
 *   insn=0x00000000002B3E28 string=0x00000000002B3E2C "*"
 *   insn=0x00000000002B3E2C string=0x00000000002B3E30 "\n"
 *   insn=0x00000000002B3E34 string=0x00000000002B3E38 "?"
 *   insn=0x00000000002B3E38 string=0x00000000002B3E3C "l"
 *   insn=0x00000000002B3E40 string=0x00000000002B3E44 "X"
 *   insn=0x00000000002B3E50 string=0x00000000002B3E54 "*"
 *   insn=0x00000000002B3E54 string=0x00000000002B3E58 "\n"
 *   insn=0x00000000002B3E58 string=0x00000000002B3E5C "?"
 *   insn=0x00000000002B3E5C string=0x00000000002B3E60 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ElevatorControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "mode");
  v11 = 1;
  sub_56A528(&v12, &v10);
  v14 = 1;
  v13 = 0x200000001LL;
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

