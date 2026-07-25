/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002743CC
 * Mangled: _ZN5Caver19HeroEntityComponentD0Ev
 * Demangled: Caver::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callers: 1
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8380  Caver::HeroEntityComponent::~HeroEntityComponent()
 *   0x0000000000274404  Caver::HeroEntityComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002743DC string=0x00000000001F8380 "0'"
 *   insn=0x00000000002743EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002743FC string=0x0000000000274400 "15"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::~HeroEntityComponent(Caver::HeroEntityComponent *this)
{
  Caver::HeroEntityComponent::~HeroEntityComponent(this);
  operator delete(this);
}

