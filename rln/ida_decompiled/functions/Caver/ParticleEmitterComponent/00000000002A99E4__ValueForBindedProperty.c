/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A99E4
 * Mangled: _ZN5Caver24ParticleEmitterComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F3B60  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callees: 13
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7900  Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x00000000002A99F4 string=0x00000000002A99F8 "U"
 *   insn=0x00000000002A9A00 string=0x00000000002A9A04 "("
 *   insn=0x00000000002A9A0C string=0x00000000002A9A10 "\t"
 *   insn=0x00000000002A9A10 string=0x00000000002A9A14 "\t"
 *   insn=0x00000000002A9A10 string=0x00000000002A9B30 "(H"
 *   insn=0x00000000002A9A14 string=0x00000000002A9A1C "(y"
 *   insn=0x00000000002A9A14 string=0x00000000005896E8 "@"
 *   insn=0x00000000002A9A1C string=0x00000000002A9A20 ""
 *   insn=0x00000000002A9A24 string=0x00000000002A9A30 ""
 *   insn=0x00000000002A9A24 string=0x00000000002A9AB8 ""
 *   insn=0x00000000002A9A24 string=0x00000000002A9AD8 ""
 *   insn=0x00000000002A9A24 string=0x00000000002A9B00 ""
 *   insn=0x00000000002A9A24 string=0x00000000002A9B10 ""
 *   insn=0x00000000002A9A30 string=0x00000000002A9A34 "h"
 *   insn=0x00000000002A9A38 string=0x00000000002A9A3C ":"
 *   insn=0x00000000002A9A4C string=0x00000000002A9A50 ""
 *   insn=0x00000000002A9A5C string=0x00000000002A9A60 "!""
 *   insn=0x00000000002A9A6C string=0x00000000002A9A70 "\"
 *   insn=0x00000000002A9A74 string=0x00000000002A9A78 "@"
 *   insn=0x00000000002A9A78 string=0x00000000002A9A7C ""
 *   insn=0x00000000002A9A7C string=0x00000000002A9A80 "\t@"
 *   insn=0x00000000002A9A88 string=0x00000000002A9A8C "6"
 *   insn=0x00000000002A9A90 string=0x00000000002A9A94 "S"
 *   insn=0x00000000002A9AA0 string=0x00000000002A9AA4 "Q"
 *   insn=0x00000000002A9AB0 string=0x00000000002A9AB4 "M"
 *   insn=0x00000000002A9AB0 string=0x00000000001FB2C0 "0'"
 *   insn=0x00000000002A9AB8 string=0x00000000002A9ABC ""
 *   insn=0x00000000002A9ABC string=0x00000000002A9AC0 "\n"
 *   insn=0x00000000002A9AC4 string=0x00000000002A9AC8 ")!"
 *   insn=0x00000000002A9AC8 string=0x00000000002A9ACC ""
 *   insn=0x00000000002A9AD0 string=0x00000000002A9AD4 "@"
 *   insn=0x00000000002A9AD4 string=0x00000000002A9BD4 ""
 *   insn=0x00000000002A9AEC string=0x00000000001F41A0 "P'"
 *   insn=0x00000000002A9AF4 string=0x00000000002A9AF8 "b<"
 *   insn=0x00000000002A9AF8 string=0x00000000002A9AFC ";"
 *   insn=0x00000000002A9AF8 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002A9B10 string=0x00000000002A9B14 "h"
 *   insn=0x00000000002A9B24 string=0x00000000002A9B28 "VV"
 *   insn=0x00000000002A9B28 string=0x00000000002A9B2C "/"
 *   insn=0x00000000002A9B38 string=0x00000000002A9B3C "\t"
 *   insn=0x00000000002A9B40 string=0x00000000002A9B44 "*e@"
 *   insn=0x00000000002A9B44 string=0x00000000002A9B48 "*"
 *   insn=0x00000000002A9B48 string=0x00000000002A9B4C "@Yh"
 *   insn=0x00000000002A9B48 string=0x00000000002A9C0C "*"
 *   insn=0x00000000002A9B58 string=0x00000000002A9B5C "#"
 *   insn=0x00000000002A9B68 string=0x00000000002A9B6C "e7"
 *   insn=0x00000000002A9B6C string=0x00000000001F7900 "0'"
 *   insn=0x00000000002A9B78 string=0x00000000002A9B7C "qX"
 *   insn=0x00000000002A9B84 string=0x00000000002A9B88 ")"
 *   insn=0x00000000002A9B98 string=0x00000000002A9B9C ")=G"
 *   insn=0x00000000002A9B9C string=0x00000000002A9BA0 "!"
 *   insn=0x00000000002A9BA0 string=0x00000000002A9BA4 "\t"
 *   insn=0x00000000002A9BA4 string=0x00000000002A9BA8 "\t"
 *   insn=0x00000000002A9BA4 string=0x00000000002A9C24 "\t"
 *   insn=0x00000000002A9BA8 string=0x00000000002A9BAC "*"
 *   insn=0x00000000002A9BAC string=0x00000000002A9BB0 "\n"
 *   insn=0x00000000002A9BB8 string=0x00000000002A9C30 "?"
 *   insn=0x00000000002A9BBC string=0x00000000002A9BC0 ""
 *   insn=0x00000000002A9BC4 string=0x00000000002A9BC8 "\t"
 *   insn=0x00000000002A9BCC string=0x00000000002A9BD0 "I!"
 *   insn=0x00000000002A9BD8 string=0x00000000002A9BDC "("
 *   insn=0x00000000002A9C14 string=0x00000000002A9C18 "J"
 *   insn=0x00000000002A9C18 string=0x00000000002A9C1C "@"
 *   insn=0x00000000002A9C24 string=0x00000000002A9C28 "*"
 *   insn=0x00000000002A9C28 string=0x00000000002A9C2C "\n"
 *   insn=0x00000000002A9C44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A9C4C string=0x00000000002A9C50 "J"
 *   insn=0x00000000002A9C54 string=0x00000000002A9C58 "(a"
 *   insn=0x00000000002A9C64 string=0x00000000002A9C68 "J=G"
 *   insn=0x00000000002A9C68 string=0x00000000002A9C6C ")!"
 *   insn=0x00000000002A9C70 string=0x00000000002A9C74 "*"
 *   insn=0x00000000002A9C70 string=0x00000000002A9CA0 "*"
 *   insn=0x00000000002A9C74 string=0x00000000002A9C78 "K"
 *   insn=0x00000000002A9C78 string=0x00000000002A9C7C "+"
 *   insn=0x00000000002A9C80 string=0x00000000002A9C84 "_"
 *   insn=0x00000000002A9C98 string=0x00000000002A9C9C "\n_"
 *   insn=0x00000000002A9CA0 string=0x00000000002A9CA4 "K"
 *   insn=0x00000000002A9CA4 string=0x00000000002A9CA8 "+"
 *   insn=0x00000000002A9CA8 string=0x00000000002A9CAC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ParticleEmitterComponent::ValueForBindedProperty(
        float32x2_t *this@<X0>,
        const Caver::Vector3 *a2@<X1>,
        __int64 *a3@<X8>)
{
  Caver::BindingValue *v3; // x0
  unsigned __int64 v4; // x8
  float v5; // s0
  float v6; // s1
  Caver::BindingValue *v7; // x0
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x10
  int *v11; // x8
  float *v12; // x8
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x8
  unsigned int v15; // w8
  _QWORD *v16; // x9
  __int64 v17; // x10
  void *v18; // x0
  unsigned int *v19; // x8
  int v20; // w9
  __int64 v21; // [xsp+0h] [xbp-40h] BYREF
  float v22; // [xsp+8h] [xbp-38h]
  __int64 v23; // [xsp+18h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 1:
      v3 = (Caver::BindingValue *)this[40].n64_u8[0];
      goto LABEL_10;
    case 3:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)this[40].n64_u32[1], (int)a2);
      return;
    case 4:
      v3 = (Caver::BindingValue *)this[45].n64_u8[1];
LABEL_10:
      Caver::BindingValue::ValueWithBool(v3, (bool)a2);
      return;
    case 5:
      v7 = (Caver::BindingValue *)((char *)&this[45] + 4);
      goto LABEL_34;
    case 6:
      v6 = this[50].n64_f32[0] * 57.296;
      v21 = vmul_f32(this[49], vdup_n_s32(0x42652EE0u)).n64_i64[0];
      v22 = v6;
      v7 = (Caver::BindingValue *)&v21;
      goto LABEL_34;
    case 12:
      v8 = this[43].n64_u64[0];
      if ( v8 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
      Caver::ParticleEmitter::TitleForType();
      Caver::BindingValue::ValueWithInt();
      v18 = (void *)(v21 - 24);
      if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
      {
        v19 = (unsigned int *)(v21 - 8);
        if ( &pthread_create )
        {
          do
            v20 = __ldaxr(v19);
          while ( __stlxr(v20 - 1, v19) );
        }
        else
        {
          v20 = (*v19)--;
        }
        if ( v20 <= 0 )
          operator delete(v18);
      }
      return;
    case 13:
      v9 = this[43].n64_u64[0];
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        v11 = (int *)(v9 + 64);
        v21 = v10;
      }
      else
      {
        v11 = &dword_6E9F38;
        v21 = Caver::Vector3Zero;
      }
      v7 = (Caver::BindingValue *)&v21;
      v22 = *(float *)v11;
LABEL_34:
      Caver::BindingValue::ValueWithVector3(v7, a2);
      return;
    case 14:
      v12 = (float *)this[43].n64_u64[0];
      if ( v12 )
        Caver::FloatColor::FromHSLA(&v21, (Caver::FloatColor *)this, v12[42], v12[43], v12[44], v12[45]);
      Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)&v21, a2);
      return;
    case 15:
      v14 = this[43].n64_u64[0];
      if ( !v14 )
        goto LABEL_21;
      v5 = *(float *)(v14 + 184);
      goto LABEL_22;
    case 16:
      v13 = this[43].n64_u64[0];
      if ( !v13 )
        goto LABEL_21;
      v5 = *(float *)(v13 + 188);
      goto LABEL_22;
    case 17:
      v4 = this[43].n64_u64[0];
      if ( v4 )
        v5 = *(float *)(v4 + 192);
      else
LABEL_21:
        v5 = 0.0;
      goto LABEL_22;
    default:
      v15 = (_DWORD)a2 - 18;
      if ( (unsigned int)((_DWORD)a2 - 18) <= 0x14 && (v16 = (_QWORD *)this[43].n64_u64[0]) != 0 )
      {
        v17 = v16[25];
        if ( v17 )
          v5 = *(float *)(v17 + 4LL * v15);
        else
          this = (float32x2_t *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*v16 + 32LL))(
                                  this[43].n64_u64[0],
                                  v15);
LABEL_22:
        Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)this, v5);
      }
      else
      {
        Caver::Component::ValueForBindedProperty((Caver::Component *)this, (int)a2);
      }
      return;
  }
}

