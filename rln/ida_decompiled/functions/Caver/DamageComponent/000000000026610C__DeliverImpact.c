/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026610C
 * Mangled: _ZN5Caver15DamageComponent13DeliverImpactEPNS_12DamageImpactE
 * Demangled: Caver::DamageComponent::DeliverImpact(Caver::DamageImpact *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *
 * Referenced strings: 4
 *   insn=0x0000000000266118 string=0x000000000026611C "h"
 *   insn=0x000000000026612C string=0x0000000000266130 ",a"
 *   insn=0x000000000026613C string=0x0000000000266140 "(a"
 *   insn=0x000000000026615C string=0x0000000000266160 " a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DamageComponent::DeliverImpact(__int64 a1, Caver::SceneObject **a2)
{
  Caver::SceneObject *v4; // x0

  Caver::SceneObject::HandleMessage(a2[1], 14, a2);
  Caver::SceneObject::HandleMessage(*(Caver::SceneObject **)(a1 + 40), 13, a2);
  v4 = *(Caver::SceneObject **)(*(_QWORD *)(a1 + 40) + 48LL);
  if ( v4 )
    Caver::SceneObject::HandleMessage(v4, 13, a2);
}

