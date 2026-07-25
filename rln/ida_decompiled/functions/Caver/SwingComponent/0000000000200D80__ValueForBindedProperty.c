/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D80
 * Mangled: ._ZN5Caver14SwingComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002CA0A0  `non-virtual thunk to'Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002CA05C  Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200D84 string=0x00000000002CA05C ")"
 *   insn=0x0000000000200D88 string=0x0000000000200D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingComponent::ValueForBindedProperty(Caver::SwingComponent *this, int a2)
{
  return _ZN5Caver14SwingComponent22ValueForBindedPropertyEi(this, a2);
}

