/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002835E4
 * Mangled: _ZN5Caver22HookshotTrailComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::HookshotTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Referenced strings: 19
 *   insn=0x00000000002835F4 string=0x00000000002835F8 "U"
 *   insn=0x0000000000283600 string=0x0000000000283604 "\t"
 *   insn=0x0000000000283604 string=0x0000000000283608 "\n"
 *   insn=0x000000000028360C string=0x0000000000283610 "@"
 *   insn=0x0000000000283610 string=0x0000000000283614 ""
 *   insn=0x0000000000283618 string=0x000000000028361C "B"
 *   insn=0x0000000000283620 string=0x0000000000283624 "@"
 *   insn=0x0000000000283634 string=0x0000000000283638 "@"
 *   insn=0x0000000000283644 string=0x0000000000283648 "@"
 *   insn=0x0000000000283654 string=0x0000000000283658 " "
 *   insn=0x000000000028365C string=0x0000000000283660 "y@"
 *   insn=0x0000000000283688 string=0x000000000028368C ""
 *   insn=0x00000000002836C4 string=0x00000000002836C8 "!@!"
 *   insn=0x00000000002836F8 string=0x00000000002836FC ")"
 *   insn=0x0000000000283724 string=0x0000000000283728 "#"
 *   insn=0x0000000000283734 string=0x0000000000283738 "z"
 *   insn=0x0000000000283744 string=0x0000000000283748 "c"
 *   insn=0x0000000000283750 string=0x0000000000283754 ""
 *   insn=0x000000000028377C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HookshotTrailComponent::Draw(
        Caver::HookshotTrailComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        const Caver::Vector3 *a4,
        const Caver::Vector3 *a5)
{
  __int64 v7; // x9
  int v8; // w8
  int v9; // w8
  float v10; // s1
  _BYTE v12[64]; // [xsp+30h] [xbp-B0h] BYREF
  _OWORD v13[4]; // [xsp+70h] [xbp-70h] BYREF
  __int64 v14; // [xsp+B8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13[3] = *((_OWORD *)a3 + 3);
  v13[2] = *((_OWORD *)a3 + 2);
  v13[1] = *((_OWORD *)a3 + 1);
  v13[0] = *(_OWORD *)a3;
  v7 = *(_QWORD *)((char *)this + 172);
  v8 = *(_DWORD *)(*((_QWORD *)this + 5) + 120LL);
  *(_OWORD *)v12 = xmmword_583490;
  *(_QWORD *)&v12[48] = v7;
  *(_DWORD *)&v12[56] = v8;
  *(_DWORD *)&v12[60] = 1065353216;
  *(_OWORD *)&v12[16] = xmmword_5837E0;
  *(_OWORD *)&v12[32] = xmmword_5837F0;
  C_Matrix4Mul((const float *)v13, (const float *)v12, (float *)v13);
  v9 = *(_DWORD *)(*((_QWORD *)this + 5) + 140LL);
  *(_OWORD *)&v12[4] = 0u;
  *(_OWORD *)&v12[24] = 0u;
  *(_DWORD *)v12 = v9;
  *(_DWORD *)&v12[20] = v9;
  *(_DWORD *)&v12[40] = v9;
  *(_OWORD *)&v12[44] = 0u;
  *(_DWORD *)&v12[60] = 1065353216;
  C_Matrix4Mul((const float *)v13, (const float *)v12, (float *)v13);
  v10 = -*((float *)this + 44);
  *(float *)&v12[48] = -*((float *)this + 43);
  *(float *)&v12[52] = v10;
  *(_QWORD *)&v12[56] = 0x3F80000000000000LL;
  *(_OWORD *)v12 = xmmword_583490;
  *(_OWORD *)&v12[16] = xmmword_5837E0;
  *(_OWORD *)&v12[32] = xmmword_5837F0;
  C_Matrix4Mul((const float *)v13, (const float *)v12, (float *)v13);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v13);
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  return Caver::RenderingContext::DrawElements();
}

