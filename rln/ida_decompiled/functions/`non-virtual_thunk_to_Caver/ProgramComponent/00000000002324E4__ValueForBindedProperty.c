/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002324E4
 * Mangled: _ZThn16_N5Caver16ProgramComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9490  Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002324E8 string=0x00000000001F9490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProgramComponent::ValueForBindedProperty(
        Caver::ProgramComponent *this,
        int a2)
{
  return Caver::ProgramComponent::ValueForBindedProperty((Caver::ProgramComponent *)((char *)this - 16), a2);
}

