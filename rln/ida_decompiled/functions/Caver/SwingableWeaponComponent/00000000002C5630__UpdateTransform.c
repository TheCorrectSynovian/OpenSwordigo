/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5630
 * Mangled: _ZN5Caver24SwingableWeaponComponent15UpdateTransformERKNS_7Matrix4E
 * Demangled: Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FBDE0  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *
 * Callees: 8
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 75
 *   insn=0x00000000002C5640 string=0x00000000002C5644 "V"
 *   insn=0x00000000002C566C string=0x00000000002C5670 "u"
 *   insn=0x00000000002C5670 string=0x00000000002C5674 "W"
 *   insn=0x00000000002C5688 string=0x00000000002C568C "!"
 *   insn=0x00000000002C568C string=0x00000000002C5690 "  ""
 *   insn=0x00000000002C569C string=0x00000000002C56A0 "\t"
 *   insn=0x00000000002C56AC string=0x00000000002C56B0 "#8#"
 *   insn=0x00000000002C56B0 string=0x00000000002C56B4 "c"
 *   insn=0x00000000002C56B4 string=0x00000000002C56B8 "` ""
 *   insn=0x00000000002C56B8 string=0x00000000002C56BC "I"
 *   insn=0x00000000002C56BC string=0x00000000002C56C0 ")"
 *   insn=0x00000000002C56BC string=0x00000000002C56E4 "h"
 *   insn=0x00000000002C56C4 string=0x00000000002C56C8 "\t"
 *   insn=0x00000000002C56D8 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002C5708 string=0x00000000002C570C "B"
 *   insn=0x00000000002C572C string=0x00000000002C5730 "l"
 *   insn=0x00000000002C5730 string=0x00000000002C5734 ","
 *   insn=0x00000000002C5734 string=0x00000000002C57F8 "hF@"
 *   insn=0x00000000002C5744 string=0x00000000002C5748 ""
 *   insn=0x00000000002C5748 string=0x00000000002C574C "N"
 *   insn=0x00000000002C574C string=0x00000000002C5750 "j"
 *   insn=0x00000000002C5750 string=0x00000000002C5754 "J"
 *   insn=0x00000000002C5754 string=0x00000000002C5758 "K"
 *   insn=0x00000000002C5768 string=0x00000000002C57E4 "KE@"
 *   insn=0x00000000002C576C string=0x00000000002C5770 ""
 *   insn=0x00000000002C5778 string=0x00000000002C577C "N"
 *   insn=0x00000000002C5780 string=0x00000000002C5784 "?"
 *   insn=0x00000000002C5788 string=0x00000000002C57A0 "m"
 *   insn=0x00000000002C5798 string=0x00000000002C579C "H"
 *   insn=0x00000000002C57B4 string=0x00000000002C57B8 ")"
 *   insn=0x00000000002C57D4 string=0x00000000002C57D8 "a"
 *   insn=0x00000000002C57E4 string=0x00000000002C57E8 "+E"
 *   insn=0x00000000002C57E8 string=0x00000000002C57EC "?"
 *   insn=0x00000000002C57F0 string=0x00000000002C57F4 "9"
 *   insn=0x00000000002C57FC string=0x00000000002C5800 "`"
 *   insn=0x00000000002C57FC string=0x00000000002C5814 "\ta"
 *   insn=0x00000000002C5808 string=0x00000000002C580C "hF@"
 *   insn=0x00000000002C5808 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C580C string=0x00000000002C5810 "H"
 *   insn=0x00000000002C5814 string=0x00000000002C5818 "q"
 *   insn=0x00000000002C5818 string=0x00000000002C581C ""
 *   insn=0x00000000002C581C string=0x00000000002C5820 "?"
 *   insn=0x00000000002C5820 string=0x00000000002C5824 ","
 *   insn=0x00000000002C5824 string=0x00000000002C5828 "n"
 *   insn=0x00000000002C582C string=0x00000000002C5830 "k"
 *   insn=0x00000000002C5830 string=0x00000000002C5834 "l"
 *   insn=0x00000000002C5834 string=0x00000000002C5838 "\na"
 *   insn=0x00000000002C5844 string=0x00000000002C5848 "?"
 *   insn=0x00000000002C5844 string=0x00000000002C58C0 "lE@"
 *   insn=0x00000000002C5848 string=0x00000000002C584C "-"
 *   insn=0x00000000002C5854 string=0x00000000002C5858 "n"
 *   insn=0x00000000002C585C string=0x00000000002C5860 "_"
 *   insn=0x00000000002C586C string=0x00000000002C5870 ""
 *   insn=0x00000000002C5874 string=0x00000000002C5878 "H"
 *   insn=0x00000000002C5888 string=0x00000000002C588C "\n"
 *   insn=0x00000000002C5890 string=0x00000000002C5894 "Ja"
 *   insn=0x00000000002C58B0 string=0x00000000002C58B4 "a"
 *   insn=0x00000000002C58C0 string=0x00000000002C58C4 "LE"
 *   insn=0x00000000002C58C4 string=0x00000000002C58C8 "_"
 *   insn=0x00000000002C58D0 string=0x00000000002C58D4 "\ta"
 *   insn=0x00000000002C58FC string=0x00000000002C5900 "4"
 *   insn=0x00000000002C5900 string=0x00000000001F71D0 "0'"
 *   insn=0x00000000002C5908 string=0x00000000002C590C "aB"
 *   insn=0x00000000002C5918 string=0x0000000000583734 "o"
 *   insn=0x00000000002C5924 string=0x00000000002C5928 "@"
 *   insn=0x00000000002C5924 string=0x00000000001F5F50 "P'"
 *   insn=0x00000000002C5928 string=0x00000000002C592C "h"
 *   insn=0x00000000002C592C string=0x00000000002C5930 "i"
 *   insn=0x00000000002C5930 string=0x00000000002C5934 "("
 *   insn=0x00000000002C5934 string=0x00000000002C5938 "h"
 *   insn=0x00000000002C5938 string=0x00000000002C593C "h"
 *   insn=0x00000000002C5940 string=0x00000000002C5944 "h"
 *   insn=0x00000000002C5948 string=0x00000000002C594C "h"
 *   insn=0x00000000002C595C string=0x00000000002C5974 "W"
 *   insn=0x00000000002C5974 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::UpdateTransform(
        Caver::SwingableWeaponComponent *this,
        const Caver::Matrix4 *a2)
{
  float v4; // w9
  __int64 v5; // x21
  int v6; // w9
  _DWORD *v7; // x8
  float v8; // s0
  __int128 v9; // q1
  __int64 v10; // x12
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x13
  __int64 v13; // x11
  unsigned __int64 v14; // x11
  _DWORD *v15; // x9
  int *v16; // x10
  unsigned __int64 v17; // x13
  _OWORD *v18; // x14
  __int128 *v19; // x12
  __int64 v20; // x15
  __int128 v21; // q0
  __int128 v22; // q1
  int v23; // t1
  __int64 v24; // x8
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x13
  __int64 v27; // x12
  unsigned __int64 v28; // x12
  _DWORD *v29; // x10
  int *v30; // x11
  unsigned __int64 v31; // x13
  _OWORD *v32; // x14
  __int128 *v33; // x15
  __int64 v34; // x16
  __int128 v35; // q0
  __int128 v36; // q1
  int v37; // t1
  __int64 result; // x0
  _QWORD v39[2]; // [xsp+0h] [xbp-C0h] BYREF
  unsigned __int64 v40; // [xsp+10h] [xbp-B0h] BYREF
  float v41; // [xsp+18h] [xbp-A8h]
  __int64 v42; // [xsp+20h] [xbp-A0h] BYREF
  int v43; // [xsp+28h] [xbp-98h]
  __int64 v44; // [xsp+30h] [xbp-90h] BYREF
  int v45; // [xsp+38h] [xbp-88h]
  float32x2_t v46; // [xsp+40h] [xbp-80h] BYREF
  float v47; // [xsp+48h] [xbp-78h]
  __int128 v48; // [xsp+50h] [xbp-70h] BYREF
  _OWORD v49[3]; // [xsp+60h] [xbp-60h] BYREF
  __int64 v50; // [xsp+98h] [xbp-28h]

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((float *)a2 + 14);
  v46.n64_u64[0] = *(_QWORD *)((unsigned __int64)a2 + 48);
  v47 = v4;
  v5 = *((_QWORD *)this + 5);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v48, (const Caver::Vector3 *)&v46);
  if ( fabsf(*(float *)&v48 - *(float *)(v5 + 112)) <= 0.0001 )
  {
    v7 = (_DWORD *)(v5 + 116);
    if ( fabsf(*((float *)&v48 + 1) - *(float *)(v5 + 116)) <= 0.0001 )
      goto LABEL_7;
    v6 = DWORD1(v48);
  }
  else
  {
    v6 = DWORD1(v48);
    v7 = (_DWORD *)(v5 + 116);
  }
  *(_DWORD *)(v5 + 112) = v48;
  *v7 = v6;
  if ( !*(_BYTE *)(v5 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v5);
    *(_BYTE *)(v5 + 180) = 1;
  }
LABEL_7:
  v8 = v47;
  *(float *)(*((_QWORD *)this + 5) + 120LL) = v47;
  v49[2] = *((_OWORD *)a2 + 3);
  v49[1] = *((_OWORD *)a2 + 2);
  v49[0] = *((_OWORD *)a2 + 1);
  v9 = *(_OWORD *)a2;
  v40 = vneg_f32(v46).n64_u64[0];
  v41 = -v8;
  v48 = v9;
  Caver::Matrix4::PreTranslate((Caver::Matrix4 *)&v48, (const Caver::Vector3 *)&v40);
  v10 = *((_QWORD *)this + 43);
  if ( v10 )
  {
    v11 = v10 + 176;
    v12 = v10 + 116;
    if ( v10 + 176 <= (unsigned __int64)(v10 + 116) )
      v13 = v10 + 116;
    else
      v13 = v10 + 176;
    v14 = ((unsigned __int64)(v13 + -113 - v10) >> 2) + 1;
    v15 = (_DWORD *)(v10 + 112);
    v16 = (int *)&v48;
    if ( v14 < 8 )
      goto LABEL_40;
    if ( v11 > v12 )
      v12 = v10 + 176;
    v17 = v12 + -113 - v10;
    if ( v15 < (_DWORD *)((char *)&v49[-1] + (v17 & 0xFFFFFFFFFFFFFFFCLL) + 4)
      && v10 + ((v17 + 116) & 0xFFFFFFFFFFFFFFFCLL) > (unsigned __int64)&v48 )
    {
      goto LABEL_40;
    }
    v16 = (int *)&v49[-1] + (v14 & 0x7FFFFFFFFFFFFFF8LL);
    v18 = (_OWORD *)(v10 + 128);
    v15 = (_DWORD *)(v10 + 4 * (v14 & 0x7FFFFFFFFFFFFFF8LL) + 112);
    v19 = v49;
    v20 = v14 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v21 = *(v19 - 1);
      v22 = *v19;
      v20 -= 8;
      v19 += 2;
      *(v18 - 1) = v21;
      *v18 = v22;
      v18 += 2;
    }
    while ( v20 );
    if ( v14 != (v14 & 0x7FFFFFFFFFFFFFF8LL) )
    {
LABEL_40:
      do
      {
        v23 = *v16++;
        *v15++ = v23;
      }
      while ( (unsigned __int64)v15 < v11 );
    }
  }
  else
  {
    v24 = *((_QWORD *)this + 17);
    if ( v24
      || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 120), this),
          (v24 = *((_QWORD *)this + 17)) != 0) )
    {
      v25 = v24 + 280;
      v26 = v24 + 220;
      if ( v24 + 280 <= (unsigned __int64)(v24 + 220) )
        v27 = v24 + 220;
      else
        v27 = v24 + 280;
      v28 = ((unsigned __int64)(v27 + -217 - v24) >> 2) + 1;
      v29 = (_DWORD *)(v24 + 216);
      v30 = (int *)&v48;
      if ( v28 < 8 )
        goto LABEL_41;
      if ( v25 > v26 )
        v26 = v24 + 280;
      v31 = v26 + -217 - v24;
      if ( v29 < (_DWORD *)((char *)&v49[-1] + (v31 & 0xFFFFFFFFFFFFFFFCLL) + 4)
        && v24 + ((v31 + 220) & 0xFFFFFFFFFFFFFFFCLL) > (unsigned __int64)&v48 )
      {
        goto LABEL_41;
      }
      v30 = (int *)&v49[-1] + (v28 & 0x7FFFFFFFFFFFFFF8LL);
      v32 = (_OWORD *)(v24 + 232);
      v29 = (_DWORD *)(v24 + 4 * (v28 & 0x7FFFFFFFFFFFFFF8LL) + 216);
      v33 = v49;
      v34 = v28 & 0x7FFFFFFFFFFFFFF8LL;
      do
      {
        v35 = *(v33 - 1);
        v36 = *v33;
        v34 -= 8;
        v33 += 2;
        *(v32 - 1) = v35;
        *v32 = v36;
        v32 += 2;
      }
      while ( v34 );
      if ( v28 != (v28 & 0x7FFFFFFFFFFFFFF8LL) )
      {
LABEL_41:
        do
        {
          v37 = *v30++;
          *v29++ = v37;
        }
        while ( (unsigned __int64)v29 < v25 );
      }
      *(_BYTE *)(v24 + 280) = 1;
    }
  }
  v39[0] = 1065353216;
  v39[1] = 0;
  C_Matrix4Vector4Mul((const float *)a2, (const float *)v39, (float *)&v40);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v42, (const Caver::Vector4 *)&v40);
  v44 = v42;
  v45 = v43;
  result = Caver::Vector3::IsClose(
             (Caver::Vector3 *)&v44,
             (Caver::SwingableWeaponComponent *)((char *)this + 400),
             0.001);
  if ( (result & 1) == 0 )
  {
    *(_QWORD *)((char *)this + 388) = *((_QWORD *)this + 50);
    *((_DWORD *)this + 99) = *((_DWORD *)this + 102);
    *((_QWORD *)this + 50) = v44;
    *((_DWORD *)this + 102) = v45;
  }
  return result;
}

