/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241E84
 * Mangled: _ZN5Caver9Component23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x0000000000241E84 string=0x0000000000241E88 ""
 *   insn=0x0000000000241E88 string=0x0000000000241E8C "(`A9"
 *   insn=0x0000000000241E98 string=0x0000000000241E9C "!(@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::LoadFromProtobufMessage(__int64 this, const Caver::Proto::Component *a2)
{
  *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 9);
  if ( (*((_BYTE *)a2 + 88) & 8) != 0 )
    return sub_56A6A8(this + 56);
  return this;
}

