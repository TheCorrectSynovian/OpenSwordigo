/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476720
 * Mangled: _ZN5Caver10FastVectorIPNS_11SceneObjectEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000202D20  Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 31
 *   insn=0x0000000000476730 string=0x0000000000476734 "v"
 *   insn=0x000000000047673C string=0x0000000000476740 "m"
 *   insn=0x0000000000476744 string=0x0000000000476748 "t"
 *   insn=0x000000000047674C string=0x0000000000476750 "h"
 *   insn=0x000000000047674C string=0x00000000004767A0 "`"
 *   insn=0x0000000000476760 string=0x0000000000476764 "}"
 *   insn=0x000000000047676C string=0x0000000000476770 " "
 *   insn=0x0000000000476774 string=0x0000000000476778 "h"
 *   insn=0x0000000000476774 string=0x00000000001F8570 "0'"
 *   insn=0x000000000047677C string=0x0000000000476780 "h"
 *   insn=0x0000000000476780 string=0x000000000047682C "t"
 *   insn=0x0000000000476790 string=0x0000000000476794 """
 *   insn=0x0000000000476794 string=0x00000000004767B8 "*"
 *   insn=0x000000000047679C string=0x000000000047680C "K"
 *   insn=0x00000000004767A0 string=0x00000000004767A4 "`"
 *   insn=0x00000000004767A8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004767B0 string=0x00000000004767B4 " "
 *   insn=0x00000000004767B8 string=0x00000000004767BC ""
 *   insn=0x00000000004767C4 string=0x00000000004767DC "*"
 *   insn=0x00000000004767C8 string=0x00000000004767CC "_"
 *   insn=0x00000000004767CC string=0x00000000004767D0 "i"
 *   insn=0x00000000004767D4 string=0x00000000004767D8 ""
 *   insn=0x00000000004767DC string=0x00000000004767E0 "A"
 *   insn=0x00000000004767E8 string=0x00000000004767EC "`"
 *   insn=0x00000000004767EC string=0x00000000004767F0 "k"
 *   insn=0x00000000004767FC string=0x0000000000476800 "a"
 *   insn=0x0000000000476800 string=0x0000000000476804 "_"
 *   insn=0x0000000000476810 string=0x0000000000476814 "J"
 *   insn=0x0000000000476814 string=0x0000000000476818 "_"
 *   insn=0x000000000047681C string=0x0000000000476820 "k"
 *   insn=0x000000000047682C string=0x0000000000476830 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::SceneObject *>::Resize(__int64 a1, int a2)
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

