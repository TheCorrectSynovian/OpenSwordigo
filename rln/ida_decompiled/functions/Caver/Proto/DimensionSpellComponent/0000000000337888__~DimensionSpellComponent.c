/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337888
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponentD0Ev
 * Demangled: Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003378D0  Caver::Proto::DimensionSpellComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000337890 string=0x0000000000337894 "h"
 *   insn=0x0000000000337894 string=0x0000000000337898 "uB"
 *   insn=0x000000000033789C string=0x00000000003378A0 "A"
 *   insn=0x00000000003378A0 string=0x00000000003378A4 "h"
 *   insn=0x00000000003378A4 string=0x00000000003378A8 "V"
 *   insn=0x00000000003378A8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003378B4 string=0x00000000003378B8 "~"
 *   insn=0x00000000003378B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003378C0 string=0x00000000003378C4 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent(
        Caver::Proto::DimensionSpellComponent *this)
{
  *(_QWORD *)this = off_6C9BD0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

