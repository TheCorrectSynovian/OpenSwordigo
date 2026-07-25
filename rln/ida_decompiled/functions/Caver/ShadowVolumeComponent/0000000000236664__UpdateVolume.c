/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236664
 * Mangled: _ZN5Caver21ShadowVolumeComponent12UpdateVolumeEv
 * Demangled: Caver::ShadowVolumeComponent::UpdateVolume(void)
 *
 * Callers: 1
 *   0x00000000001F5BF0  Caver::ShadowVolumeComponent::UpdateVolume(void)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F54C0  Caver::LightComponent::Direction(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 29
 *   insn=0x0000000000236678 string=0x000000000023667C "i"
 *   insn=0x000000000023667C string=0x0000000000236680 "T"
 *   insn=0x0000000000236680 string=0x0000000000236684 "h"
 *   insn=0x0000000000236684 string=0x0000000000236688 "!"
 *   insn=0x0000000000236688 string=0x000000000023668C "i"
 *   insn=0x0000000000236694 string=0x0000000000236698 """
 *   insn=0x00000000002366A8 string=0x00000000002366AC "`>@"
 *   insn=0x00000000002366B0 string=0x00000000002366B4 "h"
 *   insn=0x00000000002366BC string=0x00000000002366C0 "u"
 *   insn=0x00000000002366BC string=0x00000000001F54C0 "P'"
 *   insn=0x00000000002366D4 string=0x00000000002366D8 "(}"
 *   insn=0x00000000002366D8 string=0x00000000002366DC "I"
 *   insn=0x00000000002366E0 string=0x00000000002366E4 " "
 *   insn=0x00000000002366E8 string=0x00000000002366EC "hF@"
 *   insn=0x00000000002366E8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002366EC string=0x00000000002366F0 "`F"
 *   insn=0x00000000002366FC string=0x0000000000236700 "u"
 *   insn=0x00000000002366FC string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000236708 string=0x000000000023670C "l"
 *   insn=0x000000000023670C string=0x0000000000236710 "mF@"
 *   insn=0x0000000000236714 string=0x0000000000236718 ""
 *   insn=0x0000000000236720 string=0x0000000000236724 "`"
 *   insn=0x000000000023672C string=0x0000000000236730 "K"
 *   insn=0x0000000000236730 string=0x0000000000236734 " "
 *   insn=0x0000000000236740 string=0x0000000000236744 ""
 *   insn=0x0000000000236760 string=0x0000000000236764 "n"
 *   insn=0x0000000000236768 string=0x000000000023676C "n"
 *   insn=0x0000000000236778 string=0x000000000023677C "K"
 *   insn=0x00000000002367A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowVolumeComponent::UpdateVolume(Caver::ShadowVolumeComponent *this)
{
  Caver::LightComponent *v2; // x0
  __int64 v3; // x21
  float32x2_t v4; // d9
  float v5; // s8
  unsigned __int64 v6; // x0
  __int64 v7; // x0
  void *v8; // x8
  __int64 v9; // x8
  _DWORD *v10; // x11
  unsigned __int64 v11; // d0
  __int64 v12; // x12
  char *v13; // x14
  int v14; // t1
  unsigned __int64 v15; // [xsp+0h] [xbp-80h] BYREF
  float v16; // [xsp+8h] [xbp-78h]
  _OWORD v17[3]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v18; // [xsp+48h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17[0] = xmmword_584720;
  v17[1] = xmmword_584730;
  v17[2] = xmmword_584740;
  v2 = (Caver::LightComponent *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 32) = 4;
  Caver::LightComponent::Direction((__int64 *)&v15, v2);
  v3 = *((int *)this + 32);
  v4.n64_u64[0] = v15;
  v5 = v16;
  if ( is_mul_ok(3 * v3, 0xCu) )
    v6 = 36 * v3;
  else
    v6 = -1;
  v7 = operator new[](v6);
  v8 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v7;
  if ( v8 )
  {
    operator delete[](v8);
    LODWORD(v3) = *((_DWORD *)this + 32);
  }
  if ( (int)v3 >= 1 )
  {
    v9 = 0;
    v10 = (_DWORD *)v17 + 2;
    v11 = vmul_f32(v4, vdup_n_s32(0x47C35000u)).n64_u64[0];
    v12 = *((_QWORD *)this + 17) + 20LL;
    do
    {
      v13 = (char *)v17 + 12 * (++v9 & 3);
      *(_QWORD *)(v12 - 20) = *(_QWORD *)v13;
      *(_DWORD *)(v12 - 12) = *((_DWORD *)v13 + 2);
      *(_QWORD *)(v12 - 8) = *((_QWORD *)v10 - 1);
      v14 = *v10;
      v10 += 3;
      *(_QWORD *)(v12 + 4) = v11;
      *(float *)(v12 + 12) = v5 * 100000.0;
      *(_DWORD *)v12 = v14;
      v12 += 36;
    }
    while ( v9 < (int)v3 );
  }
}

