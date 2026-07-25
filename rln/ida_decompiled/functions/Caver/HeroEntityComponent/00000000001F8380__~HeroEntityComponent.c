/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8380
 * Mangled: ._ZN5Caver19HeroEntityComponentD2Ev
 * Demangled: Caver::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callers: 1
 *   0x00000000002743CC  Caver::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callees: 1
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8388 string=0x00000000001F838C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HeroEntityComponent::~HeroEntityComponent(Caver::HeroEntityComponent *this)
{
  JUMPOUT(0x274100);
}

