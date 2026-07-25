/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236888
 * Mangled: _ZThn24_N5Caver21ShadowVolumeComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ShadowVolumeComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 24
 *   insn=0x0000000000236894 string=0x0000000000236898 "T"
 *   insn=0x00000000002368A4 string=0x00000000002368A8 ",@"
 *   insn=0x00000000002368B0 string=0x00000000002368B4 ""
 *   insn=0x00000000002368B4 string=0x00000000002368B8 "\t9@"
 *   insn=0x00000000002368B8 string=0x00000000002368BC "y@"
 *   insn=0x00000000002368CC string=0x00000000002368D0 "ar@"
 *   insn=0x00000000002368D0 string=0x00000000002368D4 "h"
 *   insn=0x00000000002368DC string=0x00000000002368E0 "!"
 *   insn=0x00000000002368E0 string=0x00000000002368E4 "  ""
 *   insn=0x00000000002368EC string=0x00000000002368F0 "h"
 *   insn=0x00000000002368F0 string=0x00000000002368F4 "\t"
 *   insn=0x00000000002368F4 string=0x0000000000236918 "`r"
 *   insn=0x0000000000236900 string=0x0000000000236904 "#8#"
 *   insn=0x0000000000236904 string=0x0000000000236908 "c"
 *   insn=0x0000000000236908 string=0x000000000023690C "` ""
 *   insn=0x000000000023690C string=0x0000000000236910 "I"
 *   insn=0x0000000000236910 string=0x0000000000236914 ")"
 *   insn=0x0000000000236918 string=0x000000000023691C "\t"
 *   insn=0x000000000023691C string=0x0000000000236920 "h"
 *   insn=0x000000000023692C string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000236930 string=0x0000000000236934 "h"
 *   insn=0x0000000000236938 string=0x000000000023693C "hz"
 *   insn=0x000000000023694C string=0x0000000000236960 "\"
 *   insn=0x0000000000236960 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShadowVolumeComponent::Update(
        Caver::ShadowVolumeComponent *this,
        float a2)
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
  v2 = *((_QWORD *)this + 2);
  v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 40LL);
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

