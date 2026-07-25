/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022C47C
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent4DrawEPNS_16RenderingContextEPKNS_6CameraERKNS_9RectangleE
 * Demangled: Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FA6F0  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCBE0  Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 62
 *   insn=0x000000000022C494 string=0x000000000022C498 "W"
 *   insn=0x000000000022C4AC string=0x000000000022C4B0 "hjB9"
 *   insn=0x000000000022C4B8 string=0x000000000022C4E8 "hJ@"
 *   insn=0x000000000022C4EC string=0x000000000022C4F0 "h:@"
 *   insn=0x000000000022C4F0 string=0x000000000022C4F4 "H"
 *   insn=0x000000000022C4F4 string=0x000000000022C4F8 "iR@"
 *   insn=0x000000000022C4F8 string=0x000000000022C4FC "\t"
 *   insn=0x000000000022C4FC string=0x000000000022C500 "xfV)"
 *   insn=0x000000000022C510 string=0x000000000022C514 "y@"
 *   insn=0x000000000022C528 string=0x00000000001FD140 "0'"
 *   insn=0x000000000022C538 string=0x000000000022C53C ""( "
 *   insn=0x000000000022C53C string=0x000000000022C540 "` ""
 *   insn=0x000000000022C550 string=0x000000000022C554 "!(""
 *   insn=0x000000000022C554 string=0x000000000022C558 ""($"
 *   insn=0x000000000022C558 string=0x000000000022C55C "` ""
 *   insn=0x000000000022C55C string=0x000000000022C560 "M"
 *   insn=0x000000000022C56C string=0x000000000022C570 "@( "
 *   insn=0x000000000022C570 string=0x000000000022C574 "   "
 *   insn=0x000000000022C584 string=0x000000000022C588 "@( "
 *   insn=0x000000000022C58C string=0x000000000022C590 "   "
 *   insn=0x000000000022C590 string=0x000000000022C594 "M"
 *   insn=0x000000000022C594 string=0x000000000022C59C "hbB9"
 *   insn=0x000000000022C5A0 string=0x000000000022C5A4 "aJ@"
 *   insn=0x000000000022C5A0 string=0x000000000022C5DC "hJ@"
 *   insn=0x000000000022C5B0 string=0x000000000022C5B4 " LJ"
 *   insn=0x000000000022C5B8 string=0x000000000022C5BC "!"
 *   insn=0x000000000022C5C0 string=0x000000000022C5C4 "!"
 *   insn=0x000000000022C5CC string=0x000000000022C5D0 "H8"
 *   insn=0x000000000022C5D0 string=0x00000000001FA6F0 "0'"
 *   insn=0x000000000022C5D4 string=0x000000000022C5D8 ""
 *   insn=0x000000000022C5D8 string=0x000000000022C5F8 "jJ@"
 *   insn=0x000000000022C5E8 string=0x000000000022C5EC "}A"
 *   insn=0x000000000022C5EC string=0x00000000001FCBE0 "0'"
 *   insn=0x000000000022C604 string=0x000000000022C608 "Jy@"
 *   insn=0x000000000022C630 string=0x000000000022C634 "F8#"
 *   insn=0x000000000022C648 string=0x000000000022C64C "hfB9h"
 *   insn=0x000000000022C648 string=0x000000000022C660 " 8 "
 *   insn=0x000000000022C64C string=0x000000000022C650 "h"
 *   insn=0x000000000022C654 string=0x000000000022C658 "hj"
 *   insn=0x000000000022C660 string=0x000000000022C664 "a8""
 *   insn=0x000000000022C670 string=0x00000000001F8E10 "0'"
 *   insn=0x000000000022C688 string=0x000000000022C6C0 "hR@"
 *   insn=0x000000000022C690 string=0x000000000022C694 ""
 *   insn=0x000000000022C6B8 string=0x000000000022C6BC "8"
 *   insn=0x000000000022C6F0 string=0x000000000022C6F4 " "
 *   insn=0x000000000022C71C string=0x00000000001F6DE0 "0'"
 *   insn=0x000000000022C720 string=0x000000000022C724 "g="
 *   insn=0x000000000022C724 string=0x00000000001FBCC0 "0'"
 *   insn=0x000000000022C73C string=0x000000000022C740 "D?"
 *   insn=0x000000000022C740 string=0x00000000001FC450 "0'"
 *   insn=0x000000000022C744 string=0x000000000022C748 "6"
 *   insn=0x000000000022C748 string=0x00000000001F3820 "P'"
 *   insn=0x000000000022C754 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000022C760 string=0x000000000022C764 ""
 *   insn=0x000000000022C774 string=0x000000000022C778 "`R@"
 *   insn=0x000000000022C774 string=0x00000000001FB1A0 "0'"
 *   insn=0x000000000022C780 string=0x000000000022C784 "hV@"
 *   insn=0x000000000022C780 string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000022C7B4 string=0x000000000022C7B8 "`V@"
 *   insn=0x000000000022C7BC string=0x000000000022C7C0 "xA"
 *   insn=0x000000000022C7C0 string=0x000000000022C7C4 ">"
 *   insn=0x000000000022C7C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::OverlayTargetArrowComponent::Draw(
        __int64 *this,
        Caver::RenderingContext *a2,
        const Caver::Camera *a3,
        const Caver::Rectangle *a4)
{
  __int64 *v4; // x19
  __int64 v8; // x8
  unsigned int v9; // w24
  unsigned int v10; // w25
  int v11; // w8
  float v12; // s2
  float v13; // s2
  float v14; // s0
  _QWORD *v15; // x1
  float32x2_t v16; // t1
  float32x2_t v17; // d1
  unsigned int v18; // w8
  unsigned int v19; // w9
  int v20; // w10
  float v21; // s1
  Caver::Matrix4 *v22; // x0
  float v23; // s0
  float32x2_t v24; // [xsp+30h] [xbp-100h] BYREF
  float32x2_t v25; // [xsp+38h] [xbp-F8h] BYREF
  unsigned __int64 v26; // [xsp+40h] [xbp-F0h] BYREF
  __int64 v27; // [xsp+48h] [xbp-E8h] BYREF
  float32x2_t v28; // [xsp+50h] [xbp-E0h] BYREF
  _DWORD v29[2]; // [xsp+58h] [xbp-D8h] BYREF
  _OWORD v30[3]; // [xsp+60h] [xbp-D0h] BYREF
  unsigned __int64 v31; // [xsp+90h] [xbp-A0h]
  __int64 v32; // [xsp+98h] [xbp-98h]
  _OWORD v33[3]; // [xsp+A0h] [xbp-90h] BYREF
  unsigned __int64 v34; // [xsp+D0h] [xbp-60h]
  __int64 v35; // [xsp+D8h] [xbp-58h]
  __int64 v36; // [xsp+E8h] [xbp-48h]

  v4 = this;
  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 154) )
  {
    if ( this[18] )
    {
      v8 = this[14];
      if ( v8 )
      {
        if ( this[20] )
        {
          v9 = *((_DWORD *)this + 44);
          v10 = *((_DWORD *)this + 45);
          v29[0] = v9;
          v29[1] = v10;
          v11 = *(_DWORD *)(v8 + 120);
          *(_QWORD *)&v33[0] = __PAIR64__(v10, v9);
          DWORD2(v33[0]) = v11;
          Caver::Camera::ScreenPointFromWorldPosition((__int64 *)&v28, a3, (const Caver::Vector3 *)v33, a4, 0);
          v12 = *(float *)a4 + 40.0;
          if ( v28.n64_f32[0] < v12 || (v12 = (float)(*(float *)a4 + *((float *)a4 + 2)) + -40.0, v28.n64_f32[0] > v12) )
            v28.n64_f32[0] = v12;
          v13 = *((float *)a4 + 1);
          v14 = v13 + 40.0;
          if ( v28.n64_f32[1] < (float)(v13 + 40.0)
            || (v14 = (float)(v13 + *((float *)a4 + 3)) + -40.0, v28.n64_f32[1] > v14) )
          {
            v28.n64_f32[1] = v14;
          }
          if ( *((_BYTE *)v4 + 152) )
          {
            v15 = (_QWORD *)v4[18];
            v16.n64_u64[0] = *(unsigned __int64 *)((char *)v15 + 164);
            v15 = (_QWORD *)((char *)v15 + 164);
            v17.n64_u64[0] = v15[1];
            *(_QWORD *)&v33[0] = __PAIR64__(v10, v9);
            *((float32x2_t *)&v33[0] + 1) = vadd_f32(v16, vmul_f32(v17, (float32x2_t)0x3F0000003F000000LL));
            Caver::LineSegment::IntersectsRectangle(
              (Caver::LineSegment *)v33,
              (const Caver::Rectangle *)v15,
              (Caver::Vector2 *)&v27,
              0);
            v18 = v27;
            v19 = HIDWORD(v27);
          }
          else
          {
            Caver::Rectangle::NearestPointInRectangle(
              (__int64 *)v33,
              (Caver::Rectangle *)(v4[18] + 164),
              (const Caver::Vector2 *)v29);
            v18 = v33[0];
            v19 = DWORD1(v33[0]);
            v27 = *(_QWORD *)&v33[0];
          }
          v20 = *(_DWORD *)(v4[18] + 120);
          *(_QWORD *)&v33[0] = __PAIR64__(v19, v18);
          DWORD2(v33[0]) = v20;
          this = Caver::Camera::ScreenPointFromWorldPosition((__int64 *)&v26, a3, (const Caver::Vector3 *)v33, a4, 0);
          if ( (float)((float)((float)(v28.n64_f32[0] - *(float *)&v26) * (float)(v28.n64_f32[0] - *(float *)&v26))
                     + (float)((float)(v28.n64_f32[1] - *((float *)&v26 + 1))
                             * (float)(v28.n64_f32[1] - *((float *)&v26 + 1)))) >= 3600.0 )
          {
            v25.n64_f32[0] = *(float *)&v26 - v28.n64_f32[0];
            v25.n64_f32[1] = *((float *)&v26 + 1) - v28.n64_f32[1];
            Caver::Vector2::Normalize((Caver::Vector2 *)&v25);
            v24.n64_u64[0] = v26;
            if ( (Caver::Rectangle::PointInside(a4, (const Caver::Vector2 *)&v24) & 1) == 0 )
            {
              *(float32x2_t *)&v33[0] = v28;
              *((float32x2_t *)&v33[0] + 1) = vadd_f32(vmul_f32(v25, vdup_n_s32(0x459C4000u)), v28);
              Caver::LineSegment::IntersectsRectangle((Caver::LineSegment *)v33, a4, 0, (Caver::Vector2 *)&v24);
            }
            v21 = *(float *)(v4[20] + 16);
            v35 = 0x3F80000000000000LL;
            v24.n64_u64[0] = vsub_f32(v24, vmul_f32(vmul_n_f32(v25, v21), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
            v34 = v24.n64_u64[0];
            v33[0] = xmmword_583490;
            v33[1] = xmmword_5837E0;
            v33[2] = xmmword_5837F0;
            v22 = (Caver::Matrix4 *)Caver::Vector2::Angle((Caver::Vector2 *)&v25);
            Caver::Matrix4::RotationZ((__int64 *)v30, v22, v23);
            C_Matrix4Mul((const float *)v33, (const float *)v30, (float *)v33);
            Caver::RenderingContext::SetBlendingEnabled(a2, 1);
            Caver::RenderingContext::SetDefaultBlendFunc(a2);
            Caver::RenderingContext::UseProgram(a2, 1u);
            Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v33);
            LODWORD(v30[0]) = -1;
            Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v30);
            this = (__int64 *)Caver::Sprite::Draw((Caver::Sprite *)v4[20], a2);
            if ( v4[21] )
            {
              v30[0] = xmmword_583490;
              v31 = v24.n64_u64[0];
              v32 = 0x3F80000000000000LL;
              v30[1] = xmmword_5837E0;
              v30[2] = xmmword_5837F0;
              Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v30);
              return (__int64 *)Caver::Sprite::Draw((Caver::Sprite *)v4[21], a2);
            }
          }
          else if ( *((_BYTE *)v4 + 153) )
          {
            *((_BYTE *)v4 + 154) = 1;
          }
        }
      }
    }
  }
  return this;
}

