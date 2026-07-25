/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267130
 * Mangled: _ZN5Caver21EntityActionComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::EntityActionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F3A90  Caver::EntityActionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000267090  Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F3A90  Caver::EntityActionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x0000000000267144 string=0x0000000000267148 "V"
 *   insn=0x0000000000267158 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000026715C string=0x0000000000587EEA "onActivate"
 *   insn=0x0000000000267194 string=0x0000000000267198 "t"
 *   insn=0x00000000002671A8 string=0x00000000002671AC ""
 *   insn=0x00000000002671B8 string=0x00000000002671BC "\t\t@"
 *   insn=0x00000000002671C0 string=0x00000000002671C4 ""
 *   insn=0x00000000002671C8 string=0x00000000002671CC "h"
 *   insn=0x00000000002671CC string=0x00000000002671D0 ""
 *   insn=0x00000000002671D0 string=0x00000000002671D4 "h"
 *   insn=0x00000000002671E8 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002671F0 string=0x00000000002671F4 "s"
 *   insn=0x000000000026721C string=0x0000000000267220 "!"
 *   insn=0x000000000026723C string=0x0000000000267240 ")=G"
 *   insn=0x0000000000267240 string=0x0000000000267244 "!"
 *   insn=0x0000000000267248 string=0x000000000026724C "\t"
 *   insn=0x0000000000267248 string=0x0000000000267284 "\t"
 *   insn=0x000000000026724C string=0x0000000000267250 "*"
 *   insn=0x0000000000267250 string=0x0000000000267254 "\n"
 *   insn=0x0000000000267258 string=0x000000000026725C ""
 *   insn=0x000000000026725C string=0x0000000000267290 "?"
 *   insn=0x0000000000267260 string=0x0000000000267264 ")=G"
 *   insn=0x0000000000267264 string=0x0000000000267268 "!"
 *   insn=0x000000000026726C string=0x0000000000267270 "\t"
 *   insn=0x000000000026726C string=0x00000000002672A4 "\t"
 *   insn=0x0000000000267270 string=0x0000000000267274 "*"
 *   insn=0x0000000000267274 string=0x0000000000267278 "\n"
 *   insn=0x0000000000267280 string=0x00000000002672B0 "?"
 *   insn=0x0000000000267284 string=0x0000000000267288 "*"
 *   insn=0x0000000000267288 string=0x000000000026728C "\n"
 *   insn=0x0000000000267298 string=0x000000000026729C "B"
 *   insn=0x00000000002672A4 string=0x00000000002672A8 "*"
 *   insn=0x00000000002672A8 string=0x00000000002672AC "\n"
 *   insn=0x00000000002672B8 string=0x00000000002672BC ":"
 *   insn=0x00000000002672C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002672CC string=0x00000000002672D0 "J"
 *   insn=0x00000000002672D4 string=0x00000000002672D8 "(a"
 *   insn=0x00000000002672E4 string=0x00000000002672E8 "J=G"
 *   insn=0x00000000002672E8 string=0x00000000002672EC ")!"
 *   insn=0x00000000002672F0 string=0x00000000002672F4 "*"
 *   insn=0x00000000002672F0 string=0x0000000000267308 "*"
 *   insn=0x00000000002672F4 string=0x00000000002672F8 "K"
 *   insn=0x00000000002672F8 string=0x00000000002672FC "+"
 *   insn=0x0000000000267304 string=0x0000000000267314 "_"
 *   insn=0x0000000000267308 string=0x000000000026730C "K"
 *   insn=0x000000000026730C string=0x0000000000267310 "+"
 *   insn=0x0000000000267320 string=0x0000000000267324 " "
 *   insn=0x0000000000267334 string=0x0000000000267338 ")"
 *   insn=0x0000000000267348 string=0x000000000026734C ")=G"
 *   insn=0x000000000026734C string=0x0000000000267350 "!"
 *   insn=0x0000000000267350 string=0x0000000000267354 "i"
 *   insn=0x0000000000267354 string=0x0000000000267358 "\t"
 *   insn=0x0000000000267354 string=0x0000000000267380 "\t"
 *   insn=0x0000000000267358 string=0x000000000026735C "*"
 *   insn=0x000000000026735C string=0x0000000000267360 "\n"
 *   insn=0x0000000000267364 string=0x0000000000267368 "?"
 *   insn=0x0000000000267368 string=0x000000000026736C "l"
 *   insn=0x0000000000267378 string=0x000000000026737C "Ri"
 *   insn=0x0000000000267380 string=0x0000000000267384 "*"
 *   insn=0x0000000000267384 string=0x0000000000267388 "\n"
 *   insn=0x0000000000267388 string=0x000000000026738C "?"
 *   insn=0x000000000026738C string=0x0000000000267390 ""
 *   insn=0x00000000002673A0 string=0x00000000001F3A90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityActionComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "onActivate");
  v11 = 0;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x600000001LL;
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

