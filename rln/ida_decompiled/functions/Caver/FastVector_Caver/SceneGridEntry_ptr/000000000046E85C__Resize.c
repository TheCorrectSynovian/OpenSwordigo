/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E85C
 * Mangled: _ZN5Caver10FastVectorIPNS_14SceneGridEntryEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FF470  Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 32
 *   insn=0x000000000046E86C string=0x000000000046E870 "v"
 *   insn=0x000000000046E878 string=0x000000000046E87C "m"
 *   insn=0x000000000046E880 string=0x000000000046E884 "t"
 *   insn=0x000000000046E888 string=0x000000000046E88C "h"
 *   insn=0x000000000046E888 string=0x000000000046E8DC "`"
 *   insn=0x000000000046E89C string=0x000000000046E8A0 "}"
 *   insn=0x000000000046E8A8 string=0x000000000046E8AC " "
 *   insn=0x000000000046E8AC string=0x000000000046E8B0 "0'"
 *   insn=0x000000000046E8B0 string=0x000000000046E8B4 "h"
 *   insn=0x000000000046E8B0 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046E8B8 string=0x000000000046E8BC "h"
 *   insn=0x000000000046E8BC string=0x000000000046E968 "t"
 *   insn=0x000000000046E8CC string=0x000000000046E8D0 """
 *   insn=0x000000000046E8D0 string=0x000000000046E8F4 "*"
 *   insn=0x000000000046E8D8 string=0x000000000046E948 "K"
 *   insn=0x000000000046E8DC string=0x000000000046E8E0 "`"
 *   insn=0x000000000046E8E4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046E8EC string=0x000000000046E8F0 " "
 *   insn=0x000000000046E8F4 string=0x000000000046E8F8 ""
 *   insn=0x000000000046E900 string=0x000000000046E918 "*"
 *   insn=0x000000000046E904 string=0x000000000046E908 "_"
 *   insn=0x000000000046E908 string=0x000000000046E90C "i"
 *   insn=0x000000000046E910 string=0x000000000046E914 ""
 *   insn=0x000000000046E918 string=0x000000000046E91C "A"
 *   insn=0x000000000046E924 string=0x000000000046E928 "`"
 *   insn=0x000000000046E928 string=0x000000000046E92C "k"
 *   insn=0x000000000046E938 string=0x000000000046E93C "a"
 *   insn=0x000000000046E93C string=0x000000000046E940 "_"
 *   insn=0x000000000046E94C string=0x000000000046E950 "J"
 *   insn=0x000000000046E950 string=0x000000000046E954 "_"
 *   insn=0x000000000046E958 string=0x000000000046E95C "k"
 *   insn=0x000000000046E968 string=0x000000000046E96C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::SceneGridEntry *>::Resize(__int64 a1, int a2)
{
  int v3; // w22
  unsigned __int64 v5; // x0
  unsigned __int64 v6; // x0
  char *v7; // x8
  unsigned __int64 v8; // x21
  signed __int64 v9; // x10
  void *v10; // x0
  __int128 *v11; // x11
  _OWORD *v12; // x12
  signed __int64 v13; // x13
  __int128 v14; // q0
  __int128 v15; // q1
  __int64 v16; // x11
  __int64 v17; // x12

  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > a2 )
  {
    v3 = a2;
    *(_DWORD *)a1 = a2;
  }
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 4) == a2 )
      return;
    if ( is_mul_ok(a2, 8u) )
      v5 = 8LL * a2;
    else
      v5 = -1;
    v6 = operator new[](v5);
    v7 = *(char **)(a1 + 8);
    v8 = v6;
    if ( !v7 )
      goto LABEL_23;
    if ( v3 >= 1 )
    {
      if ( (unsigned int)v3 >= 4 )
      {
        if ( v6 >= (unsigned __int64)&v7[8 * v3] || v6 + 8LL * v3 <= (unsigned __int64)v7 )
        {
          v9 = v3 & 0xFFFFFFFFFFFFFFFCLL;
          v11 = (__int128 *)(v7 + 16);
          v12 = (_OWORD *)(v6 + 16);
          v13 = v9;
          do
          {
            v14 = *(v11 - 1);
            v15 = *v11;
            v11 += 2;
            v13 -= 4LL;
            *(v12 - 1) = v14;
            *v12 = v15;
            v12 += 2;
          }
          while ( v13 );
          if ( v9 == v3 )
            goto LABEL_22;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v9 = 0;
      }
      do
      {
        v16 = 8 * v9;
        v17 = *(_QWORD *)&v7[8 * v9++];
        *(_QWORD *)(v6 + v16) = v17;
      }
      while ( v9 < v3 );
    }
LABEL_22:
    operator delete[](v7);
LABEL_23:
    *(_DWORD *)(a1 + 4) = a2;
    *(_QWORD *)(a1 + 8) = v8;
    return;
  }
  v10 = *(void **)(a1 + 8);
  if ( v10 )
  {
    operator delete[](v10);
    *(_QWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)(a1 + 4) = 0;
}

