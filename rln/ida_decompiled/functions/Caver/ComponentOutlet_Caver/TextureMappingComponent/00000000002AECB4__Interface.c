/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AECB4
 * Mangled: _ZNK5Caver15ComponentOutletINS_23TextureMappingComponentEE9InterfaceEv
 * Demangled: Caver::ComponentOutlet<Caver::TextureMappingComponent>::Interface(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023F344  Caver::TextureMappingComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AECB8 string=0x000000000023F39C "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD (*Caver::ComponentOutlet<Caver::TextureMappingComponent>::Interface())(Caver::TextureMappingComponent *__hidden this)
{
  return Caver::TextureMappingComponent::Interface;
}

