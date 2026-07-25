/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF4F0
 * Mangled: _ZN5Caver16ShatterComponentD0Ev
 * Demangled: Caver::ShatterComponent::~ShatterComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002AF528  Caver::ShatterComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002AF500 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002AF50C string=0x00000000002AF510 "h"
 *   insn=0x00000000002AF510 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AF518 string=0x00000000002AF51C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShatterComponent::~ShatterComponent(Caver::ShatterComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

