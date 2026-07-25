/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236C58
 * Mangled: _ZN5Caver21ShadowVolumeComponent19ImplementsInterfaceEl
 * Demangled: Caver::ShadowVolumeComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000236CA8  Caver::ShadowVolumeComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000236C58 string=0x0000000000236C5C "]F"
 *   insn=0x0000000000236C5C string=0x0000000000236C60 "?"
 *   insn=0x0000000000236C5C string=0x0000000000236D00 "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ShadowVolumeComponent::ImplementsInterface(
        Caver::ShadowVolumeComponent *this,
        _QWORD (*a2)(Caver::ShadowVolumeComponent *__hidden this))
{
  return a2 == Caver::ShadowVolumeComponent::Interface;
}

