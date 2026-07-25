/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255530
 * Mangled: _ZThn16_N5Caver24BreakableObjectComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F66F0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000255530 string=0x0000000000255534 "o"
 *   insn=0x0000000000255534 string=0x00000000001F66F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BreakableObjectComponent::ValueForBindedProperty(
        Caver::BreakableObjectComponent *this,
        int a2)
{
  return Caver::BreakableObjectComponent::ValueForBindedProperty(
           (Caver::BreakableObjectComponent *)((char *)this - 16),
           a2);
}

