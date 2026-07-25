/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236964
 * Mangled: _ZN5Caver21ShadowVolumeComponent4DrawEPNS_16RenderingContextERKN5boost13intrusive_ptrINS_14LightComponentEEERKNS_7Matrix4E
 * Demangled: Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FE6B0  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *
 * Callees: 6
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F5BF0  Caver::ShadowVolumeComponent::UpdateVolume(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 26
 *   insn=0x0000000000236974 string=0x0000000000236978 "V"
 *   insn=0x000000000023698C string=0x0000000000236990 "H"
 *   insn=0x0000000000236994 string=0x0000000000236998 "\t\t@"
 *   insn=0x0000000000236998 string=0x000000000023699C ")"
 *   insn=0x000000000023699C string=0x00000000002369A0 "\t\t"
 *   insn=0x00000000002369AC string=0x00000000002369B0 "@"
 *   insn=0x00000000002369B0 string=0x00000000002369B4 ""
 *   insn=0x00000000002369B4 string=0x00000000002369B8 ""
 *   insn=0x00000000002369B8 string=0x00000000002369BC " "
 *   insn=0x00000000002369BC string=0x0000000000236A80 ""
 *   insn=0x00000000002369C0 string=0x00000000002369C4 "h"
 *   insn=0x00000000002369CC string=0x00000000001F5BF0 "P'"
 *   insn=0x00000000002369D0 string=0x00000000002369D4 "i"
 *   insn=0x00000000002369D4 string=0x00000000002369D8 "j"
 *   insn=0x00000000002369D8 string=0x00000000002369DC " %"
 *   insn=0x00000000002369DC string=0x00000000002369E0 "A"
 *   insn=0x00000000002369E0 string=0x00000000002369E4 "\t9@"
 *   insn=0x00000000002369E4 string=0x00000000002369E8 "y@"
 *   insn=0x00000000002369E8 string=0x00000000002369EC "j"
 *   insn=0x00000000002369EC string=0x00000000002369F0 "B"
 *   insn=0x0000000000236A20 string=0x0000000000236A24 "_ "
 *   insn=0x0000000000236A54 string=0x0000000000236A58 "6"
 *   insn=0x0000000000236A58 string=0x00000000001F3B30 "P'"
 *   insn=0x0000000000236A80 string=0x0000000000236A84 ""
 *   insn=0x0000000000236A8C string=0x0000000000236A90 ""
 *   insn=0x0000000000236A98 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowVolumeComponent::Draw(
        Caver::ShadowVolumeComponent *this,
        Caver::RenderingContext *a2,
        __int64 *a3,
        const float *a4)
{
  __int64 v7; // x8
  _DWORD *v8; // x0
  int v9; // w8
  __int64 v10; // x8
  __int64 v11; // x9
  _OWORD v13[3]; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v14; // [xsp+30h] [xbp-80h]
  int v15; // [xsp+38h] [xbp-78h]
  int v16; // [xsp+3Ch] [xbp-74h]
  float v17[16]; // [xsp+48h] [xbp-68h] BYREF
  __int64 v18; // [xsp+88h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *a3;
  if ( *a3 )
    ++*(_DWORD *)(v7 + 8);
  v8 = (_DWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v7;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( *((_QWORD *)this + 17) )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  if ( !*((_QWORD *)this + 17) )
LABEL_6:
    Caver::ShadowVolumeComponent::UpdateVolume(this);
LABEL_7:
  v10 = *((_QWORD *)this + 5);
  v11 = *(_QWORD *)(v10 + 112);
  v15 = *(_DWORD *)(v10 + 120);
  v14 = v11;
  v13[0] = xmmword_583490;
  v13[1] = xmmword_5837E0;
  v13[2] = xmmword_5837F0;
  v16 = 1065353216;
  C_Matrix4Mul(a4, (const float *)v13, v17);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v17);
  Caver::RenderingContext::SetVertexAttribPointer();
  return Caver::RenderingContext::DrawArrays(a2, 4, 0, 3 * *((_DWORD *)this + 32));
}

