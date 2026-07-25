/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048AD94
 * Mangled: _ZN5Caver13GradientColor46GradientColorByReversingAlphaPremultiplicationEv
 * Demangled: Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *
 * Callers: 2
 *   0x00000000001F79B0  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x000000000048ACC0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *
 * Callees: 10
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9190  Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *   0x0000000000200CB0  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x000000000048ADB0 string=0x000000000048ADB4 "X"
 *   insn=0x000000000048ADB8 string=0x000000000048ADBC ""
 *   insn=0x000000000048ADCC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048ADDC string=0x000000000048ADE0 "h"
 *   insn=0x000000000048ADE4 string=0x000000000048ADE8 "i"
 *   insn=0x000000000048ADF0 string=0x000000000048ADF4 "7"
 *   insn=0x000000000048AE04 string=0x00000000001F8570 "0'"
 *   insn=0x000000000048AE14 string=0x000000000048AE18 "h"
 *   insn=0x000000000048AE24 string=0x000000000048AE28 ")"
 *   insn=0x000000000048AE30 string=0x000000000048AE34 "I"
 *   insn=0x000000000048AE34 string=0x000000000048AE38 "\t"
 *   insn=0x000000000048AE38 string=0x000000000048AE3C " "
 *   insn=0x000000000048AE3C string=0x000000000048AE40 ")@"
 *   insn=0x000000000048AE48 string=0x000000000048AE4C "I@"
 *   insn=0x000000000048AE4C string=0x000000000048AE50 "\t"
 *   insn=0x000000000048AE50 string=0x000000000048AE54 "`"
 *   insn=0x000000000048AE58 string=0x000000000048AE5C "*"
 *   insn=0x000000000048AE5C string=0x000000000048AE60 "+kj"
 *   insn=0x000000000048AE64 string=0x000000000048AE68 ")"
 *   insn=0x000000000048AE70 string=0x000000000048AE74 "Kkj"
 *   insn=0x000000000048AEA4 string=0x000000000048AEA8 ""
 *   insn=0x000000000048AEA8 string=0x000000000048AEE8 ""
 *   insn=0x000000000048AEC0 string=0x000000000048AEC4 "h"
 *   insn=0x000000000048AEC0 string=0x00000000001F9190 "0'"
 *   insn=0x000000000048AECC string=0x000000000048AED0 "\t@"
 *   insn=0x000000000048AED0 string=0x000000000048AED4 "\ti5"
 *   insn=0x000000000048AEF0 string=0x000000000048AEF4 "!"
 *   insn=0x000000000048AF18 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048AF24 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000048AF34 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048AF38 string=0x000000000048AF3C "b"
 *   insn=0x000000000048AF3C string=0x000000000048AF40 "t"
 *   insn=0x000000000048AF44 string=0x000000000048AF48 "4"
 *   insn=0x000000000048AF4C string=0x000000000048AF50 ""
 *   insn=0x000000000048AF5C string=0x000000000048AF60 "\t@"
 *   insn=0x000000000048AF6C string=0x000000000048AF70 ""
 *   insn=0x000000000048AF7C string=0x000000000048AF80 "@"
 *   insn=0x000000000048AF8C string=0x000000000048AF90 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(
        Caver::GradientColor *this@<X0>,
        __int64 a2@<X8>)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x27
  _DWORD *v6; // x25
  _DWORD *v7; // x26
  __int64 v8; // x21
  _QWORD *v9; // x28
  unsigned __int64 v10; // x23
  _DWORD *v11; // x22
  _DWORD *v12; // x0
  __int64 v13; // x9
  __int64 v14; // x10
  int v15; // w11
  __int64 v16; // x13
  __int64 v17; // x21
  __int64 v18; // x22
  int v19; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-58h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = operator new(0x18u);
  v5 = *(int *)this;
  v6 = (_DWORD *)*((_QWORD *)this + 1);
  v7 = (_DWORD *)*((_QWORD *)this + 2);
  v8 = v4;
  *(_QWORD *)(v4 + 8) = 0;
  v9 = (_QWORD *)(v4 + 8);
  if ( is_mul_ok(v5, 4u) )
    v10 = 4 * v5;
  else
    v10 = -1;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)v4 = v5;
  v11 = (_DWORD *)operator new[](v10);
  *v9 = v11;
  v12 = (_DWORD *)operator new[](v10);
  *(_QWORD *)(v8 + 16) = v12;
  if ( (int)v5 >= 1 )
  {
    *v11 = *v6;
    *v12 = *v7;
    if ( (_DWORD)v5 != 1 )
    {
      v11[1] = v6[1];
      v12[1] = v7[1];
      if ( (_DWORD)v5 != 2 )
      {
        v13 = 2;
        do
        {
          v14 = 4 * v13;
          v15 = v6[v13];
          v16 = *(_QWORD *)(v8 + 16);
          ++v13;
          *(_DWORD *)(*(_QWORD *)(v8 + 8) + v14) = v15;
          *(_DWORD *)(v16 + v14) = v7[(unsigned __int64)v14 / 4];
        }
        while ( (unsigned int)v5 != v13 );
      }
    }
  }
  *(_QWORD *)a2 = v8;
  boost::detail::shared_count::shared_count<Caver::GradientColor>();
  boost::detail::sp_enable_shared_from_this();
  if ( *(int *)this >= 1 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      Caver::Color::ColorByReversingAlphaPremultiplication(
        (__int64 *)&v19,
        (Caver::Color *)(*((_QWORD *)this + 2) + v17));
      ++v18;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + v17) = v19;
      v17 += 4;
    }
    while ( v18 < *(int *)this );
  }
}

