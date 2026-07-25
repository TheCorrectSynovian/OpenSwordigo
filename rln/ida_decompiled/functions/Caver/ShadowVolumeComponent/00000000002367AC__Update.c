/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002367AC
 * Mangled: _ZN5Caver21ShadowVolumeComponent6UpdateEf
 * Demangled: Caver::ShadowVolumeComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 24
 *   insn=0x00000000002367B8 string=0x00000000002367BC "T"
 *   insn=0x00000000002367C8 string=0x00000000002367CC "8@"
 *   insn=0x00000000002367D4 string=0x00000000002367D8 ""
 *   insn=0x00000000002367D8 string=0x00000000002367DC "\t9@"
 *   insn=0x00000000002367DC string=0x00000000002367E0 "y@"
 *   insn=0x00000000002367F0 string=0x00000000002367F4 "ar@"
 *   insn=0x00000000002367F4 string=0x00000000002367F8 "h"
 *   insn=0x0000000000236800 string=0x0000000000236804 "!"
 *   insn=0x0000000000236804 string=0x0000000000236808 "  ""
 *   insn=0x0000000000236810 string=0x0000000000236814 "h"
 *   insn=0x0000000000236814 string=0x0000000000236818 "\t"
 *   insn=0x0000000000236818 string=0x000000000023683C "`r"
 *   insn=0x0000000000236824 string=0x0000000000236828 "#8#"
 *   insn=0x0000000000236828 string=0x000000000023682C "c"
 *   insn=0x000000000023682C string=0x0000000000236830 "` ""
 *   insn=0x0000000000236830 string=0x0000000000236834 "I"
 *   insn=0x0000000000236834 string=0x0000000000236838 ")"
 *   insn=0x000000000023683C string=0x0000000000236840 "\t"
 *   insn=0x0000000000236840 string=0x0000000000236844 "h"
 *   insn=0x000000000023684C string=0x0000000000236850 "T"
 *   insn=0x0000000000236850 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000236854 string=0x0000000000236858 "h"
 *   insn=0x000000000023685C string=0x0000000000236860 "hz"
 *   insn=0x0000000000236884 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowVolumeComponent::Update(Caver::ShadowVolumeComponent *this, float a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 result; // x0
  float v6; // w9
  float *v7; // x8
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF
  int v9; // [xsp+8h] [xbp-28h]
  float v10; // [xsp+10h] [xbp-20h] BYREF
  float v11; // [xsp+14h] [xbp-1Ch]
  __int64 v12; // [xsp+18h] [xbp-18h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 5);
  v3 = *(_QWORD *)(*((_QWORD *)this + 14) + 40LL);
  v4 = *(_QWORD *)(v3 + 112);
  LODWORD(v3) = *(_DWORD *)(v3 + 120);
  v8 = v4;
  v9 = v3;
  result = Caver::Vector2::Vector2((Caver::Vector2 *)&v10, (const Caver::Vector3 *)&v8);
  if ( fabsf(v10 - *(float *)(v2 + 112)) <= 0.0001 )
  {
    v7 = (float *)(v2 + 116);
    if ( fabsf(v11 - *(float *)(v2 + 116)) <= 0.0001 )
      goto LABEL_7;
    v6 = v11;
  }
  else
  {
    v6 = v11;
    v7 = (float *)(v2 + 116);
  }
  *(float *)(v2 + 112) = v10;
  *v7 = v6;
  if ( !*(_BYTE *)(v2 + 180) )
  {
    result = Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v2);
    *(_BYTE *)(v2 + 180) = 1;
  }
LABEL_7:
  *(_DWORD *)(v2 + 120) = v9;
  return result;
}

