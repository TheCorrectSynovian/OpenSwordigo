/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002759B8
 * Mangled: _ZN5Caver10FastVectorINS_17ItemDropComponent13ItemDropEntryEED2Ev
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
 *
 * Callers: 1
 *   0x00000000001FC390  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x00000000002759CC string=0x00000000002759D0 "T"
 *   insn=0x00000000002759E4 string=0x00000000002759E8 "h"
 *   insn=0x00000000002759E8 string=0x00000000002759EC "("
 *   insn=0x00000000002759F0 string=0x00000000002759F4 "w#"
 *   insn=0x0000000000275A00 string=0x0000000000275A04 ""
 *   insn=0x0000000000275A14 string=0x0000000000275A18 ""
 *   insn=0x0000000000275A14 string=0x0000000000275A34 "!"
 *   insn=0x0000000000275A20 string=0x0000000000275A24 "a"
 *   insn=0x0000000000275A24 string=0x0000000000275A50 "!"
 *   insn=0x0000000000275A2C string=0x0000000000275A30 " "
 *   insn=0x0000000000275A38 string=0x0000000000275A3C "\t"
 *   insn=0x0000000000275A38 string=0x0000000000275A6C "\t"
 *   insn=0x0000000000275A3C string=0x0000000000275A40 "*"
 *   insn=0x0000000000275A40 string=0x0000000000275A44 "\n"
 *   insn=0x0000000000275A48 string=0x0000000000275A4C ""
 *   insn=0x0000000000275A4C string=0x0000000000275A78 "?"
 *   insn=0x0000000000275A54 string=0x0000000000275A58 "\t"
 *   insn=0x0000000000275A54 string=0x0000000000275A8C "\t"
 *   insn=0x0000000000275A58 string=0x0000000000275A5C "*"
 *   insn=0x0000000000275A5C string=0x0000000000275A60 "\n"
 *   insn=0x0000000000275A68 string=0x0000000000275A98 "?"
 *   insn=0x0000000000275A6C string=0x0000000000275A70 "*"
 *   insn=0x0000000000275A70 string=0x0000000000275A74 "\n"
 *   insn=0x0000000000275A80 string=0x0000000000275A84 "H"
 *   insn=0x0000000000275A8C string=0x0000000000275A90 "*"
 *   insn=0x0000000000275A90 string=0x0000000000275A94 "\n"
 *   insn=0x0000000000275A98 string=0x0000000000275A9C "l"
 *   insn=0x0000000000275AA0 string=0x0000000000275AA4 "@"
 *   insn=0x0000000000275AB0 string=0x0000000000275AB4 "+"
 *   insn=0x0000000000275AB4 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000275AE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector(__int64 a1)
{
  _QWORD *v1; // x21
  __int64 v2; // x8
  _QWORD *v3; // x24
  __int64 v4; // x8
  void *v5; // x0
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = *(v1 - 1);
    if ( v2 )
    {
      v3 = &v1[4 * v2];
      do
      {
        while ( 1 )
        {
          v4 = *(v3 - 3);
          v3 -= 4;
          v5 = (void *)(v4 - 24);
          if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
          {
            v7 = (unsigned int *)(v4 - 8);
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
              operator delete(v5);
          }
          v6 = (__int64 *)(*v3 - 24LL);
          if ( v6 != &qword_6FD2E0 )
          {
            v9 = (unsigned int *)(*v3 - 8LL);
            if ( &pthread_create )
            {
              do
                v10 = __ldaxr(v9);
              while ( __stlxr(v10 - 1, v9) );
            }
            else
            {
              v10 = (*v9)--;
            }
            if ( v10 <= 0 )
              break;
          }
          if ( v3 == v1 )
            goto LABEL_20;
        }
        operator delete(v6);
      }
      while ( v3 != v1 );
    }
LABEL_20:
    operator delete[](v1 - 1);
  }
}

