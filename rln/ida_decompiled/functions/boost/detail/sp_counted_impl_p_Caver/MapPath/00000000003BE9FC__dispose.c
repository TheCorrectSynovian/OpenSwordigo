/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BE9FC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7MapPathEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MapPath>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x00000000003BEA10 string=0x00000000003BEA14 "U"
 *   insn=0x00000000003BEA24 string=0x00000000003BEA28 "tZ@"
 *   insn=0x00000000003BEA30 string=0x00000000003BEA34 "7"
 *   insn=0x00000000003BEA30 string=0x00000000003BEAA4 "t"
 *   insn=0x00000000003BEA34 string=0x00000000003BEA38 "8"
 *   insn=0x00000000003BEA4C string=0x00000000003BEA50 "\t"
 *   insn=0x00000000003BEA4C string=0x00000000003BEA64 "\t"
 *   insn=0x00000000003BEA50 string=0x00000000003BEA54 "*"
 *   insn=0x00000000003BEA54 string=0x00000000003BEA58 "\n"
 *   insn=0x00000000003BEA60 string=0x00000000003BEA70 "?"
 *   insn=0x00000000003BEA64 string=0x00000000003BEA68 "*"
 *   insn=0x00000000003BEA68 string=0x00000000003BEA6C "\n"
 *   insn=0x00000000003BEA78 string=0x00000000003BEA7C "J"
 *   insn=0x00000000003BEA90 string=0x00000000003BEA48 "!"
 *   insn=0x00000000003BEA98 string=0x00000000003BEA9C "A"
 *   insn=0x00000000003BEA9C string=0x00000000003BEAA0 "t"
 *   insn=0x00000000003BEAAC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BEAE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MapPath>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  unsigned int *v4; // x8
  int v5; // w9
  __int64 *v6; // x0

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_QWORD *)*v1;
    v3 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v1 != v3 )
    {
      do
      {
        v6 = (__int64 *)(*v2 - 24LL);
        if ( v6 != &qword_6FD2E0 )
        {
          v4 = (unsigned int *)(*v2 - 8LL);
          if ( &pthread_create )
          {
            do
              v5 = __ldaxr(v4);
            while ( __stlxr(v5 - 1, v4) );
          }
          else
          {
            v5 = (*v4)--;
          }
          if ( v5 <= 0 )
            operator delete(v6);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (_QWORD *)*v1;
    }
    if ( v2 )
      operator delete(v2);
    operator delete(v1);
  }
}

