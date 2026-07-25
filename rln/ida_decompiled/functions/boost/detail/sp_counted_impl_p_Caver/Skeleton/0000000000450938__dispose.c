/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450938
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver8SkeletonEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Skeleton>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x0000000000450950 string=0x0000000000450954 "U"
 *   insn=0x0000000000450964 string=0x0000000000450968 "v"
 *   insn=0x0000000000450968 string=0x000000000045096C "v"
 *   insn=0x0000000000450984 string=0x0000000000450988 "9?G"
 *   insn=0x0000000000450988 string=0x000000000045098C "\t"
 *   insn=0x0000000000450990 string=0x0000000000450994 ""
 *   insn=0x00000000004509A0 string=0x00000000004509B0 "!"
 *   insn=0x00000000004509A4 string=0x00000000004509A8 "a"
 *   insn=0x00000000004509B4 string=0x00000000004509B8 "\t"
 *   insn=0x00000000004509B4 string=0x00000000004509CC "\t"
 *   insn=0x00000000004509B8 string=0x00000000004509BC "*"
 *   insn=0x00000000004509BC string=0x00000000004509C0 "\n"
 *   insn=0x00000000004509C8 string=0x00000000004509D8 "?"
 *   insn=0x00000000004509CC string=0x00000000004509D0 "*"
 *   insn=0x00000000004509D0 string=0x00000000004509D4 "\n"
 *   insn=0x00000000004509D8 string=0x00000000004509DC "L"
 *   insn=0x00000000004509E0 string=0x00000000004509E4 "pf"
 *   insn=0x00000000004509E8 string=0x00000000004509EC "A"
 *   insn=0x00000000004509F0 string=0x00000000004509F4 "["
 *   insn=0x00000000004509F4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004509F8 string=0x00000000004509FC "-"
 *   insn=0x00000000004509FC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000450A0C string=0x0000000000450A2C ")"
 *   insn=0x0000000000450A2C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Skeleton>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x8
  __int64 v4; // x24
  __int64 v5; // x8
  __int64 v6; // t1
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = v1[1];
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 8);
      if ( v3 )
      {
        v4 = v2 + 144 * v3;
        do
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)(v4 - 144);
            v4 -= 144;
            v5 = v6;
            v7 = (void *)(v6 - 24);
            if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
            {
              v8 = (unsigned int *)(v5 - 8);
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
                break;
            }
            if ( v4 == v2 )
              goto LABEL_14;
          }
          operator delete(v7);
        }
        while ( v4 != v2 );
      }
LABEL_14:
      operator delete[]((void *)(v2 - 8));
    }
    operator delete(v1);
  }
}

