/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3274
 * Mangled: _ZN5Caver5Proto11EntityClass8CopyFromERKS1_
 * Demangled: Caver::Proto::EntityClass::CopyFrom(Caver::Proto::EntityClass const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC700  Caver::Proto::EntityClass::MergeFrom(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002E3288 string=0x00000000002E328C "@"
 *   insn=0x00000000002E3294 string=0x00000000002E3298 ""
 *   insn=0x00000000002E32B0 string=0x00000000001FC700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityClass::CopyFrom(
        Caver::Proto::EntityClass *this,
        const Caver::Proto::EntityClass *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EntityClass *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EntityClass::MergeFrom(this, a2);
  }
}

