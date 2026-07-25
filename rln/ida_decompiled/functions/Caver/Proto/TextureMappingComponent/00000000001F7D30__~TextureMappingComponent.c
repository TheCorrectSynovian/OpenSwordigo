/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D30
 * Mangled: ._ZN5Caver5Proto23TextureMappingComponentD2Ev
 * Demangled: Caver::Proto::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callers: 1
 *   0x000000000030996C  Caver::Proto::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callees: 1
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D38 string=0x00000000001F7D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::TextureMappingComponent::~TextureMappingComponent(
        Caver::Proto::TextureMappingComponent *this)
{
  JUMPOUT(0x30975C);
}

