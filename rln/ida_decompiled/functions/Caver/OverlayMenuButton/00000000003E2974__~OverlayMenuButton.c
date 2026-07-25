/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E2974
 * Mangled: _ZN5Caver17OverlayMenuButtonD0Ev
 * Demangled: Caver::OverlayMenuButton::~OverlayMenuButton()
 *
 * Callers: 1
 *   0x00000000003E267C  Caver::OverlayMenuButton::~OverlayMenuButton()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF9C0  Caver::OverlayMenuButton::~OverlayMenuButton()
 *   0x00000000003E29AC  boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003E2990 string=0x00000000003E2994 "GR"
 *   insn=0x00000000003E2994 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E299C string=0x00000000003E29A0 "DR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayMenuButton::~OverlayMenuButton(Caver::OverlayMenuButton *this)
{
  Caver::OverlayMenuButton::~OverlayMenuButton(this);
  operator delete(this);
}

