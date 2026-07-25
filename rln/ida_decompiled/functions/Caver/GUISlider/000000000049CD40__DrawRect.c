/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CD40
 * Mangled: _ZN5Caver9GUISlider8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001FBF70  Caver::GUISlider::UpdateSprite(void)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 29
 *   insn=0x000000000049CD60 string=0x000000000049CD64 "V"
 *   insn=0x000000000049CD84 string=0x000000000049CD88 "z|"
 *   insn=0x000000000049CD88 string=0x00000000001FBF70 "0'"
 *   insn=0x000000000049CD9C string=0x000000000049CDA0 ""
 *   insn=0x000000000049CDAC string=0x00000000001F7210 "0'"
 *   insn=0x000000000049CDC8 string=0x000000000049CDCC "\n"
 *   insn=0x000000000049CDCC string=0x000000000049CDD0 "b)!"
 *   insn=0x000000000049CDD0 string=0x000000000049CDD4 "a8$"
 *   insn=0x000000000049CDD8 string=0x000000000049CDDC "h"
 *   insn=0x000000000049CDDC string=0x000000000049CDE0 ""
 *   insn=0x000000000049CDDC string=0x000000000049CDE8 ""
 *   insn=0x000000000049CDE8 string=0x000000000049CDEC "\t"
 *   insn=0x000000000049CDF0 string=0x000000000049CDF4 "M8+"
 *   insn=0x000000000049CDF4 string=0x000000000049CDF8 "."
 *   insn=0x000000000049CE08 string=0x000000000049CE0C "1d"
 *   insn=0x000000000049CE0C string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000049CE14 string=0x00000000001F3820 "P'"
 *   insn=0x000000000049CE20 string=0x00000000001FC450 "0'"
 *   insn=0x000000000049CE2C string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000049CE38 string=0x000000000049CE3C ""
 *   insn=0x000000000049CE4C string=0x000000000049CE50 "\t"
 *   insn=0x000000000049CE7C string=0x000000000049CE80 "k)-"
 *   insn=0x000000000049CE80 string=0x000000000049CE84 "h"
 *   insn=0x000000000049CE98 string=0x000000000049CE9C "!\t*"
 *   insn=0x000000000049CEA0 string=0x000000000049CEA4 "`9 "
 *   insn=0x000000000049CED8 string=0x000000000049CEDC "a"
 *   insn=0x000000000049CF0C string=0x000000000049CF10 ""
 *   insn=0x000000000049CF10 string=0x000000000049CF14 "\t"
 *   insn=0x000000000049CF48 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISlider::DrawRect(
        Caver::Sprite **this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 result; // x0
  float v8; // s12
  float v9; // s11
  Caver::Sprite *v10; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s13
  float v14; // s14
  float v15; // s15
  float v16; // s13
  float v17; // s12
  float v18; // w8
  float v19; // s11
  int v20; // [xsp+0h] [xbp-80h] BYREF
  float v21; // [xsp+8h] [xbp-78h] BYREF
  float v22; // [xsp+Ch] [xbp-74h]
  float v23; // [xsp+10h] [xbp-70h]
  int v24; // [xsp+14h] [xbp-6Ch]
  __int64 v25; // [xsp+18h] [xbp-68h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 352) )
  {
    Caver::GUISlider::UpdateSprite((Caver::GUISlider *)this);
    *((_BYTE *)this + 352) = 0;
  }
  (*((void (__fastcall **)(Caver::Sprite **, Caver::RenderingContext *, const Caver::Matrix4 *))*this + 37))(
    this,
    a2,
    a4);
  result = Caver::RenderingContext::SetIdentityMatrix(a2);
  v8 = *((float *)this + 34);
  v9 = *((float *)this + 33);
  v10 = this[42];
  if ( v10 )
  {
    v11 = *((float *)v10 + 21);
    v12 = *((float *)v10 + 22);
  }
  else
  {
    v11 = 10.0;
    v12 = 10.0;
  }
  v13 = (float)(v9 + *((float *)this + 35)) - v9;
  v14 = (float)(*((float *)this + 74) - *((float *)this + 77)) / (float)(*((float *)this + 78) - *((float *)this + 77));
  v15 = *((float *)this + 36) * 0.5;
  if ( this[43] )
  {
    Caver::RenderingContext::UseProgram(a2, 3u);
    Caver::RenderingContext::SetDefaultBlendFunc(a2);
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    result = Caver::Sprite::Draw(this[43], a2);
  }
  v16 = v13 * v14;
  v17 = v8 + v15;
  if ( !this[40] )
  {
    v18 = *((float *)this + 35);
    v22 = v17 + -2.0;
    v21 = 0.0;
    v23 = v18;
    v24 = 1082130432;
    v20 = -6908266;
    result = Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)&v21, (const Caver::Color *)&v20, 0.0);
  }
  v19 = v9 + v16;
  if ( this[41] || *((_BYTE *)this + 365) )
  {
    if ( this[40] )
      return result;
    goto LABEL_13;
  }
  v22 = v17 + -2.0;
  v23 = v19;
  v21 = 0.0;
  v24 = 1082130432;
  v20 = -3644316;
  result = Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)&v21, (const Caver::Color *)&v20, 0.0);
  if ( !this[40] )
  {
LABEL_13:
    v21 = v19 - (float)(v11 * 0.5);
    v22 = v17 - (float)(v12 * 0.5);
    v23 = v11;
    v24 = LODWORD(v12);
    v20 = -10197916;
    return Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)&v21, (const Caver::Color *)&v20, 0.0);
  }
  return result;
}

