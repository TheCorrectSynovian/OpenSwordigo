/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238648
 * Mangled: _ZThn16_N5Caver14ShapeComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F36F0  Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000238648 string=0x000000000023864C ")"
 *   insn=0x000000000023864C string=0x00000000001F36F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShapeComponent::ValueForBindedProperty(
        Caver::ShapeComponent *this,
        int a2)
{
  return Caver::ShapeComponent::ValueForBindedProperty((Caver::ShapeComponent *)((char *)this - 16), a2);
}

