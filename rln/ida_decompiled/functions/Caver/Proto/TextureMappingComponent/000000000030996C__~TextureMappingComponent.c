/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030996C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponentD0Ev
 * Demangled: Caver::Proto::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7D30  Caver::Proto::TextureMappingComponent::~TextureMappingComponent()
 *   0x00000000003099A4  Caver::Proto::TextureMappingComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000030997C string=0x00000000001F7D30 "0'"
 *   insn=0x0000000000309988 string=0x000000000030998C "I"
 *   insn=0x000000000030998C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000309994 string=0x0000000000309998 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TextureMappingComponent::~TextureMappingComponent(
        Caver::Proto::TextureMappingComponent *this)
{
  Caver::Proto::TextureMappingComponent::~TextureMappingComponent(this);
  operator delete(this);
}

