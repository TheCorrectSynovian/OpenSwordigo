/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CD94
 * Mangled: _ZN5Caver5Proto15DamageComponentD0Ev
 * Demangled: Caver::Proto::DamageComponent::~DamageComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000030CDDC  Caver::Proto::DamageComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000030CDA0 string=0x000000000030CDA4 "E"
 *   insn=0x000000000030CDA8 string=0x000000000030CDAC "A"
 *   insn=0x000000000030CDAC string=0x000000000030CDB0 "h"
 *   insn=0x000000000030CDB4 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030CDC0 string=0x000000000030CDC4 ";"
 *   insn=0x000000000030CDC4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030CDCC string=0x000000000030CDD0 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DamageComponent::~DamageComponent(Caver::Proto::DamageComponent *this)
{
  *(_QWORD *)this = off_6C7B00;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

