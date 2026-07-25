/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9490
 * Mangled: ._ZN5Caver16ProgramComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002324E4  `non-virtual thunk to'Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000232370  Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9498 string=0x00000000001F949C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::ValueForBindedProperty(Caver::ProgramComponent *this, int a2)
{
  return _ZN5Caver16ProgramComponent22ValueForBindedPropertyEi(this, a2);
}

