/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450D7C
 * Mangled: _ZN5Caver8SkeletonC2Ei
 * Demangled: Caver::Skeleton::Skeleton(int)
 *
 * Callers: 1
 *   0x00000000001FB710  Caver::Skeleton::Skeleton(int)
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 28
 *   insn=0x0000000000450D90 string=0x0000000000450D94 ""
 *   insn=0x0000000000450DA0 string=0x0000000000450DA4 "("
 *   insn=0x0000000000450DA8 string=0x0000000000450DAC "!"
 *   insn=0x0000000000450DB0 string=0x0000000000450DB4 ")"
 *   insn=0x0000000000450DB4 string=0x0000000000450DB8 "?"
 *   insn=0x0000000000450DC0 string=0x0000000000450DC4 "t"
 *   insn=0x0000000000450DCC string=0x00000000001F8570 "0'"
 *   insn=0x0000000000450DD8 string=0x0000000000450E70 "h"
 *   insn=0x0000000000450DE0 string=0x0000000000450DE4 ""
 *   insn=0x0000000000450DE4 string=0x0000000000450DE8 ")"
 *   insn=0x0000000000450DE8 string=0x0000000000450DEC "k"
 *   insn=0x0000000000450DEC string=0x0000000000450DF0 "*A"
 *   insn=0x0000000000450DF4 string=0x0000000000450DF8 "J}"
 *   insn=0x0000000000450DF8 string=0x0000000000450DFC "J"
 *   insn=0x0000000000450DFC string=0x0000000000450E00 "J"
 *   insn=0x0000000000450E00 string=0x0000000000450E04 "_\t"
 *   insn=0x0000000000450E0C string=0x0000000000450E4C "j!"
 *   insn=0x0000000000450E14 string=0x0000000000450E18 "L"
 *   insn=0x0000000000450E18 string=0x0000000000450E1C ""
 *   insn=0x0000000000450E1C string=0x0000000000450E20 "`"
 *   insn=0x0000000000450E40 string=0x0000000000450E44 "_"
 *   insn=0x0000000000450E44 string=0x0000000000450E48 "@"
 *   insn=0x0000000000450E50 string=0x0000000000450E54 "k"
 *   insn=0x0000000000450E54 string=0x0000000000450E58 "\t"
 *   insn=0x0000000000450E58 string=0x0000000000450E5C "ka"
 *   insn=0x0000000000450E5C string=0x0000000000450E60 "K"
 *   insn=0x0000000000450E60 string=0x0000000000450E64 "JA"
 *   insn=0x0000000000450E64 string=0x0000000000450E68 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Skeleton::Skeleton(Caver::Skeleton *this, int a2)
{
  __int64 v3; // x21
  __int64 v4; // x8
  _BOOL4 v5; // w9
  bool v6; // cf
  unsigned __int64 v7; // x8
  int v8; // w10
  unsigned __int64 v10; // x0
  _QWORD *result; // x0
  _QWORD *v12; // x8
  unsigned __int64 v13; // x10
  _QWORD *v14; // x11
  _QWORD *v15; // x13
  __int64 v16; // x15
  _QWORD *v17; // x10

  v3 = a2;
  v4 = 144LL * a2;
  v5 = !is_mul_ok(a2, 0x90u);
  v6 = __CFADD__(v4, 8);
  v7 = v4 + 8;
  v8 = v6;
  if ( v5 | v8 )
    v10 = -1;
  else
    v10 = v7;
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 1) = 0;
  result = (_QWORD *)operator new[](v10);
  *result = v3;
  v12 = result + 1;
  if ( a2 )
  {
    v13 = (144 * v3 - 144) / 0x90uLL + 1;
    v14 = result + 1;
    if ( v13 < 2 )
      goto LABEL_12;
    v15 = result + 19;
    v14 = &v12[18 * (v13 & 0x3FFFFFFFFFFFFFELL)];
    v16 = v13 & 0x3FFFFFFFFFFFFFELL;
    do
    {
      *(v15 - 18) = &byte_6FD2F8;
      *v15 = &byte_6FD2F8;
      v16 -= 2;
      v15 += 36;
    }
    while ( v16 );
    if ( v13 != (v13 & 0x3FFFFFFFFFFFFFELL) )
    {
LABEL_12:
      v17 = v14 - 1;
      do
      {
        v17[1] = &byte_6FD2F8;
        v17 += 18;
      }
      while ( &result[18 * v3] != v17 );
    }
  }
  *((_QWORD *)this + 1) = v12;
  return result;
}

