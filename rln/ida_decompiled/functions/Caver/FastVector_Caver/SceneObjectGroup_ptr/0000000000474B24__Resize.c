/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474B24
 * Mangled: _ZN5Caver10FastVectorIPNS_16SceneObjectGroupEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FEF50  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 32
 *   insn=0x0000000000474B34 string=0x0000000000474B38 "v"
 *   insn=0x0000000000474B40 string=0x0000000000474B44 "m"
 *   insn=0x0000000000474B48 string=0x0000000000474B4C "t"
 *   insn=0x0000000000474B50 string=0x0000000000474B54 "h"
 *   insn=0x0000000000474B50 string=0x0000000000474BA4 "`"
 *   insn=0x0000000000474B64 string=0x0000000000474B68 "}"
 *   insn=0x0000000000474B70 string=0x0000000000474B74 " "
 *   insn=0x0000000000474B74 string=0x0000000000474B78 "~"
 *   insn=0x0000000000474B78 string=0x0000000000474B7C "h"
 *   insn=0x0000000000474B78 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000474B80 string=0x0000000000474B84 "h"
 *   insn=0x0000000000474B84 string=0x0000000000474C30 "t"
 *   insn=0x0000000000474B94 string=0x0000000000474B98 """
 *   insn=0x0000000000474B98 string=0x0000000000474BBC "*"
 *   insn=0x0000000000474BA0 string=0x0000000000474C10 "K"
 *   insn=0x0000000000474BA4 string=0x0000000000474BA8 "`"
 *   insn=0x0000000000474BAC string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000474BB4 string=0x0000000000474BB8 " "
 *   insn=0x0000000000474BBC string=0x0000000000474BC0 ""
 *   insn=0x0000000000474BC8 string=0x0000000000474BE0 "*"
 *   insn=0x0000000000474BCC string=0x0000000000474BD0 "_"
 *   insn=0x0000000000474BD0 string=0x0000000000474BD4 "i"
 *   insn=0x0000000000474BD8 string=0x0000000000474BDC ""
 *   insn=0x0000000000474BE0 string=0x0000000000474BE4 "A"
 *   insn=0x0000000000474BEC string=0x0000000000474BF0 "`"
 *   insn=0x0000000000474BF0 string=0x0000000000474BF4 "k"
 *   insn=0x0000000000474C00 string=0x0000000000474C04 "a"
 *   insn=0x0000000000474C04 string=0x0000000000474C08 "_"
 *   insn=0x0000000000474C14 string=0x0000000000474C18 "J"
 *   insn=0x0000000000474C18 string=0x0000000000474C1C "_"
 *   insn=0x0000000000474C20 string=0x0000000000474C24 "k"
 *   insn=0x0000000000474C30 string=0x0000000000474C34 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::SceneObjectGroup *>::Resize(__int64 a1, int a2)
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

