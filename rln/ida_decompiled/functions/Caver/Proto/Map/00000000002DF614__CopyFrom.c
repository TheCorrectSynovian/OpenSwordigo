/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF614
 * Mangled: _ZN5Caver5Proto3Map8CopyFromERKS1_
 * Demangled: Caver::Proto::Map::CopyFrom(Caver::Proto::Map const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200920  Caver::Proto::Map::MergeFrom(Caver::Proto::Map const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002DF628 string=0x00000000002DF62C "@"
 *   insn=0x00000000002DF634 string=0x00000000002DF638 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Map::CopyFrom(Caver::Proto::Map *this, const Caver::Proto::Map *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Map *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Map::MergeFrom(this, a2);
  }
}

