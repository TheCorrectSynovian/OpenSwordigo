/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0E90
 * Mangled: _ZN5Caver19SimpleGlowComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200100  Caver::SimpleGlowComponent::CreateVertexData(void)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Referenced strings: 16
 *   insn=0x00000000002B0EA4 string=0x00000000002B0EA8 "W"
 *   insn=0x00000000002B0EEC string=0x00000000002B0EF0 "@"
 *   insn=0x00000000002B0EF0 string=0x00000000002B0EF4 "a8!"
 *   insn=0x00000000002B0F30 string=0x00000000001F5990 "P'"
 *   insn=0x00000000002B0F48 string=0x00000000002B0F4C "&%"
 *   insn=0x00000000002B0F50 string=0x00000000002B0F54 "D$"
 *   insn=0x00000000002B0F54 string=0x00000000002B0F58 "C#"
 *   insn=0x00000000002B0F58 string=0x00000000002B0F5C "B%"
 *   insn=0x00000000002B0F5C string=0x00000000002B0F60 "%"
 *   insn=0x00000000002B0F64 string=0x00000000002B0F68 "!($"
 *   insn=0x00000000002B0F70 string=0x00000000002B0F74 "#"
 *   insn=0x00000000002B1004 string=0x00000000002B1008 "F6"
 *   insn=0x00000000002B1014 string=0x00000000002B1018 "#"
 *   insn=0x00000000002B1024 string=0x00000000002B1028 ">6"
 *   insn=0x00000000002B1034 string=0x00000000002B1038 "c"
 *   insn=0x00000000002B1070 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SimpleGlowComponent::Draw(
        Caver::SimpleGlowComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        float32x2_t *a4,
        const Caver::Vector3 *a5)
{
  float32x2_t *v9; // x8
  float v10; // s1
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // s1
  float v16; // [xsp+8h] [xbp-D8h]
  float v17; // [xsp+Ch] [xbp-D4h]
  unsigned __int64 v18; // [xsp+10h] [xbp-D0h] BYREF
  float v19; // [xsp+18h] [xbp-C8h]
  _BYTE v20[60]; // [xsp+20h] [xbp-C0h] BYREF
  int v21; // [xsp+5Ch] [xbp-84h]
  _OWORD v22[4]; // [xsp+60h] [xbp-80h] BYREF
  __int64 v23; // [xsp+A8h] [xbp-38h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 112) )
  {
    Caver::SimpleGlowComponent::CreateVertexData(this);
    *((_BYTE *)this + 112) = 0;
  }
  v9 = (float32x2_t *)*((_QWORD *)this + 5);
  v10 = v9[15].n64_f32[0] - a4[1].n64_f32[0];
  v18 = vsub_f32(v9[14], (float32x2_t)a4->n64_u64[0]).n64_u64[0];
  v19 = v10;
  Caver::Vector3::Normalize((Caver::Vector3 *)&v18);
  v22[3] = *((_OWORD *)a3 + 3);
  v22[2] = *((_OWORD *)a3 + 2);
  v22[1] = *((_OWORD *)a3 + 1);
  v22[0] = *(_OWORD *)a3;
  Caver::SceneObject::WorldPointFromLocalPoint();
  v11 = *((float *)this + 49);
  v12 = *(float *)(*((_QWORD *)this + 5) + 120LL);
  *(float *)&v20[48] = v16 + (float)(v11 * *(float *)&v18);
  *(float *)&v20[52] = v17 + (float)(v11 * *((float *)&v18 + 1));
  *(float *)&v20[56] = v12 + (float)(v11 * v19);
  *(_OWORD *)v20 = xmmword_583490;
  *(_OWORD *)&v20[16] = xmmword_5837E0;
  *(_OWORD *)&v20[32] = xmmword_5837F0;
  v21 = 1065353216;
  C_Matrix4Mul((const float *)v22, (const float *)v20, (float *)v22);
  v13 = *((float *)this + 50);
  v14 = *(float *)(*((_QWORD *)this + 5) + 140LL);
  *(_OWORD *)&v20[4] = 0u;
  *(float *)v20 = v13 * v14;
  *(float *)&v20[20] = v13 * v14;
  *(float *)&v20[40] = v13 * v14;
  *(_OWORD *)&v20[24] = 0u;
  *(_OWORD *)&v20[44] = 0u;
  v21 = 1065353216;
  C_Matrix4Mul((const float *)v22, (const float *)v20, (float *)v22);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v22);
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  return Caver::RenderingContext::DrawElements();
}

