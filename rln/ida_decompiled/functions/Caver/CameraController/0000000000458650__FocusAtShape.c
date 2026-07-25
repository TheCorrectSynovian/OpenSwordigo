/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458650
 * Mangled: _ZN5Caver16CameraController12FocusAtShapeERKN5boost13intrusive_ptrINS_14ShapeComponentEEERKNS_9RectangleEb
 * Demangled: Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Callers: 1
 *   0x0000000000202C40  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000201200  Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *   0x0000000000202A40  Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Referenced strings: 42
 *   insn=0x0000000000458660 string=0x0000000000458664 "V"
 *   insn=0x000000000045867C string=0x0000000000458680 "`6@"
 *   insn=0x0000000000458688 string=0x000000000045868C "@"
 *   insn=0x0000000000458688 string=0x00000000004586A8 "`:@"
 *   insn=0x000000000045868C string=0x0000000000458690 ""
 *   insn=0x0000000000458690 string=0x0000000000458694 ""
 *   insn=0x0000000000458698 string=0x000000000045869C ""
 *   insn=0x000000000045869C string=0x00000000004586A0 ""
 *   insn=0x00000000004586B0 string=0x00000000004586B4 "@"
 *   insn=0x00000000004586B4 string=0x00000000004586B8 ""
 *   insn=0x00000000004586B8 string=0x00000000004586BC ""
 *   insn=0x00000000004586C0 string=0x00000000004586C4 ""
 *   insn=0x00000000004586C4 string=0x00000000004586C8 ""
 *   insn=0x00000000004586D8 string=0x00000000004586DC "9z"
 *   insn=0x00000000004586DC string=0x00000000001F6FC0 "P'"
 *   insn=0x00000000004586E8 string=0x00000000004586EC "q{"
 *   insn=0x00000000004586EC string=0x00000000001F74B0 "0'"
 *   insn=0x0000000000458718 string=0x000000000045871C "!"
 *   insn=0x000000000045871C string=0x0000000000458720 "@"
 *   insn=0x0000000000458738 string=0x000000000045873C "A"
 *   insn=0x000000000045873C string=0x0000000000458740 ""
 *   insn=0x0000000000458740 string=0x0000000000458744 "bB@"
 *   insn=0x0000000000458744 string=0x0000000000458748 "`.@"
 *   insn=0x000000000045874C string=0x0000000000458750 """
 *   insn=0x0000000000458750 string=0x0000000000458754 "a"
 *   insn=0x0000000000458754 string=0x0000000000458758 "a"
 *   insn=0x000000000045875C string=0x0000000000458760 "i"
 *   insn=0x0000000000458764 string=0x0000000000458768 ""
 *   insn=0x000000000045876C string=0x0000000000458770 "a(!"
 *   insn=0x0000000000458770 string=0x0000000000458774 "h"
 *   insn=0x0000000000458774 string=0x0000000000458778 "i."
 *   insn=0x0000000000458778 string=0x000000000045877C "b\n"
 *   insn=0x000000000045877C string=0x0000000000458780 "c*"
 *   insn=0x0000000000458780 string=0x0000000000458784 "a"
 *   insn=0x000000000045878C string=0x0000000000458790 "hB@"
 *   insn=0x000000000045879C string=0x00000000004587A0 "h"
 *   insn=0x00000000004587B4 string=0x00000000004587B8 "b"
 *   insn=0x00000000004587B8 string=0x00000000004587BC "c*@"
 *   insn=0x00000000004587C8 string=0x00000000004587CC "!(#"
 *   insn=0x00000000004587CC string=0x00000000004587D0 "`\n"
 *   insn=0x00000000004587D0 string=0x00000000004587D4 "a"
 *   insn=0x00000000004587FC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::CameraController::FocusAtShape(__int64 a1, __int64 a2, float32x2_t *a3, char a4)
{
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  float32x2_t v11; // d2
  float32x2_t v12; // d0
  float32x2_t v13; // d1
  Caver::Camera *v14; // x0
  float v15; // s3
  unsigned __int64 v16; // d2
  float v17; // s0
  float32x2_t result; // d0
  float v19; // s1
  float v20; // [xsp+0h] [xbp-A0h]
  __int64 v21[2]; // [xsp+18h] [xbp-88h] BYREF
  float32x2_t v22; // [xsp+28h] [xbp-78h]
  float32x2_t v23; // [xsp+30h] [xbp-70h]
  float32x2_t v24; // [xsp+38h] [xbp-68h] BYREF
  float v25; // [xsp+40h] [xbp-60h]
  __int64 v26; // [xsp+78h] [xbp-28h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a4 & 1) != 0 )
  {
    v7 = *(_DWORD **)(a1 + 104);
    *(_QWORD *)(a1 + 104) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    v9 = *(_DWORD **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    if ( v9 )
    {
      v10 = v9[2] - 1;
      v9[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  Caver::Shape::Bounds(v21, (Caver::Shape *)(*(_QWORD *)a2 + 112LL));
  Caver::SceneObject::WorldMatrix((__int64 *)&v24, *(Caver::SceneObject **)(*(_QWORD *)a2 + 40LL));
  Caver::Rectangle::TransformedRectangle((Caver::Rectangle *)v21, (const Caver::Matrix4 *)&v24);
  v11.n64_u64[0] = vsub_f32(v22, (float32x2_t)a3->n64_u64[0]).n64_u64[0];
  v12.n64_u64[0] = vsub_f32(
                     vadd_f32(
                       vadd_f32(v11, vsub_f32(vadd_f32(v22, v23), v11)),
                       vadd_f32((float32x2_t)a3->n64_u64[0], a3[1])),
                     v11).n64_u64[0];
  v22.n64_u64[0] = v11.n64_u64[0];
  v23.n64_u64[0] = v12.n64_u64[0];
  v13.n64_u64[0] = vadd_f32(v11, vmul_f32(v12, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v14 = *(Caver::Camera **)(a1 + 88);
  v15 = *(float *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) + 120LL);
  v16 = vadd_f32(v13, *(float32x2_t *)(a1 + 4)).n64_u64[0];
  *(float32x2_t *)(a1 + 32) = v13;
  v13.n64_u32[0] = *(_DWORD *)(a1 + 12);
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 28) = 1064849900;
  *(_DWORD *)(a1 + 44) = 1064682127;
  *(_QWORD *)(a1 + 16) = v16;
  *(float *)(a1 + 40) = v15;
  *(float *)(a1 + 24) = v15 + v13.n64_f32[0];
  v24.n64_u64[0] = v12.n64_u64[0];
  Caver::Camera::MinDistanceForVisibleAreaSize(v14, (const Caver::Vector2 *)&v24);
  v20 = v17;
  v24.n64_u64[0] = *(unsigned __int64 *)(a1 + 4);
  v25 = *(float *)(a1 + 12);
  Caver::Vector3::Normalize((Caver::Vector3 *)&v24);
  result.n64_u64[0] = vadd_f32(vmul_n_f32(v24, v20), *(float32x2_t *)(a1 + 32)).n64_u64[0];
  v19 = (float)(v20 * v25) + *(float *)(a1 + 40);
  *(float32x2_t *)(a1 + 16) = result;
  *(float *)(a1 + 24) = v19;
  return result;
}

