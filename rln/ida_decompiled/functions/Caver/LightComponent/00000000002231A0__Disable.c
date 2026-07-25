/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002231A0
 * Mangled: _ZN5Caver14LightComponent7DisableEPNS_16RenderingContextE
 * Demangled: Caver::LightComponent::Disable(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 4
 *   insn=0x00000000002231A0 string=0x00000000002231A4 "h"
 *   insn=0x00000000002231A4 string=0x00000000002231A8 ")"
 *   insn=0x00000000002231A8 string=0x00000000002231AC "I"
 *   insn=0x00000000002231B8 string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightComponent::Disable(__int64 this, Caver::RenderingContext *a2)
{
  if ( (*(_DWORD *)(this + 172) & 0x80000000) == 0 && !*(_DWORD *)a2 )
    return glDisable();
  return this;
}

