/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F440
 * Mangled: _ZN5Caver22PhysicsObjectComponent7PrepareEv
 * Demangled: Caver::PhysicsObjectComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F82C0  Caver::ShadowComponent::ShadowComponent(void)
 *   0x00000000001F8610  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000027F44C string=0x000000000027F450 "p"
 *   insn=0x000000000027F450 string=0x000000000027F454 "`"
 *   insn=0x000000000027F450 string=0x00000000001F8610 "0'"
 *   insn=0x000000000027F458 string=0x000000000027F45C "!#"
 *   insn=0x000000000027F45C string=0x000000000027F460 "`>"
 *   insn=0x000000000027F460 string=0x000000000027F464 "8@"
 *   insn=0x000000000027F464 string=0x000000000027F468 "\tx@"
 *   insn=0x000000000027F468 string=0x000000000027F46C "h"
 *   insn=0x000000000027F46C string=0x000000000027F470 "i\n"
 *   insn=0x000000000027F470 string=0x000000000027F474 "!"
 *   insn=0x000000000027F474 string=0x000000000027F478 "Z"
 *   insn=0x000000000027F474 string=0x000000000023647C "`%"
 *   insn=0x000000000027F48C string=0x000000000027F490 "T"
 *   insn=0x000000000027F490 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027F498 string=0x00000000001F82C0 "0'"
 *   insn=0x000000000027F49C string=0x000000000027F4A0 "`"
 *   insn=0x000000000027F4AC string=0x000000000027F4B0 "<"
 *   insn=0x000000000027F4B0 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000027F4B8 string=0x000000000027F4BC "}"
 *   insn=0x000000000027F4BC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::Prepare(Caver::SceneObject **this)
{
  Caver::SceneObject *v2; // x0
  int v3; // w9
  __int64 result; // x0
  Caver::ShadowComponent *v5; // x20

  Caver::PhysicsObjectComponent::RegisterLibrary((Caver::PhysicsObjectComponent *)this);
  v2 = this[5];
  *((_DWORD *)this + 44) = 0;
  this[15] = v2;
  v3 = *((_DWORD *)v2 + 30);
  this[32] = (Caver::SceneObject *)*((_QWORD *)v2 + 14);
  *((_DWORD *)this + 66) = v3;
  result = Caver::SceneObject::ComponentWithInterface(v2, (__int64)Caver::ShadowComponent::Interface);
  if ( !result )
  {
    v5 = (Caver::ShadowComponent *)operator new(0xE0u);
    Caver::ShadowComponent::ShadowComponent(v5);
    *((_BYTE *)v5 + 120) = 0;
    return Caver::SceneObject::AddComponent(this[5], v5);
  }
  return result;
}

