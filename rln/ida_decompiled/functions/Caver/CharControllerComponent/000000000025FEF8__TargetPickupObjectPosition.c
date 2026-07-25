/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025FEF8
 * Mangled: _ZN5Caver23CharControllerComponent26TargetPickupObjectPositionEv
 * Demangled: Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *
 * Callers: 2
 *   0x00000000001FE680  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6930  Caver::ModelComponent::WorldMatrix(void)
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 31
 *   insn=0x000000000025FF0C string=0x000000000025FF10 "V"
 *   insn=0x000000000025FF10 string=0x000000000025FF14 "I"
 *   insn=0x000000000025FF18 string=0x000000000025FF1C " I"
 *   insn=0x000000000025FF2C string=0x000000000025FF30 "`"
 *   insn=0x000000000025FF34 string=0x000000000025FF38 "^]"
 *   insn=0x000000000025FF38 string=0x000000000025FF3C "u"
 *   insn=0x000000000025FF38 string=0x00000000001F74B0 "0'"
 *   insn=0x000000000025FF40 string=0x0000000000260040 "uN@"
 *   insn=0x000000000025FF54 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025FF5C string=0x000000000025FF60 "tZ"
 *   insn=0x000000000025FF60 string=0x00000000001F6930 "0'"
 *   insn=0x000000000025FF70 string=0x000000000025FF74 "hbA"
 *   insn=0x000000000025FFA0 string=0x00000000001F71D0 "0'"
 *   insn=0x000000000025FFA8 string=0x000000000025FFAC "\t"
 *   insn=0x000000000025FFAC string=0x000000000025FFB0 "hfA"
 *   insn=0x000000000025FFD8 string=0x000000000025FFDC "}\"
 *   insn=0x000000000025FFF0 string=0x000000000025FFF4 "hr"
 *   insn=0x0000000000260044 string=0x0000000000260048 "`""
 *   insn=0x0000000000260050 string=0x0000000000260054 "uN@"
 *   insn=0x0000000000260058 string=0x0000000000260068 "`"
 *   insn=0x000000000026005C string=0x0000000000260060 ""
 *   insn=0x0000000000260068 string=0x000000000026006C "u"
 *   insn=0x0000000000260070 string=0x0000000000260074 "@"
 *   insn=0x0000000000260074 string=0x0000000000260078 ""
 *   insn=0x0000000000260078 string=0x000000000026007C ""
 *   insn=0x000000000026007C string=0x0000000000260080 "!"
 *   insn=0x0000000000260080 string=0x0000000000260084 ""
 *   insn=0x0000000000260084 string=0x0000000000260088 ""
 *   insn=0x000000000026008C string=0x0000000000260090 "u"
 *   insn=0x0000000000260094 string=0x0000000000260098 " "
 *   insn=0x00000000002600A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::CharControllerComponent::TargetPickupObjectPosition@<D0>(
        Caver::CharControllerComponent *this@<X0>,
        float32x2_t *a2@<X8>)
{
  __int64 v4; // x21
  Caver::ModelComponent *v5; // x0
  float32x2_t result; // d0
  _DWORD *v7; // x0
  int v8; // w8
  float32x2_t v9; // [xsp+0h] [xbp-1B0h] BYREF
  _BYTE v10[16]; // [xsp+8h] [xbp-1A8h] BYREF
  float32x2_t v11; // [xsp+18h] [xbp-198h] BYREF
  __int128 v12; // [xsp+20h] [xbp-190h] BYREF
  float v13[16]; // [xsp+38h] [xbp-178h] BYREF
  float v14[16]; // [xsp+78h] [xbp-138h] BYREF
  float v15[16]; // [xsp+B8h] [xbp-F8h] BYREF
  __int64 v16[8]; // [xsp+F8h] [xbp-B8h] BYREF
  float v17[16]; // [xsp+138h] [xbp-78h] BYREF
  __int64 v18; // [xsp+178h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = xmmword_587920;
  Caver::SceneObject::WorldMatrix(v16, *((Caver::SceneObject **)this + 5));
  v4 = *((_QWORD *)this + 50);
  if ( !v4 )
  {
    v4 = *((_QWORD *)this + 19);
    if ( v4
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
          (v4 = *((_QWORD *)this + 19)) != 0) )
    {
      ++*(_DWORD *)(v4 + 8);
    }
    v7 = (_DWORD *)*((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v4;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
        v4 = *((_QWORD *)this + 50);
        v5 = *(Caver::ModelComponent **)(v4 + 128);
        if ( v5 )
          goto LABEL_4;
        goto LABEL_3;
      }
    }
  }
  v5 = *(Caver::ModelComponent **)(v4 + 128);
  if ( !v5 )
  {
LABEL_3:
    Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4);
    v5 = *(Caver::ModelComponent **)(v4 + 128);
  }
LABEL_4:
  Caver::ModelComponent::WorldMatrix(v5);
  C_Matrix4Mul((const float *)v16, v15, v17);
  C_Matrix4Mul(v17, (const float *)(*((_QWORD *)this + 88) + 92LL), v14);
  C_Matrix4Vector4Mul(v14, (const float *)&v12, v15);
  Caver::Vector3::Vector3((Caver::Vector3 *)v10, (const Caver::Vector4 *)v15);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v11, (const Caver::Vector3 *)v10);
  C_Matrix4Mul(v17, (const float *)(*((_QWORD *)this + 89) + 92LL), v13);
  C_Matrix4Vector4Mul(v13, (const float *)&v12, v15);
  Caver::Vector3::Vector3((Caver::Vector3 *)v10, (const Caver::Vector4 *)v15);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v9, (const Caver::Vector3 *)v10);
  result.n64_u64[0] = vadd_f32(
                        vadd_f32(vmul_f32(vadd_f32(v11, v9), (float32x2_t)0x3F0000003F000000LL), 0),
                        *(float32x2_t *)((char *)this + 732)).n64_u64[0];
  a2->n64_u64[0] = result.n64_u64[0];
  return result;
}

