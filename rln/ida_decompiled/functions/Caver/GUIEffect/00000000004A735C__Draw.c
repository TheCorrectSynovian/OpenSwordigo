/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A735C
 * Mangled: _ZN5Caver9GUIEffect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001F55B0  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *
 * Callees: 8
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 24
 *   insn=0x00000000004A736C string=0x00000000004A7370 "V"
 *   insn=0x00000000004A7384 string=0x00000000004A7388 "(\n"
 *   insn=0x00000000004A7390 string=0x00000000004A7394 "/T"
 *   insn=0x00000000004A7394 string=0x00000000001FC450 "0'"
 *   insn=0x00000000004A7398 string=0x00000000004A739C "!1"
 *   insn=0x00000000004A739C string=0x00000000001F3820 "P'"
 *   insn=0x00000000004A73B4 string=0x0000000000583944 "\n"
 *   insn=0x00000000004A73C0 string=0x00000000004A73C4 "D"
 *   insn=0x00000000004A73D0 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004A73E8 string=0x00000000004A73EC "M]"
 *   insn=0x00000000004A73F8 string=0x00000000004A73FC "#"
 *   insn=0x00000000004A7408 string=0x00000000004A740C "E]"
 *   insn=0x00000000004A7420 string=0x00000000004A7424 "*"
 *   insn=0x00000000004A7420 string=0x00000000001F3B30 "P'"
 *   insn=0x00000000004A7450 string=0x00000000004A7454 "SO"
 *   insn=0x00000000004A7454 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000004A746C string=0x00000000004A7470 "#"
 *   insn=0x00000000004A748C string=0x00000000004A7490 "!""
 *   insn=0x00000000004A7490 string=0x00000000004A7494 ""(#"
 *   insn=0x00000000004A749C string=0x00000000004A74A0 "B8#"
 *   insn=0x00000000004A74B0 string=0x00000000004A74B4 "[p"
 *   insn=0x00000000004A74C4 string=0x00000000004A74C8 "Vp"
 *   insn=0x00000000004A74D8 string=0x00000000004A74F0 "x;"
 *   insn=0x00000000004A74F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::Draw(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x20
  int v4; // w8
  float v5; // w9
  float v6; // s0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s1
  _DWORD v11[4]; // [xsp+8h] [xbp-48h] BYREF
  _DWORD v12[2]; // [xsp+18h] [xbp-38h] BYREF
  int v13; // [xsp+20h] [xbp-30h]
  float v14; // [xsp+24h] [xbp-2Ch]
  __int64 v15; // [xsp+28h] [xbp-28h]

  v2 = this;
  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(this + 56) )
  {
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    this = Caver::RenderingContext::SetDefaultBlendFunc(a2);
    v4 = *(_DWORD *)(v2 + 56);
    if ( v4 == 2 )
    {
      if ( *(float *)(v2 + 76) >= 0.01 )
      {
        Caver::RenderingContext::UseProgram(a2, 0);
        Caver::RenderingContext::SetColor(a2, (const Caver::Color *)(v2 + 72));
        v5 = *(float *)(v2 + 84);
        v12[0] = *(_DWORD *)(v2 + 80);
        *(float *)&v12[1] = v5;
        v13 = *(_DWORD *)(v2 + 88);
        v6 = *(float *)(v2 + 92);
        v11[0] = v12[0];
        v11[2] = v13;
        v7 = v6 + v5;
        v8 = *(float *)(v2 + 76) * 30.0;
        v9 = v8 + v5;
        v10 = v7 - v8;
        *(float *)&v11[3] = v7 - v10;
        v14 = v9 - v5;
        *(float *)&v11[1] = v10;
        Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)v12, (const Caver::Color *)(v2 + 72), 0.0);
        return Caver::RenderingContext::FillRect(
                 a2,
                 (const Caver::Rectangle *)v11,
                 (const Caver::Color *)(v2 + 72),
                 0.0);
      }
    }
    else if ( v4 == 1 && *(float *)(v2 + 76) >= 0.01 )
    {
      Caver::RenderingContext::UseProgram(a2, 2u);
      Caver::RenderingContext::SetVertexAttribPointer();
      Caver::RenderingContext::SetVertexAttribPointer();
      return Caver::RenderingContext::DrawArrays(a2, 4, 0, *(_DWORD *)(v2 + 96));
    }
  }
  return this;
}

