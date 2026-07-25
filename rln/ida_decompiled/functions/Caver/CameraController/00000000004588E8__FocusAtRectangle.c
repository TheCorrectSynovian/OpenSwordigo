/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004588E8
 * Mangled: _ZN5Caver16CameraController16FocusAtRectangleERKNS_9RectangleEfb
 * Demangled: Caver::CameraController::FocusAtRectangle(Caver::Rectangle const&,float,bool)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000201200  Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *
 * Referenced strings: 38
 *   insn=0x00000000004588FC string=0x0000000000458900 "U"
 *   insn=0x0000000000458904 string=0x0000000000458908 ""
 *   insn=0x0000000000458918 string=0x000000000045891C "`6@"
 *   insn=0x0000000000458924 string=0x0000000000458928 "@"
 *   insn=0x0000000000458924 string=0x0000000000458944 "`:@"
 *   insn=0x0000000000458928 string=0x000000000045892C ""
 *   insn=0x000000000045892C string=0x0000000000458930 ""
 *   insn=0x0000000000458934 string=0x0000000000458938 ""
 *   insn=0x0000000000458938 string=0x000000000045893C ""
 *   insn=0x000000000045894C string=0x0000000000458950 "@"
 *   insn=0x0000000000458950 string=0x0000000000458954 ""
 *   insn=0x0000000000458954 string=0x0000000000458958 ""
 *   insn=0x000000000045895C string=0x0000000000458960 ""
 *   insn=0x0000000000458960 string=0x0000000000458964 ""
 *   insn=0x0000000000458970 string=0x0000000000458974 "`"
 *   insn=0x0000000000458978 string=0x000000000045897C "C"
 *   insn=0x000000000045897C string=0x0000000000458980 "!"
 *   insn=0x0000000000458980 string=0x0000000000458984 "cB@"
 *   insn=0x0000000000458984 string=0x0000000000458988 "h"
 *   insn=0x000000000045898C string=0x0000000000458990 "`.@"
 *   insn=0x0000000000458990 string=0x0000000000458994 ""
 *   insn=0x0000000000458998 string=0x000000000045899C "h"
 *   insn=0x00000000004589A0 string=0x00000000004589A8 "`"
 *   insn=0x00000000004589A8 string=0x00000000004589AC " "
 *   insn=0x00000000004589B0 string=0x00000000004589B4 "h*"
 *   insn=0x00000000004589B4 string=0x00000000004589B8 "h."
 *   insn=0x00000000004589B8 string=0x00000000004589BC "a"
 *   insn=0x00000000004589BC string=0x00000000004589C0 "`\n"
 *   insn=0x00000000004589C8 string=0x00000000004589CC "hB@"
 *   insn=0x00000000004589D8 string=0x00000000004589DC "h"
 *   insn=0x00000000004589E0 string=0x00000000004589E4 "S"
 *   insn=0x00000000004589F0 string=0x00000000004589F4 "b"
 *   insn=0x00000000004589F4 string=0x00000000004589F8 "c*@"
 *   insn=0x0000000000458A04 string=0x0000000000458A08 "!(#"
 *   insn=0x0000000000458A08 string=0x0000000000458A0C "`\n"
 *   insn=0x0000000000458A0C string=0x0000000000458A10 "a"
 *   insn=0x0000000000458A20 string=0x0000000000458A3C "%v"
 *   insn=0x0000000000458A3C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CameraController::FocusAtRectangle(
        Caver::CameraController *this,
        float32x2_t *a2,
        float a3,
        char a4)
{
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  float32x2_t v11; // d2
  float v12; // s0
  float32x2_t v13; // d1
  float32x2_t v14; // d3
  Caver::Camera *v15; // x0
  float v16; // s0
  __int64 result; // x0
  float v18; // s1
  float v19; // [xsp+0h] [xbp-50h]
  float32x2_t v20; // [xsp+10h] [xbp-40h] BYREF
  float v21; // [xsp+18h] [xbp-38h]
  _QWORD v22[2]; // [xsp+20h] [xbp-30h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a4 & 1) != 0 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    v9 = (_DWORD *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = 0;
    if ( v9 )
    {
      v10 = v9[2] - 1;
      v9[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v11.n64_u64[0] = a2[1].n64_u64[0];
  v12 = *((float *)this + 3);
  v13.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v14.n64_u64[0] = *(unsigned __int64 *)((char *)this + 4);
  *(_DWORD *)this = 1;
  v15 = (Caver::Camera *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 7) = 1064849900;
  *((float *)this + 6) = v12 + a3;
  *((float *)this + 10) = a3;
  *((_DWORD *)this + 11) = 1064682127;
  *((float32x2_t *)this + 4) = v13;
  *((float32x2_t *)this + 2) = vadd_f32(v13, v14);
  v22[0] = v11.n64_u64[0];
  Caver::Camera::MinDistanceForVisibleAreaSize(v15, (const Caver::Vector2 *)v22);
  v19 = v16;
  v20.n64_u64[0] = *(unsigned __int64 *)((char *)this + 4);
  v21 = *((float *)this + 3);
  result = Caver::Vector3::Normalize((Caver::Vector3 *)&v20);
  v18 = (float)(v19 * v21) + *((float *)this + 10);
  *((float32x2_t *)this + 2) = vadd_f32(vmul_n_f32(v20, v19), *(float32x2_t *)((char *)this + 32));
  *((float *)this + 6) = v18;
  return result;
}

