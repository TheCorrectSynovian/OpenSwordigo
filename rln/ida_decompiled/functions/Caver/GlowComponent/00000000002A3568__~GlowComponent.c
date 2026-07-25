/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3568
 * Mangled: _ZN5Caver13GlowComponentD0Ev
 * Demangled: Caver::GlowComponent::~GlowComponent()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002A356C  Caver::GlowComponent::ShouldSave(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GlowComponent::~GlowComponent(Caver::GlowComponent *this)
{
  __break(1u);
  Caver::GlowComponent::ShouldSave(this);
}

