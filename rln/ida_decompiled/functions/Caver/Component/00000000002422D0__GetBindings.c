/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002422D0
 * Mangled: _ZN5Caver9Component11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FC780  Caver::Component::BindingForOutlet(int)
 *   0x000000000054C640  sub_54C640
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000002422EC string=0x00000000002422F0 "X"
 *   insn=0x00000000002422F0 string=0x00000000002422F4 ""
 *   insn=0x00000000002422F8 string=0x00000000002422FC "z""
 *   insn=0x0000000000242304 string=0x0000000000242308 "u.@"
 *   insn=0x000000000024230C string=0x0000000000242310 " "
 *   insn=0x0000000000242310 string=0x0000000000242314 "%"
 *   insn=0x0000000000242310 string=0x00000000002423F4 ""
 *   insn=0x0000000000242318 string=0x000000000024231C "{"
 *   insn=0x000000000024231C string=0x0000000000242320 "9?G"
 *   insn=0x0000000000242338 string=0x000000000024233C "\t"
 *   insn=0x0000000000242338 string=0x0000000000242350 "\t"
 *   insn=0x000000000024233C string=0x0000000000242340 "*"
 *   insn=0x0000000000242340 string=0x0000000000242344 "\n"
 *   insn=0x000000000024234C string=0x000000000024235C "?"
 *   insn=0x0000000000242350 string=0x0000000000242354 "*"
 *   insn=0x0000000000242354 string=0x0000000000242358 "\n"
 *   insn=0x000000000024237C string=0x00000000001FC780 "0'"
 *   insn=0x0000000000242390 string=0x0000000000242394 ""
 *   insn=0x0000000000242398 string=0x000000000024239C "c"
 *   insn=0x00000000002423B0 string=0x00000000002423B4 ""
 *   insn=0x00000000002423C8 string=0x00000000002423CC "E"
 *   insn=0x00000000002423CC string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002423DC string=0x0000000000242334 "!"
 *   insn=0x00000000002423FC string=0x0000000000242400 "!"
 *   insn=0x0000000000242424 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000024242C string=0x0000000000242430 "(a"
 *   insn=0x0000000000242438 string=0x000000000024243C ")!"
 *   insn=0x0000000000242440 string=0x0000000000242444 "*"
 *   insn=0x0000000000242440 string=0x0000000000242470 "*"
 *   insn=0x0000000000242444 string=0x0000000000242448 "K"
 *   insn=0x0000000000242448 string=0x000000000024244C "+"
 *   insn=0x0000000000242450 string=0x0000000000242454 "_"
 *   insn=0x0000000000242470 string=0x0000000000242474 "K"
 *   insn=0x0000000000242474 string=0x0000000000242478 "+"
 *   insn=0x0000000000242478 string=0x000000000024247C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Component::GetBindings(__int64 *this, __int64 a2)
{
  Caver::Component *v2; // x19
  __int64 *v3; // x26
  __int64 v5; // x21
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // x23
  void *v9; // x0
  __int64 v10; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v11[2]; // [xsp+10h] [xbp-70h] BYREF
  int v12; // [xsp+20h] [xbp-60h]
  __int64 v13; // [xsp+28h] [xbp-58h]

  v2 = (Caver::Component *)this;
  v3 = this + 9;
  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = this[11];
  if ( (__int64 *)v5 != this + 9 )
  {
    do
    {
      Caver::Component::BindingForOutlet(&v10, v2, *(_DWORD *)(v5 + 32));
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 == *(_QWORD *)(a2 + 16) )
      {
        std::vector<Caver::Binding>::_M_insert_aux();
      }
      else
      {
        *(_DWORD *)v8 = v10;
        sub_56A528(v8 + 8, v11);
        *(_DWORD *)(v8 + 24) = v12;
        *(_QWORD *)(v8 + 16) = v11[1];
        *(_QWORD *)(a2 + 8) += 32LL;
      }
      v9 = (void *)(v11[0] - 24LL);
      if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(v11[0] - 8LL);
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
          operator delete(v9);
      }
      this = (__int64 *)sub_54C640(v5);
      v5 = (__int64)this;
    }
    while ( this != v3 );
  }
  return this;
}

