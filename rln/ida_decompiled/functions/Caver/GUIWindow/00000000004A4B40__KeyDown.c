/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4B40
 * Mangled: _ZN5Caver9GUIWindow7KeyDownEjjd
 * Demangled: Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000001F6C70  Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 30
 *   insn=0x00000000004A4B5C string=0x00000000004A4B60 "Y"
 *   insn=0x00000000004A4B60 string=0x00000000004A4B64 "("
 *   insn=0x00000000004A4B6C string=0x00000000004A4B70 ""
 *   insn=0x00000000004A4B84 string=0x00000000004A4B88 "@"
 *   insn=0x00000000004A4B94 string=0x0000000000583734 "o"
 *   insn=0x00000000004A4BA0 string=0x00000000004A4BA4 "l"
 *   insn=0x00000000004A4BA4 string=0x00000000004A4BA8 ""
 *   insn=0x00000000004A4BA8 string=0x00000000004A4BAC "H"
 *   insn=0x00000000004A4BAC string=0x00000000004A4C34 ""
 *   insn=0x00000000004A4BB4 string=0x00000000004A4CAC "("
 *   insn=0x00000000004A4BC4 string=0x00000000004A4BC8 "#@"
 *   insn=0x00000000004A4BC8 string=0x00000000004A4BCC "\tc"
 *   insn=0x00000000004A4BCC string=0x00000000004A4BD0 "\nC"
 *   insn=0x00000000004A4BD4 string=0x00000000004A4BD8 "I"
 *   insn=0x00000000004A4BD8 string=0x00000000004A4BDC ")"
 *   insn=0x00000000004A4BDC string=0x00000000004A4BE0 ")"
 *   insn=0x00000000004A4BE8 string=0x00000000004A4BEC "h"
 *   insn=0x00000000004A4BEC string=0x00000000004A4BF0 ""
 *   insn=0x00000000004A4BF0 string=0x00000000004A4C0C " @"
 *   insn=0x00000000004A4C20 string=0x00000000004A4C24 "#@"
 *   insn=0x00000000004A4C2C string=0x00000000004A4C30 "\t"
 *   insn=0x00000000004A4C40 string=0x00000000004A4C44 ""
 *   insn=0x00000000004A4C54 string=0x00000000004A4C58 "bB"
 *   insn=0x00000000004A4C58 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A4C70 string=0x00000000004A4C74 ""
 *   insn=0x00000000004A4C7C string=0x00000000004A4C80 ""
 *   insn=0x00000000004A4C94 string=0x00000000004A4C98 ""
 *   insn=0x00000000004A4CB4 string=0x00000000004A4CB8 "!"
 *   insn=0x00000000004A4CB8 string=0x00000000004A4CDC "}E"
 *   insn=0x00000000004A4CDC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::KeyDown(__int64 this, unsigned int a2, unsigned int a3, long double a4)
{
  _QWORD *v4; // x21
  __int64 v5; // d8
  __int64 v8; // x23
  __int64 v9; // x9
  _QWORD *v10; // x24
  unsigned int v11; // w8
  __int64 *v12; // x9
  __int64 v13; // x0
  _BOOL4 v14; // w23
  __int64 v15; // x0
  __int64 (__fastcall *v16)(__int64, __int64 *); // x8
  __int64 v17; // [xsp+0h] [xbp-60h] BYREF
  unsigned int v18; // [xsp+8h] [xbp-58h]
  int v19; // [xsp+Ch] [xbp-54h]
  unsigned int v20; // [xsp+10h] [xbp-50h]
  __int64 v21; // [xsp+18h] [xbp-48h]

  v4 = (_QWORD *)this;
  v5 = *(_QWORD *)&a4;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 448) != this + 448 )
  {
    this = *(_QWORD *)(*(_QWORD *)(this + 456) + 16LL);
    if ( *(float *)(this + 508) <= 0.001 && !*(_BYTE *)(this + 504) )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, long double))(*(_QWORD *)this + 336LL))(
               this,
               a2,
               a3,
               a4);
  }
  v8 = v4[34];
  if ( !v8 )
    return this;
  v9 = v4[38];
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)v9;
      v11 = *(_DWORD *)(v9 + 32);
      v12 = (__int64 *)(v9 + 24);
      if ( v11 > a2 )
        v12 = v10 + 2;
      v9 = *v12;
    }
    while ( v9 );
    v13 = (__int64)v10;
    if ( v11 <= a2 )
      goto LABEL_14;
  }
  else
  {
    v10 = v4 + 37;
  }
  if ( v10 == (_QWORD *)v4[39] )
    goto LABEL_15;
  v13 = sub_54C700(v10);
LABEL_14:
  if ( *(_DWORD *)(v13 + 32) < a2 )
  {
LABEL_15:
    if ( v10 )
    {
      v14 = v4 + 37 == v10 || *((_DWORD *)v10 + 8) > a2;
      v15 = operator new(0x28u);
      *(_DWORD *)(v15 + 32) = a2;
      sub_54C8A0(v14, v15, v10, v4 + 37);
      v8 = v4[34];
      ++v4[41];
    }
  }
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL);
  v17 = v5;
  v18 = a3;
  v19 = 1;
  v20 = a2;
  return v16(v8, &v17);
}

