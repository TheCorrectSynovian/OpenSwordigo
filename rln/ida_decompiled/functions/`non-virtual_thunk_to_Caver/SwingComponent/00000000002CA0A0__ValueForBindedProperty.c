/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA0A0
 * Mangled: _ZThn16_N5Caver14SwingComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200D80  Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CA0A0 string=0x00000000002CA0A4 "7"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SwingComponent::ValueForBindedProperty(
        Caver::SwingComponent *this,
        int a2)
{
  return Caver::SwingComponent::ValueForBindedProperty((Caver::SwingComponent *)((char *)this - 16), a2);
}

