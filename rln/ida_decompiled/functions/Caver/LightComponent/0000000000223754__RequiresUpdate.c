/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223754
 * Mangled: _ZNK5Caver14LightComponent14RequiresUpdateEv
 * Demangled: Caver::LightComponent::RequiresUpdate(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::LightComponent::RequiresUpdate(Caver::LightComponent *this)
{
  return *((_DWORD *)this + 28) == 4;
}

