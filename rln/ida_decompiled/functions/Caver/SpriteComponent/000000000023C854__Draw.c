/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C854
 * Mangled: _ZNK5Caver15SpriteComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x0000000000200810  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 28
 *   insn=0x000000000023C864 string=0x000000000023C868 "U"
 *   insn=0x000000000023C878 string=0x000000000023C87C "h>@"
 *   insn=0x000000000023C87C string=0x000000000023C880 ""
 *   insn=0x000000000023C884 string=0x000000000023C888 "@"
 *   insn=0x000000000023C888 string=0x000000000023C88C "*"
 *   insn=0x000000000023C88C string=0x000000000023C890 "("
 *   insn=0x000000000023C890 string=0x000000000023C894 "A"
 *   insn=0x000000000023C898 string=0x000000000023C89C "@"
 *   insn=0x000000000023C89C string=0x000000000023C8A0 "*"
 *   insn=0x000000000023C8A0 string=0x000000000023C8A4 "B"
 *   insn=0x000000000023C8AC string=0x000000000023C8B0 "@"
 *   insn=0x000000000023C8BC string=0x000000000023C8C0 "@"
 *   insn=0x000000000023C8C8 string=0x000000000023C8CC "i"
 *   insn=0x000000000023C8D0 string=0x000000000023C8D4 "(9@"
 *   insn=0x000000000023C8D4 string=0x000000000023C8D8 ")y@"
 *   insn=0x000000000023C8E8 string=0x000000000023C8EC "i"
 *   insn=0x000000000023C8EC string=0x000000000023C8F0 "h"
 *   insn=0x000000000023C8FC string=0x00000000001FBCC0 "0'"
 *   insn=0x000000000023C908 string=0x000000000023C90C "a"
 *   insn=0x000000000023C90C string=0x000000000023C910 "h"
 *   insn=0x000000000023C91C string=0x000000000023C920 ""
 *   insn=0x000000000023C940 string=0x000000000023C944 "S"
 *   insn=0x000000000023C950 string=0x000000000023C954 ""
 *   insn=0x000000000023C964 string=0x000000000023C968 "`>@"
 *   insn=0x000000000023C964 string=0x00000000001FB1A0 "0'"
 *   insn=0x000000000023C970 string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000023C980 string=0x000000000023C998 "N"
 *   insn=0x000000000023C998 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpriteComponent::Draw(__int64 this, Caver::RenderingContext *a2, const Caver::Matrix4 *a3)
{
  __int64 v3; // x19
  __int64 v5; // x9
  __int64 v6; // x8
  Caver::Matrix4 *v7; // x0
  int v8; // w8
  _BYTE v9[60]; // [xsp+0h] [xbp-B0h] BYREF
  int v10; // [xsp+3Ch] [xbp-74h]
  _OWORD v11[4]; // [xsp+40h] [xbp-70h] BYREF
  __int64 v12; // [xsp+88h] [xbp-28h]

  v3 = this;
  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( **(_QWORD **)(this + 120) )
  {
    v11[3] = *((_OWORD *)a3 + 3);
    v11[2] = *((_OWORD *)a3 + 2);
    v11[1] = *((_OWORD *)a3 + 1);
    v11[0] = *(_OWORD *)a3;
    v5 = *(_QWORD *)(this + 40);
    v6 = *(_QWORD *)(v5 + 112);
    LODWORD(v5) = *(_DWORD *)(v5 + 120);
    *(_OWORD *)v9 = xmmword_583490;
    *(_OWORD *)&v9[16] = xmmword_5837E0;
    *(_OWORD *)&v9[32] = xmmword_5837F0;
    *(_QWORD *)&v9[48] = v6;
    *(_DWORD *)&v9[56] = v5;
    v10 = 1065353216;
    v7 = (Caver::Matrix4 *)C_Matrix4Mul((const float *)v11, (const float *)v9, (float *)v11);
    Caver::Matrix4::RotationZ((__int64 *)v9, v7, *(float *)(*(_QWORD *)(v3 + 40) + 128LL));
    C_Matrix4Mul((const float *)v11, (const float *)v9, (float *)v11);
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 140LL);
    *(_OWORD *)&v9[4] = 0u;
    *(_OWORD *)&v9[24] = 0u;
    *(_DWORD *)v9 = v8;
    *(_DWORD *)&v9[20] = v8;
    *(_DWORD *)&v9[40] = v8;
    *(_OWORD *)&v9[44] = 0u;
    v10 = 1065353216;
    C_Matrix4Mul((const float *)v11, (const float *)v9, (float *)v11);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v11);
    *(_DWORD *)v9 = -1;
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v9);
    return Caver::Sprite::Draw(*(Caver::Sprite **)(v3 + 120), a2);
  }
  return this;
}

