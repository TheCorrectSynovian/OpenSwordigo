/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000497658
 * Mangled: _ZN5Caver12GUIFrameView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FE7A0  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 8
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 16
 *   insn=0x0000000000497670 string=0x0000000000497674 "W"
 *   insn=0x0000000000497694 string=0x0000000000497698 ""
 *   insn=0x00000000004976A4 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004976A8 string=0x00000000004976AC "h"
 *   insn=0x00000000004976AC string=0x00000000004976B0 ""
 *   insn=0x00000000004976E8 string=0x00000000004976EC " "
 *   insn=0x0000000000497710 string=0x0000000000497714 " "
 *   insn=0x0000000000497724 string=0x0000000000497728 "zv"
 *   insn=0x0000000000497728 string=0x00000000001F5110 "P'"
 *   insn=0x0000000000497730 string=0x0000000000497734 ""
 *   insn=0x0000000000497738 string=0x000000000049773C "`"
 *   insn=0x0000000000497744 string=0x00000000001F8B80 "0'"
 *   insn=0x0000000000497748 string=0x000000000049774C "`"
 *   insn=0x0000000000497764 string=0x0000000000497768 ":"
 *   insn=0x0000000000497768 string=0x00000000001F9850 "0'"
 *   insn=0x0000000000497798 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIFrameView::DrawRect(
        Caver::GUIFrameView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUITexturedRect *v6; // x0
  Caver::GUIRoundedRect *v7; // x0
  unsigned __int64 v8; // [xsp+8h] [xbp-88h] BYREF
  unsigned int v9; // [xsp+10h] [xbp-80h]
  int v10; // [xsp+18h] [xbp-78h] BYREF
  __int128 v11; // [xsp+1Ch] [xbp-74h]
  int v12; // [xsp+2Ch] [xbp-64h]
  __int128 v13; // [xsp+30h] [xbp-60h]
  int v14; // [xsp+40h] [xbp-50h]
  __int128 v15; // [xsp+44h] [xbp-4Ch]
  int v16; // [xsp+54h] [xbp-3Ch]
  __int64 v17; // [xsp+58h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(Caver::GUIFrameView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  if ( *((_BYTE *)this + 264) )
  {
    v10 = -1082130432;
    v12 = 1065353216;
    v14 = 1065353216;
    v11 = 0u;
    v13 = 0u;
    v15 = 0u;
    v16 = 1065353216;
    v8 = vadd_f32(
           *(float32x2_t *)((char *)this + 132),
           vmul_f32(*(float32x2_t *)((char *)this + 140), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    v9 = 0;
    Caver::Matrix4::PreTranslate((Caver::Matrix4 *)&v10, (const Caver::Vector3 *)&v8);
    v8 = vneg_f32(
           vadd_f32(
             *(float32x2_t *)((char *)this + 132),
             vmul_f32(*(float32x2_t *)((char *)this + 140), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
    v9 = 0x80000000;
    Caver::Matrix4::PostTranslate((Caver::Matrix4 *)&v10, (const Caver::Vector3 *)&v8);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v10);
  }
  v6 = (Caver::GUITexturedRect *)*((_QWORD *)this + 30);
  if ( v6 )
    Caver::GUITexturedRect::Draw(v6, a2);
  v7 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 31);
  if ( v7 )
    Caver::GUIRoundedRect::Draw(v7, a2);
  Caver::GUIView::DrawRect();
}

