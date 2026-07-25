/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004620DC
 * Mangled: _ZN5Caver10FastVectorINS_10PointLightEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::PointLight>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000200650  Caver::FastVector<Caver::PointLight>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 24
 *   insn=0x00000000004620EC string=0x00000000004620F0 "v"
 *   insn=0x00000000004620F8 string=0x00000000004620FC "m"
 *   insn=0x0000000000462100 string=0x0000000000462104 "t"
 *   insn=0x0000000000462108 string=0x000000000046210C "h"
 *   insn=0x0000000000462108 string=0x00000000004621A0 "`"
 *   insn=0x000000000046211C string=0x0000000000462120 "}"
 *   insn=0x0000000000462128 string=0x000000000046212C "@"
 *   insn=0x0000000000462130 string=0x0000000000462134 "h"
 *   insn=0x0000000000462130 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046213C string=0x0000000000462194 "t"
 *   insn=0x0000000000462140 string=0x0000000000462144 "K"
 *   insn=0x000000000046214C string=0x0000000000462150 "1"
 *   insn=0x0000000000462154 string=0x0000000000462158 "mA_"
 *   insn=0x0000000000462158 string=0x000000000046215C ")"
 *   insn=0x000000000046215C string=0x0000000000462160 "?"
 *   insn=0x0000000000462164 string=0x0000000000462168 "m"
 *   insn=0x000000000046216C string=0x0000000000462170 "`\t"
 *   insn=0x0000000000462174 string=0x0000000000462178 "`"
 *   insn=0x000000000046217C string=0x0000000000462180 "`"
 *   insn=0x000000000046218C string=0x0000000000462190 "tK"
 *   insn=0x0000000000462190 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000462194 string=0x0000000000462198 "u"
 *   insn=0x00000000004621A0 string=0x00000000004621A4 "`"
 *   insn=0x00000000004621A4 string=0x00000000004621A8 "nK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::PointLight>::Resize(__int64 a1, int a2)
{
  int v3; // w22
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  char *v7; // x8
  __int64 v8; // x21
  __int64 v9; // x9
  _OWORD *v10; // x11
  _OWORD *v11; // x12
  __int128 v12; // t1
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
      if ( is_mul_ok(a2, 0x3Cu) )
        v5 = 60LL * a2;
      else
        v5 = -1;
      v6 = operator new[](v5);
      v7 = *(char **)(a1 + 8);
      v8 = v6;
      if ( v7 )
      {
        if ( v3 >= 1 )
        {
          v9 = 0;
          v10 = v7 + 12;
          v11 = (_OWORD *)(v6 + 12);
          do
          {
            ++v9;
            *(_QWORD *)((char *)v11 - 12) = *(_QWORD *)((char *)v10 - 12);
            *((_DWORD *)v11 - 1) = *((_DWORD *)v10 - 1);
            v11[2] = v10[2];
            v11[1] = v10[1];
            v12 = *v10;
            v10 = (_OWORD *)((char *)v10 + 60);
            *v11 = v12;
            v11 = (_OWORD *)((char *)v11 + 60);
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

