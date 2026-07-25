/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A49F0
 * Mangled: _ZN5Caver24OrbitControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001FE740  Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 32
 *   insn=0x00000000002A4A00 string=0x00000000002A4A04 "U"
 *   insn=0x00000000002A4A10 string=0x00000000002A4A14 "("
 *   insn=0x00000000002A4A18 string=0x00000000002A4A1C "\t\t@"
 *   insn=0x00000000002A4A18 string=0x00000000002A4A28 "`:@"
 *   insn=0x00000000002A4A1C string=0x00000000002A4A20 ")"
 *   insn=0x00000000002A4A20 string=0x00000000002A4A24 "\t\t"
 *   insn=0x00000000002A4A28 string=0x00000000002A4A2C "h:"
 *   insn=0x00000000002A4A2C string=0x00000000002A4A30 " "
 *   insn=0x00000000002A4A30 string=0x00000000002A4A34 "\t@"
 *   insn=0x00000000002A4A30 string=0x00000000002A4A54 "\t9@"
 *   insn=0x00000000002A4A34 string=0x00000000002A4A38 ")"
 *   insn=0x00000000002A4A38 string=0x00000000002A4A3C "\t"
 *   insn=0x00000000002A4A40 string=0x00000000002A4A44 ""
 *   insn=0x00000000002A4A44 string=0x00000000002A4A48 ""
 *   insn=0x00000000002A4A4C string=0x00000000002A4A50 "h:@"
 *   insn=0x00000000002A4A58 string=0x00000000002A4A5C "y@"
 *   insn=0x00000000002A4A60 string=0x00000000002A4A64 ")"
 *   insn=0x00000000002A4A64 string=0x00000000002A4A68 "4"
 *   insn=0x00000000002A4A68 string=0x00000000002A4A6C "("
 *   insn=0x00000000002A4A6C string=0x00000000002A4A70 "Xy"
 *   insn=0x00000000002A4A84 string=0x00000000002A4A88 "!"
 *   insn=0x00000000002A4A88 string=0x00000000002A4A8C "  ""
 *   insn=0x00000000002A4A98 string=0x00000000002A4A9C "\t"
 *   insn=0x00000000002A4AA8 string=0x00000000002A4AAC "#8#"
 *   insn=0x00000000002A4AAC string=0x00000000002A4AB0 "c"
 *   insn=0x00000000002A4AB0 string=0x00000000002A4AB4 "` ""
 *   insn=0x00000000002A4AB4 string=0x00000000002A4AB8 "I"
 *   insn=0x00000000002A4AB8 string=0x00000000002A4ABC ")"
 *   insn=0x00000000002A4AB8 string=0x00000000002A4AE0 "h"
 *   insn=0x00000000002A4AC0 string=0x00000000002A4AC4 "\t"
 *   insn=0x00000000002A4AD4 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002A4B0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::FollowObject(__int64 a1, __int64 *a2)
{
  __int64 v3; // x8
  _DWORD *v4; // x0
  int v5; // w9
  __int64 v6; // x9
  int v7; // w8
  __int64 v8; // x20
  __int64 result; // x0
  float v10; // w9
  float *v11; // x8
  float v12; // [xsp+0h] [xbp-30h] BYREF
  float v13; // [xsp+4h] [xbp-2Ch]
  __int64 v14; // [xsp+8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v3 + 8);
  v4 = *(_DWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v3;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = *(_QWORD *)(a1 + 112);
    }
  }
  v6 = *(_QWORD *)(v3 + 112);
  v7 = *(_DWORD *)(v3 + 120);
  *(_QWORD *)(a1 + 144) = v6;
  v8 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 152) = v7;
  result = Caver::Vector2::Vector2((Caver::Vector2 *)&v12, (const Caver::Vector3 *)(a1 + 144));
  if ( fabsf(v12 - *(float *)(v8 + 112)) <= 0.0001 )
  {
    v11 = (float *)(v8 + 116);
    if ( fabsf(v13 - *(float *)(v8 + 116)) <= 0.0001 )
      goto LABEL_12;
    v10 = v13;
  }
  else
  {
    v10 = v13;
    v11 = (float *)(v8 + 116);
  }
  *(float *)(v8 + 112) = v12;
  *v11 = v10;
  if ( !*(_BYTE *)(v8 + 180) )
  {
    result = Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v8);
    *(_BYTE *)(v8 + 180) = 1;
  }
LABEL_12:
  *(_DWORD *)(v8 + 120) = *(_DWORD *)(a1 + 152);
  return result;
}

