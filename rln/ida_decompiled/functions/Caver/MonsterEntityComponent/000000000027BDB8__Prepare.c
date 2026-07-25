/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BDB8
 * Mangled: _ZN5Caver22MonsterEntityComponent7PrepareEv
 * Demangled: Caver::MonsterEntityComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F82C0  Caver::ShadowComponent::ShadowComponent(void)
 *   0x00000000001F8330  Caver::EntityComponent::Prepare(void)
 *   0x00000000001F8460  Caver::EntityInfoComponent::EntityInfoComponent(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x000000000027BF04  Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x000000000027BDC4 string=0x000000000027BDC8 "Z"
 *   insn=0x000000000027BDC8 string=0x000000000027BDCC "A#"
 *   insn=0x000000000027BDC8 string=0x00000000001F8330 "0'"
 *   insn=0x000000000027BDCC string=0x000000000027BDD0 "`"
 *   insn=0x000000000027BDD0 string=0x000000000027BDD4 "!hF"
 *   insn=0x000000000027BDD4 string=0x000000000021C148 "@&"
 *   insn=0x000000000027BDE0 string=0x000000000027BDE4 "\t\t@"
 *   insn=0x000000000027BDE0 string=0x000000000027BDF0 "`"
 *   insn=0x000000000027BDE4 string=0x000000000027BDE8 ")"
 *   insn=0x000000000027BDE8 string=0x000000000027BDEC "\t\t"
 *   insn=0x000000000027BDF0 string=0x000000000027BDF4 "h"
 *   insn=0x000000000027BDF8 string=0x000000000027BDFC "@"
 *   insn=0x000000000027BDF8 string=0x000000000027BE18 "a#"
 *   insn=0x000000000027BDFC string=0x000000000027BE00 ""
 *   insn=0x000000000027BE00 string=0x000000000027BE04 ""
 *   insn=0x000000000027BE08 string=0x000000000027BE0C ""
 *   insn=0x000000000027BE0C string=0x000000000027BE10 ""
 *   insn=0x000000000027BE18 string=0x000000000027BE1C "`"
 *   insn=0x000000000027BE1C string=0x000000000027BE20 "!(B"
 *   insn=0x000000000027BE20 string=0x000000000021C13C "@&"
 *   insn=0x000000000027BE2C string=0x000000000027BE30 "\t\t@"
 *   insn=0x000000000027BE2C string=0x000000000027BE3C "`"
 *   insn=0x000000000027BE30 string=0x000000000027BE34 ")"
 *   insn=0x000000000027BE34 string=0x000000000027BE38 "\t\t"
 *   insn=0x000000000027BE3C string=0x000000000027BE40 "h"
 *   insn=0x000000000027BE44 string=0x000000000027BE48 "@"
 *   insn=0x000000000027BE44 string=0x000000000027BE64 "A#"
 *   insn=0x000000000027BE48 string=0x000000000027BE4C ""
 *   insn=0x000000000027BE4C string=0x000000000027BE50 ""
 *   insn=0x000000000027BE54 string=0x000000000027BE58 ""
 *   insn=0x000000000027BE58 string=0x000000000027BE5C ""
 *   insn=0x000000000027BE64 string=0x000000000027BE68 "`"
 *   insn=0x000000000027BE68 string=0x000000000027BE6C "!"
 *   insn=0x000000000027BE6C string=0x000000000023647C "`%"
 *   insn=0x000000000027BE70 string=0x000000000027BE74 " "
 *   insn=0x000000000027BE74 string=0x000000000027BE98 "A#"
 *   insn=0x000000000027BE7C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027BE84 string=0x00000000001F82C0 "0'"
 *   insn=0x000000000027BE88 string=0x000000000027BE8C "`"
 *   insn=0x000000000027BE94 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000027BE98 string=0x000000000027BE9C "`"
 *   insn=0x000000000027BE9C string=0x000000000027BEA0 "!"
 *   insn=0x000000000027BEA8 string=0x000000000027BEB8 "h"
 *   insn=0x000000000027BEB8 string=0x000000000027BEBC ""
 *   insn=0x000000000027BEBC string=0x000000000027BEC0 "\t@"
 *   insn=0x000000000027BEC0 string=0x000000000027BEC4 "H"
 *   insn=0x000000000027BED0 string=0x000000000027BED4 "c"
 *   insn=0x000000000027BED4 string=0x000000000027BED8 "`"
 *   insn=0x000000000027BED4 string=0x00000000001F8460 "0'"
 *   insn=0x000000000027BEF8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027BEFC string=0x000000000027BF00 "q"
 *   insn=0x000000000027BF00 string=0x000000000027BF04 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *v4; // x0
  int v5; // w8
  __int64 v6; // x0
  Caver::SceneObject *v7; // x8
  Caver::SceneObject *v8; // x0
  int v9; // w8
  Caver::ShadowComponent *v10; // x20
  __int64 result; // x0
  Caver::EntityInfoComponent *v12; // x20

  Caver::EntityComponent::Prepare((Caver::EntityComponent *)this);
  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::DamageComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = this[49];
  this[49] = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::HealthComponent::Interface);
  v7 = (Caver::SceneObject *)v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = this[50];
  this[50] = v7;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 2) - 1;
    *((_DWORD *)v8 + 2) = v9;
    if ( !v9 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( !Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ShadowComponent::Interface) )
  {
    v10 = (Caver::ShadowComponent *)operator new(0xE0u);
    Caver::ShadowComponent::ShadowComponent(v10);
    *((_BYTE *)v10 + 120) = 0;
    Caver::SceneObject::AddComponent(this[5], v10);
  }
  result = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::EntityInfoComponent::Interface);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)this[5] + 4) + 16LL) )
    {
      v12 = (Caver::EntityInfoComponent *)operator new(0x98u);
      Caver::EntityInfoComponent::EntityInfoComponent(v12);
      return Caver::SceneObject::AddComponent(this[5], v12);
    }
  }
  return result;
}

