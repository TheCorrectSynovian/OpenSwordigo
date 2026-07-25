/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DD08
 * Mangled: _ZThn16_N5Caver19BackgroundComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200EE0  Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000021DD08 string=0x000000000021DD0C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BackgroundComponent::ValueForBindedProperty(
        Caver::BackgroundComponent *this,
        int a2)
{
  return Caver::BackgroundComponent::ValueForBindedProperty((Caver::BackgroundComponent *)((char *)this - 16), a2);
}

