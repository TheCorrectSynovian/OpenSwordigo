/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002411E0
 * Mangled: _ZN5Caver28TransformControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000200CF0  Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 30
 *   insn=0x00000000002411F0 string=0x00000000002411F4 "V"
 *   insn=0x0000000000241204 string=0x0000000000241208 "h"
 *   insn=0x000000000024120C string=0x0000000000241210 "\t\t@"
 *   insn=0x0000000000241210 string=0x0000000000241214 ")"
 *   insn=0x0000000000241214 string=0x0000000000241218 "\t\t"
 *   insn=0x0000000000241224 string=0x0000000000241228 "@"
 *   insn=0x0000000000241224 string=0x0000000000241244 "h"
 *   insn=0x0000000000241228 string=0x000000000024122C ""
 *   insn=0x000000000024122C string=0x0000000000241230 ""
 *   insn=0x0000000000241234 string=0x0000000000241238 ""
 *   insn=0x0000000000241238 string=0x000000000024123C ""
 *   insn=0x0000000000241244 string=0x0000000000241248 "H"
 *   insn=0x0000000000241248 string=0x000000000024124C "\t9@"
 *   insn=0x000000000024124C string=0x0000000000241250 "y@"
 *   insn=0x0000000000241264 string=0x0000000000241268 "Z"
 *   insn=0x0000000000241270 string=0x0000000000241274 ""
 *   insn=0x000000000024127C string=0x0000000000241280 "!"
 *   insn=0x0000000000241280 string=0x0000000000241284 "  ""
 *   insn=0x0000000000241290 string=0x0000000000241294 "\t"
 *   insn=0x00000000002412A0 string=0x00000000002412A4 "#8#"
 *   insn=0x00000000002412A4 string=0x00000000002412A8 "c"
 *   insn=0x00000000002412A8 string=0x00000000002412AC "` ""
 *   insn=0x00000000002412AC string=0x00000000002412B0 "I"
 *   insn=0x00000000002412B0 string=0x00000000002412B4 ")"
 *   insn=0x00000000002412B8 string=0x00000000002412BC "\t"
 *   insn=0x00000000002412CC string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002412DC string=0x00000000002412E0 "h"
 *   insn=0x00000000002412E4 string=0x00000000002412E8 "5@"
 *   insn=0x00000000002412E8 string=0x00000000002412EC "(5"
 *   insn=0x0000000000241314 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::TransformControllerComponent::FollowObject(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  _DWORD *result; // x0
  int v6; // w8
  __int64 v7; // x8
  __int64 v8; // x9
  int v9; // w8
  __int64 v10; // x21
  float v11; // w9
  float *v12; // x8
  __int64 v13; // [xsp+0h] [xbp-40h] BYREF
  int v14; // [xsp+8h] [xbp-38h]
  float v15; // [xsp+10h] [xbp-30h] BYREF
  float v16; // [xsp+14h] [xbp-2Ch]
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v4 + 8);
  result = *(_DWORD **)(a1 + 184);
  *(_QWORD *)(a1 + 184) = v4;
  if ( result )
  {
    v6 = result[2] - 1;
    result[2] = v6;
    if ( !v6 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  v7 = *a2;
  if ( *a2 )
  {
    v8 = *(_QWORD *)(v7 + 112);
    v9 = *(_DWORD *)(v7 + 120);
    v10 = *(_QWORD *)(a1 + 40);
    v13 = v8;
    v14 = v9;
    result = (_DWORD *)Caver::Vector2::Vector2((Caver::Vector2 *)&v15, (const Caver::Vector3 *)&v13);
    if ( fabsf(v15 - *(float *)(v10 + 112)) <= 0.0001 )
    {
      v12 = (float *)(v10 + 116);
      if ( fabsf(v16 - *(float *)(v10 + 116)) <= 0.0001 )
      {
LABEL_13:
        *(_DWORD *)(v10 + 120) = v14;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = *(_QWORD *)(*a2 + 104);
        return result;
      }
      v11 = v16;
    }
    else
    {
      v11 = v16;
      v12 = (float *)(v10 + 116);
    }
    *(float *)(v10 + 112) = v15;
    *v12 = v11;
    if ( !*(_BYTE *)(v10 + 180) )
    {
      result = (_DWORD *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v10);
      *(_BYTE *)(v10 + 180) = 1;
    }
    goto LABEL_13;
  }
  return result;
}

