/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEF4C
 * Mangled: _ZN5Caver10FastVectorItE6ResizeEi
 * Demangled: Caver::FastVector<ushort>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FEB70  Caver::FastVector<ushort>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 32
 *   insn=0x00000000002AEF5C string=0x00000000002AEF60 "v"
 *   insn=0x00000000002AEF68 string=0x00000000002AEF6C "m"
 *   insn=0x00000000002AEF6C string=0x00000000002AEF78 "T"
 *   insn=0x00000000002AEF70 string=0x00000000002AEF74 "t"
 *   insn=0x00000000002AEF78 string=0x00000000002AEF7C "h"
 *   insn=0x00000000002AEF78 string=0x00000000002AEFC0 "`"
 *   insn=0x00000000002AEF88 string=0x00000000002AEF8C ""
 *   insn=0x00000000002AEF90 string=0x00000000002AEF94 "w%"
 *   insn=0x00000000002AEF94 string=0x00000000002AEF98 "h"
 *   insn=0x00000000002AEF94 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002AEF9C string=0x00000000002AEFA0 "h"
 *   insn=0x00000000002AEFA0 string=0x00000000002AF04C "t"
 *   insn=0x00000000002AEFB0 string=0x00000000002AEFB4 """
 *   insn=0x00000000002AEFB4 string=0x00000000002AEFD8 "*"
 *   insn=0x00000000002AEFBC string=0x00000000002AF02C "K"
 *   insn=0x00000000002AEFC0 string=0x00000000002AEFC4 "`"
 *   insn=0x00000000002AEFC8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AEFD0 string=0x00000000002AEFD4 " "
 *   insn=0x00000000002AEFD8 string=0x00000000002AEFDC ""
 *   insn=0x00000000002AEFE4 string=0x00000000002AEFFC "*"
 *   insn=0x00000000002AEFE8 string=0x00000000002AEFEC "_"
 *   insn=0x00000000002AEFEC string=0x00000000002AEFF0 "i"
 *   insn=0x00000000002AEFF4 string=0x00000000002AEFF8 ""
 *   insn=0x00000000002AEFFC string=0x00000000002AF000 "A"
 *   insn=0x00000000002AF008 string=0x00000000002AF00C "`"
 *   insn=0x00000000002AF00C string=0x00000000002AF010 "k"
 *   insn=0x00000000002AF01C string=0x00000000002AF020 "a"
 *   insn=0x00000000002AF020 string=0x00000000002AF024 "_"
 *   insn=0x00000000002AF030 string=0x00000000002AF034 "J"
 *   insn=0x00000000002AF034 string=0x00000000002AF038 "_"
 *   insn=0x00000000002AF03C string=0x00000000002AF040 "k"
 *   insn=0x00000000002AF04C string=0x00000000002AF050 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<unsigned short>::Resize(__int64 a1, int a2)
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
  __int16 v17; // w12

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
    if ( __CFADD__(a2, a2) )
      v5 = -1;
    else
      v5 = 2LL * a2;
    v6 = operator new[](v5);
    v7 = *(char **)(a1 + 8);
    v8 = v6;
    if ( !v7 )
      goto LABEL_23;
    if ( v3 >= 1 )
    {
      if ( (unsigned int)v3 >= 0x10 )
      {
        if ( v6 >= (unsigned __int64)&v7[2 * v3] || v6 + 2LL * v3 <= (unsigned __int64)v7 )
        {
          v9 = v3 & 0xFFFFFFFFFFFFFFF0LL;
          v11 = (__int128 *)(v7 + 16);
          v12 = (_OWORD *)(v6 + 16);
          v13 = v9;
          do
          {
            v14 = *(v11 - 1);
            v15 = *v11;
            v11 += 2;
            v13 -= 16LL;
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
        v16 = 2 * v9;
        v17 = *(_WORD *)&v7[2 * v9++];
        *(_WORD *)(v6 + v16) = v17;
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

