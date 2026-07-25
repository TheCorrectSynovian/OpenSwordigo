/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C911C
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent21UpdateWeaponTransformEv
 * Demangled: Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callers: 1
 *   0x00000000001F7B90  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6930  Caver::ModelComponent::WorldMatrix(void)
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FAC20  Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *   0x00000000001FBDE0  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 24
 *   insn=0x00000000002C912C string=0x00000000002C9130 "T"
 *   insn=0x00000000002C913C string=0x00000000002C9140 "hR@"
 *   insn=0x00000000002C9144 string=0x00000000002C9148 "a""
 *   insn=0x00000000002C9144 string=0x00000000002C915C "hN@"
 *   insn=0x00000000002C9150 string=0x00000000002C9154 "`R"
 *   insn=0x00000000002C9150 string=0x00000000001FAC20 "0'"
 *   insn=0x00000000002C9154 string=0x00000000002C9158 "@"
 *   insn=0x00000000002C915C string=0x00000000002C9160 ""
 *   insn=0x00000000002C9160 string=0x00000000002C9164 "`"
 *   insn=0x00000000002C916C string=0x00000000002C9170 "`B@"
 *   insn=0x00000000002C916C string=0x00000000001F74B0 "0'"
 *   insn=0x00000000002C9174 string=0x00000000002C9178 "`"
 *   insn=0x00000000002C917C string=0x00000000002C9180 "X"
 *   insn=0x00000000002C9180 string=0x00000000002C9184 "`B@"
 *   insn=0x00000000002C9180 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C918C string=0x00000000001F6930 "0'"
 *   insn=0x00000000002C9198 string=0x00000000002C919C "="
 *   insn=0x00000000002C919C string=0x00000000002C91A0 "hR@"
 *   insn=0x00000000002C91AC string=0x00000000002C91B0 "8"
 *   insn=0x00000000002C91B0 string=0x00000000002C91B4 "`N@"
 *   insn=0x00000000002C91B8 string=0x00000000002C91BC "\t"
 *   insn=0x00000000002C91BC string=0x00000000001FBDE0 "0'"
 *   insn=0x00000000002C91CC string=0x00000000002C91E4 ";"
 *   insn=0x00000000002C91E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(_QWORD *this)
{
  _QWORD *v1; // x19
  Caver::ModelComponent *v2; // x0
  float v3[16]; // [xsp+8h] [xbp-128h] BYREF
  float v4[16]; // [xsp+48h] [xbp-E8h] BYREF
  __int64 v5[8]; // [xsp+88h] [xbp-A8h] BYREF
  float v6[16]; // [xsp+C8h] [xbp-68h] BYREF
  __int64 v7; // [xsp+108h] [xbp-28h]

  v1 = this;
  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[20]
    || (this = (_QWORD *)Caver::SwingableWeaponControllerComponent::BoneForName((Caver::Component *)this),
        (v1[20] = this) != 0) )
  {
    if ( v1[19] )
    {
      Caver::SceneObject::WorldMatrix(v5, (Caver::SceneObject *)v1[5]);
      v2 = (Caver::ModelComponent *)v1[16];
      if ( !v2 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 14), (const Caver::Component *)v1);
        v2 = (Caver::ModelComponent *)v1[16];
      }
      Caver::ModelComponent::WorldMatrix(v2);
      C_Matrix4Mul((const float *)v5, v4, v3);
      C_Matrix4Mul(v3, (const float *)(v1[20] + 92LL), v6);
      return (_QWORD *)Caver::SwingableWeaponComponent::UpdateTransform(
                         (Caver::SwingableWeaponComponent *)v1[19],
                         (const Caver::Matrix4 *)v6);
    }
  }
  return this;
}

