/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C5170
 * Mangled: _ZN5Caver8FontText8SetColorERKNS_5ColorE
 * Demangled: Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200CB0  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *   0x0000000000200ED0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004C53B8  Caver::IsWhiteSpace(char)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000004C5180 string=0x00000000004C5184 "U"
 *   insn=0x00000000004C5190 string=0x00000000004C5194 " "
 *   insn=0x00000000004C5190 string=0x0000000000597D84 "q=J?"
 *   insn=0x00000000004C5198 string=0x00000000004C519C "("
 *   insn=0x00000000004C51A8 string=0x00000000004C51AC "h"
 *   insn=0x00000000004C51AC string=0x00000000004C51B0 "("
 *   insn=0x00000000004C51B0 string=0x00000000004C51B4 "*"
 *   insn=0x00000000004C51B4 string=0x00000000004C51B8 "+@9"
 *   insn=0x00000000004C51C0 string=0x00000000004C51C4 "B"
 *   insn=0x00000000004C51C4 string=0x00000000004C51C8 "! "
 *   insn=0x00000000004C51C8 string=0x00000000004C51CC "c"
 *   insn=0x00000000004C51CC string=0x00000000004C51D0 "B "
 *   insn=0x00000000004C51D0 string=0x00000000004C51D4 ")"
 *   insn=0x00000000004C51D4 string=0x00000000004C51D8 "` "
 *   insn=0x00000000004C51DC string=0x00000000004C51E0 "/"
 *   insn=0x00000000004C51E8 string=0x00000000004C51EC "H"
 *   insn=0x00000000004C51EC string=0x00000000004C51F0 "?"
 *   insn=0x00000000004C51F8 string=0x00000000004C51FC "\n"
 *   insn=0x00000000004C51FC string=0x00000000004C5200 ")"
 *   insn=0x00000000004C5204 string=0x00000000004C5208 ""
 *   insn=0x00000000004C5208 string=0x00000000004C520C "_"
 *   insn=0x00000000004C5210 string=0x00000000004C5214 "I"
 *   insn=0x00000000004C5240 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C5280 string=0x00000000004C5284 "\n"
 *   insn=0x00000000004C5280 string=0x00000000004C5290 "t"
 *   insn=0x00000000004C5284 string=0x00000000004C5288 "J"
 *   insn=0x00000000004C5288 string=0x00000000004C528C "\n"
 *   insn=0x00000000004C5290 string=0x00000000004C5294 "i"
 *   insn=0x00000000004C5294 string=0x00000000004C5298 "4"
 *   insn=0x00000000004C529C string=0x00000000004C52A0 ""
 *   insn=0x00000000004C52AC string=0x00000000004C52B0 "\t@"
 *   insn=0x00000000004C52BC string=0x00000000004C52C0 ""
 *   insn=0x00000000004C52CC string=0x00000000004C52D0 "@"
 *   insn=0x00000000004C52DC string=0x00000000004C52E0 "3"
 *   insn=0x00000000004C52E0 string=0x00000000004C52E4 "h"
 *   insn=0x00000000004C52E4 string=0x00000000004C52E8 ""
 *   insn=0x00000000004C52E8 string=0x00000000004C52EC "h"
 *   insn=0x00000000004C52F0 string=0x00000000004C52F4 "h"
 *   insn=0x00000000004C52F8 string=0x00000000004C52FC "\t@"
 *   insn=0x00000000004C5300 string=0x00000000004C5304 "h\n@"
 *   insn=0x00000000004C5304 string=0x00000000004C5308 ""
 *   insn=0x00000000004C5308 string=0x00000000004C530C "h\n"
 *   insn=0x00000000004C5310 string=0x00000000004C5314 "h"
 *   insn=0x00000000004C5318 string=0x00000000004C531C "@"
 *   insn=0x00000000004C5348 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C5350 string=0x00000000004C5354 "4"
 *   insn=0x00000000004C5358 string=0x00000000004C535C ""
 *   insn=0x00000000004C5368 string=0x00000000004C536C "\t@"
 *   insn=0x00000000004C5378 string=0x00000000004C537C ""
 *   insn=0x00000000004C5388 string=0x00000000004C538C "@"
 *   insn=0x00000000004C5398 string=0x00000000004C539C "J"
 *   insn=0x00000000004C53AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C53B0 string=0x00000000004C53B4 "D"
 *   insn=0x00000000004C53B4 string=0x00000000004C53B8 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FontText::SetColor(Caver::FontText *this, const Caver::Color *a2)
{
  unsigned int v3; // w8
  unsigned int v4; // w10
  unsigned int v5; // w11
  int v6; // w9
  char v7; // w15
  int v8; // w8
  char v9; // w9
  Caver::GradientColor *v10; // x20
  Caver::GradientColor *v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // [xsp+10h] [xbp-50h]
  _BYTE v18[16]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v19; // [xsp+28h] [xbp-38h] BYREF
  int v20; // [xsp+30h] [xbp-30h]
  __int64 v21; // [xsp+38h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  v3 = *(unsigned __int8 *)a2;
  v4 = *((unsigned __int8 *)a2 + 1);
  v5 = *((unsigned __int8 *)a2 + 2);
  v6 = (int)(float)((float)v3 * 0.79);
  v7 = *((_BYTE *)a2 + 3);
  v18[0] = *(_BYTE *)a2;
  v18[4] = v3;
  v8 = (int)(float)((float)v4 * 0.79);
  v18[1] = v4;
  v18[5] = v4;
  if ( v6 >= 255 )
    LOBYTE(v6) = -1;
  if ( v8 >= 255 )
    LOBYTE(v8) = -1;
  v18[8] = v6;
  if ( (int)(float)((float)v5 * 0.79) >= 255 )
    v9 = -1;
  else
    v9 = (int)(float)((float)v5 * 0.79);
  v20 = 1065353216;
  v19 = *(_QWORD *)"";
  v18[2] = v5;
  v18[3] = v7;
  v18[6] = v5;
  v18[7] = v7;
  v18[9] = v8;
  v18[10] = v9;
  v18[11] = -1;
  v10 = (Caver::GradientColor *)operator new(0x18u);
  Caver::GradientColor::GradientColor(v10, 3, (float *)&v19, (Caver::Color *)v18);
  boost::detail::shared_count::shared_count<Caver::GradientColor>();
  boost::detail::sp_enable_shared_from_this();
  v11 = v10;
  if ( v17 )
    ++v17[1];
  v12 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v11;
  *((_QWORD *)this + 4) = v17;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  if ( v17 )
  {
    v15 = v17[1] - 1LL;
    v17[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)())(*v17 + 16LL))();
      v16 = v17[2] - 1LL;
      v17[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)())(*v17 + 24LL))();
    }
  }
}

