/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CA68
 * Mangled: _ZN5Caver5Proto19PropertiesComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PropertiesComponent::CopyFrom(Caver::Proto::PropertiesComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA50  Caver::Proto::PropertiesComponent::MergeFrom(Caver::Proto::PropertiesComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031CA7C string=0x000000000031CA80 "@"
 *   insn=0x000000000031CA88 string=0x000000000031CA8C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PropertiesComponent::CopyFrom(
        Caver::Proto::PropertiesComponent *this,
        const Caver::Proto::PropertiesComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PropertiesComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PropertiesComponent::MergeFrom();
  }
}

