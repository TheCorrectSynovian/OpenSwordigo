/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236488
 * Mangled: _ZN5Caver10FastVectorINS_12ShadowVertexEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FF3F0  Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 25
 *   insn=0x0000000000236498 string=0x000000000023649C "v"
 *   insn=0x00000000002364A4 string=0x00000000002364A8 "m"
 *   insn=0x00000000002364A8 string=0x00000000002364B4 "t"
 *   insn=0x00000000002364AC string=0x00000000002364B0 "t"
 *   insn=0x00000000002364B4 string=0x00000000002364B8 "h"
 *   insn=0x00000000002364B4 string=0x0000000000236540 "`"
 *   insn=0x00000000002364C8 string=0x00000000002364CC "\n"
 *   insn=0x00000000002364CC string=0x00000000002364D0 "}"
 *   insn=0x00000000002364D0 string=0x00000000002364D4 "I"
 *   insn=0x00000000002364D8 string=0x00000000002364DC " "
 *   insn=0x00000000002364DC string=0x00000000002364E0 "$"
 *   insn=0x00000000002364E0 string=0x00000000002364E4 "h"
 *   insn=0x00000000002364E0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002364E8 string=0x00000000002364EC "H"
 *   insn=0x00000000002364EC string=0x0000000000236534 "t"
 *   insn=0x00000000002364FC string=0x0000000000236500 "Q"
 *   insn=0x0000000000236504 string=0x0000000000236508 "`"
 *   insn=0x0000000000236508 string=0x000000000023650C ")"
 *   insn=0x000000000023650C string=0x0000000000236510 "?"
 *   insn=0x0000000000236514 string=0x0000000000236518 "m"
 *   insn=0x000000000023651C string=0x0000000000236520 "m"
 *   insn=0x0000000000236524 string=0x0000000000236528 ""
 *   insn=0x0000000000236530 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000236534 string=0x0000000000236538 "u"
 *   insn=0x0000000000236540 string=0x0000000000236544 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::ShadowVertex>::Resize(__int64 a1, int a2)
{
  int v3; // w22
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  int *v7; // x8
  __int64 v8; // x21
  __int64 v9; // x9
  int *v10; // x11
  _DWORD *v11; // x12
  int v12; // t1
  void *v13; // x0

  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > a2 )
  {
    v3 = a2;
    *(_DWORD *)a1 = a2;
  }
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 4) != a2 )
    {
      if ( is_mul_ok(a2, 0x18u) )
        v5 = 24LL * a2;
      else
        v5 = -1;
      v6 = operator new[](v5);
      v7 = *(int **)(a1 + 8);
      v8 = v6;
      if ( v7 )
      {
        if ( v3 >= 1 )
        {
          v9 = 0;
          v10 = v7 + 5;
          v11 = (_DWORD *)(v6 + 20);
          do
          {
            ++v9;
            *(_OWORD *)(v11 - 5) = *(_OWORD *)(v10 - 5);
            *(v11 - 1) = *(v10 - 1);
            v12 = *v10;
            v10 += 6;
            *v11 = v12;
            v11 += 6;
          }
          while ( v9 < v3 );
        }
        operator delete[](v7);
      }
      *(_DWORD *)(a1 + 4) = a2;
      *(_QWORD *)(a1 + 8) = v8;
    }
  }
  else
  {
    v13 = *(void **)(a1 + 8);
    if ( v13 )
    {
      operator delete[](v13);
      *(_QWORD *)(a1 + 8) = 0;
    }
    *(_DWORD *)(a1 + 4) = 0;
  }
}

