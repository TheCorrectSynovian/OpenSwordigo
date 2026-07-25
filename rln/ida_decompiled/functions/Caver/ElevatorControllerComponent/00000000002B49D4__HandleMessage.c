/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B49D4
 * Mangled: _ZN5Caver27ElevatorControllerComponent13HandleMessageEiPv
 * Demangled: Caver::ElevatorControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Referenced strings: 38
 *   insn=0x00000000002B49EC string=0x00000000002B49F0 "T"
 *   insn=0x00000000002B49F8 string=0x00000000002B49FC "?"
 *   insn=0x00000000002B4A04 string=0x00000000002B4A08 "U"
 *   insn=0x00000000002B4A0C string=0x00000000002B4A10 "h"
 *   insn=0x00000000002B4A10 string=0x00000000002B4A14 "h"
 *   insn=0x00000000002B4A14 string=0x00000000002B4A18 "I E-"
 *   insn=0x00000000002B4A24 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002B4A30 string=0x00000000002B4A34 "!"
 *   insn=0x00000000002B4A40 string=0x0000000000587F44 "fff"
 *   insn=0x00000000002B4A44 string=0x00000000002B4A48 " \t*"
 *   insn=0x00000000002B4A58 string=0x00000000002B4A6C "h"
 *   insn=0x00000000002B4A5C string=0x000000000058493C "fff?"
 *   insn=0x00000000002B4A74 string=0x00000000002B4AAC "i"
 *   insn=0x00000000002B4AAC string=0x00000000002B4AB0 "?"
 *   insn=0x00000000002B4AB0 string=0x00000000002B4AB4 " "
 *   insn=0x00000000002B4AB4 string=0x00000000002B4AB8 "("
 *   insn=0x00000000002B4ABC string=0x00000000002B4AC0 "i"
 *   insn=0x00000000002B4AC4 string=0x00000000002B4AC8 "h"
 *   insn=0x00000000002B4ACC string=0x00000000002B4AD0 "u"
 *   insn=0x00000000002B4ACC string=0x00000000002B4AE0 "u"
 *   insn=0x00000000002B4AD0 string=0x00000000002B4AD4 "`"
 *   insn=0x00000000002B4AD8 string=0x00000000002B4ADC "\n"
 *   insn=0x00000000002B4ADC string=0x00000000002B4B04 "b"
 *   insn=0x00000000002B4AE0 string=0x00000000002B4AE4 "h"
 *   insn=0x00000000002B4AEC string=0x00000000002B4AF0 "i"
 *   insn=0x00000000002B4AF0 string=0x00000000002B4AF4 "\nMG"
 *   insn=0x00000000002B4AF4 string=0x00000000002B4AF8 " "
 *   insn=0x00000000002B4AF8 string=0x00000000002B4AFC "A"
 *   insn=0x00000000002B4AFC string=0x00000000002B4B00 "j"
 *   insn=0x00000000002B4B08 string=0x00000000002B4B0C " (#"
 *   insn=0x00000000002B4B0C string=0x00000000002B4B10 "b"
 *   insn=0x00000000002B4B18 string=0x00000000002B4B1C "h"
 *   insn=0x00000000002B4B20 string=0x00000000002B4B24 "%8""
 *   insn=0x00000000002B4B24 string=0x00000000002B4B28 "f8 "
 *   insn=0x00000000002B4B3C string=0x00000000002B4B40 "A8!"
 *   insn=0x00000000002B4B50 string=0x00000000002B4B54 "`"
 *   insn=0x00000000002B4B58 string=0x00000000002B4B5C " "
 *   insn=0x00000000002B4B68 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ElevatorControllerComponent::HandleMessage(
        Caver::ElevatorControllerComponent *this,
        int a2,
        float *a3)
{
  __int64 v4; // x21
  float v5; // s8
  float v6; // s9
  unsigned __int64 v7; // kr00_8
  float v8; // s0
  int v9; // w8
  int v11; // w9
  int v12; // w9
  float32x2_t *v13; // x21
  float v14; // s0
  float v15; // s1
  float *v16; // x8
  float v17; // w9
  float v18; // s2
  float v19; // s0
  float v20; // s1
  float v21; // s3
  float32x2_t v22[2]; // [xsp+0h] [xbp-50h] BYREF

  v22[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 7 )
  {
    v4 = *((_QWORD *)a3 + 1);
    if ( *(_BYTE *)(v4 + 379) )
    {
      v6 = a3[10];
      v5 = a3[11];
      v22[0] = *(float32x2_t *)((char *)this + 172);
      Caver::Vector2::Normalize((Caver::Vector2 *)v22);
      v7 = v22[0].n64_u64[0];
      if ( Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(v4 + 40),
             (__int64)Caver::HeroEntityComponent::Interface) )
      {
        v8 = (float)(v6 * *(float *)&v7) + (float)(v5 * *((float *)&v7 + 1));
        if ( v8 < -0.9 || v8 > 0.9 )
        {
          v9 = *((_DWORD *)this + 38);
          if ( v9 != 2 )
          {
            v11 = *((_DWORD *)this + 39);
            if ( v11 != 1 )
            {
              if ( v11 | v9 )
              {
                v12 = *((unsigned __int8 *)this + 160);
                *((_DWORD *)this + 39) = 1;
                v13 = (float32x2_t *)*((_QWORD *)this + 5);
                if ( v12 )
                {
                  v14 = *((float *)this + 41);
                  v15 = *((float *)this + 42);
                  v16 = (float *)&v13[14] + 1;
                }
                else
                {
                  *((_BYTE *)this + 160) = 1;
                  v17 = v13[14].n64_f32[0];
                  *((float *)this + 41) = v17;
                  v16 = (float *)&v13[14] + 1;
                  v14 = v17;
                  v15 = v13[14].n64_f32[1];
                  *((float *)this + 42) = v15;
                }
                v18 = v14 + *((float *)this + 43);
                v19 = v15 + *((float *)this + 44);
                *((float *)this + 46) = v18;
                *((float *)this + 47) = v19;
                v20 = v13[14].n64_f32[0];
                v21 = *v16;
                if ( (float)((float)((float)(v20 - v18) * (float)(v20 - v18))
                           + (float)((float)(v21 - v19) * (float)(v21 - v19))) >= 0.0001 )
                {
                  v22[0].n64_f32[0] = v18 - v20;
                  v22[0].n64_f32[1] = v19 - v21;
                  Caver::Vector2::Normalize((Caver::Vector2 *)v22);
                  v13[13].n64_u64[0] = vmul_n_f32(v22[0], *((float *)this + 45)).n64_u64[0];
                }
              }
            }
          }
          *((_DWORD *)this + 51) = 0;
        }
      }
    }
  }
  return 0;
}

