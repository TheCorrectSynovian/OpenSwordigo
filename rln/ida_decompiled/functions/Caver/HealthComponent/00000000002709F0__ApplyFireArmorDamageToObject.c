/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002709F0
 * Mangled: _ZN5Caver15HealthComponent28ApplyFireArmorDamageToObjectEPNS_11SceneObjectE
 * Demangled: Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x0000000000201930  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 27
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6850  Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FB960  Caver::EntityInfoComponent::magicResistance(void)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000201350  Caver::ObjectModifierComponent::ObjectModifierComponent(void)
 *   0x0000000000201800  Caver::ManaComponent::GainMana(int)
 *   0x0000000000201930  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x00000000002019A0  Caver::EntityInfoComponent::physicalResistance(void)
 *   0x0000000000203B50  Caver::DamageComponent::DamageComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *   0x0000000000271DE4  Caver::HealthComponent::className(void)
 *   0x0000000000271E48  Caver::ObjectModifierComponent::Interface(void)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 123
 *   insn=0x0000000000270A04 string=0x0000000000270A08 "W"
 *   insn=0x0000000000270A18 string=0x0000000000270A1C "h"
 *   insn=0x0000000000270A24 string=0x0000000000270A28 "!4G"
 *   insn=0x0000000000270A30 string=0x0000000000270A34 "@"
 *   insn=0x0000000000270A34 string=0x0000000000270A38 "s"
 *   insn=0x0000000000270A3C string=0x0000000000270A40 "!"
 *   insn=0x0000000000270A4C string=0x0000000000270A50 "6"
 *   insn=0x0000000000270A58 string=0x0000000000270A5C "!hF"
 *   insn=0x0000000000270A5C string=0x000000000021C148 "@&"
 *   insn=0x0000000000270A70 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000270A74 string=0x0000000000270A78 "6L"
 *   insn=0x0000000000270A94 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000270AA8 string=0x0000000000270AAC ""
 *   insn=0x0000000000270AAC string=0x0000000000270AB0 "\t@"
 *   insn=0x0000000000270AB4 string=0x0000000000270AB8 "61"
 *   insn=0x0000000000270AB8 string=0x00000000001FCF90 "0'"
 *   insn=0x0000000000270ABC string=0x0000000000588278 "fff?"
 *   insn=0x0000000000270AC0 string=0x0000000000270AC4 ""
 *   insn=0x0000000000270AE4 string=0x0000000000270AE8 "h\n@"
 *   insn=0x0000000000270AE8 string=0x0000000000270AEC ""
 *   insn=0x0000000000270AEC string=0x0000000000270AF0 "h\n"
 *   insn=0x0000000000270AF8 string=0x0000000000270AFC "a:@"
 *   insn=0x0000000000270AFC string=0x0000000000270B00 " "
 *   insn=0x0000000000270B0C string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000270B2C string=0x00000000001F3DF0 "P'"
 *   insn=0x0000000000270B34 string=0x0000000000270B38 "@"
 *   insn=0x0000000000270B38 string=0x0000000000270B3C ""
 *   insn=0x0000000000270B3C string=0x0000000000270B40 ""
 *   insn=0x0000000000270B44 string=0x0000000000270B48 ""
 *   insn=0x0000000000270B48 string=0x0000000000270B4C ""
 *   insn=0x0000000000270B7C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000270B88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000270B8C string=0x0000000000270B90 "MC"
 *   insn=0x0000000000270B98 string=0x0000000000270B9C "s"
 *   insn=0x0000000000270B9C string=0x0000000000270BA0 "\n"
 *   insn=0x0000000000270B9C string=0x0000000000270BA8 "h\n@"
 *   insn=0x0000000000270BA8 string=0x0000000000270BAC ""
 *   insn=0x0000000000270BAC string=0x0000000000270BB0 "h\n"
 *   insn=0x0000000000270BB4 string=0x0000000000270BB8 "h"
 *   insn=0x0000000000270BB8 string=0x0000000000270BBC ""
 *   insn=0x0000000000270BC8 string=0x0000000000270BCC ">C"
 *   insn=0x0000000000270BF0 string=0x0000000000270BF4 "W"
 *   insn=0x0000000000270C00 string=0x0000000000270C04 "8"
 *   insn=0x0000000000270C0C string=0x0000000000270C10 "h"
 *   insn=0x0000000000270C0C string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000270C20 string=0x0000000000270C70 "h"
 *   insn=0x0000000000270C28 string=0x0000000000583C38 "\n"
 *   insn=0x0000000000270C2C string=0x00000000005846C8 "ff&?"
 *   insn=0x0000000000270C30 string=0x0000000000270C34 "`"
 *   insn=0x0000000000270C38 string=0x0000000000270C3C """
 *   insn=0x0000000000270C3C string=0x0000000000270C40 "CiO"
 *   insn=0x0000000000270C48 string=0x0000000000270C4C "U"
 *   insn=0x0000000000270C4C string=0x00000000001F41A0 "P'"
 *   insn=0x0000000000270C60 string=0x0000000000270C64 "h"
 *   insn=0x0000000000270C68 string=0x0000000000270C6C "1C"
 *   insn=0x0000000000270C74 string=0x0000000000270C78 "K"
 *   insn=0x0000000000270C78 string=0x0000000000270D60 "H"
 *   insn=0x0000000000270C80 string=0x0000000000270C84 "!"
 *   insn=0x0000000000270C88 string=0x0000000000270C8C "U>"
 *   insn=0x0000000000270C98 string=0x0000000000270C9C "Q"
 *   insn=0x0000000000270CAC string=0x0000000000270CB0 "<"
 *   insn=0x0000000000270CB4 string=0x0000000000270CB8 ""
 *   insn=0x0000000000270CCC string=0x00000000001F6850 "0'"
 *   insn=0x0000000000270CD0 string=0x0000000000270CD4 "u"
 *   insn=0x0000000000270CD8 string=0x0000000000270CDC "!"
 *   insn=0x0000000000270CE0 string=0x0000000000270CE4 "?>"
 *   insn=0x0000000000270CF0 string=0x0000000000270CF4 ";"
 *   insn=0x0000000000270D04 string=0x0000000000270D08 "&"
 *   insn=0x0000000000270D2C string=0x0000000000270D30 "`"
 *   insn=0x0000000000270D34 string=0x0000000000270D38 """
 *   insn=0x0000000000270D38 string=0x0000000000270D3C "CiO"
 *   insn=0x0000000000270D58 string=0x0000000000270D5C "h"
 *   insn=0x0000000000270D60 string=0x0000000000270D64 "`:@"
 *   insn=0x0000000000270D68 string=0x0000000000270D6C "("
 *   insn=0x0000000000270D84 string=0x0000000000270D88 "`:@"
 *   insn=0x0000000000270D84 string=0x00000000001FB960 "0'"
 *   insn=0x0000000000270D88 string=0x0000000000270D8C ""
 *   insn=0x0000000000270D98 string=0x0000000000270D9C " 8 "
 *   insn=0x0000000000270D9C string=0x0000000000270DA0 "$8("
 *   insn=0x0000000000270DA8 string=0x0000000000270DAC "@ "
 *   insn=0x0000000000270DAC string=0x0000000000270DB0 "b$"
 *   insn=0x0000000000270DC8 string=0x0000000000270DCC ""
 *   insn=0x0000000000270DCC string=0x0000000000270DD0 "a"
 *   insn=0x0000000000270DCC string=0x0000000000270E0C ""
 *   insn=0x0000000000270DD4 string=0x0000000000270DD8 "i"
 *   insn=0x0000000000270DDC string=0x0000000000270DE0 "  "
 *   insn=0x0000000000270DE0 string=0x0000000000270DE4 "\n"
 *   insn=0x0000000000270DE4 string=0x0000000000270DE8 "_"
 *   insn=0x0000000000270DE8 string=0x0000000000270DEC "T"
 *   insn=0x0000000000270DEC string=0x0000000000270DF0 ")"
 *   insn=0x0000000000270DF0 string=0x0000000000270DF4 "*}"
 *   insn=0x0000000000270DF4 string=0x0000000000270DF8 "?"
 *   insn=0x0000000000270DF8 string=0x0000000000270DFC "h"
 *   insn=0x0000000000270DFC string=0x0000000000270E00 "j"
 *   insn=0x0000000000270E00 string=0x0000000000270E04 "L"
 *   insn=0x0000000000270E04 string=0x0000000000270E08 "h"
 *   insn=0x0000000000270E14 string=0x0000000000270E18 "v"
 *   insn=0x0000000000270E14 string=0x0000000000270EB0 ""
 *   insn=0x0000000000270E1C string=0x0000000000270E20 "!"
 *   insn=0x0000000000270E3C string=0x0000000000270E40 "DA"
 *   insn=0x0000000000270E50 string=0x0000000000270E54 "d~@"
 *   insn=0x0000000000270E5C string=0x0000000000270E60 "!"
 *   insn=0x0000000000270E64 string=0x0000000000270E68 "!""
 *   insn=0x0000000000270E68 string=0x0000000000270E6C " ( "
 *   insn=0x0000000000270E88 string=0x0000000000270E8C "!"
 *   insn=0x0000000000270EA8 string=0x0000000000270EAC "i"
 *   insn=0x0000000000270EB8 string=0x0000000000270EBC ""
 *   insn=0x0000000000270EC0 string=0x0000000000270EC4 "\t"
 *   insn=0x0000000000270EC4 string=0x0000000000270EC8 "!XE"
 *   insn=0x0000000000270EC8 string=0x0000000000270ECC "?"
 *   insn=0x0000000000270ED8 string=0x0000000000270EDC "p"
 *   insn=0x0000000000270EE0 string=0x0000000000270EE8 "}\t"
 *   insn=0x0000000000270EE8 string=0x0000000000270EEC "\t"
 *   insn=0x0000000000270EEC string=0x0000000000270EF0 ""
 *   insn=0x0000000000270EF4 string=0x0000000000270EF8 "BB"
 *   insn=0x0000000000270F0C string=0x0000000000270F10 ""
 *   insn=0x0000000000270F10 string=0x0000000000270F14 "?"
 *   insn=0x0000000000270F18 string=0x0000000000270F1C "\t"
 *   insn=0x0000000000270F1C string=0x0000000000270F20 "_"
 *   insn=0x0000000000270F24 string=0x0000000000270F28 "\n"
 *   insn=0x0000000000270F28 string=0x0000000000270F2C "!6"
 *   insn=0x0000000000270F38 string=0x0000000000270F3C "A"
 *   insn=0x0000000000270F84 string=0x0000000000270F88 "OB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject **this, float32x2_t *a2)
{
  float32x2_t *v2; // x19
  __int64 result; // x0
  __int64 v5; // x22
  __int64 v6; // x21
  float v7; // s0
  int v8; // w8
  unsigned __int64 v9; // [xsp+84h] [xbp-48h] BYREF
  __int64 v10; // [xsp+8Ch] [xbp-40h]
  __int64 v11; // [xsp+94h] [xbp-38h]

  v2 = a2;
  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2[6].n64_u64[0]
    && !Caver::SceneObject::ComponentWithInterface(
          (Caver::SceneObject *)a2,
          (__int64)Caver::ProjectileControllerComponent::Interface) )
  {
    v2 = (float32x2_t *)v2[6].n64_u64[0];
  }
  result = Caver::SceneObject::ComponentWithInterface(
             (Caver::SceneObject *)v2,
             (__int64)Caver::EntityInfoComponent::Interface);
  v5 = result;
  if ( result )
  {
    v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::DamageComponent::Interface);
    if ( !v6 )
    {
      v6 = operator new(0xD8u);
      Caver::DamageComponent::DamageComponent((Caver::DamageComponent *)v6);
      *(_WORD *)(v6 + 208) = 1;
      *(_DWORD *)(v6 + 180) = *((_DWORD *)this + 34);
      Caver::SceneObject::AddComponent(this[5], (Caver::Component *)v6);
    }
    *(_QWORD *)(v6 + 200) = 0x3F80000000000000LL;
    Caver::GameData::EntityHealthMultiplierAtLevel(
      **(Caver::GameData ***)(*((_QWORD *)this[5] + 4) + 16LL),
      *(_DWORD *)(v5 + 144));
    *(int32x2_t *)(v6 + 164) = vcvt_s32_f32(vrnda_f32(vmul_f32(vcvt_f32_s32(vdup_n_s32(llroundf(v7))), (float32x2_t)0x3E4CCCCD3F666666LL)));
    v10 = (__int64)v2;
    if ( v2 )
      ++v2[1].n64_u32[0];
    v9 = vsub_f32(v2[14], *(float32x2_t *)((char *)this[5] + 112)).n64_u64[0];
    Caver::Vector2::Normalize((Caver::Vector2 *)&v9);
    Caver::DamageComponent::AddPotentialImpact();
    result = v10;
    if ( v10 )
    {
      v8 = *(_DWORD *)(v10 + 8) - 1;
      *(_DWORD *)(v10 + 8) = v8;
      if ( !v8 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

