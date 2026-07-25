/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474C48
 * Mangled: _ZN5Caver10FastVectorIPNS_9ComponentEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::Component *>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001F4550  Caver::FastVector<Caver::Component *>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 32
 *   insn=0x0000000000474C58 string=0x0000000000474C5C "v"
 *   insn=0x0000000000474C64 string=0x0000000000474C68 "m"
 *   insn=0x0000000000474C6C string=0x0000000000474C70 "t"
 *   insn=0x0000000000474C74 string=0x0000000000474C78 "h"
 *   insn=0x0000000000474C74 string=0x0000000000474CC8 "`"
 *   insn=0x0000000000474C88 string=0x0000000000474C8C "}"
 *   insn=0x0000000000474C94 string=0x0000000000474C98 " "
 *   insn=0x0000000000474C98 string=0x0000000000474C9C "5"
 *   insn=0x0000000000474C9C string=0x0000000000474CA0 "h"
 *   insn=0x0000000000474C9C string=0x00000000001F8570 "0'"
 *   insn=0x0000000000474CA4 string=0x0000000000474CA8 "h"
 *   insn=0x0000000000474CA8 string=0x0000000000474D54 "t"
 *   insn=0x0000000000474CB8 string=0x0000000000474CBC """
 *   insn=0x0000000000474CBC string=0x0000000000474CE0 "*"
 *   insn=0x0000000000474CC4 string=0x0000000000474D34 "K"
 *   insn=0x0000000000474CC8 string=0x0000000000474CCC "`"
 *   insn=0x0000000000474CD0 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000474CD8 string=0x0000000000474CDC " "
 *   insn=0x0000000000474CE0 string=0x0000000000474CE4 ""
 *   insn=0x0000000000474CEC string=0x0000000000474D04 "*"
 *   insn=0x0000000000474CF0 string=0x0000000000474CF4 "_"
 *   insn=0x0000000000474CF4 string=0x0000000000474CF8 "i"
 *   insn=0x0000000000474CFC string=0x0000000000474D00 ""
 *   insn=0x0000000000474D04 string=0x0000000000474D08 "A"
 *   insn=0x0000000000474D10 string=0x0000000000474D14 "`"
 *   insn=0x0000000000474D14 string=0x0000000000474D18 "k"
 *   insn=0x0000000000474D24 string=0x0000000000474D28 "a"
 *   insn=0x0000000000474D28 string=0x0000000000474D2C "_"
 *   insn=0x0000000000474D38 string=0x0000000000474D3C "J"
 *   insn=0x0000000000474D3C string=0x0000000000474D40 "_"
 *   insn=0x0000000000474D44 string=0x0000000000474D48 "k"
 *   insn=0x0000000000474D54 string=0x0000000000474D58 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::Component *>::Resize(__int64 a1, int a2)
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

