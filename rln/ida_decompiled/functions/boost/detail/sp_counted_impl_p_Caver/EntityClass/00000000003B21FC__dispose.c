/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B21FC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11EntityClassEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::EntityClass>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 32
 *   insn=0x00000000003B2208 string=0x00000000003B220C "T"
 *   insn=0x00000000003B221C string=0x00000000003B2220 "i"
 *   insn=0x00000000003B2224 string=0x00000000003B2228 ""
 *   insn=0x00000000003B2228 string=0x00000000003B222C " a"
 *   insn=0x00000000003B2234 string=0x00000000003B2238 "i"
 *   insn=0x00000000003B2238 string=0x00000000003B223C " a"
 *   insn=0x00000000003B224C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B2258 string=0x00000000003B225C "!"
 *   insn=0x00000000003B2270 string=0x00000000003B2274 "J=G"
 *   insn=0x00000000003B2274 string=0x00000000003B2278 ")!"
 *   insn=0x00000000003B227C string=0x00000000003B2280 "*"
 *   insn=0x00000000003B227C string=0x00000000003B22B8 "*"
 *   insn=0x00000000003B2280 string=0x00000000003B2284 "K"
 *   insn=0x00000000003B2284 string=0x00000000003B2288 "+"
 *   insn=0x00000000003B228C string=0x00000000003B2290 ""
 *   insn=0x00000000003B2290 string=0x00000000003B22C4 "_"
 *   insn=0x00000000003B2294 string=0x00000000003B2298 "J=G"
 *   insn=0x00000000003B2298 string=0x00000000003B229C "(!"
 *   insn=0x00000000003B229C string=0x00000000003B22A0 "\n"
 *   insn=0x00000000003B22A0 string=0x00000000003B22A4 "\t"
 *   insn=0x00000000003B22A0 string=0x00000000003B22E0 "\t"
 *   insn=0x00000000003B22A4 string=0x00000000003B22A8 "*"
 *   insn=0x00000000003B22A8 string=0x00000000003B22AC "\n"
 *   insn=0x00000000003B22B4 string=0x00000000003B22EC "?"
 *   insn=0x00000000003B22B8 string=0x00000000003B22BC "K"
 *   insn=0x00000000003B22BC string=0x00000000003B22C0 "+"
 *   insn=0x00000000003B22CC string=0x00000000003B22D0 "5"
 *   insn=0x00000000003B22D4 string=0x00000000003B22D8 ""
 *   insn=0x00000000003B22E0 string=0x00000000003B22E4 "*"
 *   insn=0x00000000003B22E4 string=0x00000000003B22E8 "\n"
 *   insn=0x00000000003B22F4 string=0x00000000003B22F8 "+"
 *   insn=0x00000000003B2300 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::EntityClass>::dispose(__int64 a1)
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

