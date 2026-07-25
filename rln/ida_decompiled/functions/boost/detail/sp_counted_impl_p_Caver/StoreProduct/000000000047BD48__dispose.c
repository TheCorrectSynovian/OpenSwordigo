/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047BD48
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver12StoreProductEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::StoreProduct>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x000000000047BD54 string=0x000000000047BD58 "T"
 *   insn=0x000000000047BD68 string=0x000000000047BD6C "i"
 *   insn=0x000000000047BD6C string=0x000000000047BD70 "H"
 *   insn=0x000000000047BD70 string=0x000000000047BD74 ""
 *   insn=0x000000000047BD74 string=0x000000000047BD78 " a"
 *   insn=0x000000000047BD80 string=0x000000000047BD84 "i"
 *   insn=0x000000000047BD80 string=0x000000000047BDBC "J"
 *   insn=0x000000000047BD84 string=0x000000000047BD88 " a"
 *   insn=0x000000000047BD90 string=0x000000000047BDE0 "J"
 *   insn=0x000000000047BD94 string=0x000000000047BD98 "F"
 *   insn=0x000000000047BD98 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047BDA4 string=0x000000000047BDA8 "!"
 *   insn=0x000000000047BDA8 string=0x000000000047BE4C "!"
 *   insn=0x000000000047BDBC string=0x000000000047BDC0 "J=G"
 *   insn=0x000000000047BDC0 string=0x000000000047BDC4 ")!"
 *   insn=0x000000000047BDC8 string=0x000000000047BDCC "*"
 *   insn=0x000000000047BDC8 string=0x000000000047BE04 "*"
 *   insn=0x000000000047BDCC string=0x000000000047BDD0 "K"
 *   insn=0x000000000047BDD0 string=0x000000000047BDD4 "+"
 *   insn=0x000000000047BDD8 string=0x000000000047BDDC ""
 *   insn=0x000000000047BDDC string=0x000000000047BE10 "_"
 *   insn=0x000000000047BDE0 string=0x000000000047BDE4 "J=G"
 *   insn=0x000000000047BDE4 string=0x000000000047BDE8 "(!"
 *   insn=0x000000000047BDE8 string=0x000000000047BDEC "\n"
 *   insn=0x000000000047BDEC string=0x000000000047BDF0 "\t"
 *   insn=0x000000000047BDEC string=0x000000000047BE2C "\t"
 *   insn=0x000000000047BDF0 string=0x000000000047BDF4 "*"
 *   insn=0x000000000047BDF4 string=0x000000000047BDF8 "\n"
 *   insn=0x000000000047BE00 string=0x000000000047BE38 "?"
 *   insn=0x000000000047BE04 string=0x000000000047BE08 "K"
 *   insn=0x000000000047BE08 string=0x000000000047BE0C "+"
 *   insn=0x000000000047BE18 string=0x000000000047BE1C "b"
 *   insn=0x000000000047BE1C string=0x000000000047BE20 "H"
 *   insn=0x000000000047BE20 string=0x000000000047BE24 ""
 *   insn=0x000000000047BE2C string=0x000000000047BE30 "*"
 *   insn=0x000000000047BE30 string=0x000000000047BE34 "\n"
 *   insn=0x000000000047BE40 string=0x000000000047BE44 "X"
 *   insn=0x000000000047BE4C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::StoreProduct>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 v2; // x9
  void *v3; // x0
  __int64 *v4; // x0
  unsigned int *v5; // x9
  int v6; // w10
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = v1[1];
    v3 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
    {
      v5 = (unsigned int *)(v2 - 8);
      if ( &pthread_create )
      {
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
      }
      else
      {
        v6 = (*v5)--;
      }
      if ( v6 <= 0 )
        operator delete(v3);
    }
    v4 = (__int64 *)(*v1 - 24LL);
    if ( v4 != &qword_6FD2E0 )
    {
      v7 = (unsigned int *)(*v1 - 8LL);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
        v8 = (*v7)--;
      }
      if ( v8 <= 0 )
        operator delete(v4);
    }
    operator delete(v1);
  }
}

