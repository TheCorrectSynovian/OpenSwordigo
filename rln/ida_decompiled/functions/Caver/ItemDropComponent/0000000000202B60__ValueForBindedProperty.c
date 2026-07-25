/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B60
 * Mangled: ._ZN5Caver17ItemDropComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000277BE4  `non-virtual thunk to'Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000277B1C  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202B64 string=0x0000000000277B1C "?"
 *   insn=0x0000000000202B68 string=0x0000000000202B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::ValueForBindedProperty(Caver::ItemDropComponent *this, int a2)
{
  return _ZN5Caver17ItemDropComponent22ValueForBindedPropertyEi(this, a2);
}

