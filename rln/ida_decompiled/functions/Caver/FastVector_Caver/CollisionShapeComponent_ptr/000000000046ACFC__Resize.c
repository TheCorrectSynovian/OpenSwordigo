/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046ACFC
 * Mangled: _ZN5Caver10FastVectorIPNS_23CollisionShapeComponentEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000202360  Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 34
 *   insn=0x000000000046AD0C string=0x000000000046AD10 "v"
 *   insn=0x000000000046AD18 string=0x000000000046AD1C "m"
 *   insn=0x000000000046AD20 string=0x000000000046AD24 "t"
 *   insn=0x000000000046AD28 string=0x000000000046AD2C "h"
 *   insn=0x000000000046AD28 string=0x000000000046AD7C "`"
 *   insn=0x000000000046AD3C string=0x000000000046AD40 "}"
 *   insn=0x000000000046AD48 string=0x000000000046AD4C " "
 *   insn=0x000000000046AD4C string=0x000000000046AD50 "6"
 *   insn=0x000000000046AD50 string=0x000000000046AD54 "h"
 *   insn=0x000000000046AD50 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046AD58 string=0x000000000046AD5C "h"
 *   insn=0x000000000046AD5C string=0x000000000046AE08 "t"
 *   insn=0x000000000046AD6C string=0x000000000046AD70 """
 *   insn=0x000000000046AD70 string=0x000000000046AD94 "*"
 *   insn=0x000000000046AD78 string=0x000000000046ADE8 "K"
 *   insn=0x000000000046AD7C string=0x000000000046AD80 "`"
 *   insn=0x000000000046AD80 string=0x000000000046AD84 "w("
 *   insn=0x000000000046AD84 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046AD8C string=0x000000000046AD90 " "
 *   insn=0x000000000046AD94 string=0x000000000046AD98 ""
 *   insn=0x000000000046ADA0 string=0x000000000046ADB8 "*"
 *   insn=0x000000000046ADA4 string=0x000000000046ADA8 "_"
 *   insn=0x000000000046ADA8 string=0x000000000046ADAC "i"
 *   insn=0x000000000046ADB0 string=0x000000000046ADB4 ""
 *   insn=0x000000000046ADB8 string=0x000000000046ADBC "A"
 *   insn=0x000000000046ADC4 string=0x000000000046ADC8 "`"
 *   insn=0x000000000046ADC8 string=0x000000000046ADCC "k"
 *   insn=0x000000000046ADD8 string=0x000000000046ADDC "a"
 *   insn=0x000000000046ADDC string=0x000000000046ADE0 "_"
 *   insn=0x000000000046ADEC string=0x000000000046ADF0 "J"
 *   insn=0x000000000046ADF0 string=0x000000000046ADF4 "_"
 *   insn=0x000000000046ADF8 string=0x000000000046ADFC "k"
 *   insn=0x000000000046AE00 string=0x000000000046AE04 "W("
 *   insn=0x000000000046AE08 string=0x000000000046AE0C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(__int64 a1, int a2)
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

