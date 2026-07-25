/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B990
 * Mangled: _ZN5Caver16OverlayComponentD0Ev
 * Demangled: Caver::OverlayComponent::~OverlayComponent()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000022B994  Caver::Component::Clone(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayComponent::~OverlayComponent(Caver::OverlayComponent *this)
{
  __break(1u);
  Caver::Component::Clone(this);
}

