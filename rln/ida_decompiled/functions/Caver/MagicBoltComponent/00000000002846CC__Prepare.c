/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002846CC
 * Mangled: _ZN5Caver18MagicBoltComponent7PrepareEv
 * Demangled: Caver::MagicBoltComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9090  Caver::ProjectileControllerComponent::ProjectileControllerComponent(void)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000203980  Caver::SpellComponent::Prepare(void)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *   0x0000000000271DE4  Caver::HealthComponent::className(void)
 *   0x0000000000284770  Caver::MagicBoltComponent::Cast(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000002846E0 string=0x00000000002846E4 "t"
 *   insn=0x00000000002846E8 string=0x00000000002846EC "!4G"
 *   insn=0x0000000000284700 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000284704 string=0x0000000000284708 "b"
 *   insn=0x0000000000284708 string=0x00000000001F9090 "0'"
 *   insn=0x0000000000284714 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000284718 string=0x000000000028471C "`"
 *   insn=0x000000000028471C string=0x0000000000284720 "!pG"
 *   insn=0x0000000000284724 string=0x0000000000284728 "h"
 *   insn=0x0000000000284730 string=0x0000000000284734 "i"
 *   insn=0x000000000028473C string=0x0000000000284740 "H3"
 *   insn=0x0000000000284740 string=0x0000000000284748 "h*"
 *   insn=0x0000000000284764 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000284768 string=0x000000000028476C "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::Prepare(Caver::SceneObject **this)
{
  Caver::SceneObject *v2; // x20
  Caver::ProjectileControllerComponent *v3; // x21
  __int64 v4; // x0
  Caver::SceneObject *v5; // x8
  __int64 result; // x0

  Caver::SpellComponent::Prepare((Caver::SpellComponent *)this);
  v2 = this[5];
  if ( !Caver::SceneObject::ComponentWithInterface(v2, (__int64)Caver::ProjectileControllerComponent::Interface) )
  {
    v3 = (Caver::ProjectileControllerComponent *)operator new(0x80u);
    Caver::ProjectileControllerComponent::ProjectileControllerComponent(v3);
    Caver::SceneObject::AddComponent(v2, v3);
  }
  v4 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::PhysicsObjectComponent::Interface);
  v5 = this[5];
  *((_BYTE *)this + 304) = v4 != 0;
  result = Caver::SceneObject::Activate(v5);
  *((_DWORD *)this + 74) = 1041865114;
  return result;
}

