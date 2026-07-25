/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF8E8
 * Mangled: _ZN5Caver8DateTime23LoadFromProtobufMessageERKNS_5Proto8DateTimeE
 * Demangled: Caver::DateTime::LoadFromProtobufMessage(Caver::Proto::DateTime const&)
 *
 * Callers: 1
 *   0x00000000001F4640  Caver::DateTime::LoadFromProtobufMessage(Caver::Proto::DateTime const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CF8E8 string=0x00000000004CF8EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::DateTime::LoadFromProtobufMessage(_QWORD *this, const Caver::Proto::DateTime *a2)
{
  *this = *((_QWORD *)a2 + 2);
  return this;
}

