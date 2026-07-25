/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD40
 * Mangled: _ZThn16_N5Caver19TextBubbleComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::TextBubbleComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000023CD40 string=0x000000000023CD44 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::TextBubbleComponent::ValueForBindedProperty(
        Caver::TextBubbleComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::TextBubbleComponent *)((char *)this - 16), a2);
}

