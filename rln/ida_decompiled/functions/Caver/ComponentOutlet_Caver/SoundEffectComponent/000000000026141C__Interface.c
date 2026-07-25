/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026141C
 * Mangled: _ZNK5Caver15ComponentOutletINS_20SoundEffectComponentEE9InterfaceEv
 * Demangled: Caver::ComponentOutlet<Caver::SoundEffectComponent>::Interface(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023AA08  Caver::SoundEffectComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000261420 string=0x000000000023AA60 "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD (*Caver::ComponentOutlet<Caver::SoundEffectComponent>::Interface())(Caver::SoundEffectComponent *__hidden this)
{
  return Caver::SoundEffectComponent::Interface;
}

