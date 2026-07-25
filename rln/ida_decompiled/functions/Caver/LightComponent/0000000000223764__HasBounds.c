/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223764
 * Mangled: _ZNK5Caver14LightComponent9HasBoundsEv
 * Demangled: Caver::LightComponent::HasBounds(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000022376C string=0x0000000000223770 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::LightComponent::HasBounds(Caver::LightComponent *this)
{
  return *((_DWORD *)this + 28) == 3 && *((float *)this + 39) > 201.0;
}

