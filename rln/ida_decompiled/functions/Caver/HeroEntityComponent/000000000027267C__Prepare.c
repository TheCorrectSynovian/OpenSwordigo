/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027267C
 * Mangled: _ZN5Caver19HeroEntityComponent7PrepareEv
 * Demangled: Caver::HeroEntityComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F82C0  Caver::ShadowComponent::ShadowComponent(void)
 *   0x00000000001F8330  Caver::EntityComponent::Prepare(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000203270  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000272688 string=0x000000000027268C ")"
 *   insn=0x000000000027268C string=0x00000000001F8330 "0'"
 *   insn=0x0000000000272690 string=0x0000000000272694 "`"
 *   insn=0x0000000000272694 string=0x0000000000272698 "!(B"
 *   insn=0x0000000000272698 string=0x000000000021C13C "@&"
 *   insn=0x00000000002726A4 string=0x00000000002726A8 "\t\t@"
 *   insn=0x00000000002726A4 string=0x00000000002726B4 "`"
 *   insn=0x00000000002726A8 string=0x00000000002726AC ")"
 *   insn=0x00000000002726AC string=0x00000000002726B0 "\t\t"
 *   insn=0x00000000002726B4 string=0x00000000002726B8 "h"
 *   insn=0x00000000002726BC string=0x00000000002726C0 "@"
 *   insn=0x00000000002726C0 string=0x00000000002726C4 ""
 *   insn=0x00000000002726C4 string=0x00000000002726C8 ""
 *   insn=0x00000000002726CC string=0x00000000002726D0 ""
 *   insn=0x00000000002726D0 string=0x00000000002726D4 ""
 *   insn=0x00000000002726DC string=0x00000000002726E0 "`"
 *   insn=0x00000000002726E0 string=0x00000000002726E4 "!XE"
 *   insn=0x00000000002726F0 string=0x00000000002726F4 "\t\t@"
 *   insn=0x00000000002726F0 string=0x0000000000272700 "`"
 *   insn=0x00000000002726F4 string=0x00000000002726F8 ")"
 *   insn=0x00000000002726F8 string=0x00000000002726FC "\t\t"
 *   insn=0x0000000000272700 string=0x0000000000272704 "h"
 *   insn=0x0000000000272708 string=0x000000000027270C "@"
 *   insn=0x000000000027270C string=0x0000000000272710 ""
 *   insn=0x0000000000272710 string=0x0000000000272714 ""
 *   insn=0x0000000000272718 string=0x000000000027271C ""
 *   insn=0x000000000027271C string=0x0000000000272720 ""
 *   insn=0x0000000000272728 string=0x000000000027272C "`"
 *   insn=0x000000000027272C string=0x0000000000272730 "!"
 *   insn=0x0000000000272730 string=0x000000000023647C "`%"
 *   insn=0x0000000000272734 string=0x0000000000272738 " "
 *   insn=0x0000000000272740 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000272748 string=0x00000000001F82C0 "0'"
 *   insn=0x000000000027274C string=0x0000000000272750 "`"
 *   insn=0x0000000000272758 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000272774 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000272778 string=0x000000000027277C "R<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::Prepare(Caver::SceneObject **this)
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

  Caver::EntityComponent::Prepare((Caver::EntityComponent *)this);
  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::HealthComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = this[38];
  this[38] = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ManaComponent::Interface);
  v7 = (Caver::SceneObject *)v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = this[39];
  this[39] = v7;
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
  return Caver::HeroEntityComponent::AddSafePosition((Caver::HeroEntityComponent *)this);
}

